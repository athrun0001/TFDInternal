#pragma once
//#include <windows.h>
//#include <iostream>
#include <fstream>
//#include <iomanip>
//#include <vector>
#include "zerogui/ZeroGUI.h"
//#include <map>
#include <TlHelp32.h>
#include "SimpleIni.h"
//#include <bitset>
#include <XInput.h>
#pragma comment(lib,"xinput.lib")
//#include "TFD_SDK.h"
#include <chrono>



//#define IsKeyPressed(key) GetAsyncKeyState(key) & 1 && GetAsyncKeyState(key) & 0x8000
//#define IsKeyHeld(key) (GetAsyncKeyState(key) & 0x8000)

struct CONTROLLER_STATE
{
	XINPUT_STATE state;
	bool bConnected;
};

CONTROLLER_STATE g_Controllers[4];
HRESULT UpdateControllerState();

/*
*  Hooks
*/
static __int64 (*M1org)(void* ViewportClient, void* DebugCanvas) = NULL;
static __int64 YourHookProc(void* ViewportClient, void* DebugCanvas);
//static __int64 YourHookProc_old(void* self, void* Canvas);
ULONG64* GetDrawTransitionVTableAddress(TFD_SDK::UGameViewportClient* vp);
DWORD WINAPI Init(HMODULE Module);

/*
*  Signatures
*/
const char* GNamesSig = "\x4C\x8D\x35\x00\x00\x00\x00\x0F\x95\x44\x24\x2C\x48\x2B\xCB";
const char* GNamesMask = "xxx????xxxxxxx";
//const char* GObjectsSig = "\x4C\x8B\x0D\x00\x00\x00\x00\x8B\xD0";
//const char* GObjectsMask = "xxx????xx";
const char* GObjectsSig = "\x80\x08\x00\x37\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x21";
const char* GObjectsMask = "xx?xxxxxxxxxxxxxxxx";
// 80 08 DF 37 00 00 00 00 00 00 00 00 00 00 00 00 00 00 21
//const char* NoSpreadSig =	"\xF3\x0F\x5C\x00\xF3\x0F\x5F\xF2\xF3\x0F\x5D\xF7\x0F\x28\xC6";
//const char* NoSpreadMask =	"xxx?xxxxxxxxxxx";
//const char* NoSpreadSig = "\xF3\x41\x0F\x5D\xF6\x44\x0F\x28\xC6";
//const char* NoSpreadMask = "xxxxxxxxx";
// // F3 45 0F 5C C9 90 90 90 90
// 74 7D E8 ?? ?? ?? ?? 48 8B 53 10 <- add 0x16 to signature address to get to the JE, change JE to JNE
// old pattern is 48 8B 86 D0 00 00 00 F3 44 0F 11 86 - 0x9
//const char* NoSpreadSig = "\xE8\x00\x00\x00\x00\x48\x8B\x86\xD0\x00\x00\x00\x48\x8B\x98";
//const char* NoSpreadMask = "x????xxxxxxxxxx";
const char* NoSpreadSig = "\x48\x8B\x86\x00\x00\x00\x00\xF3\x0F\x11\xBE";
const char* NoSpreadMask = "xxx????xxxx";
uint8_t NoSpreadOriginal[9] = { 0xF3, 0x41, 0x0F, 0x5D, 0xC4, 0x0F, 0x28, 0xF8 };
uint8_t NoSpreadCheat[9] = { 0xF3, 0x45, 0x0F, 0x5C, 0xC9, 0x90, 0x90, 0x90 };
uint8_t* NoSpreadAddress = 0;
//  Original 84 C0 74 1F 48 8B BE E8 00 00 00
const char* NoRecoilSig = "\x84\xC0\x74\x00\x48\x8B\xBD\x00\x00\x00\x00\x8B\x9D";
const char* NoRecoilMask = "xxx?xxx????xx";
uint8_t* NoRecoilAddress = 0;
//const char* RapidFireSig = "\x72\x00\xF3\x0F\x10\x87\x00\x00\x00\x00\x48";
// char* RapidFireMask = "x?xxxx????x";
const char* RapidFireSig = "\x72\x00\xF3\x0F\x10\x87\x00\x00\x00\x00\xF3\x0F\x5C\xC1";
const char* RapidFireMask = "x?xxxx????xxxx";
uint8_t* RapidFireAddress = 0;



struct sigmod {
	uintptr_t dwBase, dwSize;
};
bool MemoryCompare(const BYTE* bData, const BYTE* bSig, const char* szMask);
uintptr_t FindSignature(int procID, uintptr_t base, uintptr_t size, const char* sig, const char* mask);

/*
*  Data
*/
bool IsValidUWorld();
bool CheckPointers();
//std::vector<std::string> Presets;
TFD_SDK::UWorld* GWorld;
TFD_SDK::UEngine* GEngine;
//TFD_SDK::ULocalPlayer* LocalPlayer;
TFD_SDK::AM1PlayerController* LocalPlayerController;
bool inGame = false;
TFD_SDK::AM1PlayerControllerInGame* PlayerIngameController;
TFD_SDK::AM1Player* LocalPlayerCharacter;
TFD_SDK::UGameViewportClient* LocalView;
TFD_SDK::UM1ActorManagerSubsystem* Actors;
TFD_SDK::AM1PlayerState* PlayerState;
TFD_SDK::AM1MissionActor* LastMissionActor = nullptr;
bool isGUIInit = false;
void LoadCFG();
void SaveCFG();
CSimpleIniA ini;
float lastScreenSize = 0;
bool updateMiddle = true;
TFD_SDK::FVector2D ScreenMiddle = { 0, 0 };
TFD_SDK::UCanvas* myCanvas;
TFD_SDK::UM1WeaponSlotControlComponent* WeaponSlot = nullptr;
UC::uint32 ObjectUniqueID;
/*
*  Overlay
*/
void DrawMenu();
TFD_SDK::FVector2D cfg_WindowPos = { 100, 100 };
bool cfg_DrawMenu = false;

const TFD_SDK::FLinearColor ColorWhite = { 1.0f, 1.0f, 1.0f, 1.0f };
const TFD_SDK::FLinearColor ColorRed = { 1.0f, 0, 0, 1.0f };
const TFD_SDK::FLinearColor ColorDarkRed = { 0.5f, 0.0f, 0.0f, 0.8f };
const TFD_SDK::FLinearColor ColorGreen = { 0, 1.0f, 0, 1.0f };
const TFD_SDK::FLinearColor ColorMana = { 0.184f, 0.702f, 1.0f, 1.0f };

const TFD_SDK::FLinearColor ColorCommon = { 0, 0.922f, 0.29f, 1.0f };
const TFD_SDK::FLinearColor ColorUncommon = { 0.2f, 0.29f, 1.0f, 1.0f };
const TFD_SDK::FLinearColor ColorRare = { 0.761f, 0.063f, 0.961, 1.0f };
const TFD_SDK::FLinearColor ColorUltimate = { 1.0f, 0.247f, 0.247f, 1.0f };

const TFD_SDK::FLinearColor ColorGold = { 1.0f, 0.882f, 0, 1.0f };


bool WorldToScreen(const TFD_SDK::FVector& worldLoc, TFD_SDK::FVector2D* screenPos);

int BoneOffset = 0x508;
uintptr_t BonePtr = 0x0;
TFD_SDK::TArray<TFD_SDK::FTransform>* BoneArrayPointer = nullptr;
/*
*   Player Enemy ESP
*/
void PlayerEnemyESP();
bool cfg_EnablePlayerEnemyESP = false;
bool cfg_DrawPlayerNames = false;
bool cfg_DrawPlayerBoxes = false;
bool cfg_DrawPlayerLines = false;
bool cfg_DrawEnemyNames = false;
bool cfg_DrawEnemyBoxes = false;
bool cfg_DrawEnemyLines = false;


float cfg_DistanceScale = 2324.0f;
TFD_SDK::FVector2D cfg_ESPBox = { 20, 40 };

/*
*  Item ESP and Vacuum
*/
void ItemESPVacuum();

bool cfg_EnableItemESP = false;
bool cfg_DrawItemBoxes = false;
bool cfg_DrawItemNames = false;
bool cfg_DrawItemLines = false;
bool cfg_DrawVaults = false;
bool cfg_DrawMunition = false;
bool cfg_DrawResourceBox = false;
bool cfg_DrawVoidVesselBox = false;
bool cfg_LootVacuum = false;
float cfg_LootVacuumRange = 1000.0f;
int cfg_LootVacuumKey = 0x54;
float cfg_HPThreshold = 50.0f;
float cfg_MPThreshold = 50.0f;
int cfg_ResearchQty = 1;
float cfg_FireRate = 1.0f;

void InstantInfiltration();
void RestartLastMission();
void LeaveMission();
void SwitchPreset();
void RefreshPresetList(bool clearall);
void EncryptedVaultDrops();
void MissionTaskTeleporter();
//void MissionTaskActortESP();
//void MissionTaskTeleporterDebugger();
void ResearchBookmarkedItems();
void NoSpread();
void NoRecoil();
void RapidFireOn();
bool GetSpareRounds(TFD_SDK::EM1RoundsType RoundsType, int RoundsPerLoot);
void ModifyGrapple();
void InfiniteAmmoAndSkills();
/*
*  Aimbot
*/
void Aimbot();
TFD_SDK::AActor* GetClosestEnemy(int& ID);
bool cfg_EnableAimbot = false;
bool cfg_EnableAimbotHold = true;
bool cfg_EnableAimbotToggle = false;
int cfg_AimbotHoldKey = 0x02;
int cfg_AimbotToggleKey = 0x59;
float cfg_AimbotFOV = 140.0f;
float cfg_AimbotSmoothing = 16.0f;
TFD_SDK::AActor* Aimbot_Target;
int Aimbot_BoneIndex = -1;
bool cfg_AimbotNoSpread = false;
bool cfg_AimbotController = false;
bool cfg_AimbotNoRecoil = false;
bool cfg_AimbotRapidFire = false;
uint8_t Recoil[2] = { 0x74, 0x75 };
uint8_t RapidFire[2] = { 0x72, 0x77 };
float cfg_AimbotGrappleRange = 10000.0f;
bool cfg_EnableModifyGrapple = false;
//bool cfg_InfiniteAmmoAndSkills = false;
/*
* Tivmo Autism
*/

int cfg_ContainerDropKey = VK_LEFT;
void ContainerDrop();
float cfg_ContainersRange = 250.0f;
bool cfg_ChangeDropCount = false;
int cfg_DropCount = 1;



/*
*  Extras
*/
bool cfg_NoReload = false;
bool cfg_CacheEnemyNames = false;
bool cfg_CacheEnemyBones = false;
void InstantReload();
bool cfg_HotSwapOverlay = false;
bool cfg_EnableAutoRestartMission = false;
bool cfg_EnableAutoInstantInfil = false;
bool cfg_EnableMissionTaskTeleporter = false;
int HotSwapIndex = 0;
//std::vector<int> HotSwapCharacters = { 0, 0, 0, 0 };
std::vector<int> HotSwapPreset = { -1, -1, -1, -1, -1, -1 };
int cfg_HotSwapKey = VK_TAB;
int cfg_InstantInfilKey = VK_HOME;
int cfg_RestartMissionKey = VK_END;
int cfg_LeaveMissionKey = VK_PRIOR;
int cfg_SwitchPreset = VK_NEXT;
float cfg_TimeScale = 1.0f;
int cfg_TimeScaleKey = VK_F2;
int cfg_TimeScaleHoldKey = VK_CONTROL;
int cfg_EncryptedVaultDropsKey = VK_RIGHT;
int cfg_EncryptedVaultRewardType = 0;
bool isRestartMission = false;
int cfg_RestartType = 0;
int cfg_TPMissionKey = 0x50;

UC::int32 MissionTaskIndex = 0;
UC::int32 VoidMissionNodeIndex = 0;

std::chrono::steady_clock::time_point AutoTeleportStartTime = std::chrono::steady_clock::now();
std::chrono::steady_clock::time_point AutoRestartMissionStartTime = std::chrono::steady_clock::now();
std::chrono::steady_clock::time_point AutoInstantInfilStartTime = std::chrono::steady_clock::now();
std::chrono::steady_clock::time_point HPLootStartTime = std::chrono::steady_clock::now();
std::chrono::steady_clock::time_point MPLootStartTime = std::chrono::steady_clock::now();
std::chrono::steady_clock::time_point RoundsLootStartTime = std::chrono::steady_clock::now();

void WriteEnemyNamesData();
std::unordered_map<int, std::string> ReadEnemyNamesData();
void WriteEnemyBonesData();
std::unordered_map<int, std::vector<int>> ReadEnemyBonesData();

float currenthp;
float maxhp;
float currentmana;
float maxmana;
bool hp_used = false;
bool mp_used = false;
bool rounds_used = false;

std::unordered_map<int, std::vector<int>> IDBoneMap = { };
bool BonesChanged = false;
std::unordered_map<int, std::string> PresetsMap = { };
std::unordered_map<int, std::string> IDNameMap = { };
bool NamesChanged = false;

std::unordered_map<std::string, bool> MoveMissionTaskExceptionSet =
{
	{"Kingston_F_Hard_D2|MoveD2-10a",true},
	{"TheFortress_F_Hard_D1|MoveD1_Hard_10",true},
	{"CorrodedLand_Invasion_D1|Move-2",false},
	{"TheFortress_Invasion_D2|Move_4a",true},
	{"ForestDead_Invasion_D2|Move1a",false},
	{"Whitenight_Invasion_D1|MoveD1_I2a",false}

};

std::unordered_map<std::string, bool> MissionTaskExceptionSet =
{
};

std::unordered_map<std::string, bool> ForceTeleportMissionTaskExceptionSet =
{
	{"Kingston_Invasion_D2|Assassination_4",true},
	{"SterileLand_Invasion_D2|CollectionReturnD2-I3",true},
	{"SterileLand_Invasion_D2|CollectionReturnD2-I5",true},
	{"Kingston_Invasion_D1|CollectionReturn_3",true},
	{"VoidVessel_Normal_D1|Explosion01",true},
	{"VoidVessel_Normal_D1|Extermination02",true}
};

uintptr_t dwBase = 0x0;
uintptr_t dwSize = 0x0;

const struct FChunkedFixedUObjectArrayLayout
{
	const int ObjectsOffset = 0x0;
	const int MaxElementsOffset = 0x10;
	const int NumElementsOffset = 0x14;
	const int MaxChunksOffset = 0x18;
	const int NumChunksOffset = 0x1C;
};

uintptr_t SearchForGObjects(uintptr_t base);
void SearchForGWorld(uintptr_t base, uintptr_t size);
template<typename T>
T* FindAlignedValueInProcess(T Value, const std::string& Sectionname = ".data", int32_t Alignment = alignof(T), bool bSearchAllSections = false);
template<typename T>
T* FindAlignedValueInProcessInRange(T Value, int32_t Alignment, uintptr_t StartAddress, uint32_t Range);
bool IsAddressValidGObjects(const uintptr_t Address);
std::pair<uintptr_t, DWORD> GetSectionByName(uintptr_t ImageBase, const std::string& ReqestedSectionName);
bool IsBadReadPtr(const void* p);