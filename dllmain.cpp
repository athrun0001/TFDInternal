
#include "includes.h"
#include <process.h>
#include <algorithm>
#include <random>
//#include <thread>
//#include <fstream>

// Uncomment the line below for console window + some debug prints
//#define IS_DEBUG

WNDPROC oWndProc = nullptr;

LRESULT CALLBACK MyWndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
		// KEYBOARD: Handle modifier keys and others
		case WM_KEYDOWN:
		case WM_SYSKEYDOWN:
		{
			int vk = (int)wParam;

			// Distinguish left/right variants
			if (vk == VK_CONTROL) // Distinguish left/right Ctrl keys
				vk = (lParam & (1 << 24)) ? VK_RCONTROL : VK_LCONTROL;
			else if (vk == VK_MENU) // Distinguish left/right Alt keys
				vk = (lParam & (1 << 24)) ? VK_RMENU : VK_LMENU;
			else if (vk == VK_SHIFT) // Distinguish left/right Shift keys
				vk = MapVirtualKey((lParam >> 16) & 0xFF, MAPVK_VSC_TO_VK_EX);

			if (!g_KeyState[vk])
				g_KeyPressed[vk] = true;
			g_KeyState[vk] = true;
			break;
		}

		case WM_KEYUP:
		case WM_SYSKEYUP:
		{
			int vk = (int)wParam;

			if (vk == VK_CONTROL) // Distinguish left/right Ctrl keys
				vk = (lParam & (1 << 24)) ? VK_RCONTROL : VK_LCONTROL;
			else if (vk == VK_MENU) // Distinguish left/right Alt keys
				vk = (lParam & (1 << 24)) ? VK_RMENU : VK_LMENU;
			else if (vk == VK_SHIFT) // Distinguish left/right Shift keys
				vk = MapVirtualKey((lParam >> 16) & 0xFF, MAPVK_VSC_TO_VK_EX);

			g_KeyState[vk] = false;
			break;
		}

		// MOUSE BUTTONS
		case WM_LBUTTONDOWN:
			if (!g_KeyState[VK_LBUTTON])
				g_KeyPressed[VK_LBUTTON] = true;
			g_KeyState[VK_LBUTTON] = true;
			break;

		case WM_LBUTTONUP:
			g_KeyState[VK_LBUTTON] = false;
			break;

		case WM_RBUTTONDOWN:
			if (!g_KeyState[VK_RBUTTON])
				g_KeyPressed[VK_RBUTTON] = true;
			g_KeyState[VK_RBUTTON] = true;
			break;

		case WM_RBUTTONUP:
			g_KeyState[VK_RBUTTON] = false;
			break;

		case WM_MBUTTONDOWN:
			if (!g_KeyState[VK_MBUTTON])
				g_KeyPressed[VK_MBUTTON] = true;
			g_KeyState[VK_MBUTTON] = true;
			break;

		case WM_MBUTTONUP:
			g_KeyState[VK_MBUTTON] = false;
			break;

			// EXTRA MOUSE BUTTONS (XBUTTON1 = thumb back, XBUTTON2 = thumb forward)
		case WM_XBUTTONDOWN:
		{
			int vk = (GET_XBUTTON_WPARAM(wParam) == XBUTTON1) ? VK_XBUTTON1 : VK_XBUTTON2;

			if (!g_KeyState[vk])
				g_KeyPressed[vk] = true;
			g_KeyState[vk] = true;
			break;
		}

		case WM_XBUTTONUP:
		{
			int vk = (GET_XBUTTON_WPARAM(wParam) == XBUTTON1) ? VK_XBUTTON1 : VK_XBUTTON2;
			g_KeyState[vk] = false;
			break;
		}
	}

	return CallWindowProc(oWndProc, hWnd, msg, wParam, lParam);
}

std::string ToLower(const std::string& str) {
	std::string lowerStr = str;
	std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
	return lowerStr;
}

HWND FindGameWindow()
{
	HWND hwnd = nullptr;
	DWORD pid = GetCurrentProcessId();

	hwnd = GetTopWindow(0);
	while (hwnd)
	{
		DWORD windowPid;
		GetWindowThreadProcessId(hwnd, &windowPid);
		if (windowPid == pid && IsWindowVisible(hwnd))
			return hwnd;

		hwnd = GetNextWindow(hwnd, GW_HWNDNEXT);
	}

	return nullptr;
}

bool IsValidUWorld()
{
	GWorld = nullptr;
	/*for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
	{
		SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

		if (!Obj)
			continue;

		if (Obj->Flags & SDK::EObjectFlags::BeginDestroyed ||
			Obj->Flags & SDK::EObjectFlags::BeingRegenerated ||
			Obj->Flags & SDK::EObjectFlags::FinishDestroyed ||
			Obj->Flags & SDK::EObjectFlags::NeedInitialization ||
			Obj->Flags & SDK::EObjectFlags::WillBeLoaded)
			continue;

		if (Obj->Flags & SDK::EObjectFlags::LoadCompleted && Obj->IsA(TFD_SDK::UWorld::StaticClass()) && !Obj->IsDefaultObject())
		{
			TFD_SDK::UWorld* World = static_cast<TFD_SDK::UWorld*>(Obj);
			if (World->OwningGameInstance)
			{
				if (World->OwningGameInstance->IsA(TFD_SDK::UM1GameInstance::StaticClass()))
				{
					std::string Name = World->Name.ToString();
					if (Name != "" && Name != "None")
					{
						GWorld = World;
						return true;
					}
				}
			}
		}
	}*/
	 
	TFD_SDK::UWorld* World = *reinterpret_cast<TFD_SDK::UWorld**>(dwBase + TFD_SDK::Offsets::GWorld);
	if (World)
	{
		if (World->IsA(TFD_SDK::UWorld::StaticClass()))
		{
			if (World->OwningGameInstance)
			{
				if (World->OwningGameInstance->IsA(TFD_SDK::UM1GameInstance::StaticClass()))
				{
					std::string Name = World->Name.ToString();
					if (Name != "" && Name != "None" && Name != "Lobby_P" && Name != "Level_Transition")
					{
						if (static_cast<TFD_SDK::UM1GameInstance*>(World->OwningGameInstance)->ConnectionState == TFD_SDK::EM1OnlineServiceConnectionState::ReceivedPawnAndOkay)
						{
							GWorld = World;
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool CheckPointers()
{
	/*if (!GEngine)
		GEngine = TFD_SDK::UEngine::GetEngine();
	if (GEngine)
	{
	}*/
		/*GWorld = nullptr;
		for (int i = 0; i < TFD_SDK::UObject::GObjects->Num(); i++)
		{
			TFD_SDK::UObject* Obj = TFD_SDK::UObject::GObjects->GetByIndex(i);

			if (!Obj)
				continue;

			if (Obj->Flags & TFD_SDK::EObjectFlags::BeginDestroyed ||
				Obj->Flags & TFD_SDK::EObjectFlags::BeingRegenerated ||
				Obj->Flags & TFD_SDK::EObjectFlags::FinishDestroyed ||
				Obj->Flags & TFD_SDK::EObjectFlags::NeedInitialization ||
				Obj->Flags & TFD_SDK::EObjectFlags::WillBeLoaded)
				continue;

			if (Obj->Flags & TFD_SDK::EObjectFlags::LoadCompleted && Obj->IsA(TFD_SDK::UWorld::StaticClass()) && !Obj->IsDefaultObject())
			{
				TFD_SDK::UWorld* World = static_cast<TFD_SDK::UWorld*>(Obj);
				if (World->OwningGameInstance)
				{
					if (World->OwningGameInstance->IsA(TFD_SDK::UM1GameInstance::StaticClass()))
					{
						std::string Name = World->Name.ToString();
						if (Name != "" && Name != "None")
						{
							GWorld = World;
							break;
						}
					}
				}
			}
		}*/
	if (IsValidUWorld() && isGUIInit)
	{
		/*std::string Name = GWorld->Name.ToString();
		if (Name != "" && Name != "None" && Name != "Lobby_P" && Name != "Level_Transition")
		{*/
			if (GWorld->OwningGameInstance->LocalPlayers)
			{
				if (GWorld->OwningGameInstance->LocalPlayers.Num() > 0)
				{
					if (GWorld->OwningGameInstance->LocalPlayers[0])
					{
						if (GWorld->OwningGameInstance->LocalPlayers[0]->PlayerController)
						{
							if (GWorld->OwningGameInstance->LocalPlayers[0]->PlayerController->IsA(TFD_SDK::AM1PlayerController::StaticClass()))
							{
								TFD_SDK::AM1PlayerController* PC = static_cast<TFD_SDK::AM1PlayerController*>(GWorld->OwningGameInstance->LocalPlayers[0]->PlayerController);
								ZeroGUI::SetController(PC);
								LocalPlayerController = PC;
								/*LocalPlayer = GWorld->OwningGameInstance->LocalPlayers[0];*/
								if (PC->Character)
								{
									if (PC->Character->IsA(TFD_SDK::AM1Player::StaticClass()))
										LocalPlayerCharacter = static_cast<TFD_SDK::AM1Player*>(PC->Character);
									else
										LocalPlayerCharacter = nullptr;
								}
								else
									LocalPlayerCharacter = nullptr;

								if (PC->ActorManager_Subsystem)
								{
									if (PC->ActorManager_Subsystem->IsA(TFD_SDK::UM1ActorManagerSubsystem::StaticClass()))
										Actors = PC->ActorManager_Subsystem;
									else
										Actors = nullptr;
								}
								else
									Actors = nullptr;

								//Actors = PC->ActorManager_Subsystem;
								//ZeroGUI::controller = GWorld->OwningGameInstance->LocalPlayers[0]->PlayerController;
								
								if (PC->PlayerState
									&& PC->PlayerState->IsA(TFD_SDK::AM1PlayerState::StaticClass()))
								{
									PlayerState = static_cast<TFD_SDK::AM1PlayerState*>(PC->PlayerState);
								}
								else
								{
									PlayerState = nullptr;
								}

								if (LocalPlayerController->IsA(TFD_SDK::AM1PlayerControllerInGame::StaticClass()))
								{
									PlayerIngameController = static_cast<TFD_SDK::AM1PlayerControllerInGame*>(LocalPlayerController);
								}
								else
								{
									PlayerIngameController = nullptr;
								}
								return true;
							}
						}
					}
				}
			}
		//}
	}
	LocalPlayerController = nullptr;
	PlayerState = nullptr;
	//LocalPlayer = nullptr;
	LocalPlayerCharacter = nullptr;
	Actors = nullptr;
	PlayerIngameController = nullptr;
	ZeroGUI::SetController(nullptr);
	LastMissionActor = nullptr;
	inGame = false;
	return false;
}

bool WorldToScreen(const TFD_SDK::FVector& worldLoc, TFD_SDK::FVector2D* screenPos)
{
	// This might be needed agan?
	//bool isOnScreen = LocalPlayer->PlayerController->ProjectWorldLocationToScreen(worldLoc, screenPos, true);
	//if (isOnScreen && ZeroGUI::canvas->SizeX > 1920)
	//{
	//	screenPos->X *= (1920.0f / ZeroGUI::canvas->SizeX);
	//	screenPos->Y *= (1080.0f / ZeroGUI::canvas->SizeY);
	//}
	bool inView = false;
	if (LocalPlayerController && myCanvas)
	{
		inView = TFD_SDK::UGameplayStatics::ProjectWorldToScreen(LocalPlayerController, worldLoc, screenPos, true);
		if (inView && screenPos->X > 0 && screenPos->X < myCanvas->SizeX && screenPos->Y > 0 && screenPos->Y < myCanvas->SizeY)
			inView = true;
		else
			inView = false;
	}
	return inView;
}

//static __int64 YourHookProc_old(void* self, void* Canvas)
//{
//	if (Canvas)
//	{
//		if (IsKeyPressed(VK_INSERT))
//			CheckPointers();
//	}
//
//	return M1org(self, Canvas);
//}

static __int64 YourHookProc(void* self, void* Canvas)
{
	if (Canvas)
	{
		myCanvas = static_cast<TFD_SDK::UCanvas*>(Canvas);
		if (!isGUIInit)
		{
			ZeroMemory(g_Controllers, sizeof(CONTROLLER_STATE) * 4);
			if (!GEngine)
				GEngine = TFD_SDK::UEngine::GetEngine();

			//TFD_SDK::UEngine* Engine = TFD_SDK::UEngine::GetEngine();
			
			//CheckPointers();
			if (myCanvas->SizeX != lastScreenSize)
			{
				updateMiddle = true;
				lastScreenSize = myCanvas->SizeX;
			}
			ZeroGUI::CurrentFont = GEngine->SmallFont;
			ZeroGUI::canvas = myCanvas;
			//ZeroGUI::engine = GEngine;
			//ZeroGUI::SetupCanvas(myCanvas, GEngine);

			if (cfg_CacheEnemyNames)
			{
				IDNameMap = ReadEnemyNamesData();
			}

			if (cfg_CacheEnemyBones)
			{
				IDBoneMap = ReadEnemyBonesData();
			}
			
			/*if (cfg_AimbotNoSpread)
			{
				DWORD old;
				VirtualProtect(NoSpreadAddress, sizeof(uint8_t) * 8, PAGE_EXECUTE_READWRITE, &old);
				memcpy(NoSpreadAddress, &NoSpreadCheat, sizeof(uint8_t) * 8);
				VirtualProtect(NoSpreadAddress, sizeof(uint8_t) * 8, old, NULL);
			}*/

			/*if (cfg_AimbotNoRecoil)
			{
				DWORD old;
				VirtualProtect(NoRecoilAddress, sizeof(uint8_t), PAGE_EXECUTE_READWRITE, &old);
				memcpy(NoRecoilAddress, &Recoil[1], sizeof(uint8_t));
				VirtualProtect(NoRecoilAddress, sizeof(uint8_t), old, NULL);
			}*/

			/*if (cfg_AimbotRapidFire)
			{
				DWORD old;
				VirtualProtect(RapidFireAddress, sizeof(uint8_t), PAGE_EXECUTE_READWRITE, &old);
				memcpy(RapidFireAddress, &RapidFire[1], sizeof(uint8_t));
				VirtualProtect(RapidFireAddress, sizeof(uint8_t), old, NULL);
			}*/

			isGUIInit = true;
		}

		if (updateMiddle)
		{
			TFD_SDK::UCanvas* myCanvas = static_cast<TFD_SDK::UCanvas*>(Canvas);
			float aspectRatioX = myCanvas->SizeX / myCanvas->ClipX;
			float aspectRatioY = myCanvas->SizeY / myCanvas->ClipY;

			ScreenMiddle.X = (myCanvas->SizeX / 2.0f) / aspectRatioX;
			ScreenMiddle.Y = (myCanvas->SizeY / 2.0f) / aspectRatioY;
			updateMiddle = false;
		}

		if (Input::IsKeyPressed(VK_INSERT))
		{
			cfg_DrawMenu = !cfg_DrawMenu;
			if (!cfg_DrawMenu)
				SaveCFG();
		}

		UpdateControllerState();


		if (CheckPointers())
		{
			//int State = -1;
			//if (GWorld->OwningGameInstance && GWorld->OwningGameInstance->IsA(TFD_SDK::UM1GameInstance::StaticClass()))
			//{
			//	State = (int)(static_cast<TFD_SDK::UM1GameInstance*>(GWorld->OwningGameInstance)->ConnectionState);
			//}

			//if (State != (int)TFD_SDK::EM1OnlineServiceConnectionState::ReceivedPawnAndOkay) // Game isn't ready, don't do anything or it will likely crash
			//	return M1org(self, Canvas);

			/*if (inGame && PlayerIngameController
				&& PlayerIngameController->HeartbeatTesterComponent)
			{
				if (PlayerIngameController->HeartbeatTesterComponent->IsActive())
					PlayerIngameController->HeartbeatTesterComponent->Deactivate();
			}*/



			//This code is used to find the BoneArray offset in case it moves, but it can also be moved because the parent classes have shifted
			//if (IsKeyPressed(VK_NUMPAD1))
			//{
			//	//int off = offsetof(TFD_SDK::USkinnedMeshComponent, BoneArray);
			//	//std::cout << off << "\n";

			//	BoneOffset += 0x04;
			//	//auto pp = std::addressof(PlayerController->Character->Mesh) + 0x04;
			//	TFD_SDK::USkinnedMeshComponent* SkinnedMeshComp = static_cast<TFD_SDK::USkinnedMeshComponent*>(PlayerController->Character->Mesh);

			//	// Step 2: Add the offset to the base address
			//	uintptr_t SkinnedMeshBaseAddress = reinterpret_cast<uintptr_t>(SkinnedMeshComp);
			//	uintptr_t TargetAddress = SkinnedMeshBaseAddress + BoneOffset;

			//	// Step 3: Cast the address to a TArray<FTransform> pointer
			//	BoneArrayPointer = reinterpret_cast<TFD_SDK::TArray<TFD_SDK::FTransform>*>(TargetAddress);
			//}
			//if (IsKeyPressed(VK_NUMPAD0))
			//{
			//	BoneOffset -= 0x04;
			//	TFD_SDK::USkinnedMeshComponent* SkinnedMeshComp = static_cast<TFD_SDK::USkinnedMeshComponent*>(PlayerController->Character->Mesh);

			//	// Step 2: Add the offset to the base address
			//	uintptr_t SkinnedMeshBaseAddress = reinterpret_cast<uintptr_t>(SkinnedMeshComp);
			//	uintptr_t TargetAddress = SkinnedMeshBaseAddress + BoneOffset;

			//	// Step 3: Cast the address to a TArray<FTransform> pointer
			//	BoneArrayPointer = reinterpret_cast<TFD_SDK::TArray<TFD_SDK::FTransform>*>(TargetAddress);
			//}
			//char bufferlol[32];
			//sprintf_s(bufferlol, "BONEARRAY: %02X", BoneOffset);
			//ZeroGUI::TextLeft((char*)bufferlol, TFD_SDK::FVector2D{ 280, 250 }, ColorRed, false);
			//if (BoneArrayPointer && BoneArrayPointer->IsValid())
			//{
			//	ZeroGUI::TextLeft((char*)"Valid!?", TFD_SDK::FVector2D{ 280, 250 + 12 }, ColorGold, false);
			//	char bufferlol2[64];
			//	sprintf_s(bufferlol2, "Num: %d - Max: %d - Number of Bones: %d", BoneArrayPointer->Num(), BoneArrayPointer->Max(), PlayerController->Character->Mesh->GetNumBones());
			//	ZeroGUI::TextLeft((char*)bufferlol2, TFD_SDK::FVector2D{ 280, 250 + 24 }, ColorGold, false);
			//	if (BoneArrayPointer->Num() == 316)
			//	{
			//		TFD_SDK::FMatrix ComponentMatrix = TFD_SDK::UKismetMathLibrary::Conv_TransformToMatrix(PlayerController->Character->Mesh->K2_GetComponentToWorld());
			//		for (int j = 0; j < BoneArrayPointer->Num(); j++)
			//		{
			//			if (BoneArrayPointer->IsValidIndex(j))
			//			{
			//				TFD_SDK::FTransform bone = BoneArrayPointer->operator[](j);
			//				TFD_SDK::FMatrix BoneMatrix = TFD_SDK::UKismetMathLibrary::Conv_TransformToMatrix(bone);
			//				TFD_SDK::FMatrix WorldMatrix = TFD_SDK::UKismetMathLibrary::Multiply_MatrixMatrix(BoneMatrix, ComponentMatrix);
			//				TFD_SDK::FTransform WorldPosition = TFD_SDK::UKismetMathLibrary::Conv_MatrixToTransform(WorldMatrix);
			//				TFD_SDK::FVector2D BoneScreenPos = { -1, -1 };
			//				if (WorldToScreen(WorldPosition.Translation, &BoneScreenPos))
			//				{
			//					ZeroGUI::TextCenter((char*)"Bone", BoneScreenPos, TFD_SDK::FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, true);
			//					std::cout << offsetof(TFD_SDK::USkinnedMeshComponent, BoneArray) << "\n";
			//				}
			//			}
			//		}
			//	}
			//}

			if (PresetsMap.empty())
			{
				RefreshPresetList(false);
			}

			if (Input::IsKeyPressed(cfg_LootVacuumKey))
				cfg_LootVacuum = !cfg_LootVacuum;

			if (cfg_EnableAimbotToggle && Input::IsKeyPressed(cfg_AimbotToggleKey))
				cfg_EnableAimbot = !cfg_EnableAimbot;

			/*if (IsKeyPressed(cfg_HotSwapKey))
			{
				if (HotSwapCharacters[HotSwapIndex] != 0)
				{
					TFD_SDK::FM1TemplateId id = { HotSwapCharacters[HotSwapIndex] };
					PlayerController->PrivateOnlineServiceComponent->ServerChangePlayer(id);
				}
			}*/
			static bool timeEnable = false;
			static bool isTimeHeld = false;
			if (!timeEnable && Input::IsKeyHeld(cfg_TimeScaleHoldKey))
			{
				if (!isTimeHeld)
				{
					GWorld->PersistentLevel->WorldSettings->TimeDilation = cfg_TimeScale;
					isTimeHeld = true;
				}
			}
			if (isTimeHeld && !Input::IsKeyHeld(cfg_TimeScaleHoldKey))
			{
				GWorld->PersistentLevel->WorldSettings->TimeDilation = 1.0f;
				isTimeHeld = false;
			}
			if (Input::IsKeyPressed(cfg_TimeScaleKey))
			{
				timeEnable = !timeEnable;
				if (timeEnable)
					GWorld->PersistentLevel->WorldSettings->TimeDilation = cfg_TimeScale;
				else
					GWorld->PersistentLevel->WorldSettings->TimeDilation = 1.0f;
			}

			if (Input::IsKeyPressed(VK_DOWN))
			{
				if (HotSwapIndex == 5)
					HotSwapIndex = 0;
				else
					HotSwapIndex += 1;
			}
			if (Input::IsKeyPressed(VK_UP))
			{
				if (HotSwapIndex == 0)
					HotSwapIndex = 5;
				else
					HotSwapIndex -= 1;
			}

			if (Input::IsKeyPressed(cfg_InstantInfilKey))
				cfg_EnableAutoInstantInfil = !cfg_EnableAutoInstantInfil;

			if (cfg_EnableAutoInstantInfil)
				InstantInfiltration();

			if (Input::IsKeyPressed(cfg_LeaveMissionKey))
			{
				LeaveMission();
				cfg_EnableAutoRestartMission = false;
			}

			if (Input::IsKeyPressed(cfg_RestartMissionKey))
				cfg_EnableAutoRestartMission = !cfg_EnableAutoRestartMission;

			if (isRestartMission || cfg_EnableAutoRestartMission)
				RestartLastMission();

			if (Input::IsKeyPressed(cfg_SwitchPreset))
				SwitchPreset();

			if (Input::IsKeyPressed(cfg_EncryptedVaultDropsKey))
				EncryptedVaultDrops();


			// This code is for testing controller input detection
			/*char sz[4][1024];
			for (DWORD i = 0; i < 4; i++)
			{
				if (g_Controllers[i].bConnected)
				{
					WORD wButtons = g_Controllers[i].state.Gamepad.wButtons;
					sprintf_s(sz[i],
						"Controller %u: Connected\n Buttons: %s%s%s%s%s%s%s%s%s%s%s%s%s%s\n Left Trigger: %u\n Right Trigger: %u\n Left Thumbstick: %d/%d\n Right Thumbstick: %d/%d",
						i,
						(wButtons& XINPUT_GAMEPAD_DPAD_UP) ? "DPAD_UP " : "",
						(wButtons& XINPUT_GAMEPAD_DPAD_DOWN) ? "DPAD_DOWN " : "",
						(wButtons& XINPUT_GAMEPAD_DPAD_LEFT) ? "DPAD_LEFT " : "",
						(wButtons& XINPUT_GAMEPAD_DPAD_RIGHT) ? "DPAD_RIGHT " : "",
						(wButtons& XINPUT_GAMEPAD_START) ? "START " : "",
						(wButtons& XINPUT_GAMEPAD_BACK) ? "BACK " : "",
						(wButtons& XINPUT_GAMEPAD_LEFT_THUMB) ? "LEFT_THUMB " : "",
						(wButtons& XINPUT_GAMEPAD_RIGHT_THUMB) ? "RIGHT_THUMB " : "",
						(wButtons& XINPUT_GAMEPAD_LEFT_SHOULDER) ? "LEFT_SHOULDER " : "",
						(wButtons& XINPUT_GAMEPAD_RIGHT_SHOULDER) ? "RIGHT_SHOULDER " : "",
						(wButtons& XINPUT_GAMEPAD_A) ? "A " : "",
						(wButtons& XINPUT_GAMEPAD_B) ? "B " : "",
						(wButtons& XINPUT_GAMEPAD_X) ? "X " : "",
						(wButtons& XINPUT_GAMEPAD_Y) ? "Y " : "",
						g_Controllers[i].state.Gamepad.bLeftTrigger,
						g_Controllers[i].state.Gamepad.bRightTrigger,
						g_Controllers[i].state.Gamepad.sThumbLX,
						g_Controllers[i].state.Gamepad.sThumbLY,
						g_Controllers[i].state.Gamepad.sThumbRX,
						g_Controllers[i].state.Gamepad.sThumbRY);
				}
				else
					sprintf_s(sz[i], "Controller %u: Not connected", i);
				ZeroGUI::TextLeft((char*)sz[i], TFD_SDK::FVector2D{ 250.0f + (100.0f * i), 150.0f }, ColorRed, false);
			}*/


			if (cfg_EnablePlayerEnemyESP)
				PlayerEnemyESP();

			if (cfg_EnableItemESP || cfg_LootVacuum)
				ItemESPVacuum();


			if (cfg_EnableAimbotHold || cfg_EnableAimbotToggle)
				Aimbot();

			if (cfg_NoReload)
				InstantReload();

			if (cfg_AimbotNoSpread)
				NoSpread();

			if (cfg_AimbotNoRecoil)
				NoRecoil();

			if (cfg_AimbotRapidFire)
				RapidFireOn();

			if (cfg_CacheEnemyNames && NamesChanged)
			{
				WriteEnemyNamesData();
				NamesChanged = false;
			}
			if (cfg_CacheEnemyBones && BonesChanged)
			{
				WriteEnemyBonesData();
				BonesChanged = false;
			}

			// This code was my only attempt at using the teleport, but it just teleports to yourself because the deproject hits the player lol
			/*if (IsKeyPressed(0x58))
			{
				TFD_SDK::FVector Pos, Rot = { 0, 0, 0 };
				TFD_SDK::FVector2D Screen = { ZeroGUI::canvas->SizeX / 2.0f, ZeroGUI::canvas->SizeY / 2.0f };
				if (ZeroGUI::canvas->SizeX > 1920)
				{
					Screen.X *= (1920.0f / ZeroGUI::canvas->SizeX);
					Screen.Y *= (1080.0f / ZeroGUI::canvas->SizeY);
				}
				if (PlayerController->DeprojectScreenPositionToWorld(Screen.X, Screen.Y, &Pos, &Rot))
				{
					TFD_SDK::FRotator Rotation = LocalCharacter->K2_GetActorRotation();
					LocalCharacter->RequestTeleportAtSequence(Pos, Rotation);
				}
			}*/

			if (cfg_HotSwapOverlay)
			{
				if (!PresetsMap.empty())
				{
					for (int i = 0; i < 6; i++)
					{
						char buffer[100];
						if (HotSwapPreset[i] != -1)
							sprintf_s(buffer, "Preset %d: %s", i + 1, PresetsMap[HotSwapPreset[i]].c_str());
						else
							sprintf_s(buffer, "Preset %d: None", i + 1);

						if (i == HotSwapIndex)
							ZeroGUI::TextLeft((char*)buffer, TFD_SDK::FVector2D{ 250, 25.0f + (12.0f * i) }, ColorRed, false);
						else
							ZeroGUI::TextLeft((char*)buffer, TFD_SDK::FVector2D{ 250, 25.0f + (12.0f * i) }, ColorWhite, false);
					}
				}
			}

			if (Input::IsKeyPressed(cfg_TPMissionKey))
				cfg_EnableMissionTaskTeleporter = !cfg_EnableMissionTaskTeleporter;

			if (cfg_EnableMissionTaskTeleporter)
				MissionTaskTeleporter();

			if (Input::IsKeyPressed(cfg_ContainerDropKey))
				ContainerDrop();

			if(cfg_EnableModifyGrapple)
				ModifyGrapple();

			//if(cfg_InfiniteAmmoAndSkills)
				//InfiniteAmmoAndSkills();

			//if (Input::IsKeyPressed(VK_LEFT))
				
			//MissionTaskActortESP();

			if (cfg_DrawMenu)
				DrawMenu();

			ZeroGUI::Render();
			ZeroGUI::Draw_Cursor(cfg_DrawMenu);

		}
	}
	Input::ResetKeyPressed();
	return M1org(self, Canvas);
}

void InstantReload()
{
	if (!LocalPlayerCharacter)
		return;

	if (LocalPlayerCharacter->WeaponSlotControl)
	{
		if (LocalPlayerCharacter->WeaponSlotControl->ActivatedWeaponSlot.WeaponSlot.Weapon)
		{
			if (LocalPlayerCharacter->WeaponSlotControl->ActivatedWeaponSlot.WeaponSlot.Weapon->IsA(TFD_SDK::AM1RangedWeapon::StaticClass()))
			{
				TFD_SDK::AM1RangedWeapon* RangeWeap = static_cast<TFD_SDK::AM1RangedWeapon*>(LocalPlayerCharacter->WeaponSlotControl->ActivatedWeaponSlot.WeaponSlot.Weapon);
				if (RangeWeap->RoundsComponent)
				{
					if (RangeWeap->RoundsComponent->CurrentRounds < 6)
					{
						RangeWeap->RoundsComponent->ClientFillCurrentRoundByServer();
					}
				}
			}
		}
	}
	/*if (!LocalPlayerCharacter)
		return;
	static bool foundWeapon = false; 
	if (!foundWeapon)
	{
		for (int i = 0; i < TFD_SDK::UObject::GObjects->Num(); i++)
		{
			TFD_SDK::UObject* Obj = TFD_SDK::UObject::GObjects->GetByIndex(i);

			if (!Obj)
				continue;

			if (Obj->Flags & TFD_SDK::EObjectFlags::BeginDestroyed ||
				Obj->Flags & TFD_SDK::EObjectFlags::BeingRegenerated ||
				Obj->Flags & TFD_SDK::EObjectFlags::FinishDestroyed ||
				Obj->Flags & TFD_SDK::EObjectFlags::NeedInitialization ||
				Obj->Flags & TFD_SDK::EObjectFlags::WillBeLoaded)
				continue;

			if (Obj->IsA(TFD_SDK::UM1WeaponSlotControlComponent::StaticClass()))
			{
				TFD_SDK::UM1WeaponSlotControlComponent* Wep = static_cast<TFD_SDK::UM1WeaponSlotControlComponent*>(Obj);
				if (!Wep)
					continue;
				if (!Wep->Player_Owner)
					continue;
				if (Wep->Player_Owner == LocalPlayerCharacter)
				{
					WeaponSlot = Wep;
					foundWeapon = true;
					break;
				}
			}
		}
	}
	else
	{
		if (!WeaponSlot || !WeaponSlot->Player_Owner || (WeaponSlot->Player_Owner != LocalPlayerCharacter))
		{
			foundWeapon = false;
			return;
		}
		else
		{
			if (WeaponSlot->Flags & TFD_SDK::EObjectFlags::BeginDestroyed ||
				WeaponSlot->Flags & TFD_SDK::EObjectFlags::BeingRegenerated ||
				WeaponSlot->Flags & TFD_SDK::EObjectFlags::FinishDestroyed ||
				WeaponSlot->Flags & TFD_SDK::EObjectFlags::NeedInitialization ||
				WeaponSlot->Flags & TFD_SDK::EObjectFlags::WillBeLoaded)
			{
				foundWeapon = false;
				WeaponSlot = nullptr;
				return;
			}
			if (WeaponSlot->ActivatedWeaponSlot.WeaponSlot.Weapon)
			{
				if (WeaponSlot->ActivatedWeaponSlot.WeaponSlot.Weapon->RoundsComponent)
				{
					if (WeaponSlot->ActivatedWeaponSlot.WeaponSlot.Weapon->RoundsComponent->CurrentRounds < 3)
					{
						WeaponSlot->ActivatedWeaponSlot.WeaponSlot.Weapon->RoundsComponent->ClientFillCurrentRoundByServer();
					}
				}
			}
		}
	}*/
}

void NoSpread()
{
	if (!LocalPlayerCharacter)
		return;

	if (LocalPlayerCharacter->WeaponSlotControl)
	{
		if (LocalPlayerCharacter->WeaponSlotControl->ActivatedWeaponSlot.WeaponSlot.Weapon)
		{
			if (LocalPlayerCharacter->WeaponSlotControl->ActivatedWeaponSlot.WeaponSlot.Weapon->IsA(TFD_SDK::AM1RangedWeapon::StaticClass()))
			{
				TFD_SDK::AM1RangedWeapon* RangeWeap = static_cast<TFD_SDK::AM1RangedWeapon*>(LocalPlayerCharacter->WeaponSlotControl->ActivatedWeaponSlot.WeaponSlot.Weapon);
				if (RangeWeap->SprayPatternComponent)
				{
					if (RangeWeap->SprayPatternComponent->bApplySpreadSize == true)
						RangeWeap->SprayPatternComponent->bApplySpreadSize = false;
					if (RangeWeap->SprayPatternComponent->CrosshairSizeBase > 0.000001f)
						RangeWeap->SprayPatternComponent->CrosshairSizeBase = 0.000001f;
					if (RangeWeap->SprayPatternComponent->CurrentSpreadSize > 0.000001f)
						RangeWeap->SprayPatternComponent->CurrentSpreadSize = 0.000001f;
					if (RangeWeap->SprayPatternComponent->CurrAccuracySizeInterp > 0.000001f)
						RangeWeap->SprayPatternComponent->CurrAccuracySizeInterp = 0.000001f;
					if (RangeWeap->SprayPatternComponent->CurrBaseSizeInterp > 0.000001f)
						RangeWeap->SprayPatternComponent->CurrBaseSizeInterp = 0.000001f;
					if (RangeWeap->SprayPatternComponent->RecoverRecoilStartDelayTime > 0.000001f)
						RangeWeap->SprayPatternComponent->RecoverRecoilStartDelayTime = 0.000001f;
				}
			}
		}
	}
}

void NoRecoil()
{
	if (!LocalPlayerCharacter)
		return;
	if (LocalPlayerCharacter->WeaponSlotControl)
	{
		if (LocalPlayerCharacter->WeaponSlotControl->ActivatedWeaponSlot.WeaponSlot.Weapon)
		{
			if (LocalPlayerCharacter->WeaponSlotControl->ActivatedWeaponSlot.WeaponSlot.Weapon->IsA(TFD_SDK::AM1RangedWeapon::StaticClass()))
			{
				TFD_SDK::AM1RangedWeapon* RangeWeap = static_cast<TFD_SDK::AM1RangedWeapon*>(LocalPlayerCharacter->WeaponSlotControl->ActivatedWeaponSlot.WeaponSlot.Weapon);
				if (RangeWeap->SprayPatternComponent)
				{
					if (RangeWeap->SprayPatternComponent->RecoilData)
					{
						if (RangeWeap->SprayPatternComponent->RecoilData->RecoilApplyInterpSpeed > 0.000001f)
							RangeWeap->SprayPatternComponent->RecoilData->RecoilApplyInterpSpeed = 0.000001f;
						if (RangeWeap->SprayPatternComponent->RecoilData->RecoilRecoverInterpSpeed < 9999.0f)
							RangeWeap->SprayPatternComponent->RecoilData->RecoilRecoverInterpSpeed = 9999.0f;
						if (RangeWeap->SprayPatternComponent->RecoilData->RecoilRecoverStartDelay > 0.000001f)
							RangeWeap->SprayPatternComponent->RecoilData->RecoilRecoverStartDelay = 0.000001f;
						if (RangeWeap->SprayPatternComponent->RecoilData->RecoilResetTimeAfterFire > 0.000001f)
							RangeWeap->SprayPatternComponent->RecoilData->RecoilResetTimeAfterFire = 0.000001f;
					}

					if (RangeWeap->SprayPatternComponent->ZoomRecoilData)
					{
						if (RangeWeap->SprayPatternComponent->ZoomRecoilData->RecoilApplyInterpSpeed > 0.000001f)
							RangeWeap->SprayPatternComponent->ZoomRecoilData->RecoilApplyInterpSpeed = 0.000001f;
						if (RangeWeap->SprayPatternComponent->ZoomRecoilData->RecoilRecoverInterpSpeed < 9999.0f)
							RangeWeap->SprayPatternComponent->ZoomRecoilData->RecoilRecoverInterpSpeed = 9999.0f;
						if (RangeWeap->SprayPatternComponent->ZoomRecoilData->RecoilRecoverStartDelay > 0.000001f)
							RangeWeap->SprayPatternComponent->ZoomRecoilData->RecoilRecoverStartDelay = 0.000001f;
						if (RangeWeap->SprayPatternComponent->ZoomRecoilData->RecoilResetTimeAfterFire > 0.000001f)
							RangeWeap->SprayPatternComponent->ZoomRecoilData->RecoilResetTimeAfterFire = 0.000001f;
					}
				}
			}
		}
	}
}

void RapidFireOn()
{
	if (!LocalPlayerCharacter)
		return;

	if (LocalPlayerCharacter->WeaponSlotControl)
	{
		if (LocalPlayerCharacter->WeaponSlotControl->ActivatedWeaponSlot.WeaponSlot.Weapon)
		{
			if (LocalPlayerCharacter->WeaponSlotControl->ActivatedWeaponSlot.WeaponSlot.Weapon->IsA(TFD_SDK::AM1RangedWeapon::StaticClass()))
			{
				TFD_SDK::AM1RangedWeapon* RangeWeap = static_cast<TFD_SDK::AM1RangedWeapon*>(LocalPlayerCharacter->WeaponSlotControl->ActivatedWeaponSlot.WeaponSlot.Weapon);
				if (RangeWeap->FireLoopComponent)
				{
					if (RangeWeap->FireLoopComponent->CurrFireParams)
					{
						if (RangeWeap->FireLoopComponent->CurrFireParams.IsSet())
						{
							float fireInterval = RangeWeap->FireLoopComponent->CurrFireParams.GetValueRef().fireinterval;
							float elapsedTime = RangeWeap->FireLoopComponent->ElapsedTimeAfterFire;
							RangeWeap->FireLoopComponent->CurrFireParams.GetValueRef().fireinterval = (fireInterval - (fireInterval * (cfg_FireRate / 100.0f)));
							RangeWeap->FireLoopComponent->ElapsedTimeAfterFire = (elapsedTime - (elapsedTime * (cfg_FireRate / 100.0f))); // Reset the fire time so it can fire immediately
						}
					}
				}
			}
		}
	}
}

void PlayerEnemyESP()
{
	if (cfg_DrawPlayerNames || cfg_DrawPlayerBoxes || cfg_DrawEnemyNames || cfg_DrawEnemyBoxes || cfg_DrawPlayerLines || cfg_DrawEnemyLines)
	{
		if (!LocalPlayerController
			|| !LocalPlayerCharacter
			|| !Actors
			)
			return;
		//TFD_SDK::UM1ActorManagerSubsystem* Actors = LocalPlayerController->ActorManager_Subsystem;
		//if (!Actors)
		//	return;
		if (Actors->Characters.IsValid() && Actors->Characters.Num() > 0)
		{
			int StartNumber = Actors->Characters.Num();
			for (int i = 0; i < Actors->Characters.Num(); i++)
			{
				if (Actors->Characters.Num() != StartNumber)
					return;
				if (!Actors->Characters.IsValidIndex(i))
					continue;
				TFD_SDK::AM1Character* p = Actors->Characters[i];
				if (p)
				{
					if (p == LocalPlayerCharacter)
						continue;
					if (p->IsDead())
						continue;
					if (p->IsA(TFD_SDK::AM1Player::StaticClass()))
					{
						TFD_SDK::AM1Player* player = static_cast<TFD_SDK::AM1Player*>(p);
						//if (player->bPlayerInputEnabled)
						//{
						//	continue;
						//}
						if (player)
						{
							TFD_SDK::FVector2D ScreenPos = { -1, -1 };
							if (WorldToScreen(p->K2_GetActorLocation(), &ScreenPos))
							{
								if (cfg_DrawPlayerNames && player->PlayerName)
								{
									std::string playerNameStr = player->PlayerName.ToString();
									if (!playerNameStr.empty())
									{
										ZeroGUI::TextCenter((char*)playerNameStr.c_str(), TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, ColorGreen, false);
									}
								}

								if (cfg_DrawPlayerBoxes)
								{
									float ODistance = LocalPlayerCharacter->K2_GetActorLocation().GetDistanceTo(p->K2_GetActorLocation()) / 100.00f;
									if (ODistance > 0)
										ZeroGUI::DrawRectangle(TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, TFD_SDK::FVector2D{ cfg_ESPBox.X / ODistance, cfg_ESPBox.Y / ODistance }, ColorGreen);
								}
								if (cfg_DrawPlayerLines)
									ZeroGUI::DrawActorLine(TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, ColorGreen);
							}
						}
					}
					else if (p->IsA(TFD_SDK::AM1Monster::StaticClass()) || (p->CharacterAttribute && p->CharacterAttribute->IsA(TFD_SDK::UM1MonsterAttribute::StaticClass())))
					{
						//TFD_SDK::AM1Monster* monster = static_cast<TFD_SDK::AM1Monster*>(p);
						TFD_SDK::FVector2D ScreenPos = { -1, -1 };
						if (WorldToScreen(p->K2_GetActorLocation(), &ScreenPos))
						{
							/*TFD_SDK::FLinearColor color = ColorDarkRed;
							if (PlayerController->LineOfSightTo(p, TFD_SDK::FVector{ 0, 0, 0 }, false))
								color = ColorRed;*/

							// Finding fucking new bone targets
							//if (p->Mesh && p->Mesh->BoneArray.IsValid() && p->Mesh->BoneArray.Num() > 0)
							//{
							//	TFD_SDK::FMatrix ComponentMatrix = TFD_SDK::UKismetMathLibrary::Conv_TransformToMatrix(p->Mesh->K2_GetComponentToWorld());
							//	//std::vector<int> indexes = IDBoneMap[p->CharacterId.ID];
							//	for (int j = 0; j < p->Mesh->BoneArray.Num(); j++)
							//	{
							//		if (p->Mesh->BoneArray.IsValidIndex(j))
							//		{
							//			TFD_SDK::FTransform bone = p->Mesh->BoneArray[j];
							//			TFD_SDK::FMatrix BoneMatrix = TFD_SDK::UKismetMathLibrary::Conv_TransformToMatrix(bone);
							//			TFD_SDK::FMatrix WorldMatrix = TFD_SDK::UKismetMathLibrary::Multiply_MatrixMatrix(BoneMatrix, ComponentMatrix);
							//			TFD_SDK::FTransform WorldPosition = TFD_SDK::UKismetMathLibrary::Conv_MatrixToTransform(WorldMatrix);
							//			TFD_SDK::FVector2D BoneScreenPos = { -1, -1 };
							//			if (WorldToScreen(WorldPosition.Translation, &BoneScreenPos))
							//			{
							//				ZeroGUI::TextCenter((char*)p->Mesh->GetBoneName(j).ToString().c_str(), BoneScreenPos, TFD_SDK::FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, true);
							//			}
							//		}
							//	}
							//}


							// Was used to detect 'monster' actors
							/*if (monster->Children.Num() > 0)
							{
								for (int a = 0; a < monster->Children.Num(); a++)
								{
									if (monster->Children[a]->IsA(TFD_SDK::AM1AbilityActor::StaticClass()))
									{
										TFD_SDK::FVector2D ScreenPos = { -1, -1 };
										if (WorldToScreen(monster->Children[a]->K2_GetActorLocation(), &ScreenPos))
										{
											ZeroGUI::TextCenter((char*)monster->Children[a]->Class->GetFullName().c_str(), TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y - 50 }, ColorGreen, false);
										}
									}
								}


							}*/


							if (cfg_DrawEnemyNames)
							{
								// This draws ALL of the bone names for ALL enemies
								//	for (int j = 0; j < p->Mesh->BoneArray.Num(); j++)
								//	{
								//		TFD_SDK::FMatrix ComponentMatrix = TFD_SDK::UKismetMathLibrary::Conv_TransformToMatrix(monster->Mesh->K2_GetComponentToWorld());
								//		TFD_SDK::FTransform bone = monster->Mesh->BoneArray[j];
								//		TFD_SDK::FMatrix BoneMatrix = TFD_SDK::UKismetMathLibrary::Conv_TransformToMatrix(bone);
								//		TFD_SDK::FMatrix WorldMatrix = TFD_SDK::UKismetMathLibrary::Multiply_MatrixMatrix(BoneMatrix, ComponentMatrix);
								//		TFD_SDK::FTransform WorldPosition = TFD_SDK::UKismetMathLibrary::Conv_MatrixToTransform(WorldMatrix);
								//		TFD_SDK::FVector2D BoneScreenPos = { -1, -1 };
								//		if (WorldToScreen(WorldPosition.Translation, &BoneScreenPos))
								//		{
								//			ZeroGUI::TextCenter((char*)monster->Mesh->GetBoneName(j).ToString().c_str(), BoneScreenPos, TFD_SDK::FLinearColor{ 1.0f, 0.0f, 1.0f, 1.0f }, false);
								//		}
								//	}
								if (!IDNameMap.contains(p->CharacterId.ID))
								{
									if (!p->InfoWidgetComponent || !p->InfoWidgetComponent->ActorWidget.Get())
										continue;
									TFD_SDK::UM1UIActorWidget* Base = p->InfoWidgetComponent->ActorWidget.Get();
									if (Base)
									{
										if (Base->IsA(TFD_SDK::UM1UICharacterInfoBase::StaticClass()))
										{
											TFD_SDK::UM1UICharacterInfoBase* Info = static_cast<TFD_SDK::UM1UICharacterInfoBase*>(Base);
											if (Info)
											{
												std::string name = Info->TB_Name->Text.ToString();
												int id = p->CharacterId.ID;
												IDNameMap.insert({ id, name });
												NamesChanged = true;
											}
										}

									}

								}
								else
								{
									ZeroGUI::TextCenter((char*)IDNameMap[(int)p->CharacterId.ID].c_str(), TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, ColorRed, false);
								}
							}
							if (cfg_DrawEnemyBoxes)
							{
								float ODistance = LocalPlayerCharacter->K2_GetActorLocation().GetDistanceTo(p->K2_GetActorLocation()) / 100.00f;
								if (ODistance > 0)
								{
									ZeroGUI::DrawRectangle(TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, TFD_SDK::FVector2D{ cfg_ESPBox.X / ODistance, cfg_ESPBox.Y / ODistance }, ColorRed);
								}
							}
							if (cfg_DrawEnemyLines)
								ZeroGUI::DrawActorLine(TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, ColorRed);
						}
					}
				}
			}
		}
					}
				}

void ItemESPVacuum()
{
	if (!LocalPlayerCharacter
		|| !LocalPlayerController->Pawn
		|| !GWorld)
		return;

	struct TFD_SDK::FM1StatType Stat_CurrentHp;
	struct TFD_SDK::FM1StatType Stat_MaxHp;
	struct TFD_SDK::FM1StatType Stat_CurrentMp;
	struct TFD_SDK::FM1StatType Stat_MaxMp;

	Stat_CurrentHp.StatType = UC::int32(TFD_SDK::EM1StatType::Stat_CurrentHp);
	Stat_MaxHp.StatType = UC::int32(TFD_SDK::EM1StatType::Stat_MaxHp);
	Stat_CurrentMp.StatType = UC::int32(TFD_SDK::EM1StatType::Stat_CurrentMp);
	Stat_MaxMp.StatType = UC::int32(TFD_SDK::EM1StatType::Stat_MaxMp);


	currenthp = (float)LocalPlayerCharacter->StatComponent->GetStatValue(Stat_CurrentHp).Value / 10000.0f;
	maxhp = (float)LocalPlayerCharacter->StatComponent->GetStatValue(Stat_MaxHp).Value / 10000.0f;
	currentmana = (float)LocalPlayerCharacter->StatComponent->GetStatValue(Stat_CurrentMp).Value / 10000.0f;
	maxmana = (float)LocalPlayerCharacter->StatComponent->GetStatValue(Stat_MaxMp).Value / 10000.0f;
	hp_used = false;
	mp_used = false;
	rounds_used = false;
	if (cfg_DrawItemBoxes || cfg_DrawItemNames || cfg_DrawItemLines || cfg_LootVacuum || cfg_DrawVaults)
	{
		if (GWorld->Levels.IsValid())
		{
			for (int i = 0; i < GWorld->Levels.Num(); ++i)
			{
				if (GWorld->Levels.IsValidIndex(i))
				{
					TFD_SDK::ULevel* Level = GWorld->Levels[i];
					if (!Level)
						continue;
					for (int j = 0; j < Level->Actors.Num(); ++j)
					{
						TFD_SDK::AActor* Actor = (TFD_SDK::AActor*)Level->Actors[j];
						if (!Actor)
							continue;
						if (cfg_DrawVaults)
						{
							if (Actor->IsA(TFD_SDK::AM1FieldInteractableActorMiniGame::StaticClass()))
							{
								TFD_SDK::FVector2D ScreenPosa = { -1, -1 };
								TFD_SDK::FVector WorldPositiona = Actor->K2_GetActorLocation();
								if (WorldToScreen(WorldPositiona, &ScreenPosa))
								{
									ZeroGUI::TextCenter((char*)"Encrypted Vault", TFD_SDK::FVector2D{ ScreenPosa.X, ScreenPosa.Y + 20 }, TFD_SDK::FLinearColor{ 0.7f, 0.0f, 1.0f, 1.0f }, false);
									if (cfg_DrawItemLines)
										ZeroGUI::DrawActorLine(TFD_SDK::FVector2D{ ScreenPosa.X, ScreenPosa.Y }, ColorRare);
								}
								continue;
							}
							/*		else
									{
										TFD_SDK::FVector2D ScreenPos = { -1, -1 };
										TFD_SDK::FVector WorldPosition = Actor->K2_GetActorLocation();
										if (WorldToScreen(WorldPosition, &ScreenPos))
										{
												ZeroGUI::TextCenter((char*)Actor->GetFullName().c_str(), TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y - 20 }, ColorWhite, true);
										}
									}*/
						}

						if (cfg_DrawResourceBox)
						{
							if (Actor->IsA(TFD_SDK::AM1FieldInteractableActor_Hit::StaticClass()))
							{
								if (Actor->GetFullName().contains("VulgusBox"))
								{
									TFD_SDK::FVector2D ScreenPos = { -1, -1 };
									TFD_SDK::FVector WorldPosition = Actor->K2_GetActorLocation();
									if (WorldToScreen(WorldPosition, &ScreenPos))
									{

										ZeroGUI::TextCenter((char*)"Resource Box", TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y - 20 }, ColorWhite, true);
										if (cfg_DrawItemLines)
											ZeroGUI::DrawActorLine(TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, ColorWhite);
									}
									continue;
								}
								if (Actor->GetFullName().contains("HoverBikeBox01"))
								{
									TFD_SDK::FVector2D ScreenPos = { -1, -1 };
									TFD_SDK::FVector WorldPosition = Actor->K2_GetActorLocation();
									if (WorldToScreen(WorldPosition, &ScreenPos))
									{

										ZeroGUI::TextCenter((char*)"Axion Supply Cache", TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y - 20 }, ColorWhite, true);
										if (cfg_DrawItemLines)
											ZeroGUI::DrawActorLine(TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, ColorWhite);
									}
									continue;
								}
								if (Actor->GetFullName().contains("HoverBikeBox02"))
								{
									TFD_SDK::FVector2D ScreenPos = { -1, -1 };
									TFD_SDK::FVector WorldPosition = Actor->K2_GetActorLocation();
									if (WorldToScreen(WorldPosition, &ScreenPos))
									{

										ZeroGUI::TextCenter((char*)"Axion Resource Cache", TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y - 20 }, ColorWhite, true);
										if (cfg_DrawItemLines)
											ZeroGUI::DrawActorLine(TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, ColorWhite);
									}
									continue;
								}
							}
						}

						if (Actor->IsA(TFD_SDK::AM1FieldInteractableActor_Interaction::StaticClass()))
						{
							if (cfg_DrawMunition)
							{
								if (Actor->GetFullName().contains("MilitarySupplies"))
								{
									TFD_SDK::FVector2D ScreenPos = { -1, -1 };
									TFD_SDK::FVector WorldPosition = Actor->K2_GetActorLocation();
									if (WorldToScreen(WorldPosition, &ScreenPos))
									{

										ZeroGUI::TextCenter((char*)"Munition", TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y - 20 }, ColorWhite, true);
										if (cfg_DrawItemLines)
											ZeroGUI::DrawActorLine(TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, ColorWhite);
									}
									continue;
								}
							}
							if (cfg_DrawVoidVesselBox)
							{
								if (Actor->GetFullName().contains("CompanionVault_TypeB_Item_C"))
								{
									TFD_SDK::FVector2D ScreenPos = { -1, -1 };
									TFD_SDK::FVector WorldPosition = Actor->K2_GetActorLocation();
									if (WorldToScreen(WorldPosition, &ScreenPos))
									{

										ZeroGUI::TextCenter((char*)"Experimental Box", TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y - 20 }, ColorWhite, true);
										if (cfg_DrawItemLines)
											ZeroGUI::DrawActorLine(TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, ColorWhite);
									}
									continue;
								}
								if (Actor->GetFullName().contains("CompanionVault_TypeA_Broken_C"))
								{
									TFD_SDK::FVector2D ScreenPos = { -1, -1 };
									TFD_SDK::FVector WorldPosition = Actor->K2_GetActorLocation();
									if (WorldToScreen(WorldPosition, &ScreenPos))
									{

										ZeroGUI::TextCenter((char*)"Broken Box", TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y - 20 }, ColorWhite, true);
										if (cfg_DrawItemLines)
											ZeroGUI::DrawActorLine(TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, ColorWhite);
									}
									continue;
								}
								if (Actor->GetFullName().contains("CompanionVault_TypeA_C"))
								{
									TFD_SDK::FVector2D ScreenPos = { -1, -1 };
									TFD_SDK::FVector WorldPosition = Actor->K2_GetActorLocation();
									if (WorldToScreen(WorldPosition, &ScreenPos))
									{

										ZeroGUI::TextCenter((char*)"Special Box", TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y - 20 }, ColorWhite, true);
										if (cfg_DrawItemLines)
											ZeroGUI::DrawActorLine(TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, ColorWhite);
									}
									continue;
								}
								if (Actor->GetFullName().contains("CompanionVault_TypeB_Data_C"))
								{
									TFD_SDK::FVector2D ScreenPos = { -1, -1 };
									TFD_SDK::FVector WorldPosition = Actor->K2_GetActorLocation();
									if (WorldToScreen(WorldPosition, &ScreenPos))
									{

										ZeroGUI::TextCenter((char*)"Genetic Box", TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y - 20 }, ColorWhite, true);
										if (cfg_DrawItemLines)
											ZeroGUI::DrawActorLine(TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, ColorWhite);
									}
									continue;
								}
							}
						}

						if (Actor->IsA(TFD_SDK::AM1DropMissionCollectibles::StaticClass()) && cfg_LootVacuum)
						{
							TFD_SDK::FVector2D ScreenPos = { -1, -1 };
							TFD_SDK::FVector WorldPosition = Actor->K2_GetActorLocation();

							TFD_SDK::AM1DropMissionCollectibles* Item = static_cast<TFD_SDK::AM1DropMissionCollectibles*>(Actor);
							TFD_SDK::FVector player = LocalPlayerCharacter->K2_GetActorLocation();
							float Distance = WorldPosition.GetDistanceTo(player);
							if (Distance > 150 && Distance < cfg_LootVacuumRange)
								Item->K2_SetActorLocation(player, false, nullptr, true);
							continue;
						}

						if (Actor->IsA(TFD_SDK::AM1DropMissionSupplies::StaticClass()) && cfg_LootVacuum)
						{
							TFD_SDK::FVector2D ScreenPos = { -1, -1 };
							TFD_SDK::FVector WorldPosition = Actor->K2_GetActorLocation();

							TFD_SDK::AM1DropMissionSupplies* Item = static_cast<TFD_SDK::AM1DropMissionSupplies*>(Actor);
							TFD_SDK::FVector player = LocalPlayerCharacter->K2_GetActorLocation();
							float Distance = WorldPosition.GetDistanceTo(player);
							if (Distance > 150 && Distance < cfg_LootVacuumRange)
								Item->K2_SetActorLocation(player, false, nullptr, true);
							continue;
						}

						if (Actor->IsA(TFD_SDK::AM1DroppedItem::StaticClass()))
						{
							TFD_SDK::AM1DroppedItem* Item = static_cast<TFD_SDK::AM1DroppedItem*>(Actor);
							if (!Item)
								continue;
							if (Item->IsObtained() || Item->bBeingPickedLocally || Item->bTriedSetToObtained || Item->bObtainRequestedOnClient)
								continue;

							TFD_SDK::FVector2D ScreenPos = { -1, -1 };
							TFD_SDK::FVector WorldPosition = Actor->K2_GetActorLocation();

							if (WorldToScreen(WorldPosition, &ScreenPos))
							{
								TFD_SDK::FLinearColor color = ColorWhite;
								std::string Text = "Unknown";
								switch (Item->DropItemInfo.ItemBox.Type)
								{
								case TFD_SDK::EM1ItemType::InstantUse:
								{
									if (Item->IsA(TFD_SDK::ABP_AmmoEnhancedDroppedItem_C::StaticClass()))
										Text = "Enhanced Ammo";
									else if (Item->IsA(TFD_SDK::ABP_AmmoGeneralDroppedItem_C::StaticClass()))
										Text = "General Ammo";
									else if (Item->IsA(TFD_SDK::ABP_AmmoHighpowerDroppedItem_C::StaticClass()))
										Text = "Highpower Ammo";
									else if (Item->IsA(TFD_SDK::ABP_AmmoImpactDroppedItem_C::StaticClass()))
										Text = "Impact Ammo";
									else if (Item->IsA(TFD_SDK::ABP_HealthOrbDroppedItem_C::StaticClass()))
									{
										color = ColorRed;
										Text = "Health";
									}
									else if (Item->IsA(TFD_SDK::ABP_ManaOrbDroppedItem_C::StaticClass()))
									{
										color = ColorMana;
										Text = "Mana";
									}
									break;
								}
								case TFD_SDK::EM1ItemType::Equipment:
								{
									if (Item->IsA(TFD_SDK::ABP_EquipTier01DroppedItem_C::StaticClass()))
									{
										color = ColorUncommon;
										Text = "T1 Item";
									}
									else if (Item->IsA(TFD_SDK::ABP_EquipTier02DroppedItem_C::StaticClass()))
									{
										color = ColorRare;
										Text = "T2 Item";
									}
									else if (Item->IsA(TFD_SDK::ABP_EquipTier03DroppedItem_C::StaticClass()))
									{
										color = ColorGold;
										Text = "T3 Item";
									}
									break;
								}
								case TFD_SDK::EM1ItemType::Consumable:
								{
									if (Item->IsA(TFD_SDK::ABP_ResourceTier01DroppedItem_C::StaticClass()))
									{
										color = ColorUncommon;
										Text = "T1 Resource";
									}
									else if (Item->IsA(TFD_SDK::ABP_ResourceTier02DroppedItem_C::StaticClass()))
									{
										color = ColorRare;
										Text = "T2 Resource";
									}
									else if (Item->IsA(TFD_SDK::ABP_ResourceTier03DroppedItem_C::StaticClass()))
									{
										color = ColorGold;
										Text = "T3 Resource";
									}
									break;
								}
								case TFD_SDK::EM1ItemType::Rune:
								{
									if (Item->IsA(TFD_SDK::ABP_RuneTier01DroppedItem_C::StaticClass()))
									{
										color = ColorUncommon;
										Text = "T1 Rune";
									}
									else if (Item->IsA(TFD_SDK::ABP_RuneTier02DroppedItem_C::StaticClass()))
									{
										color = ColorRare;
										Text = "T2 Rune";
									}
									else if (Item->IsA(TFD_SDK::ABP_RuneTier03DroppedItem_C::StaticClass()))
									{
										color = ColorGold;
										Text = "T3 Rune";
									}
									else if (Item->IsA(TFD_SDK::ABP_RuneTier04DroppedItem_C::StaticClass()))
									{
										color = ColorUltimate;
										Text = "T4 Rune";
									}
									break;
								}
								case TFD_SDK::EM1ItemType::Currency:
								{
									if (Item->IsA(TFD_SDK::ABP_GoldDroppedItem_C::StaticClass()))
									{
										color = ColorGold;
										Text = "Gold";
									}
									else if (Item->IsA(TFD_SDK::ABP_KuiperShardDroppedItem_C::StaticClass()))
									{
										color = ColorMana;
										Text = "Kuiper Shard";
									}
									break;
								}
								default:
								{
									if (Item->IsA(TFD_SDK::ABP_BuffOrbDroppedItem_C::StaticClass()))
										Text = "Buff Orb";
									else if (Item->IsA(TFD_SDK::ABP_EmberDroppedItem_C::StaticClass()))
										Text = "Ember";
									break;
								}

								}

								if (cfg_DrawItemNames)
								{
									// Idk what the fuck these items are and I don't think I've ever even seen them in-game
									if (Text == "Unknown" || Text == "Buff Orb" || Text == "Ember")
									{
										int type = (int)Item->DropItemInfo.ItemBox.Type;
										char buffer[32];
										sprintf_s(buffer, "Unkown Type %d", type);
										ZeroGUI::TextCenter(buffer, TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y + 20 }, TFD_SDK::FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);
									}
									ZeroGUI::TextCenter((char*)Text.c_str(), TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, color, true);
								}

								if (cfg_DrawItemBoxes)
								{
									float ODistance = Item->GetDistanceTo(LocalPlayerController->Pawn) / cfg_DistanceScale;
									if (ODistance > 0)
										ZeroGUI::DrawRectangle(TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, TFD_SDK::FVector2D{ 10 / ODistance, 10 / ODistance }, color);
								}

								if (cfg_DrawItemLines)
									ZeroGUI::DrawActorLine(TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, color);

							}

							if (cfg_LootVacuum)
							{

								if (Item->IsA(TFD_SDK::ABP_HealthOrbDroppedItem_C::StaticClass()))
								{
									if (currenthp < (maxhp * (cfg_HPThreshold / 100.0f)))
									{
										if (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - HPLootStartTime).count() >= 1000)
										{
											if (hp_used == true)
												continue;
											else
											{
												hp_used = true;
												HPLootStartTime = std::chrono::steady_clock::now();
											}
										}
										else
											continue;
									}
									else
										continue;
								}
								if (Item->IsA(TFD_SDK::ABP_ManaOrbDroppedItem_C::StaticClass()))
								{
									if (currentmana < (maxmana * (cfg_MPThreshold / 100.0f)))
									{
										if (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - MPLootStartTime).count() >= 1000)
										{
											if (mp_used == true)
												continue;
											else
											{
												mp_used = true;
												MPLootStartTime = std::chrono::steady_clock::now();
											}
										}
										else
											continue;
									}
									else
										continue;
								}
								if (Item->IsA(TFD_SDK::ABP_AmmoGeneralDroppedItem_C::StaticClass()))
								{
									if (GetSpareRounds(TFD_SDK::EM1RoundsType::GeneralRounds, 200) == true)
									{
										if (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - RoundsLootStartTime).count() >= 1000)
										{
											if (rounds_used == true)
												continue;
											else
											{
												rounds_used = true;
												RoundsLootStartTime = std::chrono::steady_clock::now();
											}
										}
										else
											continue;
									}
									else
										continue;
								}
								if (Item->IsA(TFD_SDK::ABP_AmmoEnhancedDroppedItem_C::StaticClass()))
								{
									if (GetSpareRounds(TFD_SDK::EM1RoundsType::EnhancedRounds, 120) == true)
									{
										if (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - RoundsLootStartTime).count() >= 1000)
										{
											if (rounds_used == true)
												continue;
											else
											{
												rounds_used = true;
												RoundsLootStartTime = std::chrono::steady_clock::now();
											}
										}
										else
											continue;
									}
									else
										continue;
								}
								if (Item->IsA(TFD_SDK::ABP_AmmoImpactDroppedItem_C::StaticClass()))
								{
									if (GetSpareRounds(TFD_SDK::EM1RoundsType::ImpactRounds, 25) == true)
									{
										if (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - RoundsLootStartTime).count() >= 1000)
										{
											if (rounds_used == true)
												continue;
											else
											{
												rounds_used = true;
												RoundsLootStartTime = std::chrono::steady_clock::now();
											}
										}
										else
											continue;
									}
									else
										continue;
								}
								if (Item->IsA(TFD_SDK::ABP_AmmoHighpowerDroppedItem_C::StaticClass()))
								{
									if (GetSpareRounds(TFD_SDK::EM1RoundsType::HighpowerRounds, 2) == true)
									{
										if (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - RoundsLootStartTime).count() >= 1000)
										{
											if (rounds_used == true)
												continue;
											else
											{
												rounds_used = true;
												RoundsLootStartTime = std::chrono::steady_clock::now();
											}
										}
										else
											continue;
									}
									else
										continue;
								}
								TFD_SDK::FVector player = LocalPlayerCharacter->K2_GetActorLocation();
								float Distance = WorldPosition.GetDistanceTo(player);
								if (Distance > 150 && Distance < cfg_LootVacuumRange)
									Item->K2_SetActorLocation(player, false, nullptr, true);
							}
						}
					}
				}
			}
		}
	}
}

void InstantInfiltration()
{

	if (!PlayerState || !PlayerState->MissionControlComponent || !PlayerIngameController)
		return;

	TFD_SDK::UM1MissionControlComponent* MCC = PlayerState->MissionControlComponent;
	if (!MCC || !MCC->ActivatedMissions || !MCC->SubServices)
		return;

	if (MCC->ActivatedMissions.Num() == 0)
		return;

	for (TFD_SDK::AM1MissionActor* MissionActor : MCC->ActivatedMissions)
	{
		if (!MissionActor->ProgressInfo.ActivatedTaskActor)
			continue;

		TFD_SDK::AM1MissionTaskActor* TaskActor = MissionActor->ProgressInfo.ActivatedTaskActor;
		if (!TaskActor)
			continue;

		if (!TaskActor->IsA(TFD_SDK::AM1MissionTaskActorDestructionVulgusPost::StaticClass()))
			continue;

		TFD_SDK::AM1MissionTaskActorDestructionVulgusPost* VPost = static_cast<TFD_SDK::AM1MissionTaskActorDestructionVulgusPost*>(TaskActor);
		if (!VPost)
			continue;

		for (TFD_SDK::UM1MissionTaskService* MCCSub : MCC->SubServices)
		{
			if (!MCCSub || !MCCSub->bJoined)
				continue;

			if (!MCCSub->IsA(TFD_SDK::UM1MissionTaskServiceInteraction::StaticClass()))
				continue;

			TFD_SDK::UM1MissionTaskServiceInteraction* MCCInt = static_cast<TFD_SDK::UM1MissionTaskServiceInteraction*>(MCCSub);
			if (!MCCInt)
				continue;
			
			for (TFD_SDK::AM1MissionTargetInteraction* MissionTarget : VPost->MissionTargets)
			{
				if (MissionTarget && MissionTarget->CurrentState != TFD_SDK::EM1MissionTargetState::Deactivated &&
					MissionTarget->CurrentState != TFD_SDK::EM1MissionTargetState::Destructed &&
					std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - AutoInstantInfilStartTime).count() > 500)
				{
					MCCInt->ServerRequestMissionTargetBeginInteraction(MissionTarget, PlayerIngameController);
					AutoInstantInfilStartTime = std::chrono::steady_clock::now();
					return;
				}
			}
		}
	}
}

void RestartLastMission()
{
	if(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - AutoRestartMissionStartTime).count() <= 1000)
		return;

	if (!PlayerState || !PlayerState->MissionControlComponent)
	{
		isRestartMission = false;
		return;
	};

	TFD_SDK::UM1MissionControlComponent* MCC = PlayerState->MissionControlComponent;
	if (!MCC || !MCC->MissionResult)
	{
		isRestartMission = false;
		return;
	}

	if (MCC->AvailableMissions.Num() == 0 
		|| MCC->MissionResult->MissionSubType == TFD_SDK::EM1MissionSubType::VoidFragment)
	{
		isRestartMission = false;
		return;
	}

	if (MCC->ActivatedMissions.Num() > 0 && isRestartMission == false)
		return;
		
	if (MCC->ActivatedMissions.Num() > 0 &&
		(MCC->MissionResult->MissionSubType == TFD_SDK::EM1MissionSubType::DestructionVulgusPost || MCC->MissionResult->MissionCategory == TFD_SDK::EM1MissionCategory::VoidExium))
	{
		LastMissionActor = MCC->MissionResult->WeakActivatedMissionActor.Get();
	}
		

	if (MCC->ActivatedMissions.Num() == 0)
	{
		if ((MCC->MissionResult->MissionSubType == TFD_SDK::EM1MissionSubType::DestructionVulgusPost || MCC->MissionResult->MissionCategory == TFD_SDK::EM1MissionCategory::VoidExium) && LastMissionActor)
		{
			MCC->ServerStartMission(LastMissionActor, true);
			AutoRestartMissionStartTime = std::chrono::steady_clock::now();
			isRestartMission = true;
			return;
		}
		else
		{
			if (cfg_RestartType == 0)
				MCC->ServerRestartLastPlayedMission();
			else if(MCC->MissionResult->MissionTemplateId.ID != 0)
				MCC->ServerStartMissionByTemplateID(MCC->MissionResult->MissionTemplateId);
			AutoRestartMissionStartTime = std::chrono::steady_clock::now();
			isRestartMission = true;
			return;
		}
	}

	for (TFD_SDK::AM1MissionActor* MissionActor : MCC->ActivatedMissions)
	{
		if (MissionActor->ProgressInfo.ActivatedTaskActor->MissionTask
			&& ToLower(MissionActor->ProgressInfo.ActivatedTaskActor->MissionTask->TaskName.ToString()).contains("move"))
			MCC->ServerRunTaskActor(MissionActor->ProgressInfo.ActivatedTaskActor);
		else
			isRestartMission = false;
		break;
	}

}

void MissionTaskTeleporter()
{
	if (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - AutoTeleportStartTime).count() <= 1000)
		return;

	if (!PlayerState || !PlayerState->MissionControlComponent || !LocalPlayerCharacter)
		return;

	TFD_SDK::UM1MissionControlComponent* MCC = PlayerState->MissionControlComponent;
	if (!MCC || !MCC->ActivatedMissions)
		return;

	if (MCC->ActivatedMissions.Num() == 0)
	{
		MissionTaskIndex = 0;
		VoidMissionNodeIndex = 0;
		return;
	}
		
	for (TFD_SDK::AM1MissionActor* MissionActor : MCC->ActivatedMissions)
	{
		if (MissionActor
			&& MissionActor->ProgressInfo.ActivatedTaskActor
			&& MissionActor->ProgressInfo.ActivatedTaskActor->MissionTask
			&& MissionActor->MissionData)
		{
			
			if (MissionActor->ProgressInfo.ActivatedTaskActor->IsA(TFD_SDK::AM1MissionTaskActorVoidErosion::StaticClass()))
			{
				TFD_SDK::AM1MissionTaskActorVoidErosion* TAVE = static_cast<TFD_SDK::AM1MissionTaskActorVoidErosion*>(MissionActor->ProgressInfo.ActivatedTaskActor);
				if (!TAVE)
					return;

				if (VoidMissionNodeIndex != TAVE->CurrentNodeIndex && TAVE->NodeLinks.Num() > 0 && TAVE->CurrentNodeIndex > 0)
				{
					if (!TAVE->NodeLinks[TAVE->CurrentNodeIndex].NodeActor)
						return;
					VoidMissionNodeIndex = TAVE->CurrentNodeIndex;
					AutoTeleportStartTime = std::chrono::steady_clock::now();
					LocalPlayerCharacter->TeleportHandler->ServerMoveToTeleportToLocation(TAVE->NodeLinks[TAVE->CurrentNodeIndex].NodeActor->K2_GetActorLocation(), TAVE->NodeLinks[TAVE->CurrentNodeIndex].NodeActor->K2_GetActorRotation());
					LocalPlayerCharacter->TeleportHandler->ServerFinishTeleportProcess();
				}
				return;
			}
			
			std::string activatedtaskname = ToLower(MissionActor->ProgressInfo.ActivatedTaskActor->MissionTask->TaskName.ToString());
			std::string lasttaskname = "";
			
			if (MissionActor->ProgressInfo.ActivatedTaskIndex > 0)
			{
				//AutoTeleportStartTime = std::chrono::steady_clock::now();
				lasttaskname = ToLower(MissionActor->ProgressInfo.LastTaskActor->MissionTask->TaskName.ToString());

				if (MissionActor->MissionData->MissionDataRowName.ToString().contains("400"))
					return;
				if (!activatedtaskname.contains("move")
					&& !activatedtaskname.contains("interact")
					&& !lasttaskname.contains("move")
					&& !lasttaskname.contains("interact"))
					return;
				if (activatedtaskname.contains("playerset")
					|| activatedtaskname.contains("fadein"))
					return;
			}
			
			if ((activatedtaskname.contains("move")
				|| activatedtaskname.contains("interact"))
				&& MissionTaskIndex != MissionActor->ProgressInfo.ActivatedTaskIndex)
			{
				MCC->ServerRunTaskActor(MissionActor->ProgressInfo.ActivatedTaskActor);
				MissionTaskIndex = MissionActor->ProgressInfo.ActivatedTaskIndex;
				AutoTeleportStartTime = std::chrono::steady_clock::now();
				std::string mtt = MissionActor->MissionData->MissionDataRowName.ToString() + "|" + MissionActor->ProgressInfo.ActivatedTaskActor->MissionTask->TaskName.ToString();
				if (MoveMissionTaskExceptionSet.contains(mtt))
				{
					bool UseWayPoint = MoveMissionTaskExceptionSet[mtt];	
					if (MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints.Num() > 0 && UseWayPoint)
					{
						int WayPointCount = MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints.Num();
						for (int wpi = 0; wpi < WayPointCount; wpi++)
						{
							if (MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints[wpi]->Index_0 == (WayPointCount - 1))
							{
								LocalPlayerCharacter->TeleportHandler->ServerMoveToTeleportToLocation(MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints[wpi]->K2_GetActorLocation(), MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints[wpi]->K2_GetActorRotation());
								LocalPlayerCharacter->TeleportHandler->ServerFinishTeleportProcess();
								return;
							}
						}
					}
					else
					{
						LocalPlayerCharacter->TeleportHandler->ServerMoveToTeleportToLocation(MissionActor->ProgressInfo.ActivatedTaskActor->K2_GetActorLocation(), MissionActor->ProgressInfo.ActivatedTaskActor->K2_GetActorRotation());
						LocalPlayerCharacter->TeleportHandler->ServerFinishTeleportProcess();
						return;
					}
				}
				return;
			}

			if (MissionTaskIndex != MissionActor->ProgressInfo.ActivatedTaskIndex
				&& MissionActor->ProgressInfo.ActivatedTaskIndex > 1)
			{
				
				//AutoTeleportStartTime = std::chrono::steady_clock::now();
				//MCC->ServerRunTaskActor(MissionActor->ProgressInfo.ActivatedTaskActor);
				
				std::string mtt = MissionActor->MissionData->MissionDataRowName.ToString() + "|" + MissionActor->ProgressInfo.ActivatedTaskActor->MissionTask->TaskName.ToString();

				if (ForceTeleportMissionTaskExceptionSet.contains(mtt))
				{
					bool UseWayPoint = ForceTeleportMissionTaskExceptionSet[mtt];
					if (MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints.Num() > 0 && UseWayPoint)
					{
						int WayPointCount = MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints.Num();
						for (int wpi = 0; wpi < WayPointCount; wpi++)
						{
							if (MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints[wpi]->Index_0 == (WayPointCount - 1))
							{
								LocalPlayerCharacter->TeleportHandler->ServerMoveToTeleportToLocation(MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints[wpi]->K2_GetActorLocation(), MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints[wpi]->K2_GetActorRotation());
								LocalPlayerCharacter->TeleportHandler->ServerFinishTeleportProcess();
								MissionTaskIndex = MissionActor->ProgressInfo.ActivatedTaskIndex;
								AutoTeleportStartTime = std::chrono::steady_clock::now();
								return;
							}
						}
					}
					else
					{
						LocalPlayerCharacter->TeleportHandler->ServerMoveToTeleportToLocation(MissionActor->ProgressInfo.ActivatedTaskActor->K2_GetActorLocation(), MissionActor->ProgressInfo.ActivatedTaskActor->K2_GetActorRotation());
						LocalPlayerCharacter->TeleportHandler->ServerFinishTeleportProcess();
						MissionTaskIndex = MissionActor->ProgressInfo.ActivatedTaskIndex;
						AutoTeleportStartTime = std::chrono::steady_clock::now();
						return;
					}
				}

				if (!MissionTaskExceptionSet.contains(mtt) && !lasttaskname.contains("interact"))
				{
					float ODistanceLocalCharacter = 0.0f;
					float ODistanceLastTask = 0.0f;
					float ODistanceBetweenLastTaskLocalChar = 0.0f;
					if (MissionActor->ProgressInfo.LastTaskActor->WayPoints.Num() > 0)
					{
						int WayPointCount = MissionActor->ProgressInfo.LastTaskActor->WayPoints.Num();
						for (int wpi = 0; wpi < WayPointCount; wpi++)
						{
							if (MissionActor->ProgressInfo.LastTaskActor->WayPoints[wpi]->Index_0 == (WayPointCount - 1))
							{
								ODistanceLocalCharacter = MissionActor->ProgressInfo.ActivatedTaskActor->K2_GetActorLocation().GetDistanceTo(LocalPlayerCharacter->K2_GetActorLocation());
								ODistanceLastTask = MissionActor->ProgressInfo.ActivatedTaskActor->K2_GetActorLocation().GetDistanceTo(MissionActor->ProgressInfo.LastTaskActor->WayPoints[wpi]->K2_GetActorLocation());
								ODistanceBetweenLastTaskLocalChar = LocalPlayerCharacter->K2_GetActorLocation().GetDistanceTo(MissionActor->ProgressInfo.LastTaskActor->WayPoints[wpi]->K2_GetActorLocation());
								if (ODistanceLastTask < ODistanceLocalCharacter && ODistanceBetweenLastTaskLocalChar > 1500.0f)
								{
									LocalPlayerCharacter->TeleportHandler->ServerMoveToTeleportToLocation(MissionActor->ProgressInfo.LastTaskActor->WayPoints[wpi]->K2_GetActorLocation(), MissionActor->ProgressInfo.LastTaskActor->WayPoints[wpi]->K2_GetActorRotation());
									LocalPlayerCharacter->TeleportHandler->ServerFinishTeleportProcess();
									AutoTeleportStartTime = std::chrono::steady_clock::now();
								}
								MissionTaskIndex = MissionActor->ProgressInfo.ActivatedTaskIndex;
								return;
							}
						}
					}
					else
					{
						ODistanceLocalCharacter = MissionActor->ProgressInfo.ActivatedTaskActor->K2_GetActorLocation().GetDistanceTo(LocalPlayerCharacter->K2_GetActorLocation());
						ODistanceLastTask = MissionActor->ProgressInfo.ActivatedTaskActor->K2_GetActorLocation().GetDistanceTo(MissionActor->ProgressInfo.LastTaskActor->K2_GetActorLocation());
						ODistanceBetweenLastTaskLocalChar = LocalPlayerCharacter->K2_GetActorLocation().GetDistanceTo(MissionActor->ProgressInfo.LastTaskActor->K2_GetActorLocation());
						if (ODistanceLastTask < ODistanceLocalCharacter && ODistanceBetweenLastTaskLocalChar > 1500.0f)
						{
							LocalPlayerCharacter->TeleportHandler->ServerMoveToTeleportToLocation(MissionActor->ProgressInfo.LastTaskActor->K2_GetActorLocation(), MissionActor->ProgressInfo.LastTaskActor->K2_GetActorRotation());
							LocalPlayerCharacter->TeleportHandler->ServerFinishTeleportProcess();
							AutoTeleportStartTime = std::chrono::steady_clock::now();
						}
						MissionTaskIndex = MissionActor->ProgressInfo.ActivatedTaskIndex;
						return;
					}
				}
			}
		}
	}
}

void MissionTaskTeleporterDebugger()
{
	if (!PlayerState || !PlayerState->MissionControlComponent)
		return;

	TFD_SDK::UM1MissionControlComponent* MCC = PlayerState->MissionControlComponent;
	if (!MCC)
		return;

	if (!MCC->ActivatedMissions)
		return;

	if (MCC->ActivatedMissions.Num() == 0)
		return;	

	for (TFD_SDK::AM1MissionActor* MissionActor : MCC->ActivatedMissions)
	{
		if (MissionActor
			&& MissionActor->ProgressInfo.ActivatedTaskActor
			&& MissionActor->ProgressInfo.ActivatedTaskActor->MissionTask)
		{

			/*if (MissionActor->ProgressInfo.ActivatedTaskActor->MissionTask->TaskName.ToString().contains("Move"))
				MCC->ServerRunTaskActor(MissionActor->ProgressInfo.ActivatedTaskActor);
			else
				LocalPlayerCharacter->TeleportHandler->ServerMoveToTeleportToLocation(MissionActor->ProgressInfo.LastTaskActor->K2_GetActorLocation(), MissionActor->ProgressInfo.LastTaskActor->K2_GetActorRotation());*/

			if (MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints.Num() > 0)
			{
				int WayPointCount = MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints.Num();
				for (int wpi = 0; wpi < WayPointCount; wpi++)
				{
					if (MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints[wpi]->Index_0 == (WayPointCount - 1))
					{
						LocalPlayerCharacter->TeleportHandler->ServerMoveToTeleportToLocation(MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints[wpi]->K2_GetActorLocation(), MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints[wpi]->K2_GetActorRotation());
					}
				}
			}
			else
				LocalPlayerCharacter->TeleportHandler->ServerMoveToTeleportToLocation(MissionActor->ProgressInfo.ActivatedTaskActor->K2_GetActorLocation(), MissionActor->ProgressInfo.ActivatedTaskActor->K2_GetActorRotation());
			return;
		}
	}
}

void MissionTaskActortESP()
{
	if (!PlayerState || !PlayerState->MissionControlComponent || !LocalPlayerCharacter)
		return;

	TFD_SDK::UM1MissionControlComponent* MCC = PlayerState->MissionControlComponent;
	if (!MCC || !MCC->ActivatedMissions)
		return;

	if (MCC->ActivatedMissions.Num() == 0)
		return;	

	for (TFD_SDK::AM1MissionActor* MissionActor : MCC->ActivatedMissions)
	{
		if (MissionActor && MissionActor->MissionData && MissionActor->TaskLinks)
		{
			int n = 0;
			char buffer0[500];
			for (TFD_SDK::FM1MissionTaskLink TL : MissionActor->TaskLinks)
			{
				if (!TL.InstancedTaskActor || !TL.InstancedTaskActor->MissionTask)
					continue;
				std::string MissionTaskActorESPStr = TL.InstancedTaskActor->MissionTask->TaskName.ToString();
				std::string MissionName = MissionActor->MissionData->MissionDataRowName.ToString().c_str();
				int MissionType = (int)MissionActor->MissionData->MissionSubType;
				sprintf_s(buffer0, "Mission Type: %d | MissionName: %s | TaskName: %s | Task Index: %i", MissionType,  MissionName.c_str(), MissionTaskActorESPStr.c_str(), TL.InstancedTaskActor->TaskIndex);
				ZeroGUI::TextLeft((char*)buffer0, TFD_SDK::FVector2D{ 1750, 25.0f + (12.0f * n) }, ColorUltimate, false);
				n += 1;
				for (TFD_SDK::AM1MissionTaskMoveWayPoint* ITA : TL.InstancedTaskActor->WayPoints)
				{
					if (!ITA)
						continue;
					sprintf_s(buffer0, "Mission Type: %d | MissionName: %s | TaskName: %s | Task Index: %i |  WayPoint Index: %i", MissionType, MissionName.c_str(), MissionTaskActorESPStr.c_str(), TL.InstancedTaskActor->TaskIndex, ITA->Index_0);
					ZeroGUI::TextLeft((char*)buffer0, TFD_SDK::FVector2D{ 1850, 25.0f + (12.0f * n) }, ColorWhite, false);
					n += 1;
				}
			}
		}


		if (MissionActor 
			&& MissionActor->ProgressInfo.ActivatedTaskActor 
			&& MissionActor->MissionData)
		{
			TFD_SDK::FVector2D ScreenPos = { -1, -1 };
			
			char buffer1[300];

			float ODistance = 0;
			int i = 0;
			if (MissionActor->ProgressInfo.ActivatedTaskIndex > 0)
			{
				ODistance = MissionActor->ProgressInfo.ActivatedTaskActor->K2_GetActorLocation().GetDistanceTo(LocalPlayerCharacter->K2_GetActorLocation());
				std::string MissionTaskActorESPStr = MissionActor->ProgressInfo.LastTaskActor->MissionTask->TaskName.ToString();
				std::string MissionName = MissionActor->MissionData->MissionDataRowName.ToString().c_str();
				int MissionType = (int)MissionActor->MissionData->MissionSubType;
				sprintf_s(buffer1, "Mission Type: %d | MissionName: %s | LastTaskName: %s", MissionType, MissionName.c_str(), MissionTaskActorESPStr.c_str());
				ZeroGUI::TextLeft((char*)buffer1, TFD_SDK::FVector2D{ 250, 25.0f + (12.0f * i) }, ColorMana, false);
				i += 1;
				for (TFD_SDK::AM1MissionTaskMoveWayPoint* MTMWP : MissionActor->ProgressInfo.LastTaskActor->WayPoints)
				{
					if (!MTMWP)
						continue;
					TFD_SDK::FVector2D ScreenPosWP = { -1, -1 };
					sprintf_s(buffer1, "Mission Type: %d | MissionName: %s | LastTaskName: %s |  WayPoint Index: %i", MissionType, MissionName.c_str(), MissionTaskActorESPStr.c_str(), MTMWP->Index_0);
					ZeroGUI::TextLeft((char*)buffer1, TFD_SDK::FVector2D{ 350, 25.0f + (12.0f * i) }, ColorUncommon, false);
					i += 1;
				}
			}
			std::string MissionTaskActorESPStr = MissionActor->ProgressInfo.ActivatedTaskActor->MissionTask->TaskName.ToString();
			std::string MissionName = MissionActor->MissionData->MissionDataRowName.ToString().c_str();
			int MissionType = (int)MissionActor->MissionData->MissionSubType;
			sprintf_s(buffer1, "Mission Type: %d | MissionName: %s | CurrentTaskName: %s | Task Index: %i |  Distance: %f", MissionType, MissionName.c_str(), MissionTaskActorESPStr.c_str(), MissionActor->ProgressInfo.ActivatedTaskIndex, ODistance);
			ZeroGUI::TextLeft((char*)buffer1, TFD_SDK::FVector2D{ 250, 25.0f + (12.0f * i) }, ColorRed, false);
			i += 1;
			
			if (!MissionTaskActorESPStr.empty() && WorldToScreen(MissionActor->ProgressInfo.ActivatedTaskActor->K2_GetActorLocation(), &ScreenPos))
				ZeroGUI::TextCenter((char*)buffer1, TFD_SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, ColorGreen, false);
				
			for (TFD_SDK::AM1MissionTaskMoveWayPoint* MTMWP : MissionActor->ProgressInfo.ActivatedTaskActor->WayPoints)
			{
				if (!MTMWP)
					continue;
				TFD_SDK::FVector2D ScreenPosWP = { -1, -1 };
				sprintf_s(buffer1, "Mission Type: %d | MissionName: %s | CurrentTaskName: %s | Task Index: %i |  WayPoint Index: %i", MissionType, MissionName.c_str(), MissionTaskActorESPStr.c_str(), MissionActor->ProgressInfo.ActivatedTaskIndex, MTMWP->Index_0);
				ZeroGUI::TextLeft((char*)buffer1, TFD_SDK::FVector2D{ 350, 25.0f + (12.0f * i) }, ColorGold, false);
				i += 1;
				if (!MissionTaskActorESPStr.empty() && WorldToScreen(MTMWP->K2_GetActorLocation(), &ScreenPosWP))
					ZeroGUI::TextCenter((char*)buffer1, TFD_SDK::FVector2D{ ScreenPosWP.X, ScreenPosWP.Y }, ColorMana, false);

			}
		}
	}
}

void LeaveMission()
{
	if (!PlayerState || !PlayerState->MissionControlComponent)
		return;

	TFD_SDK::UM1MissionControlComponent* MCC = PlayerState->MissionControlComponent;
	if (!MCC)
		return;

	if (MCC->ActivatedMissions.Num() == 0)
		return;

	MCC->ServerLeaveMission(TFD_SDK::EM1MissionEndReason::ExplicitGiveUp);
	isRestartMission = false;
}

void SwitchPreset()
{
	if (!LocalPlayerController || !LocalPlayerController->PrivateOnlineServiceComponent)
		return;
	UC::int32 PresetIndex = -1;

	if (HotSwapPreset[HotSwapIndex] != -1 && !PresetsMap.empty())
	{
		PresetIndex = HotSwapPreset[HotSwapIndex];
		if (PresetIndex >= 0)
		{
			for (TFD_SDK::UM1PrivateOnlineSubService* Subserv : LocalPlayerController->PrivateOnlineServiceComponent->SubServices)
			{
				if (!Subserv)
					return;
				if (Subserv->IsA(TFD_SDK::UM1PrivateOnlineServicePreset::StaticClass()) && Subserv->bIsReady == true)
				{
					static_cast<TFD_SDK::UM1PrivateOnlineServicePreset*>(Subserv)->ServerRequestApplyPreset(PresetIndex);
					break;
				}
			}
		}
	}
}

void RefreshPresetList(bool clearall)
{
	if (!LocalPlayerController ||
		!LocalPlayerController->PrivateOnlineServiceComponent ||
		!LocalPlayerController->PrivateOnlineServiceComponent->CachedAccount.Get()
		)
		return;

	TFD_SDK::UM1Account* Account = LocalPlayerController->PrivateOnlineServiceComponent->CachedAccount.Get();

	if (Account->Preset)
	{
		if (clearall)
			HotSwapPreset = { -1, -1, -1, -1, -1, -1 };
		PresetsMap.clear();
		for (const auto& Pair : static_cast<TFD_SDK::UM1AccountPreset*>(Account->Preset)->PresetSlotByIndex)
		{
			TFD_SDK::FM1PresetSlot Value = Pair.Value();
			if (!Value.PresetName.ToString().empty())
			{
				PresetsMap.insert({ Value.PresetIndex,  Value.PresetName.ToString() });
			}
		}
	}
}

void ResearchBookmarkedItems()
{
	if (!GWorld ||
		!LocalPlayerController || 
		!LocalPlayerController->PrivateOnlineServiceComponent || 
		!LocalPlayerController->PrivateOnlineServiceComponent->SubServices)
		return;

	TFD_SDK::UM1LocalGameInstanceSubsystem* LGIS = TFD_SDK::UM1LocalGameInstanceSubsystem::Get(GWorld);
	if (!LGIS || !LGIS->ResearchSystem)
		return;

	TFD_SDK::UM1ResearchSystem* RS = LGIS->ResearchSystem;
	if (!RS)
		return;

	for (TFD_SDK::UM1PrivateOnlineSubService* Subserv : LocalPlayerController->PrivateOnlineServiceComponent->SubServices)
	{
		if (!Subserv)
			continue;
		if (Subserv->IsA(TFD_SDK::UM1PrivateOnlineServiceResearch::StaticClass()) && Subserv->bIsReady == true)
		{
			for (const auto& RDTID : RS->BookmarkResearchTids)
			{
				static_cast<TFD_SDK::UM1PrivateOnlineServiceResearch*>(Subserv)->ServerRequestStartResearch(RDTID, cfg_ResearchQty);
			}
		}
	}
}

void EncryptedVaultDrops()
{
	if (!GWorld || !LocalPlayerController)
		return;
	bool vaultfound = false;
	if (GWorld->Levels.IsValid())
	{
		for (int i = 0; i < GWorld->Levels.Num(); ++i)
		{
			if (GWorld->Levels.IsValidIndex(i))
			{
				TFD_SDK::ULevel* Level = GWorld->Levels[i];
				if (!Level) continue;

				for (int j = 0; j < Level->Actors.Num(); ++j)
				{
					TFD_SDK::AActor* Actor = (TFD_SDK::AActor*)Level->Actors[j];
					if (!Actor)
						continue;
					if (Actor->IsA(TFD_SDK::AM1MiniGameActor::StaticClass()))
					{
						TFD_SDK::AM1MiniGameActor* Vault = static_cast<TFD_SDK::AM1MiniGameActor*>(Actor);
						if (!Vault)
							continue;
						if (cfg_EncryptedVaultRewardType == 0)
						{
							TFD_SDK::FM1MiniGameResult Minigame_Result;
							Minigame_Result.FieldDifficultyTemplateId = Vault->FieldDifficultyTid;
							Minigame_Result.MiniGameTemplateId = Vault->MiniGameTid;
							Minigame_Result.Result = TFD_SDK::EM1MiniGameResult::Success;
							
							Vault->ServerOnMiniGameEnded(Minigame_Result);
							Vault->ClientStopMiniGame();
						}
						if (cfg_EncryptedVaultRewardType == 1)
						{
							Vault->ClientStartMiniGame(Vault->MiniGameTid, { LocalPlayerCharacter->CharacterId.ID }, Vault->FieldDifficultyTid, TFD_SDK::EM1MiniGameDifficulty::Normal);
							Vault->ServerDropItems(static_cast<TFD_SDK::AController*>(LocalPlayerController));
						}
						vaultfound = true;
					}
					if (vaultfound)
						break;
				}
			}
			if (vaultfound)
				break;
		}
	}
}

void ContainerDrop()
{
	if (!GWorld || !GWorld->Levels.IsValid() || !PlayerIngameController || !LocalPlayerCharacter)
		return;

	for (int i = 0; i < GWorld->Levels.Num(); ++i)
	{
		if (!GWorld->Levels.IsValidIndex(i))
			continue;

		TFD_SDK::ULevel* Level = GWorld->Levels[i];
		if (!Level)
			continue;

		for (int j = 0; j < Level->Actors.Num(); ++j)
		{
			TFD_SDK::AActor* Actor = (TFD_SDK::AActor*)Level->Actors[j];
			if (!Actor || !Actor->IsA(TFD_SDK::AM1FieldInteractableActor::StaticClass()))
				continue;

			TFD_SDK::AM1FieldInteractableActor* Interactable = static_cast<TFD_SDK::AM1FieldInteractableActor*>(Actor);
			if (!Interactable)
				continue;

			TFD_SDK::FVector WorldPosition = Interactable->K2_GetActorLocation();
			TFD_SDK::FVector PlayerPosition = LocalPlayerCharacter->K2_GetActorLocation();
			float Distance = WorldPosition.GetDistanceTo(PlayerPosition);
			if (Distance <= cfg_ContainersRange)
			{
				if (cfg_ChangeDropCount = false)
				{
					PlayerIngameController->ServerRequestFieldObjectDropItems(Interactable);
					Sleep(10);
				}
				if (cfg_ChangeDropCount = true)
				{
					for (int count = 0; count < cfg_DropCount; ++count)
					{
						PlayerIngameController->ServerRequestFieldObjectDropItems(Interactable);
					}
				}
			}
		}
	}
}

bool GetSpareRounds(TFD_SDK::EM1RoundsType RoundsType,int RoundsPerLoot)
{
	//return true;

	if(!LocalPlayerCharacter || !LocalPlayerCharacter->RoundsComponent)
		return false;	

	int CurrentSpareRounds = 0;
	int MaxRoundCapacity = 0;

	CurrentSpareRounds = LocalPlayerCharacter->RoundsComponent->CurrentSpareRounds[(int)RoundsType];

	for (const auto& Capacities : LocalPlayerCharacter->RoundsComponent->CachedMaxCapacities)
	{
		if(Capacities.Key() == RoundsType)
		{
			MaxRoundCapacity = Capacities.Value().CachedCapacity;
			break;
		}
	}

	if (CurrentSpareRounds <= (MaxRoundCapacity - RoundsPerLoot))
		return true;
	else
		return false;
}

void InfiniteAmmoAndSkills()
{
	if(!PlayerIngameController->MultiSupplierObtainComponent)
		return;
	TFD_SDK::FM1TemplateId AmmoTemplateId;
	TFD_SDK::AActor* InNpcRelative = nullptr;
	AmmoTemplateId.ID = 363100004;
	PlayerIngameController->MultiSupplierObtainComponent->ServerRequestProcessInteraction(AmmoTemplateId, ObjectUniqueID, InNpcRelative);
}

HRESULT UpdateControllerState()
{
	DWORD dwResult;
	for (DWORD i = 0; i < 4; i++)
	{
		// Simply get the state of the controller from XInput.
		dwResult = XInputGetState(i, &g_Controllers[i].state);

		if (dwResult == ERROR_SUCCESS)
			g_Controllers[i].bConnected = true;
		else
			g_Controllers[i].bConnected = false;
	}
	return S_OK;
}

void Aimbot()
{
	if (!LocalPlayerController || !LocalPlayerController->PlayerCameraManager || !GWorld)
		return;
	static int currentTargetID;

	if (cfg_EnableAimbotHold)
	{
		if (!cfg_AimbotController && !Input::IsKeyHeld(cfg_AimbotHoldKey))
		{
			currentTargetID = 0;
			Aimbot_BoneIndex = -1;
			Aimbot_Target = nullptr;
			return;
		}
		if (cfg_AimbotController)
		{
			bool isAiming = false;
			for (DWORD i = 0; i < 4; i++)
			{
				if (g_Controllers[i].bConnected)
				{
					if (g_Controllers[i].state.Gamepad.bLeftTrigger >= XINPUT_GAMEPAD_TRIGGER_THRESHOLD)
					{
						isAiming = true;
					}
				}
			}
			if (!isAiming)
			{
				currentTargetID = 0;
				Aimbot_BoneIndex = -1;
				Aimbot_Target = nullptr;
				return;
			}
		}
	}
	else if (cfg_EnableAimbotToggle && !cfg_EnableAimbot)
	{
		currentTargetID = 0;
		Aimbot_BoneIndex = -1;
		Aimbot_Target = nullptr;
		return;
	}

	if (currentTargetID && Aimbot_Target && Aimbot_BoneIndex != -1)
	{
		if (Aimbot_Target->IsA(TFD_SDK::AM1Character::StaticClass()))
		{
			TFD_SDK::AM1Character* AimTarget = static_cast<TFD_SDK::AM1Character*>(Aimbot_Target);
			if (AimTarget)
			{
				if (!AimTarget->IsDead() && LocalPlayerController->LineOfSightTo(AimTarget, TFD_SDK::FVector{ 0, 0, 0 }, false))
				{
					if (AimTarget->Mesh && AimTarget->Mesh->BoneArray.IsValid() && AimTarget->Mesh->BoneArray.IsValidIndex(Aimbot_BoneIndex))
					{
						TFD_SDK::FMatrix ComponentMatrix = TFD_SDK::UKismetMathLibrary::Conv_TransformToMatrix(AimTarget->Mesh->K2_GetComponentToWorld());
						TFD_SDK::FTransform bone = AimTarget->Mesh->BoneArray[Aimbot_BoneIndex];
						TFD_SDK::FMatrix BoneMatrix = TFD_SDK::UKismetMathLibrary::Conv_TransformToMatrix(bone);
						TFD_SDK::FMatrix WorldMatrix = TFD_SDK::UKismetMathLibrary::Multiply_MatrixMatrix(BoneMatrix, ComponentMatrix);
						TFD_SDK::FTransform WorldPosition = TFD_SDK::UKismetMathLibrary::Conv_MatrixToTransform(WorldMatrix);
						TFD_SDK::FRotator Angles = TFD_SDK::UKismetMathLibrary::FindLookAtRotation(LocalPlayerController->PlayerCameraManager->GetCameraLocation(), WorldPosition.Translation);
						LocalPlayerController->SetControlRotation(
							TFD_SDK::UKismetMathLibrary::RInterpTo(LocalPlayerController->PlayerCameraManager->GetCameraRotation(), Angles, ((TFD_SDK::UGameplayStatics*)TFD_SDK::UGameplayStatics::StaticClass())->GetWorldDeltaSeconds(GWorld), cfg_AimbotSmoothing));
						return;
					}

				}
			}

		}
		else if (Aimbot_Target->IsA(TFD_SDK::AM1AbilityActor::StaticClass()))
		{

			TFD_SDK::FRotator Angles = TFD_SDK::UKismetMathLibrary::FindLookAtRotation(LocalPlayerController->PlayerCameraManager->GetCameraLocation(), Aimbot_Target->K2_GetActorLocation());
			LocalPlayerController->SetControlRotation(
				TFD_SDK::UKismetMathLibrary::RInterpTo(LocalPlayerController->PlayerCameraManager->GetCameraRotation(), Angles, ((TFD_SDK::UGameplayStatics*)TFD_SDK::UGameplayStatics::StaticClass())->GetWorldDeltaSeconds(GWorld), cfg_AimbotSmoothing));
			// This draws the class name of the aimbot target
			//ZeroGUI::TextCenter((char*)Aimbot_Target->Class->Super->GetFullName().c_str(), TFD_SDK::FVector2D{ 200, 200 }, TFD_SDK::FLinearColor{ 0.0f, 0.0f, 1.0f, 1.0f }, false);
			return;
		}
		currentTargetID = 0;
		Aimbot_BoneIndex = -1;
		Aimbot_Target = nullptr;
	}

	Aimbot_Target = GetClosestEnemy(currentTargetID);
}

TFD_SDK::AActor* GetClosestEnemy(int& ID)
{

	TFD_SDK::AActor* ret = nullptr;
	float closestDistance = INFINITY;
	Aimbot_BoneIndex = -1;


	if (Actors && LocalPlayerController)
	{
		if (Actors->Characters.IsValid() && Actors->Characters.Num() > 0)
		{
			int StartNumber = Actors->Characters.Num();
			for (int i = 0; i < Actors->Characters.Num(); i++)
			{
				if (Actors->Characters.Num() != StartNumber)
					return nullptr;
				if (!Actors->Characters.IsValidIndex(i))
					continue;
				TFD_SDK::AM1Character* p = Actors->Characters[i];
				if (p)
				{
					if (p->IsDead())
						continue;
					//if (!p->IsA(TFD_SDK::AM1Monster::StaticClass()) && !p->CharacterAttribute->IsA(TFD_SDK::UM1MonsterAttribute::StaticClass()))
					//if (!p->CharacterAttribute->IsA(TFD_SDK::UM1MonsterAttribute::StaticClass()))
					//	continue;
					if (p->IsA(TFD_SDK::AM1Monster::StaticClass()) || (p->CharacterAttribute && p->CharacterAttribute->IsA(TFD_SDK::UM1MonsterAttribute::StaticClass())))
					{
						if (!LocalPlayerController->LineOfSightTo(p, TFD_SDK::FVector{ 0, 0, 0 }, false))
						{
							if (p->Children.Num() > 0)
							{
								bool any = false;
								for (int c = 0; c < p->Children.Num(); c++)
								{
									if (p->Children[c]->IsA(TFD_SDK::AM1AbilityActor::StaticClass()))
										if (ToLower(p->Children[c]->Class->GetFullName()).contains("immun") || ToLower(p->Children[c]->Class->GetFullName()).contains("judgementeye"))
											if (LocalPlayerController->LineOfSightTo(p->Children[c], TFD_SDK::FVector{ 0, 0, 0 }, false))
												any = true;
								}
								if (!any)
									continue;
							}
							else
								continue;
						}
						if (!IDBoneMap.contains(p->CharacterId.ID))
						{
							if (p->Mesh && p->Mesh->BoneArray.IsValid() && p->Mesh->BoneArray.Num() > 0)
							{
								std::vector<int> bones = { };
								for (int j = 0; j < p->Mesh->BoneArray.Num(); j++)
								{
									if (p->Mesh->BoneArray.IsValidIndex(j))
									{
										std::string bonename = ToLower(p->Mesh->GetBoneName(j).ToString());
										if (bonename.contains("weak") || bonename.contains("head") || bonename == "bn_shape_bip001_spine2")
										{
											bones.push_back(j);
										}
									}
								}
								if (bones.size() > 0)
								{
									IDBoneMap.insert({ p->CharacterId.ID, bones });
									BonesChanged = true;
								}
							}
						}
						else
						{
							// Some enemies have 'balls' that spawn, they are Children of the current Actor with a class of M1AbilityActor
							// no bones for them, so target just their actor location?
							if (p->Mesh && p->Mesh->BoneArray.IsValid() && p->Mesh->BoneArray.Num() > 0)
							{
								TFD_SDK::FMatrix ComponentMatrix = TFD_SDK::UKismetMathLibrary::Conv_TransformToMatrix(p->Mesh->K2_GetComponentToWorld());
								std::vector<int> indexes = IDBoneMap[p->CharacterId.ID];
								for (int j = 0; j < indexes.size(); j++)
								{
									if (p->Mesh->BoneArray.IsValidIndex(indexes[j]))
									{
										TFD_SDK::FTransform bone = p->Mesh->BoneArray[indexes[j]];
										TFD_SDK::FMatrix BoneMatrix = TFD_SDK::UKismetMathLibrary::Conv_TransformToMatrix(bone);
										TFD_SDK::FMatrix WorldMatrix = TFD_SDK::UKismetMathLibrary::Multiply_MatrixMatrix(BoneMatrix, ComponentMatrix);
										TFD_SDK::FTransform WorldPosition = TFD_SDK::UKismetMathLibrary::Conv_MatrixToTransform(WorldMatrix);
										TFD_SDK::FVector2D BoneScreenPos = { -1, -1 };
										if (WorldToScreen(WorldPosition.Translation, &BoneScreenPos))
										{
											//ZeroGUI::TextCenter((char*)"Bone", BoneScreenPos, TFD_SDK::FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, true);

											float distance = TFD_SDK::UKismetMathLibrary::Distance2D(ScreenMiddle, BoneScreenPos);
											//ZeroGUI::TextCenter((char*)p->Class->GetFullName().c_str(), TFD_SDK::FVector2D{ 500, 500 }, TFD_SDK::FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);
											if (distance > cfg_AimbotFOV)
												continue;
											if (distance < closestDistance)
											{
												closestDistance = distance;
												ID = p->Index;
												Aimbot_BoneIndex = indexes[j];
												ret = p;
											}
										}
									}
								}
							}

							if (p->Children.Num() > 0)
							{
								for (int a = 0; a < p->Children.Num(); a++)
								{
									/*TFD_SDK::FVector2D ScreenPos = { -1, -1 };
									if (WorldToScreen(p->Children[a]->K2_GetActorLocation(), &ScreenPos))
									{
										ZeroGUI::TextCenter((char*)p->Children[a]->Class->GetFullName().c_str(), ScreenPos, TFD_SDK::FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);
									}*/
									if (p->Children[a]->IsA(TFD_SDK::AM1AbilityActor::StaticClass()))
									{
										std::string childname = ToLower(p->Children[a]->Class->GetFullName());
										if (!(childname.contains("immun")) && !(childname.contains("judgementeye")))
											continue;
										TFD_SDK::FVector2D ScreenPos = { -1, -1 };
										if (WorldToScreen(p->Children[a]->K2_GetActorLocation(), &ScreenPos))
										{
											float distance = TFD_SDK::UKismetMathLibrary::Distance2D(ScreenMiddle, ScreenPos);
											//ZeroGUI::TextCenter((char*)p->Children[a]->Class->GetFullName().c_str(), TFD_SDK::FVector2D{ 500.0f, 200.0f + (50.0f * a) }, TFD_SDK::FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);
											if (distance > cfg_AimbotFOV)
												continue;
											if (distance < closestDistance)
											{
												closestDistance = distance;
												ID = p->Children[a]->Index;
												Aimbot_BoneIndex = 999;
												ret = p->Children[a];
											}
										}
									}
								}
							}

						}
					}
				}
			}
		}
	}

	return ret;
}

void DrawMenu()
{
	if (ZeroGUI::Window((char*)"DescendantInternal - UnknownCheats.me", &cfg_WindowPos, TFD_SDK::FVector2D{ 500.0f, 650.0f }, cfg_DrawMenu))
	{

		static int tab = 0;
		if (ZeroGUI::ButtonTab((char*)"Actors", TFD_SDK::FVector2D{ 110, 25 }, tab == 0)) tab = 0;
		if (ZeroGUI::ButtonTab((char*)"Items", TFD_SDK::FVector2D{ 110, 25 }, tab == 1)) tab = 1;
		if (ZeroGUI::ButtonTab((char*)"Aimbot", TFD_SDK::FVector2D{ 110, 25 }, tab == 2)) tab = 2;
		if (ZeroGUI::ButtonTab((char*)"Extras", TFD_SDK::FVector2D{ 110, 25 }, tab == 3)) tab = 3;
		if (ZeroGUI::ButtonTab((char*)"Mission", TFD_SDK::FVector2D{ 110, 25 }, tab == 4)) tab = 4;
		if (ZeroGUI::ButtonTab((char*)"Preset", TFD_SDK::FVector2D{ 110, 25 }, tab == 5)) tab = 5;
		if (ZeroGUI::ButtonTab((char*)"Tivmo tuff", TFD_SDK::FVector2D{ 110, 25 }, tab == 6)) tab = 6;
		ZeroGUI::NextColumn(130.0f);

		if (tab == 0)
		{
			ZeroGUI::Checkbox((char*)"Enable Actor ESP", &cfg_EnablePlayerEnemyESP);
			ZeroGUI::Checkbox((char*)"Draw Player Boxes", &cfg_DrawPlayerBoxes);
			ZeroGUI::Checkbox((char*)"Draw Player Names", &cfg_DrawPlayerNames);
			ZeroGUI::Checkbox((char*)"Draw Player Lines", &cfg_DrawPlayerLines);
			ZeroGUI::Checkbox((char*)"Draw Enemy Boxes", &cfg_DrawEnemyBoxes);
			ZeroGUI::Checkbox((char*)"Draw Enemy Names", &cfg_DrawEnemyNames);
			ZeroGUI::Checkbox((char*)"Draw Enemy Lines", &cfg_DrawEnemyLines);
		}
		if (tab == 1)
		{
			ZeroGUI::Checkbox((char*)"Enable Item ESP", &cfg_EnableItemESP);
			ZeroGUI::Checkbox((char*)"Draw Item Boxes", &cfg_DrawItemBoxes);
			ZeroGUI::Checkbox((char*)"Draw Item Names", &cfg_DrawItemNames);
			ZeroGUI::Checkbox((char*)"Draw Item Lines", &cfg_DrawItemLines);
			ZeroGUI::Checkbox((char*)"Enable Loot Vacuum", &cfg_LootVacuum);
			ZeroGUI::SliderFloat((char*)"Loot Vacuum Range", &cfg_LootVacuumRange, 151.0f, 200000.0f);
			ZeroGUI::SliderFloat((char*)"Vacuum HP Loot when Current HP below %", &cfg_HPThreshold, 0.0f, 100.0f);
			ZeroGUI::SliderFloat((char*)"Vacuum MP Loot when Current MP below %", &cfg_MPThreshold, 0.0f, 100.0f);
			ZeroGUI::Text((char*)"Loot Vacuum Toggle:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Loot Vacuum Hotkey", TFD_SDK::FVector2D{ 100, 25 }, &cfg_LootVacuumKey);
			ZeroGUI::Checkbox((char*)"Draw Encrypted Vaults", &cfg_DrawVaults);
			ZeroGUI::Checkbox((char*)"Draw Munition", &cfg_DrawMunition);
			ZeroGUI::Checkbox((char*)"Draw Resource Box", &cfg_DrawResourceBox);
			ZeroGUI::Checkbox((char*)"Draw Void Vessel Box", &cfg_DrawVoidVesselBox);
			ZeroGUI::Text((char*)"Encrypted Vault Drops key:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Encrypted Vault Drops key", TFD_SDK::FVector2D{ 100, 25 }, &cfg_EncryptedVaultDropsKey);
			ZeroGUI::Combobox((char*)"Vault Drop Reward Type", TFD_SDK::FVector2D{ 160, 25 }, &cfg_EncryptedVaultRewardType, "Safe", "Risky", NULL);
			ZeroGUI::Text((char*)"[Safe]: Press key once in vault minigame");
			ZeroGUI::Text((char*)"[Risky]: Press key as many as you want in vault minigame.");
		}
		if (tab == 2)
		{
			if (ZeroGUI::Checkbox((char*)"Enable Aimbot(Hold)", &cfg_EnableAimbotHold))
			{
				if (cfg_EnableAimbotHold)
					cfg_EnableAimbotToggle = false;
			}
			ZeroGUI::Text((char*)"Aimbot Hold Key:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Aimbot Hold Key", TFD_SDK::FVector2D{ 100, 25 }, &cfg_AimbotHoldKey);
			if (ZeroGUI::Checkbox((char*)"Enable Aimbot(Toggle)", &cfg_EnableAimbotToggle))
			{
				if (cfg_EnableAimbotToggle)
					cfg_EnableAimbotHold = false;
			}
			ZeroGUI::Text((char*)"Aimbot Togle Key:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Aimbot Toggle Key", TFD_SDK::FVector2D{ 100, 25 }, &cfg_AimbotToggleKey);
			ZeroGUI::Checkbox((char*)"Enable Controller Support", &cfg_AimbotController);
			ZeroGUI::Text((char*)"(Hold Mode with Left Trigger Only)");
			ZeroGUI::SliderFloat((char*)"Aimbot Screen Distance", &cfg_AimbotFOV, 1.0f, 1000.0f);
			ZeroGUI::SliderFloat((char*)"Aimbot Speed", &cfg_AimbotSmoothing, 1.0f, 100.0f);
			ZeroGUI::Checkbox((char*)"Enable No Spread", &cfg_AimbotNoSpread);
			/*if (ZeroGUI::Checkbox((char*)"Enable No Spread", &cfg_AimbotNoSpread))
			{
				if (cfg_AimbotNoSpread)
				{
					DWORD old;
					VirtualProtect(NoSpreadAddress, sizeof(uint8_t) * 8, PAGE_EXECUTE_READWRITE, &old);
					memcpy(NoSpreadAddress, &NoSpreadCheat, sizeof(uint8_t) * 8);
					VirtualProtect(NoSpreadAddress, sizeof(uint8_t) * 8, old, NULL);
				}
				else
				{
					DWORD old;
					VirtualProtect(NoSpreadAddress, sizeof(uint8_t) * 8, PAGE_EXECUTE_READWRITE, &old);
					memcpy(NoSpreadAddress, &NoSpreadOriginal, sizeof(uint8_t) * 8);
					VirtualProtect(NoSpreadAddress, sizeof(uint8_t) * 8, old, NULL);
				}
			}*/
			ZeroGUI::Checkbox((char*)"Enable No Recoil", &cfg_AimbotNoRecoil);
			/*if (ZeroGUI::Checkbox((char*)"Enable No Recoil", &cfg_AimbotNoRecoil))
			{
				if (cfg_AimbotNoRecoil)
				{
					DWORD old;
					VirtualProtect(NoRecoilAddress, sizeof(uint8_t), PAGE_EXECUTE_READWRITE, &old);
					memcpy(NoRecoilAddress, &Recoil[1], sizeof(uint8_t));
					VirtualProtect(NoRecoilAddress, sizeof(uint8_t), old, NULL);
				}
				else
				{
					DWORD old;
					VirtualProtect(NoRecoilAddress, sizeof(uint8_t), PAGE_EXECUTE_READWRITE, &old);
					memcpy(NoRecoilAddress, &Recoil[0], sizeof(uint8_t));
					VirtualProtect(NoRecoilAddress, sizeof(uint8_t), old, NULL);
				}
			}*/
			ZeroGUI::Checkbox((char*)"Enable Rapidfire", &cfg_AimbotRapidFire);
			ZeroGUI::SliderFloat((char*)"Rapid Fire Rate %", &cfg_FireRate, 1.0f, 90.0f);
			/*if (ZeroGUI::Checkbox((char*)"Enable Rapidfire", &cfg_AimbotRapidFire))
			{
				if (cfg_AimbotRapidFire)
				{
					DWORD old;
					VirtualProtect(RapidFireAddress, sizeof(uint8_t), PAGE_EXECUTE_READWRITE, &old);
					memcpy(RapidFireAddress, &RapidFire[1], sizeof(uint8_t));
					VirtualProtect(RapidFireAddress, sizeof(uint8_t), old, NULL);
				}
				else
				{
					DWORD old;
					VirtualProtect(RapidFireAddress, sizeof(uint8_t), PAGE_EXECUTE_READWRITE, &old);
					memcpy(RapidFireAddress, &RapidFire[0], sizeof(uint8_t));
					VirtualProtect(RapidFireAddress, sizeof(uint8_t), old, NULL);
				}
			}*/
			ZeroGUI::Checkbox((char*)"Enable Auto-Reload", &cfg_NoReload);
			ZeroGUI::Checkbox((char*)"Enable Modify Grapples (MidAir Grapples Only)", &cfg_EnableModifyGrapple);
			ZeroGUI::SliderFloat((char*)"Grapple Range", &cfg_AimbotGrappleRange, 1000.0f, 20000.0f);
			//ZeroGUI::Checkbox((char*)"Enable Infinite Ammo and Skills", &cfg_InfiniteAmmoAndSkills);
		}
		if (tab == 3)
		{
			if (ZeroGUI::Checkbox((char*)"Enable Names Cache", &cfg_CacheEnemyNames) && cfg_CacheEnemyNames)
				WriteEnemyNamesData();
			if (ZeroGUI::Checkbox((char*)"Enable Bones Cache", &cfg_CacheEnemyBones) && cfg_CacheEnemyBones)
				WriteEnemyBonesData();


			/*ZeroGUI::Text((char*)"Hot Swap Key:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Hot Swap Hotkey", TFD_SDK::FVector2D{ 110, 25 }, &cfg_HotSwapKey);*/

			ZeroGUI::SliderFloat((char*)"Timescale:", &cfg_TimeScale, 1.0f, 10.0f);
			ZeroGUI::Text((char*)"Timescale Toggle:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Timescale Hotkey:", TFD_SDK::FVector2D{ 100, 25 }, &cfg_TimeScaleKey);

			ZeroGUI::Text((char*)"Timescale Hold:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Timescale Hold Hotkey:", TFD_SDK::FVector2D{ 100, 25 }, &cfg_TimeScaleHoldKey);

			ZeroGUI::SliderInt((char*)"Research Qty", &cfg_ResearchQty, 1, 2000);
			if (ZeroGUI::Button((char*)"-1", TFD_SDK::FVector2D{ 30, 30 }))
			{
				if (cfg_ResearchQty > 2)
					cfg_ResearchQty -= 1;
				else
					cfg_ResearchQty = 1;
			}
			ZeroGUI::SameLine();
			if (ZeroGUI::Button((char*)"+1", TFD_SDK::FVector2D{ 30, 30 }))
			{
				if (cfg_ResearchQty < 2000)
					cfg_ResearchQty += 1;
				else
					cfg_ResearchQty = 2000;
			}
			if (ZeroGUI::Button((char*)"Start Research", TFD_SDK::FVector2D{ 120, 30 }))
			{
				ResearchBookmarkedItems();
			}
		}
		if (tab == 4)
		{
			// This doesn't work outside of a private dungeon instance I think? I never thouroughly tested
			//if (ZeroGUI::Button((char*)"AI", TFD_SDK::FVector2D{ 120, 30 }))
			//{
			//	GWorld->PersistentLevel->WorldSettings->bEnableAISystem = 0;
			//}
			ZeroGUI::Checkbox((char*)"Auto Instant Outpost Infil", &cfg_EnableAutoInstantInfil);
			ZeroGUI::Text((char*)"Instant Infil Toggle Key:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Instant Outpost Infil Toggle Key", TFD_SDK::FVector2D{ 100, 25 }, & cfg_InstantInfilKey);

			ZeroGUI::Checkbox((char*)"Auto Restart Mission", &cfg_EnableAutoRestartMission);
			ZeroGUI::Text((char*)"Restart Mission Toggle Key:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Restart Last Mission Toggle Key", TFD_SDK::FVector2D{ 100, 25 }, & cfg_RestartMissionKey);
		
			ZeroGUI::Combobox((char*)"Restart Type", TFD_SDK::FVector2D{ 160, 25 }, & cfg_RestartType, "From Starting Point", "Current Position", NULL);
			
			ZeroGUI::Text((char*)"Leave Mission:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Leave Mission Hotkey", TFD_SDK::FVector2D{ 100, 25 }, &cfg_LeaveMissionKey);

			ZeroGUI::Checkbox((char*)"Auto Mission Task Teleport", &cfg_EnableMissionTaskTeleporter);
			ZeroGUI::Text((char*)"Mission Teleport Toggle Key:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Mission Teleport Toggle Key", TFD_SDK::FVector2D{ 100, 25 }, & cfg_TPMissionKey);

		}
		if (tab == 5)
		{
			//ZeroGUI::Combobox((char*)"Select Preset", TFD_SDK::FVector2D{ 130, 25 }, 0, "Zero", NULL);
			// Fix the issue by passing the address of the integer variable instead of the integer itself.  
			ZeroGUI::Checkbox((char*)"Show Swap Slot Overlay", &cfg_HotSwapOverlay);
			ZeroGUI::Text((char*)"Use the Up and Down keys to change slots.");
			char SlotText[64];
			sprintf_s(SlotText, "Preset Name for Slot %d: %s", HotSwapIndex, HotSwapPreset[HotSwapIndex] != -1 && !PresetsMap.empty() ? PresetsMap[HotSwapPreset[HotSwapIndex]].c_str() : "None");
			ZeroGUI::Text((char*)SlotText);
			if (ZeroGUI::Button((char*)"Clear Preset Slot", TFD_SDK::FVector2D{ 120, 30 }))
			{
				HotSwapPreset[HotSwapIndex] = -1;
			}
			if (ZeroGUI::Button((char*)"Refresh Preset List", TFD_SDK::FVector2D{ 120, 30 }))
			{
				RefreshPresetList(true);
				//WritePresetsData();
			}
			ZeroGUI::Text((char*)"Switch Preset:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Switch Preset Hotkey", TFD_SDK::FVector2D{ 100, 25 }, &cfg_SwitchPreset);
			if (!PresetsMap.empty())
			{
				ZeroGUI::Combobox1((char*)"Select Preset 1", TFD_SDK::FVector2D{ 160, 25 }, &HotSwapPreset[0], PresetsMap);
				ZeroGUI::Combobox1((char*)"Select Preset 2", TFD_SDK::FVector2D{ 160, 25 }, &HotSwapPreset[1], PresetsMap);
				ZeroGUI::Combobox1((char*)"Select Preset 3", TFD_SDK::FVector2D{ 160, 25 }, &HotSwapPreset[2], PresetsMap);
				ZeroGUI::Combobox1((char*)"Select Preset 4", TFD_SDK::FVector2D{ 160, 25 }, &HotSwapPreset[3], PresetsMap);
				ZeroGUI::Combobox1((char*)"Select Preset 5", TFD_SDK::FVector2D{ 160, 25 }, &HotSwapPreset[4], PresetsMap);
				ZeroGUI::Combobox1((char*)"Select Preset 6", TFD_SDK::FVector2D{ 160, 25 }, &HotSwapPreset[5], PresetsMap);
			}
		}
		if (tab == 6)
		{
			ZeroGUI::Text((char*)"Drop Hotkey:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Container Drop Hotkey", TFD_SDK::FVector2D{ 100, 25 }, &cfg_ContainerDropKey);
			ZeroGUI::SliderFloat((char*)"Range", &cfg_ContainersRange, 200.0f, 5000.0f);
			ZeroGUI::Checkbox((char*)"Specify Drop Calls Made", &cfg_ChangeDropCount);
			ZeroGUI::SliderInt((char*)"Custom Drop Count", &cfg_DropCount, 0, 250);
			if (ZeroGUI::Button((char*)"+5", TFD_SDK::FVector2D{ 30, 30 }))
			{
				if (cfg_DropCount < 246)
					cfg_DropCount += 5;
				else
					cfg_DropCount = 250;
			}
			ZeroGUI::SameLine();
			if (ZeroGUI::Button((char*)"-5", TFD_SDK::FVector2D{ 30, 30 }))
			{
				if (cfg_DropCount > 4)
					cfg_DropCount -= 5;
				else
					cfg_DropCount = 0;
			}
		}
	}
}

void LoadCFG()
{
	ini.SetUnicode();
	if (ini.LoadFile("tfdcfg.ini") < 0)
	{
		SaveCFG();
	}
	else
	{
		cfg_WindowPos = { (float)ini.GetDoubleValue("Menu", "X"), (float)ini.GetDoubleValue("Menu", "Y") };
		cfg_EnablePlayerEnemyESP = ini.GetBoolValue("ESP", "EnablePlayerEnemyESP");
		cfg_DrawPlayerNames = ini.GetBoolValue("ESP", "EnablePlayerNames");
		cfg_DrawPlayerBoxes = ini.GetBoolValue("ESP", "EnablePlayerBoxes");
		cfg_DrawPlayerLines = ini.GetBoolValue("ESP", "EnablePlayerLines");
		cfg_DrawEnemyNames = ini.GetBoolValue("ESP", "EnableEnemyNames");
		cfg_DrawEnemyBoxes = ini.GetBoolValue("ESP", "EnableEnemyBoxes");
		cfg_DrawEnemyLines = ini.GetBoolValue("ESP", "EnableEnemyLines");

		cfg_EnableItemESP = ini.GetBoolValue("ESP", "EnableItemESP");
		cfg_DrawItemBoxes = ini.GetBoolValue("ESP", "EnableItemBoxes");
		cfg_DrawItemNames = ini.GetBoolValue("ESP", "EnableItemNames");
		cfg_DrawItemLines = ini.GetBoolValue("ESP", "EnableItemLines");
		cfg_LootVacuum = ini.GetBoolValue("Extra", "EnableVacuum");
		cfg_LootVacuumRange = ini.GetDoubleValue("Extra", "VacuumRange");
		cfg_HPThreshold = ini.GetDoubleValue("ESP", "HPThreshold");
		cfg_MPThreshold = ini.GetDoubleValue("ESP", "MPThreshold");
		cfg_LootVacuumKey = (int)ini.GetDoubleValue("Extra", "VacuumKey");
		cfg_DrawVaults = ini.GetBoolValue("ESP", "EnableCodedVaults");
		cfg_DrawMunition = ini.GetBoolValue("ESP", "EnableMunition");
		cfg_DrawResourceBox = ini.GetBoolValue("ESP", "EnableResourceBoxes");
		cfg_DrawVoidVesselBox = ini.GetBoolValue("ESP", "EnableVoidVesselBoxes");
		cfg_EncryptedVaultDropsKey = (int)ini.GetDoubleValue("ESP", "EncryptedVaultDropsKey");
		cfg_EncryptedVaultRewardType = (int)ini.GetDoubleValue("ESP", "EncryptedVaultRewardType");

		cfg_EnableAimbotHold = ini.GetBoolValue("Aimbot", "EnableAimbotHold");
		cfg_EnableAimbotToggle = ini.GetBoolValue("Aimbot", "EnableAimbotToggle");
		cfg_AimbotHoldKey = (int)ini.GetDoubleValue("Aimbot", "AimbotHoldKey");
		cfg_AimbotToggleKey = (int)ini.GetDoubleValue("Aimbot", "AimbotToggleKey");
		cfg_AimbotController = ini.GetBoolValue("Aimbot", "EnableController");
		cfg_AimbotFOV = ini.GetDoubleValue("Aimbot", "AimbotFOV");
		cfg_AimbotSmoothing = ini.GetDoubleValue("Aimbot", "AimbotSmooth");
		cfg_AimbotNoSpread = ini.GetBoolValue("Aimbot", "EnableNoSpread");
		cfg_NoReload = ini.GetBoolValue("Extra", "EnableNoReload");
		cfg_AimbotNoRecoil = ini.GetBoolValue("Aimbot", "EnableNoRecoil");
		cfg_AimbotRapidFire = ini.GetBoolValue("Aimbot", "EnableRapidFire");
		cfg_EnableModifyGrapple = ini.GetBoolValue("Aimbot", "EnableModifyGrapple");
		cfg_AimbotGrappleRange = ini.GetDoubleValue("Aimbot", "GrappleRange");
		//cfg_InfiniteAmmoAndSkills = ini.GetBoolValue("Aimbot", "EnableInfiniteAmmoAndSkills");

		cfg_CacheEnemyNames = ini.GetBoolValue("Extra", "CacheNames");
		cfg_CacheEnemyBones = ini.GetBoolValue("Extra", "CacheBones");

		//cfg_HotSwapKey = (int)ini.GetDoubleValue("Extra", "HotSwapKey");


		/*HotSwapCharacters[0] = (int)ini.GetDoubleValue("Extra", "HotSwapSlot1", 0);
		HotSwapCharacters[1] = (int)ini.GetDoubleValue("Extra", "HotSwapSlot2", 0);
		HotSwapCharacters[2] = (int)ini.GetDoubleValue("Extra", "HotSwapSlot3", 0);
		HotSwapCharacters[3] = (int)ini.GetDoubleValue("Extra", "HotSwapSlot4", 0);*/
		cfg_HotSwapOverlay = ini.GetBoolValue("Preset", "HotSwapOverlay");
		cfg_SwitchPreset = (int)ini.GetDoubleValue("Preset", "SwitchPresetKey");
		HotSwapPreset[0] = (int)ini.GetDoubleValue("Preset", "HotSwapPreset1", 0);
		HotSwapPreset[1] = (int)ini.GetDoubleValue("Preset", "HotSwapPreset2", 0);
		HotSwapPreset[2] = (int)ini.GetDoubleValue("Preset", "HotSwapPreset3", 0);
		HotSwapPreset[3] = (int)ini.GetDoubleValue("Preset", "HotSwapPreset4", 0);
		HotSwapPreset[4] = (int)ini.GetDoubleValue("Preset", "HotSwapPreset5", 0);
		HotSwapPreset[5] = (int)ini.GetDoubleValue("Preset", "HotSwapPreset6", 0);

		cfg_TimeScale = ini.GetDoubleValue("Extra", "Timescale");
		cfg_TimeScaleKey = (int)ini.GetDoubleValue("Extra", "TimescaleKey");
		cfg_TimeScaleHoldKey = (int)ini.GetDoubleValue("Extra", "TimescaleHoldKey");

		cfg_InstantInfilKey = (int)ini.GetDoubleValue("Mission", "InstantInfilKey");
		cfg_RestartMissionKey = (int)ini.GetDoubleValue("Mission", "RestartMissionKey");
		cfg_LeaveMissionKey = (int)ini.GetDoubleValue("Mission", "LeaveMissionKey");
		cfg_EnableAutoRestartMission = ini.GetBoolValue("Mission", "EnableAutoRestartMisson");
		cfg_EnableAutoInstantInfil = ini.GetBoolValue("Mission", "EnableAutoInstantInfil");
		cfg_RestartType = ini.GetDoubleValue("Mission", "RestartType");
		cfg_EnableMissionTaskTeleporter = ini.GetBoolValue("Mission", "EnableMissionTaskTeleporter");
		cfg_TPMissionKey = (int)ini.GetDoubleValue("Mission", "TPMissionKey");

		cfg_ContainerDropKey = (int)ini.GetDoubleValue("TivmoTuff", "ContainerDropKey");
		cfg_ContainersRange = ini.GetDoubleValue("TivmoTuff", "ContainersRange");
		cfg_ChangeDropCount = ini.GetBoolValue("TivmoTuff", "ChangeDropCount");
		cfg_DropCount = (int)ini.GetDoubleValue("TivmoTuff", "DropCount");
	}
}

void SaveCFG()
{
	ini.SetDoubleValue("Menu", "X", cfg_WindowPos.X);
	ini.SetDoubleValue("Menu", "Y", cfg_WindowPos.Y);

	ini.SetBoolValue("ESP", "EnablePlayerEnemyESP", cfg_EnablePlayerEnemyESP);
	ini.SetBoolValue("ESP", "EnablePlayerNames", cfg_DrawPlayerNames);
	ini.SetBoolValue("ESP", "EnablePlayerBoxes", cfg_DrawPlayerBoxes);
	ini.SetBoolValue("ESP", "EnablePlayerLines", cfg_DrawPlayerLines);
	ini.SetBoolValue("ESP", "EnableEnemyNames", cfg_DrawEnemyNames);
	ini.SetBoolValue("ESP", "EnableEnemyBoxes", cfg_DrawEnemyBoxes);
	ini.SetBoolValue("ESP", "EnableEnemyLines", cfg_DrawEnemyLines);
	ini.SetBoolValue("ESP", "EnableItemESP", cfg_EnableItemESP);
	ini.SetBoolValue("ESP", "EnableItemBoxes", cfg_DrawItemBoxes);
	ini.SetBoolValue("ESP", "EnableItemNames", cfg_DrawItemNames);
	ini.SetBoolValue("ESP", "EnableItemLines", cfg_DrawItemLines);
	ini.SetBoolValue("ESP", "EnableCodedVaults", cfg_DrawVaults);
	ini.SetBoolValue("ESP", "EnableMunition", cfg_DrawMunition);
	ini.SetBoolValue("ESP", "EnableResourceBoxes", cfg_DrawResourceBox);
	ini.SetBoolValue("ESP", "EnableVoidVesselBoxes", cfg_DrawVoidVesselBox);
	ini.SetDoubleValue("ESP", "EncryptedVaultDropsKey", cfg_EncryptedVaultDropsKey);
	ini.SetDoubleValue("ESP", "EncryptedVaultRewardType", cfg_EncryptedVaultRewardType);
	ini.SetDoubleValue("ESP", "HPThreshold", cfg_HPThreshold);
	ini.SetDoubleValue("ESP", "MPThreshold", cfg_MPThreshold);

	ini.SetBoolValue("Aimbot", "EnableAimbotHold", cfg_EnableAimbotHold);
	ini.SetBoolValue("Aimbot", "EnableAimbotToggle", cfg_EnableAimbotToggle);
	ini.SetDoubleValue("Aimbot", "AimbotHoldKey", cfg_AimbotHoldKey);
	ini.SetDoubleValue("Aimbot", "AimbotToggleKey", cfg_AimbotToggleKey);
	ini.SetBoolValue("Aimbot", "EnableController", cfg_AimbotController);
	ini.SetDoubleValue("Aimbot", "AimbotFOV", cfg_AimbotFOV);
	ini.SetDoubleValue("Aimbot", "AimbotSmooth", cfg_AimbotSmoothing);

	ini.SetBoolValue("Aimbot", "EnableNoSpread", cfg_AimbotNoSpread);
	ini.SetBoolValue("Aimbot", "EnableNoRecoil", cfg_AimbotNoRecoil);
	ini.SetBoolValue("Aimbot", "EnableRapidFire", cfg_AimbotRapidFire);
	ini.SetBoolValue("Aimbot", "EnableModifyGrapple", cfg_EnableModifyGrapple);
	ini.SetDoubleValue("Aimbot", "GrappleRange", cfg_AimbotGrappleRange);
	//ini.SetBoolValue("Aimbot", "EnableInfiniteAmmoAndSkills", cfg_InfiniteAmmoAndSkills);

	ini.SetBoolValue("Extra", "EnableNoReload", cfg_NoReload);
	ini.SetBoolValue("Extra", "EnableVacuum", cfg_LootVacuum);
	ini.SetDoubleValue("Extra", "VacuumRange", cfg_LootVacuumRange);
	ini.SetDoubleValue("Extra", "VacuumKey", cfg_LootVacuumKey);

	ini.SetBoolValue("Extra", "CacheNames", cfg_CacheEnemyNames);
	ini.SetBoolValue("Extra", "CacheBones", cfg_CacheEnemyBones);

	//ini.SetDoubleValue("Extra", "HotSwapKey", cfg_HotSwapKey);




	/*ini.SetDoubleValue("Extra", "HotSwapSlot1", HotSwapCharacters[0]);
	ini.SetDoubleValue("Extra", "HotSwapSlot2", HotSwapCharacters[1]);
	ini.SetDoubleValue("Extra", "HotSwapSlot3", HotSwapCharacters[2]);
	ini.SetDoubleValue("Extra", "HotSwapSlot4", HotSwapCharacters[3]);*/
	ini.SetBoolValue("Preset", "HotSwapOverlay", cfg_HotSwapOverlay);
	ini.SetDoubleValue("Preset", "SwitchPresetKey", cfg_SwitchPreset);
	ini.SetDoubleValue("Preset", "HotSwapPreset1", HotSwapPreset[0]);
	ini.SetDoubleValue("Preset", "HotSwapPreset2", HotSwapPreset[1]);
	ini.SetDoubleValue("Preset", "HotSwapPreset3", HotSwapPreset[2]);
	ini.SetDoubleValue("Preset", "HotSwapPreset4", HotSwapPreset[3]);
	ini.SetDoubleValue("Preset", "HotSwapPreset5", HotSwapPreset[4]);
	ini.SetDoubleValue("Preset", "HotSwapPreset6", HotSwapPreset[5]);

	ini.SetDoubleValue("Extra", "Timescale", cfg_TimeScale);
	ini.SetDoubleValue("Extra", "TimescaleKey", cfg_TimeScaleKey);
	ini.SetDoubleValue("Extra", "TimescaleHoldKey", cfg_TimeScaleHoldKey);

	ini.SetDoubleValue("Mission", "InstantInfilKey", cfg_InstantInfilKey);
	ini.SetDoubleValue("Mission", "RestartMissionKey", cfg_RestartMissionKey);
	ini.SetDoubleValue("Mission", "LeaveMissionKey", cfg_LeaveMissionKey);
	ini.SetBoolValue("Mission", "EnableAutoRestartMisson", cfg_EnableAutoRestartMission);
	ini.SetBoolValue("Mission", "EnableAutoInstantInfil", cfg_EnableAutoInstantInfil);
	ini.SetDoubleValue("Mission", "RestartType", cfg_RestartType);
	ini.SetBoolValue("Mission", "EnableMissionTaskTeleporter", cfg_EnableMissionTaskTeleporter);
	ini.SetDoubleValue("Mission", "TPMissionKey", cfg_TPMissionKey);

	ini.SetDoubleValue("TivmoTuff", "ContainerDropKey", cfg_ContainerDropKey);
	ini.SetDoubleValue("TivmoTuff", "ContainersRange", cfg_ContainersRange);
	ini.SetBoolValue("TivmoTuff", "ChangeDropCount", cfg_ChangeDropCount);
	ini.SetDoubleValue("TivmoTuff", "DropCount", cfg_DropCount);

	ini.SaveFile("tfdcfg.ini");
}

void WriteEnemyNamesData()
{
	std::ofstream outFile("NameCache.dat", std::ios::binary);

	if (!outFile) {
		return;
	}
	outFile.clear();
	size_t size = IDNameMap.size();
	outFile.write(reinterpret_cast<const char*>(&size), sizeof(size));

	// Write each key-value pair
	for (const auto& pair : IDNameMap) {
		// Write the key
		outFile.write(reinterpret_cast<const char*>(&pair.first), sizeof(pair.first));

		// Write the length of the string value
		size_t strLength = pair.second.size();
		outFile.write(reinterpret_cast<const char*>(&strLength), sizeof(strLength));

		// Write the string value
		outFile.write(pair.second.data(), strLength);
	}

	outFile.close();
}

std::unordered_map<int, std::string> ReadEnemyNamesData()
{
	std::unordered_map<int, std::string> map;
	std::ifstream inFile("NameCache.dat", std::ios::binary);

	if (!inFile) {
		return map;
	}

	// Read the size of the map
	size_t size = 0;
	inFile.read(reinterpret_cast<char*>(&size), sizeof(size));

	for (size_t i = 0; i < size; ++i) {
		int key;
		size_t strLength;
		std::string value;

		// Read the key
		inFile.read(reinterpret_cast<char*>(&key), sizeof(key));

		// Read the length of the string value
		inFile.read(reinterpret_cast<char*>(&strLength), sizeof(strLength));

		// Read the string value
		value.resize(strLength);
		inFile.read(&value[0], strLength);

		// Insert into the map
		map[key] = value;
	}

	inFile.close();
	return map;
}

void WriteEnemyBonesData()
{
	std::ofstream outFile("BoneCache.dat", std::ios::binary);

	if (!outFile) {
		return;
	}
	outFile.clear();
	// Write the size of the map first
	size_t mapSize = IDBoneMap.size();
	outFile.write(reinterpret_cast<const char*>(&mapSize), sizeof(mapSize));

	// Write each key-vector pair
	for (const auto& pair : IDBoneMap) {
		// Write the key
		outFile.write(reinterpret_cast<const char*>(&pair.first), sizeof(pair.first));

		// Write the size of the vector
		size_t vectorSize = pair.second.size();
		outFile.write(reinterpret_cast<const char*>(&vectorSize), sizeof(vectorSize));

		// Write the vector elements
		outFile.write(reinterpret_cast<const char*>(pair.second.data()), vectorSize * sizeof(int));
	}

	outFile.close();
}

std::unordered_map<int, std::vector<int>> ReadEnemyBonesData()
{
	std::unordered_map<int, std::vector<int>> map;
	std::ifstream inFile("BoneCache.dat", std::ios::binary);

	if (!inFile) {
		return map;
	}

	// Read the size of the map
	size_t mapSize = 0;
	inFile.read(reinterpret_cast<char*>(&mapSize), sizeof(mapSize));

	for (size_t i = 0; i < mapSize; ++i) {
		int key;
		size_t vectorSize;
		std::vector<int> value;

		// Read the key
		inFile.read(reinterpret_cast<char*>(&key), sizeof(key));

		// Read the size of the vector
		inFile.read(reinterpret_cast<char*>(&vectorSize), sizeof(vectorSize));

		// Resize the vector to hold the elements
		value.resize(vectorSize);

		// Read the vector elements
		inFile.read(reinterpret_cast<char*>(value.data()), vectorSize * sizeof(int));

		// Insert into the map
		map[key] = value;
	}

	inFile.close();
	return map;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	{
		DisableThreadLibraryCalls(hModule);
		//CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Init, hModule, 0, 0);
		HANDLE hThread = (HANDLE)_beginthreadex(nullptr, 0, reinterpret_cast<unsigned(__stdcall*)(void*)>(Init), hModule, 0, nullptr);
		if (hThread)
			CloseHandle(hThread);  // Close immediately unless you need to wait on it
		return true;
	}
	case DLL_PROCESS_DETACH:
		if (oWndProc)
		{
			HWND hWnd = FindGameWindow();
			SetWindowLongPtr(hWnd, GWLP_WNDPROC, (LONG_PTR)oWndProc);
		}
		break;
	}
	return false;
}

DWORD WINAPI Init(HMODULE Module)
{
#ifdef IS_DEBUG

	AllocConsole();
	FILE* Dummy;
	freopen_s(&Dummy, "CONOUT$", "w", stdout);
	freopen_s(&Dummy, "CONIN$", "r", stdin);
	std::cout << "DescentInternal - Started\n";

#endif // IS_DEBUG
	int procID = GetCurrentProcessId();
	HANDLE hModule = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, procID);
	MODULEENTRY32 mEntry;
	mEntry.dwSize = sizeof(mEntry);
	sigmod GameModule = { NULL,NULL };
	do
	{
		if (!strcmp(mEntry.szModule, "M1-Win64-Shipping.exe"))
		{
			GameModule = { (uintptr_t)mEntry.hModule, mEntry.modBaseSize };
		}
	} while (Module32Next(hModule, &mEntry));
	CloseHandle(hModule);
	Sleep(1000);
	if (GameModule.dwBase)
	{
		dwBase = GameModule.dwBase;
		dwSize = GameModule.dwSize;
#ifdef IS_DEBUG
		std::cout << "DescentInternal - Found Module\n";
#endif // IS_DEBUG
		uintptr_t GNamePtr = FindSignature(procID, dwBase, dwSize, GNamesSig, GNamesMask);
		if (!GNamePtr)
		{
			throw std::runtime_error("Unable to find GNames.");
			return 1;
		}
		GNamePtr = dwBase + GNamePtr;
		uintptr_t GNameOffsetAddress = GNamePtr + 3;
		uintptr_t GNameOffsetRelative = *reinterpret_cast<uintptr_t*>(GNameOffsetAddress);
		uintptr_t GNameAddress = (GNamePtr + 7) + GNameOffsetRelative;
		uintptr_t GNameOffset = GNameAddress - dwBase;
		TFD_SDK::Offsets::GNames = GNameOffset;
		//TFD_SDK::Offsets::GNames = 0x0AA4DC40;
#ifdef IS_DEBUG
		std::cout << "DescentInternal - Found GNames at: " << std::hex << GNameOffset << "\n";
		Sleep(1000);
#endif // IS_DEBUG

		/*uintptr_t GObjsPtr = FindSignature(procID, GameModule, GObjectsSig, GObjectsMask);
		if (!GObjsPtr)
		{
			throw std::runtime_error("Unable to find GObjects.");
			return 1;
		}*/
		//GObjsPtr = GameModule.dwBase + GObjsPtr;
		//uintptr_t GObjOffsetAddress = GObjsPtr + 3;
		//int32_t GObjOffsetRelative = *reinterpret_cast<int32_t*>(GObjOffsetAddress);
		//uintptr_t GObjAddress = (GObjsPtr + 7) + GObjOffsetRelative;
		//uintptr_t GObjeOffset = GObjAddress - GameModule.dwBase;

		uintptr_t GObjsPtr = SearchForGObjects(dwBase);
		if (!GObjsPtr)
		{
			throw std::runtime_error("Unable to find GObjects.");
			return 1;
		}
		TFD_SDK::Offsets::GObjects = GObjsPtr;

		//TFD_SDK::Offsets::GObjects = 0x0A019E50;
#ifdef IS_DEBUG
		std::cout << "DescentInternal - Found GObjects at: " << std::hex << GObjsPtr << std::dec << "\n";
		Sleep(1000);
#endif // IS_DEBUG
		SearchForGWorld(dwBase, dwSize);
		if (!TFD_SDK::Offsets::GWorld)
		{
			throw std::runtime_error("Unable to find GWorld.");
			return 1;
		}
		//TFD_SDK::Offsets::GWorld = 0x0A339538;

		//uintptr_t SpreadPtr = FindSignature(procID, dwBase, dwSize, NoSpreadSig, NoSpreadMask);
		//if (!SpreadPtr)
		//{
		//	throw std::runtime_error("Unable to find NoSpread.");
		//	return 1;
		//}
		//SpreadPtr = GameModule.dwBase + SpreadPtr;
		//NoSpreadAddress = (reinterpret_cast<uint8_t*>(SpreadPtr) - 0x8);// +0x16);
#ifdef IS_DEBUG
		std::cout << "DescentInternal - Found NoSpread at " << std::hex << SpreadPtr << std::dec << "\n";
		Sleep(1000);
#endif // IS_DEBUG

		/*uintptr_t RecoilPtr = FindSignature(procID, dwBase, dwSize, NoRecoilSig, NoRecoilMask);
		if (!RecoilPtr)
		{
			throw std::runtime_error("Unable to find NoRecoil.");
			return 1;
		}
		RecoilPtr = GameModule.dwBase + RecoilPtr;
		NoRecoilAddress = reinterpret_cast<uint8_t*>(RecoilPtr + 2);*/
#ifdef IS_DEBUG
		std::cout << "DescentInternal - Found NoRecoil at " << std::hex << RecoilPtr << std::dec << "\n";
		Sleep(1000);
#endif // IS_DEBUG

		/*uintptr_t RapidFirePtr = FindSignature(procID, dwBase, dwSize, RapidFireSig, RapidFireMask);
		if (!RapidFirePtr)
		{
			throw std::runtime_error("Unable to find Rapidfire.");
			return 1;
		}
		RapidFirePtr = GameModule.dwBase + RapidFirePtr;
		RapidFireAddress = (reinterpret_cast<uint8_t*>(RapidFirePtr));*/
#ifdef IS_DEBUG
		std::cout << "DescentInternal - Found RapidFire at " << std::hex << RapidFirePtr << std::dec << "\n";
		Sleep(1000);
#endif // IS_DEBUG

		//NoSpreadOriginal = *NoSpreadAddress;
		// This code was the original no-spread by copying and setting the ModR/M bits
		/*
		000 = XMM0
		001 = XMM1
		010 = XMM2
		011 = XMM3
		100 = XMM4
		101 = XMM5
		110 = XMM6
		111 = XMM7
		*/
		/*std::bitset<8> modifiedByte(NoSpreadOriginal);
		if (modifiedByte[5])
		{
			modifiedByte.set(2);
		}
		else
		{
			modifiedByte.reset(2);
		}
		if (modifiedByte[4])
		{
			modifiedByte.set(1);
		}
		else
		{
			modifiedByte.reset(1);
		}
		if (modifiedByte[3])
		{
			modifiedByte.set(0);
		}
		else
		{
			modifiedByte.reset(0);
		}

		NoSpreadCheat = (uint8_t)modifiedByte.to_ulong();*/
	}
	else
	{
		throw std::runtime_error("Unable to get game module.");
		return 1;
	}

	TFD_SDK::FName::InitInternal();
	TFD_SDK::UObject::GObjects.InitGObjects();
	Sleep(1000);
	bool isPostRenderHooked = false;
	do
	{
		TFD_SDK::UWorld* world = TFD_SDK::UWorld::GetWorld(dwBase);
		if (world && world->IsA(TFD_SDK::UWorld::StaticClass()))
		{
			/*if (!GWorld)
			{
				GWorld = world;
				uintptr_t GWorldOffset = (uintptr_t)world - GameModule.dwBase;
				TFD_SDK::Offsets::GWorld = GWorldOffset;
			}*/
			Sleep(1000);
			TFD_SDK::ULocalPlayer* LocalPl = (TFD_SDK::ULocalPlayer*)((TFD_SDK::UGameplayStatics*)TFD_SDK::UGameplayStatics::StaticClass())->GetPlayerController(world, 0)->Player;
			if (LocalPl && LocalPl->ViewportClient)
			{
	/*			if (!LocalPlayer)
				{
					LocalPlayer = LocalPl;
				}*/
				Sleep(1000);
				TFD_SDK::UGameViewportClient* ViewportClient = LocalPl->ViewportClient;
				if (ViewportClient)
				{
					if (!LocalView)
					{
						LocalView = ViewportClient;
					}
					Sleep(1000);
					ULONG64* Func = GetDrawTransitionVTableAddress(LocalView);
					if (Func)
					{
						Sleep(1000);
						M1org = (decltype(M1org))*Func;
						__int64 ptr = (__int64)YourHookProc;
						DWORD old;
						VirtualProtect(Func, sizeof(void*), PAGE_EXECUTE_READWRITE, &old);
						memcpy(Func, &ptr, 8);
						VirtualProtect(Func, sizeof(void*), old, NULL);
						isPostRenderHooked = true;
					}
				}
			}
		}
		else
		{
			Sleep(1000);
		}
	} while (!isPostRenderHooked);
#ifdef IS_DEBUG
	std::cout << "DescentInternal - PostRender Hooked\n";
#endif // IS_DEBUG
	ini.SetUnicode();
	LoadCFG();

	HWND hWnd = FindGameWindow();
	if (hWnd && !oWndProc)
	{
		oWndProc = (WNDPROC)SetWindowLongPtr(hWnd, GWLP_WNDPROC, (LONG_PTR)MyWndProc);
	}

	static std::mt19937 rng(std::random_device{}()); // seeded once
	static std::uniform_int_distribution<UC::uint32> dist(200000, 299999);
	ObjectUniqueID = dist(rng);

	return 1;
}

ULONG64* GetDrawTransitionVTableAddress(TFD_SDK::UGameViewportClient* vp)
{
	if (vp)
	{
		__int64** vtable = NULL;
		int Index = 0;
		vtable = *reinterpret_cast<__int64***>(vp);
		if (vtable)
		{
			for (int i = 0; i < 0x200; i++)
			{
				BYTE* code = (BYTE*)vtable[i];
				for (int j = 0; j < 0x400; j++)
				{
					BYTE* p = code + j;
					if (
						(p[0] == 0x4C && p[1] == 0x8D && p[2] == 0x05) ||
						(p[0] == 0x48 && p[1] == 0x8D && p[2] == 0x15)
						)
					{
						int offset = *(int*)(p + 3);
						wchar_t* str = (wchar_t*)(p + 7 + offset);
						if (str == std::wstring(L"PAUSED"))
						{
							Index = i;
							goto ext;
						}
					}
				}
			}
		}
	ext:
		if (Index)
		{
			return (ULONG64*)&vtable[Index];
		}
	}
	return NULL;
}

bool MemoryCompare(const BYTE* bData, const BYTE* bSig, const char* szMask)
{
	for (; *szMask; szMask++, bData++, bSig++)
		if (*szMask == 'x' && *bData != *bSig)
			return false;
	return true;
}

// This returns the OFFSET so you need to add the OFFSET + BASE for the desired address!!!
uintptr_t FindSignature(int procID, uintptr_t base, uintptr_t size, const char* sig, const char* mask)
{
	BYTE* data = new BYTE[size];
	SIZE_T bytesRead;

	Toolhelp32ReadProcessMemory(procID, (LPVOID)(base), data, size, &bytesRead);

	for (uintptr_t i = 0; i < size; i++) {
		if (MemoryCompare((const BYTE*)(data + i), (const BYTE*)sig, mask)) {
			delete[] data;
			return i;
		}
	}
	delete[] data;
	return NULL;
}

std::pair<uintptr_t, DWORD> GetSectionByName(uintptr_t ImageBase, const std::string& ReqestedSectionName)
{
	if (ImageBase == 0)
		return { NULL, 0 };

	const PIMAGE_DOS_HEADER DosHeader = reinterpret_cast<PIMAGE_DOS_HEADER>(ImageBase);
	const PIMAGE_NT_HEADERS NtHeaders = reinterpret_cast<PIMAGE_NT_HEADERS>(ImageBase + DosHeader->e_lfanew);

	PIMAGE_SECTION_HEADER Sections = IMAGE_FIRST_SECTION(NtHeaders);

	DWORD TextSize = 0;

	for (int i = 0; i < NtHeaders->FileHeader.NumberOfSections; i++)
	{
		IMAGE_SECTION_HEADER& CurrentSection = Sections[i];

		std::string SectionName = reinterpret_cast<const char*>(CurrentSection.Name);

		if (SectionName == ReqestedSectionName)
			return { (ImageBase + CurrentSection.VirtualAddress), CurrentSection.Misc.VirtualSize };
	}

	return { NULL, 0 };
}

bool IsBadReadPtr(const void* p)
{
	MEMORY_BASIC_INFORMATION mbi;

	if (VirtualQuery(p, &mbi, sizeof(mbi)))
	{
		constexpr DWORD mask = (PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY);
		bool b = !(mbi.Protect & mask);
		if (mbi.Protect & (PAGE_GUARD | PAGE_NOACCESS))
			b = true;

		return b;
	}

	return true;
};

bool IsAddressValidGObjects(const uintptr_t Address)
{
	FChunkedFixedUObjectArrayLayout Layout;
	void* Objects = *reinterpret_cast<void**>(Address + Layout.ObjectsOffset);
	const int MaxElements = *reinterpret_cast<const int*>(Address + Layout.MaxElementsOffset);
	const int NumElements = *reinterpret_cast<const int*>(Address + Layout.NumElementsOffset);
	const int MaxChunks = *reinterpret_cast<const int*>(Address + Layout.MaxChunksOffset);
	const int NumChunks = *reinterpret_cast<const int*>(Address + Layout.NumChunksOffset);

	void** ObjectsPtrButDecrypted = reinterpret_cast<void**>(SDK::TUObjectArray::DecryptPtr(Objects));

	if (NumChunks > 0x14 || NumChunks < 0x1)
		return false;

	if (MaxChunks > 0x22F || MaxChunks < 0x6)
		return false;

	if (NumElements > MaxElements || NumChunks > MaxChunks)
		return false;

	const bool bNumChunksFitsNumElements = ((NumElements / 0x10000) + 1) == NumChunks || ((NumElements / 0x10400) + 1) == NumChunks;

	if (!bNumChunksFitsNumElements)
		return false;

	const bool bMaxChunksFitsMaxElements = (MaxElements / 0x10000) == MaxChunks || (MaxElements / 0x10400) == MaxChunks;

	if (!bMaxChunksFitsMaxElements)
		return false;

	if (!ObjectsPtrButDecrypted || IsBadReadPtr(ObjectsPtrButDecrypted))
		return false;

	for (int i = 0; i < NumChunks; i++)
	{
		if (!ObjectsPtrButDecrypted[i] || IsBadReadPtr(ObjectsPtrButDecrypted[i]))
			return false;
	}

	return true;
}

uintptr_t SearchForGObjects(uintptr_t base)
{
	uintptr_t SearchBase;
	DWORD SearchRange;
	const auto [DataSection, DataSize] = GetSectionByName(base, ".data");

	if (DataSection != 0x0 && DataSize != 0x0)
	{
		SearchBase = DataSection;
		SearchRange = DataSize;
	}
	else
	{
		return 0;
	}

	SearchRange -= 0x50;

	for (int i = 0; i < SearchRange; i += 0x4)
	{
		const uintptr_t CurrentAddress = SearchBase + i;

		if (IsAddressValidGObjects(CurrentAddress))
		{
			return (SearchBase + i) - base;

		}
	}
	return 0;
}

template<typename T>
T* FindAlignedValueInProcessInRange(T Value, int32_t Alignment, uintptr_t StartAddress, uint32_t Range)
{
	constexpr int32_t ElementSize = sizeof(T);

	for (uint32_t i = 0x0; i < Range; i += Alignment)
	{
		T* TypedPtr = reinterpret_cast<T*>(StartAddress + i);

		if (*TypedPtr == Value)
			return TypedPtr;
	}

	return nullptr;
}

template<typename T>
T* FindAlignedValueInProcess(T Value, const std::string& Sectionname, int32_t Alignment, bool bSearchAllSections)
{
	uintptr_t SearchStart = dwBase;
	uintptr_t SearchRange = dwSize;

	if (!bSearchAllSections)
	{
		const auto [SectionStart, SectionSize] = GetSectionByName(dwBase, Sectionname);

		if (SectionStart != 0x0 && SectionSize != 0x0)
		{
			SearchStart = SectionStart;
			SearchRange = SectionSize;
		}
		else
		{
			bSearchAllSections = true;
		}
	}

	T* Result = FindAlignedValueInProcessInRange(Value, Alignment, SearchStart, SearchRange);

	if (!Result && SearchStart != dwBase)
		return FindAlignedValueInProcess(Value, Sectionname, Alignment, true);

	return Result;
}

void SearchForGWorld(uintptr_t base, uintptr_t size)
{
	uintptr_t SearchBase;
	DWORD SearchRange;
	const auto [DataSection, DataSize] = GetSectionByName(base, ".data");

	if (DataSection != 0x0 && DataSize != 0x0)
	{
		SearchBase = DataSection;
		SearchRange = DataSize;
	}
	else
	{
		return;
	}

	SearchRange -= 0x50;

	for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
	{
		SDK::UObject* obj = SDK::UObject::GObjects->GetByIndex(i);

		if (!obj || (obj->Flags & SDK::EObjectFlags::ClassDefaultObject))
			continue;

		if (obj->IsA(TFD_SDK::UWorld::StaticClass()))
		{
			void* worldPtr = static_cast<void*>(obj);
#ifdef IS_DEBUG_VERSION
			std::cout << "[Cheat] Found UWorld instance at: 0x" << std::hex << worldPtr << std::dec << " with name: " << obj->GetName() << "\n";
#endif
			void* Result = FindAlignedValueInProcess(worldPtr);

			if (Result)
			{
				SDK::Offsets::GWorld = reinterpret_cast<uintptr_t>(Result) - base;
				//std::cerr << std::format("GWorld-Offset: 0x{:X}\n\n", Off::InSDK::World::GWorld);
				break;
			}

		}
	}
}

void ModifyGrapple()
{
	if (!LocalPlayerCharacter->WeaponSlotControl->Ability_Component)
		return;

	for (auto* Ability : LocalPlayerCharacter->WeaponSlotControl->Ability_Component->RegisteredAbilities)
	{
		if (Ability && Ability->IsA(TFD_SDK::UM1WireSkillAbility::StaticClass()))
		{
			TFD_SDK::UM1WireSkillAbility* WireAbility = static_cast<TFD_SDK::UM1WireSkillAbility*>(Ability);
			if (WireAbility)
			{
				if (WireAbility->FireMaxDistance != cfg_AimbotGrappleRange)
					WireAbility->FireMaxDistance = cfg_AimbotGrappleRange;
				break;
			}
		}
	}
}
