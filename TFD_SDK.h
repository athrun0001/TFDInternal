#pragma once
//#include "SDK/Basic.hpp"
#include "SDK/CoreUObject_classes.hpp"
#include "SDK/CoreUObject_structs.hpp"

namespace TFD_SDK
{
	using namespace SDK;
	// 0x1010 (0x1038 - 0x0028)
	class UEngine : public UObject
	{
	public:
		uint8 Pad_SmallFont[0x30]; // 0x28
		class UFont* SmallFont; // 0x0058(0x0008)
		uint8 Pad_UEngine_Class[0xFD8]; // 0x0060
	public:
		static class UEngine* GetEngine();

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Engine">();
		}
		static class UEngine* GetDefaultObj()
		{
			return GetDefaultObjImpl<UEngine>();
		}
	};
	// 0x08F0 (0x0918 - 0x0028)
	class UWorld final : public UObject
	{
	public:
		uint8 Pad_PersistentLevel[0x8]; // 0x28
		class ULevel* PersistentLevel; // 0x30(0x0008) Need
		uint8 Pad_GameState[0x128];	// 0x38 
		class AGameStateBase* GameState; // 0x0160(0x0008) Need
		uint8 Pad_Levels[0x10]; // 0x168
		TArray<class ULevel*> Levels; // 0x0178(0x0010) Need
		uint8  Pad_OwningGameInstance[0x38]; // 0x188
		class UGameInstance* OwningGameInstance; // 0x01C0(0x0008) Need
		uint8  Pad_UWorld_Class[0x750]; // 0x1C8 
		
	public:
		static class UWorld* GetWorld();

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"World">();
		}
		static class UWorld* GetDefaultObj()
		{
			return GetDefaultObjImpl<UWorld>();
		}
	};
	// 0x02C8 (0x02F0 - 0x0028)
	class ULevel final : public UObject
	{
	public:
		uint8  Pad_Actors[0x70]; // 0x28 
		class TArray<class TFD_SDK::AActor*> Actors; // 0x0098(0x0010)
		uint8  Pad_WorldSettings[0x1C8]; // 0xA8 
		class AWorldSettings* WorldSettings; // 0x0270(0x0008)
		uint8  Pad_ULevel_Class[0x78]; // 0x278
		
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Level">();
		}
		static class ULevel* GetDefaultObj()
		{
			return GetDefaultObjImpl<ULevel>();
		}
	};
	// 0x0220 (0x0248 - 0x0028)
	class AActor : public UObject
	{
	public:
		uint8                                         Pad_Children[0x118]; // 0x28 
		TArray<class AActor*>                         Children; // 0x0140(0x0010) Need
		uint8                                         Pad_AActor_Class[0xF8]; // 0x150 

		bool K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport);
		float GetDistanceTo(const class AActor* OtherActor) const;
		struct FVector K2_GetActorLocation() const;
	};

	// 0x0000 (0x0248 - 0x0248)
	class AInfo : public AActor
	{
	};

	// 0x0058 (0x02A0 - 0x0248)
	class AGameStateBase : public AInfo
	{
	public:
		uint8 Pad_AGameStateBase_Class[0x58]; // 0x248 58
	};
	// 0x0198 (0x01C0 - 0x0028)
	class UGameInstance : public UObject
	{
	public:
		uint8 Pad_LocalPlayers[0x10]; // 0x28 
		TArray<class ULocalPlayer*>  LocalPlayers; // 0x0038(0x0010)
		uint8 Pad_UGameInstance_Class[0x178]; // 0x48 
	};
	// 0x0020 (0x0048 - 0x0028)
	class UPlayer : public UObject
	{
	public:
		uint8 Pad_PlayerController[0x8]; // 0x28
		class APlayerController* PlayerController; // 0x0030(0x0008)
		uint8 Pad_UPlayer_Class[0x10]; // 0x38

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Player">();
		}
		static class UPlayer* GetDefaultObj()
		{
			return GetDefaultObjImpl<UPlayer>();
		}
	};
	// 0x0010 (0x0038 - 0x0028)
	class UScriptViewportClient : public UObject
	{
	public:
		uint8 Pad_UScriptViewportClient_Class[0x10]; // 0x0028(0x0010)
	};
	// 0x0378 (0x03B0 - 0x0038)
	class UGameViewportClient : public UScriptViewportClient
	{
		uint8 Pad_UGameViewportClient_Class[0x378]; // 0x0038 378

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"GameViewportClient">();
		}
		static class UGameViewportClient* GetDefaultObj()
		{
			return GetDefaultObjImpl<UGameViewportClient>();
		}
	};
	// 0x0230 (0x0278 - 0x0048)
	class ULocalPlayer : public UPlayer
	{
	public:
		uint8 Pad_ViewportClient[0x30]; // 0x48
		class UGameViewportClient* ViewportClient; // 0x0078(0x0008)
		uint8 Pad_ULocalPlayer_Class[0x1F8]; // 0x80
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"LocalPlayer">();
		}
		static class ULocalPlayer* GetDefaultObj()
		{
			return GetDefaultObjImpl<ULocalPlayer>();
		}
	};
	// 0x0088 (0x02D0 - 0x0248)
	class AController : public AActor
	{
	public:
		uint8 Pad_PlaterState[0x8]; // 0x248
		class APlayerState* PlayerState;                                       // 0x0250(0x0008)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8 Pad_Pawn[0x30]; // 0x258
		class APawn* Pawn; // 0x0288(0x0008)
		uint8 Pad_Character[0x8]; // 0x290
		class ACharacter* Character; // 0x0298(0x0008)
		uint8 Pad_AController_Class[0x30]; // 0x2A0

		void SetControlRotation(const struct FRotator& NewRotation);
		bool LineOfSightTo(const class AActor* Other, const struct FVector& ViewPoint, bool bAlternateChecks) const;

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Controller">();
		}
		static class AController* GetDefaultObj()
		{
			return GetDefaultObjImpl<AController>();
		}
	};
	// 0x3808 (0x3A50 - 0x0248)
	class APlayerCameraManager : public AActor
	{
	public:
		uint8 Pad_APlayerCameraManager_Class[0x3808]; // 0x0248 3808

	public:
		struct FVector GetCameraLocation() const;
		struct FRotator GetCameraRotation() const;

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"PlayerCameraManager">();
		}
		static class APlayerCameraManager* GetDefaultObj()
		{
			return GetDefaultObjImpl<APlayerCameraManager>();
		}
	};
	// 0x04B8 (0x0788 - 0x02D0)
	class APlayerController : public AController
	{
	public:
		uint8 Pad_Player[0x8]; // 0x2D0
		class UPlayer* Player; // 0x02D8(0x0008)
		uint8 Pad_PlayerCameraManager[0x10]; // 0x2E0
		class APlayerCameraManager* PlayerCameraManager; // 0x02F0(0x0008)
		uint8 Pad_APlayerController_Class[0x490]; // 0x2F8
		
		bool GetMousePosition(float* LocationX, float* LocationY) const;

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"PlayerController">();
		}
		static class APlayerController* GetDefaultObj()
		{
			return GetDefaultObjImpl<APlayerController>();
		}
	};
	// 0x0008 (0x0030 - 0x0028)
	class USubsystem : public UObject
	{
	public:
		uint8 Pad_USubsystem[0x8];
	};
	// 0x0000 (0x0030 - 0x0030)
	class UGameInstanceSubsystem : public USubsystem
	{
	};
	// 0x0070 (0x02B8 - 0x0248)
	class APawn : public AActor
	{
	public:
		uint8 Pad_APawn_Class[0x70];
	};
	// 0x0248 (0x0500 - 0x02B8)
#pragma pack(push, 0x1)
	class alignas(0x10) ACharacter : public APawn
	{
	public:
		class USkeletalMeshComponent* Mesh; // 0x02B8(0x0008)
		uint8 Pad_ACharacter_Class[0x240]; // 0x2C0
	};
#pragma pack(pop)

	static_assert(offsetof(ACharacter, Mesh) == 0x2B8, "Bad alignment");
	static_assert(offsetof(ACharacter, Pad_ACharacter_Class) == 0x2C0, "Bad alignment");

	// 0x0080 (0x00A8 - 0x0028)
	class UActorComponent : public UObject
	{
	public:
		uint8 Pad_UActorComponent_Class[0x80];
		void Deactivate();
		bool IsActive() const;

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"ActorComponent">();
		}
		static class UActorComponent* GetDefaultObj()
		{
			return GetDefaultObjImpl<UActorComponent>();
		}
	};
	// 0x0148 (0x01F0 - 0x00A8)
	class alignas(0x10) USceneComponent : public UActorComponent
	{
	public:
		uint8                                         Pad_382[0x148];
	public:
		struct FTransform K2_GetComponentToWorld() const;
	};
	// 0x0280 (0x0470 - 0x01F0)
	class UPrimitiveComponent : public USceneComponent
	{
	public:
		uint8 Pad_UPrimitiveComponent_Class[0x280];
	};
	// 0x0040 (0x04B0 - 0x0470)
#pragma pack(push, 0x1)
	class alignas(0x10) UMeshComponent : public UPrimitiveComponent
	{
	public:
		uint8 Pad_UMeshComponent_Class[0x40];
	};
#pragma pack(pop)
	// 0x02E0 (0x0790 - 0x04B0)
	class USkinnedMeshComponent : public UMeshComponent
	{
	public:
		uint8 Pad_BoneArray[0x68]; // 0x04B0
		TArray<FTransform> BoneArray; // 0x0518(0x0010)
		uint8 Pad_USkinnedMeshComponent_Class[0x268]; // 0x528
		class FName GetBoneName(int32 BoneIndex) const;
		int32 GetNumBones() const;
	};
	// 0x0690 (0x0E20 - 0x0790)
	class USkeletalMeshComponent : public USkinnedMeshComponent
	{
		uint8 Pad_USkeletalMeshComponent_Class[0x690]; // 0x790
	};
	// 0x0000 (0x0028 - 0x0028)
	class UBlueprintFunctionLibrary : public UObject
	{
	};
	// 0x0000 (0x0028 - 0x0028)
	class UGameplayStatics final : public UBlueprintFunctionLibrary
	{
	public:
		static class APlayerController* GetPlayerController(const class UObject* WorldContextObject, int32 PlayerIndex);
		static bool ProjectWorldToScreen(class APlayerController* Player, const struct FVector& WorldPosition, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative);
		static double GetWorldDeltaSeconds(const class UObject* WorldContextObject);

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"GameplayStatics">();
		}
		static class UGameplayStatics* GetDefaultObj()
		{
			return GetDefaultObjImpl<UGameplayStatics>();
		}
	};
	// 0x0000 (0x0028 - 0x0028)
	class UKismetMathLibrary final : public UBlueprintFunctionLibrary
	{
	public:
		static struct FTransform Conv_MatrixToTransform(const struct FMatrix& InMatrix);
		static struct FMatrix Conv_TransformToMatrix(const struct FTransform& Transform);
		static struct FRotator FindLookAtRotation(const struct FVector& Start, const struct FVector& Target);
		static struct FMatrix Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B);
		static struct FRotator RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed);
		static double Distance2D(const struct FVector2D& V1, const struct FVector2D& V2);

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"KismetMathLibrary">();
		}
		static class UKismetMathLibrary* GetDefaultObj()
		{
			return GetDefaultObjImpl<UKismetMathLibrary>();
		}
	};
	// 0x02A8 (0x02D0 - 0x0028)
	class UCanvas final : public UObject
	{
	public:
		float                                         OrgX; // 0x0028(0x0004)
		float                                         OrgY; // 0x002C(0x0004)
		float                                         ClipX; // 0x0030(0x0004)
		float                                         ClipY; // 0x0034(0x0004)
		uint8                                         Pad_SizeX[0x8]; // 0x0038
		int32                                         SizeX; // 0x0040(0x0004)
		int32                                         SizeY; // 0x0044(0x0004)
		uint8                                         Pad_UCanvas_Class[0x288]; // 0x0048

		void K2_DrawLine(const struct FVector2D& ScreenPositionA, const struct FVector2D& ScreenPositionB, float Thickness, const struct FLinearColor& RenderColor);
		void K2_DrawText(class UFont* RenderFont, const class FString& RenderText, const struct FVector2D& ScreenPosition, const struct FVector2D& Scale, const struct FLinearColor& RenderColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor);

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"Canvas">();
		}
		static class UCanvas* GetDefaultObj()
		{
			return GetDefaultObjImpl<UCanvas>();
		}
	};
	// 0x01D8 (0x0420 - 0x0248)
	class AWorldSettings : public AInfo
	{
	public:
		uint8 Pad_TimeDilation[0x128]; // 0x248 
		float TimeDilation; // 0x0370(0x0004)
		uint8 Pad_AWorldSettings_Class[0xAC]; // 0x0374
	};
	// 0x01A8 (0x01D0 - 0x0028)
	class UFont final : public UObject
	{
	public:
		uint8                                         Pad_ADE[0x1A8]; // 0x0028(0x0008)
	};

	enum class EM1OnlineServiceConnectionState : uint8
	{
		NotLoggedIn = 0,
		RequestedLogIn = 1,
		ReceivedLogInButNotJoined = 2,
		RequestedJoinGame = 3,
		InTransitionMapToJoinGame = 4,
		ReceivedJoinGame = 5,
		JoinedDedicatedServer = 6,
		ReceivedLoginIdFromDedicatedServer = 7,
		RequestedPlayerCharacterInfoByLoginId = 8,
		SentPlayerPawnToClient = 9,
		ReceivedPawnAndOkay = 10,
		EM1OnlineServiceConnectionState_MAX = 11,
	};
	// 0x0108 (0x02C8 - 0x01C0)
	class UM1GameInstance : public UGameInstance
	{
	public:
		EM1OnlineServiceConnectionState ConnectionState; // 0x01C0(0x0001)
		uint8 Pad_UM1GameInstance_Class[0x107]; // 0x01C1

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1GameInstance">();
		}
		static class UM1GameInstance* GetDefaultObj()
		{
			return GetDefaultObjImpl<UM1GameInstance>();
		}
	};
	// 0x0004 (0x0004 - 0x0000)
	struct FM1TemplateId final
	{
	public:
		int32 ID; // 0x0000(0x0004)
	};

	// 0x0180 (0x0908 - 0x0788)
	class AM1PlayerController : public APlayerController
	{
	public:
		uint8 Pad_ActorManager[0x78]; // 0x788
		class UM1ActorManagerSubsystem* ActorManager_Subsystem; // 0x0800(0x0008)
		uint8 Pad_PrivateOnlineServComp[0x10]; // 0x0808(0x0010)
		class UM1PrivateOnlineServiceComponent* PrivateOnlineServiceComponent; // 0x0818(0x0008)
		uint8 Pad_AM1PlayerController_Class[0xE8]; // 0x820

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1PlayerController">();
		}
		static class AM1PlayerController* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1PlayerController>();
		}
	};
	// 0x0020 (0x00C8 - 0x00A8)
	class UM1ActorComponent : public UActorComponent
	{
	public:
		uint8 Pad_UM1ActorComp_Class[0x20];
	};
	// 0x08D8 (0x09A0 - 0x00C8)
	class UM1PrivateOnlineServiceComponent final : public UM1ActorComponent
	{
	public:
		uint8 Pad_UM1PrivateOnlineServiceComponent_Class[0x8D8]; // 0xC8
		void ServerChangePlayer(const struct FM1TemplateId& InCharacterTid);
	};
	// 0x0080 (0x0128 - 0x00A8)
	class UM1HeartbeatTesterComponent final : public UActorComponent
	{
	public:
		uint8 Pad_2F4E[0x80];// 0x00A8(0x0080)
	};
	// 0x0490 (0x0D98 - 0x0908)
	class AM1PlayerControllerInGame : public AM1PlayerController
	{
	public:
		uint8 PadHeartbeat[0x200]; // 0x0908
		class UM1HeartbeatTesterComponent* HeartbeatTesterComponent; // 0x0B08(0x0008)
		uint8 Pad_AM1PlayerControllerInGame_Class[0x288];// 0x0B10

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1PlayerControllerInGame">();
		}
		static class AM1PlayerControllerInGame* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1PlayerControllerInGame>();
		}
	};
	// 0x0150 (0x0180 - 0x0030)
	class UM1ActorManagerSubsystem final : public UGameInstanceSubsystem
	{
	public:
		TArray<class AM1Character*> Characters; // 0x0030(0x0010)
		uint8 Pad_UM1ActorManagerSubsystem_Class[0x140];// 0x0040

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1ActorManagerSubsystem">();
		}
		static class UM1ActorManagerSubsystem* GetDefaultObj()
		{
			return GetDefaultObjImpl<UM1ActorManagerSubsystem>();
		}
	};
	// 0x0118 (0x0140 - 0x0028)
	class UM1CharacterAttribute : public UObject
	{
	public:
		uint8 UM1CharacterAttribute_Class[0x118];

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1CharacterAttribute">();
		}
		static class UM1CharacterAttribute* GetDefaultObj()
		{
			return GetDefaultObjImpl<UM1CharacterAttribute>();
		}
	};
	// 0x00D8 (0x0218 - 0x0140)
	class UM1MonsterAttribute : public UM1CharacterAttribute
	{
	public:
		uint8 UM1MonsterAttribute_Class[0xD8];
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MonsterAttribute">();
		}
		static class UM1MonsterAttribute* GetDefaultObj()
		{
			return GetDefaultObjImpl<UM1MonsterAttribute>();
		}
	};

	// 0x0770 (0x0C70 - 0x0500)
	class AM1Character : public ACharacter
	{
	public:
		uint8 Pad_InfoWidget[0x330]; // 0x500
		class UM1CharacterInfoWidgetComponent* InfoWidgetComponent; // 0x830(0x0008) Need this
		uint8 Pad_CharacterAttribute[0x40]; // 0x838
		class UM1CharacterAttribute* CharacterAttribute;// 0x0878(0x0008)
		uint8 Pad_CharacterId[0x200]; // 0x880
		struct FM1TemplateId CharacterId; // 0x0A80(0x0004) Need this
		uint8 Pad_AM1CharClass[0x1EC]; // 0xA84

		bool IsDead() const;

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1Character">();
		}
		static class AM1Character* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1Character>();
		}
	};
	// These show as errors but are correct when compiled
	static_assert(offsetof(AM1Character, Pad_InfoWidget) == 0x500, "Bad alignment");
	static_assert(offsetof(AM1Character, InfoWidgetComponent) == 0x830, "Bad alignment");
	static_assert(offsetof(AM1Character, CharacterId) == 0xA80, "Bad alignment");

	// 0x06C0 (0x1330 - 0x0C70)
	class AM1Player : public AM1Character
	{
	public:
		uint8 Pad_WeaponSlot[0x278]; // 0xC70
		class UM1WeaponSlotControlComponent* WeaponSlotControl; // 0x0EE8(0x0008) Need this
		uint8 Pad_PlayerName[0x88]; // 0xEF0
		class FString PlayerName; // 0x0F78(0x0010) Need this
		uint8 Pad_PlayerInput[0x52]; // 0xF88
		bool bPlayerInputEnabled; // 0x0FDA(0x0001) Need this
		uint8 Pad_AM1PlayerClass[0x355]; // 0xFDB

		void RequestTeleportAtSequence(const struct FVector& InLocation, const struct FRotator& InRotation);

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1Player">();
		}
		static class AM1Player* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1Player>();
		}
	};
	// These show as errors but are correct when compiled
	//static_assert(offsetof(AM1Player, Pad_WeaponSlot) == 0xC70, "Bad alignment");
	//static_assert(offsetof(AM1Player, WeaponSlotControl) == 0xEE8, "Bad alignment");
	//static_assert(offsetof(AM1Player, PlayerName) == 0xF78, "Bad alignment");
	//static_assert(offsetof(AM1Player, bPlayerInputEnabled) == 0xFDA, "Bad alignment");

	// 0x01F0 (0x0E60 - 0x0C70)
#pragma pack(push, 0x1)
	class alignas(0x10) AM1Monster : public AM1Character
	{
	public:
		uint8 Pad_AM1Monster_Class[0x1F0]; // 0xC70
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1Monster">();
		}
		static class AM1Monster* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1Monster>();
		}
	};
#pragma pack(pop)
	// 0x0130 (0x0DA0 - 0x0C70)
	class AM1Fellow final : public AM1Character
	{
	public:
		uint8 Pad_AM1Fellow_Class[0x130]; // 0xC70

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1Fellow">();
		}
		static class AM1Fellow* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1Fellow>();
		}
	};
	// 0x0018 (0x0018 - 0x0000)
	struct FM1WeaponSlot final
	{
	public:
		uint8 Pad_Weapon[0x10];  // 0x0000
		class AM1Weapon* Weapon; // 0x0010(0x0008)
	};
	// 0x0040 (0x0040 - 0x0000)
	struct FM1ActivatedWeaponSlot final
	{
	public:
		uint8                                         Pad_2593[0x8];
		struct FM1WeaponSlot                          WeaponSlot; // 0x0008(0x0018)
		uint8                                         Pad_2594[0x20];
	};
	// 0x0008 (0x00D0 - 0x00C8)
	class UM1CharacterComponent : public UM1ActorComponent
	{
	public:
		class AM1Character* Character_Owner;  // 0x00C8(0x0008)
	};
	// 0x0108 (0x01D8 - 0x00D0)
	class UM1WeaponSlotControlComponent final : public UM1CharacterComponent
	{
	public:
		uint8 Pad_ActiveSlot[0x20];
		struct FM1ActivatedWeaponSlot ActivatedWeaponSlot; // 0x00F0(0x0040)
		uint8 Pad_Player_Owner[0x30];// 0x0130
		class AM1Player* Player_Owner; // 0x0160(0x0008)
		uint8 Pad_UM1WeaponSlotControlComponent_Class[0x70]; // 0x0168

		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1WeaponSlotControlComponent">();
		}
	};
	// 0x00E8 (0x0330 - 0x0248)
	class AM1Actor : public AActor
	{
	public:
		uint8 Pad_AM1Actor_Class[0xE8];

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1Actor">();
		}
		static class AM1Actor* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1Actor>();
		}
	};
	// 0x0158 (0x0488 - 0x0330)
	class AM1Weapon : public AM1Actor
	{
	public:
		uint8 Pad_RoundsComponent[0x30];	// 0x0330
		class UM1WeaponRoundsComponent* RoundsComponent; // 0x0360(0x0008)
		uint8 Pad_AM1Weapon_Class[0x120]; // 0x0368
	};
	// 0x0010 (0x00D8 - 0x00C8)
	class UM1WeaponComponent : public UM1ActorComponent
	{
	public:
		uint8 Pad_UM1WeaponComp_Class[0x10];
	};
	// 0x0030 (0x0108 - 0x00D8)
	class UM1WeaponRoundsComponent final : public UM1WeaponComponent
	{
	public:
		uint8 Pad_CurrentRounds[0x1C]; // 0x00D8
		int32 CurrentRounds; // 0x00F4(0x0004)
		uint8 Pad_UM1WeaponRoundsComponent_Class[0x10]; // 0x00F8

		void ClientFillCurrentRoundByServer();
	};
	// 0x0438 (0x0768 - 0x0330)
	class AM1AbilityActor : public AM1Actor
	{
	public:
		uint8 Pad_AM1AbilityActor_Class[0x438];
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1AbilityActor">();
		}
		static class AM1AbilityActor* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1AbilityActor>();
		}
	};
	// 0x0000 (0x0028 - 0x0028)
	class UVisual : public UObject
	{
	};
	// 0x0108 (0x0130 - 0x0028)
	class UWidget : public UVisual
	{
	public:
		uint8 Pad_UWidget_Class[0x108];
	};
	// 0x0120 (0x0250 - 0x0130)
	class UUserWidget : public UWidget
	{
	public:
		uint8 Pad_UUserWidget_Class[0x120];
	};
	// 0x04C0 (0x0710 - 0x0250)
	class UM1UIWidget : public UUserWidget
	{
	public:
		uint8 Pad_UM1UIWidget_Class[0x4C0];
	};
	// 0x0030 (0x0740 - 0x0710)
	class UM1UIActorWidget : public UM1UIWidget
	{
	public:
		uint8 Pad_UM1UIActorWidget_Class[0x30];
	};

	// 0x0220 (0x0410 - 0x01F0)
	class UM1ActorWidgetComponent : public USceneComponent
	{
	public:
		uint8 Pad_ActorWidget[0x48]; // 0x01F0
		TWeakObjectPtr<class UM1UIActorWidget> ActorWidget; // 0x0238(0x0008)
		uint8 Pad_UM1ActorWidgetComponent_Class[0x1E0]; // 0x0240
	};
	// 0x0030 (0x0450 - 0x0420)
	class UM1CharacterInfoWidgetComponent final : public UM1ActorWidgetComponent
	{
	public:
		uint8 Pad_UM1CharacterInfoWidgetComponent_Class[0x30];
	};
	// 0x00B8 (0x07F8 - 0x0740)
	class UM1UICharacterInfoBase : public UM1UIActorWidget
	{
	public:
		uint8 Pad_TB_Name[0x8]; // 0x0740
		class UM1TextBlock* TB_Name; // 0x0748(0x0008)
		uint8 Pad_UM1UICharacterInfoBase_Class[0xA8]; // 0x0750

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1UICharacterInfoBase">();
		}
		static class UM1UICharacterInfoBase* GetDefaultObj()
		{
			return GetDefaultObjImpl<UM1UICharacterInfoBase>();
		}
	};
	// 0x0020 (0x0150 - 0x0130)
	class UTextLayoutWidget : public UWidget
	{
	public:
		uint8 Pad_UTextLayoutWidget_Class[0x20];
	};
	// 0x0058 (0x0058 - 0x0000)
	struct FSlateFontInfo final
	{
	public:
		class UObject* FontObject; // 0x0000(0x0008)
		uint8 Pad_FSlateFontInfo_Class[0x50]; // 0x0008
	};
	// 0x01B0 (0x0300 - 0x0150)
	class UTextBlock : public UTextLayoutWidget
	{
	public:
		class FText Text; // 0x0150(0x0018)
		uint8 Pad_Font[0x38];// 0x0168
		struct FSlateFontInfo Font; // 0x01A0(0x0058)
		uint8 Pad_UTextBlock_Class[0x108];// 0x01F8
	};
	// 0x0020 (0x0320 - 0x0300)
	#pragma pack(push, 0x1)
	class alignas(0x10) UM1TextBlock : public UTextBlock
	{
	public:
		uint8 Pad_UM1TextBlock_Class[0x20];
	};
	#pragma pack(pop)
	enum class EM1MiniGameDifficulty : uint8
	{
		None = 0,
		Normal = 1,
		Hard = 2,
		VeryHard = 3,
		EM1MiniGameDifficulty_MAX = 4,
	};
	// 0x0108 (0x0438 - 0x0330)
	class AM1FieldInteractableActor : public AM1Actor
	{
	public:
		uint8 Pad_AM1FieldIntActor_Class[0x108];
	};
	// 0x0018 (0x0450 - 0x0438)
	class AM1FieldInteractableActor_Interaction : public AM1FieldInteractableActor
	{
	public:
		uint8 Pad_AM1FieldIntActorInt_Class[0x18];
	};
	// 0x0008 (0x0458 - 0x0450)
	class AM1FieldInteractableActorMiniGame final : public AM1FieldInteractableActor_Interaction
	{
	public:
		EM1MiniGameDifficulty MiniGameDifficulty; // 0x0450(0x0001)
		uint8 Pad_451[0x7]; // 0x0451

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1FieldInteractableActorMiniGame">();
		}
		static class AM1FieldInteractableActorMiniGame* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1FieldInteractableActorMiniGame>();
		}
	};

	enum class EM1ItemType : uint8
	{
		None = 0,
		Currency = 1,
		Equipment = 2,
		Consumable = 3,
		Rune = 4,
		Character = 5,
		InstantUse = 6,
		Customizing = 7,
		Title = 8,
		Record = 9,
		CurrencyInternal = 10,
		Fellow = 12,
		Max = 13,
	};
	// 0x0008 (0x0008 - 0x0000)
	struct FM1ItemTidBox final
	{
	public:
		EM1ItemType                                   Type;                                              // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1BF8[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         TemplateId;                                        // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// 0x0030 (0x0030 - 0x0000)
	struct FM1DropItemInfo final
	{
	public:
		uint8 Pad_Junk[0x14]; // 0x0000
		struct FM1ItemTidBox ItemBox; // 0x0014(0x0008)
		uint8 Pad_Junk2[0x14]; // 0x001C
	};
	// 0x0398 (0x05E0 - 0x0248)
	class alignas(0x10) AM1DropContainer : public AActor
	{
	public:
		uint8                                         Pad_BeingPicked[0x278]; // 0x248
		bool                                          bBeingPickedLocally; // 0x04C0(0x0001) Need
		bool                                          bTriedSetToObtained; // 0x04C1(0x0001) Need
		uint8                                         Pad_AM1DropContainer_Class[0x11E]; // 0x04C2

		bool IsObtained() const;
	};
	// 0x00A0 (0x0680 - 0x05E0)
	class AM1DroppedItem : public AM1DropContainer
	{
	public:
		uint8                                         Pad_DropItemInfo[0x40]; // 0x05E0
		struct FM1DropItemInfo                        DropItemInfo; // 0x0620(0x0030)
		uint8                                         Pad_ObtainRequested[0x20]; // 0x0650
		bool                                          bObtainRequestedOnClient; // 0x0670(0x0001)
		uint8                                         Pad_AM1DroppedItem_Class[0xF]; // 0x0671

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1DroppedItem">();
		}
		static class AM1DroppedItem* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1DroppedItem>();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_DroppedItemBase_C : public AM1DroppedItem
	{
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_AmmoEnhancedDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_AmmoEnhancedDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_AmmoGeneralDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_AmmoGeneralDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_AmmoHighpowerDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_AmmoHighpowerDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_AmmoImpactDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_AmmoImpactDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_HealthOrbDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_HealthOrbDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_ManaOrbDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_ManaOrbDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_EquipTier01DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_EquipTier01DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_EquipTier02DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_EquipTier02DroppedItem_C">();
		}
	};
	// 0x0010 (0x0690 - 0x0680)
	class ABP_EquipTier03DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		uint8                                         Pad_ABP_EquipTier03DroppedItem_C[0x8];
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_EquipTier03DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_ResourceTier01DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_ResourceTier01DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_ResourceTier02DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_ResourceTier02DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_ResourceTier03DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_ResourceTier03DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_RuneTier01DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_RuneTier01DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_RuneTier02DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_RuneTier02DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_RuneTier03DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_RuneTier03DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_RuneTier04DroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_RuneTier04DroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_GoldDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_GoldDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_KuiperShardDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_KuiperShardDroppedItem_C">();
		}
	};
	// 0x0000 (0x0680 - 0x0680)
	class ABP_BuffOrbDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_BuffOrbDroppedItem_C">();
		}
	};
	// 0x0020 (0x06A0 - 0x0680)
	class ABP_EmberDroppedItem_C final : public ABP_DroppedItemBase_C
	{
	public:
		uint8                                         Pad_ABP_EmberDroppedItem_C[0x20];
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_EmberDroppedItem_C">();
		}
	};

	// 0x0020 (0x0458 - 0x0438)
	class AM1FieldInteractableActor_Hit : public AM1FieldInteractableActor
	{
	public:
		uint8                                         AM1FieldInteractableActor_Hit_Class[0x20];
	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1FieldInteractableActor_Hit">();
		}
		static class AM1FieldInteractableActor_Hit* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1FieldInteractableActor_Hit>();
		}
	};

	// 0x0000 (0x0458 - 0x0458)
	class ABP_FieldInteractableBase_Hit_C : public AM1FieldInteractableActor_Hit
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_FieldInteractableBase_Hit_C">();
		}
		static class ABP_FieldInteractableBase_Hit_C* GetDefaultObj()
		{
			return GetDefaultObjImpl<ABP_FieldInteractableBase_Hit_C>();
		}
	};
	// 0x0000 (0x0458 - 0x0458)
	class ABP_INTER_VulgusBox_C final : public ABP_FieldInteractableBase_Hit_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_INTER_VulgusBox_C">();
		}
		static class ABP_INTER_VulgusBox_C* GetDefaultObj()
		{
			return GetDefaultObjImpl<ABP_INTER_VulgusBox_C>();
		}
	};

	// 0x0000 (0x0450 - 0x0450)
	class ABP_FieldInteractableBase_Interaction_C : public AM1FieldInteractableActor_Interaction
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_FieldInteractableBase_Interaction_C">();
		}
		static class ABP_FieldInteractableBase_Interaction_C* GetDefaultObj()
		{
			return GetDefaultObjImpl<ABP_FieldInteractableBase_Interaction_C>();
		}
	};

	// 0x0000 (0x0450 - 0x0450)
	class ABP_INTER_MilitarySupplies_C final : public ABP_FieldInteractableBase_Interaction_C
	{
	public:
		static class UClass* StaticClass()
		{
			return StaticBPGeneratedClassImpl<"BP_INTER_MilitarySupplies_C">();
		}
		static class ABP_INTER_MilitarySupplies_C* GetDefaultObj()
		{
			return GetDefaultObjImpl<ABP_INTER_MilitarySupplies_C>();
		}
	};


	// start building here
	// 0x0118 (0x0360 - 0x0248)
	class APlayerState : public AInfo
	{
	public:
		uint8                                         Pad_APlayerState_Class[0x118];                     // 0x0248(0x0004)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"PlayerState">();
		}
		static class APlayerState* GetDefaultObj()
		{
			return GetDefaultObjImpl<APlayerState>();
		}
	};
	// 0x0018 (0x0040 - 0x0028)
	class UM1MissionTaskService : public UObject
	{
	public:
		uint8                                         Pad_28[0x10];                                      // 0x0028
		bool                                          bInitialReplication;                               // 0x0038(0x0001)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		bool                                          bJoined;                                           // 0x0039(0x0001)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		uint8                                         Pad_3A[0x6];                                       // 0x003A


	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MissionTaskService">();
		}
		static class UM1MissionTaskService* GetDefaultObj()
		{
			return GetDefaultObjImpl<UM1MissionTaskService>();
		}
	};
	// 0x0210 (0x0458 - 0x0248)
	class AM1TaskEventActor : public AActor
	{
	public:
		uint8                                         Pad_AM1TaskEventActor_Class[0x210];                // 0x0248(0x001A)(Fixing Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1TaskEventActor">();
		}
		static class AM1TaskEventActor* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1TaskEventActor>();
		}
	};
	// 0x0378 (0x07D0 - 0x0458)
	#pragma pack(push, 0x1)
	class alignas(0x10) AM1MissionTaskActor : public AM1TaskEventActor
	{
	public:
		uint8                                         Pad_AM1MissionTaskActor_Class[0x378];              // 0x0458(0x00C0)(Fixing Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MissionTaskActor">();
		}
		static class AM1MissionTaskActor* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1MissionTaskActor>();
		}
	};
	#pragma pack(pop)
	// 0x0020 (0x0020 - 0x0000)
	struct FM1MissionTaskLink final
	{
	public:
		class FName                                   TaskName;                                          // 0x0000(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		int32                                         LinkIndex;                                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_C[0x4];                                        // 0x000C
		class AM1MissionTaskActor*					  InstancedTaskActor;								 // 0x0010(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		TSubclassOf<class AM1MissionTaskActor>        TaskActorClass;                                    // 0x0018(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	//static_assert(alignof(FM1MissionTaskLink) == 0x000008, "Wrong alignment on FM1MissionTaskLink");
	//static_assert(sizeof(FM1MissionTaskLink) == 0x000020, "Wrong size on FM1MissionTaskLink");
	//static_assert(offsetof(FM1MissionTaskLink, TaskName) == 0x000000, "Member 'FM1MissionTaskLink::TaskName' has a wrong offset!");
	//static_assert(offsetof(FM1MissionTaskLink, LinkIndex) == 0x000008, "Member 'FM1MissionTaskLink::LinkIndex' has a wrong offset!");
	//static_assert(offsetof(FM1MissionTaskLink, InstancedTaskActor) == 0x000010, "Member 'FM1MissionTaskLink::InstancedTaskActor' has a wrong offset!");
	//static_assert(offsetof(FM1MissionTaskLink, TaskActorClass) == 0x000018, "Member 'FM1MissionTaskLink::TaskActorClass' has a wrong offset!");

	// 0x0320 (0x0568 - 0x0248)
	class AM1MissionActor : public AActor
	{
	public:
		uint8                                         Pad_TaskLinks[0x38];								 // 0x0248
		TArray<struct FM1MissionTaskLink>             TaskLinks;                                         // 0x0280(0x0010)(Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
		uint8                                         Pad_AM1MissionActor_Class[0x2D8];                  // 0x0290


	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MissionActor">();
		}
		static class AM1MissionActor* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1MissionActor>();
		}
	};
	// 0x0708 (0x07B0 - 0x00A8)
	class UM1MissionControlComponent final : public UActorComponent
	{
	public:
		uint8                                         Pad_SubServices[0x20];                             // 0x00A8
		TArray<class UM1MissionTaskService*>          SubServices;                                       // 0x00C8(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
		uint8                                         Pad_ActivatedMissions[0x140];                      // 0x00D8
		TArray<class AM1MissionActor*>                ActivatedMissions;                                 // 0x0218(0x0010)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
		uint8                                         Pad_UM1MissionControlComponent_Class[0x588];       // 0x0228


	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MissionControlComponent">();
		}
		static class UM1MissionControlComponent* GetDefaultObj()
		{
			return GetDefaultObjImpl<UM1MissionControlComponent>();
		}
	};
	// 0x0080 (0x03E0 - 0x0360)
	class AM1PlayerState final : public APlayerState
	{
	public:
		class UM1MissionControlComponent*			  MissionControlComponent;                           // 0x0360(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8										  Pad_AM1PlayerState_Class[0x78];                    // 0x0368

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1PlayerState">();
		}
		static class AM1PlayerState* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1PlayerState>();
		}
	};
	// 0x0010 (0x0340 - 0x0330)
	class AM1StatBasedActor : public AM1Actor
	{
	public:
		uint8                                         Pad_AM1StatBasedActor_Class[0x10];                  // 0x0330(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1StatBasedActor">();
		}
		static class AM1StatBasedActor* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1StatBasedActor>();
		}
	};

	enum class EM1MissionTargetState : uint8
	{
		Default = 0,
		BeingSpawned = 1,
		Spawned = 2,
		Destructed = 3,
		BeingDespawned = 4,
		Interaction = 5,
		Idle = 6,
		Respawn = 7,
		Deactivated = 8,
		EM1MissionTargetState_MAX = 9,
	};
	// 0x0278 (0x05B8 - 0x0340)
	class AM1MissionTargetActor : public AM1StatBasedActor
	{
	public:
		uint8										  Pax_CurrentState[0x103];													// 0x0340					
		EM1MissionTargetState                         CurrentState; 															// 0x0443(0x0001)
		uint8                                         Pad_AM1MissionTargetActor_Class[0x174];                                   // 0x0444

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MissionTargetActor">();
		}
		static class AM1MissionTargetActor* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1MissionTargetActor>();
		}
	};
	// 0x0028 (0x05E0 - 0x05B8)
	class AM1MissionTargetInteraction final : public AM1MissionTargetActor
	{
	public:
		uint8                                         Pad_AM1MissionTargetInteraction_Class[0x28];                                      // 0x05A0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MissionTargetInteraction">();
		}
		static class AM1MissionTargetInteraction* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1MissionTargetInteraction>();
		}
	};
	// 0x0010 (0x0010 - 0x0000)
	struct M1MissionTaskServiceInteraction_ServerRequestMissionTargetBeginInteraction final
	{
	public:
		class AM1MissionTargetInteraction* InActor;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AM1PlayerControllerInGame* InAcceptor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	class UM1MissionTaskServiceInteraction final : public UM1MissionTaskService
	{
	public:
		void ServerRequestMissionTargetBeginInteraction(class AM1MissionTargetInteraction* InActor, class AM1PlayerControllerInGame* InAcceptor);

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MissionTaskServiceInteraction">();
		}
		static class UM1MissionTaskServiceInteraction* GetDefaultObj()
		{
			return GetDefaultObjImpl<UM1MissionTaskServiceInteraction>();
		}
	};
	// 0x0060 (0x0830 - 0x07D0)
	class AM1MissionTaskActorDestructionVulgusPost : public AM1MissionTaskActor
	{
	public:
		uint8                                         Pad_MissionTargets[0x10];										 // 0x07D0
		TArray<class AM1MissionTargetInteraction*>    MissionTargets;											     // 0x07E0(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
		uint8                                         Pad_AM1MissionTaskActorDestructionVulgusPost_Class[0x40];      // 0x07F0

	public:
		static class UClass* StaticClass()
		{
			return StaticClassImpl<"M1MissionTaskActorDestructionVulgusPost">();
		}
		static class AM1MissionTaskActorDestructionVulgusPost* GetDefaultObj()
		{
			return GetDefaultObjImpl<AM1MissionTaskActorDestructionVulgusPost>();
		}
	};

	// end code
	// 0x0004 (0x0004 - 0x0000)
	struct M1PrivateOnlineServiceComponent_ServerChangePlayer final
	{
	public:
		struct FM1TemplateId InCharacterTid;
	};
	// 0x0001 (0x0001 - 0x0000)
	struct M1Character_IsDead final
	{
	public:
		bool ReturnValue;
	};
	// 0x0018 (0x0018 - 0x0000)
	struct M1Player_RequestTeleportAtSequence final
	{
	public:
		struct FVector InLocation;
		struct FRotator InRotation;
	};
	// 0x0000 (0x000C - 0x000C)
	struct FVector_NetQuantize final : public FVector
	{
	};
	// 0x0000 (0x000C - 0x000C)
	struct FVector_NetQuantizeNormal final : public FVector
	{
	};
	// 0x0018 (0x0018 - 0x0000)
	struct FActorInstanceHandle final
	{
	public:
		TWeakObjectPtr<class AActor>                  Actor;						// 0x0000(0x0008)
		uint8                                         Pad_99[0x10];					// 0x0008
	};
	// 0x009C (0x009C - 0x0000)
	struct FHitResult final
	{
	public:
		int32                                         FaceIndex;                                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Time;                                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Distance;                                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                    Location;                                          // 0x000C(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                    ImpactPoint;                                       // 0x0018(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal              Normal;                                            // 0x0024(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal              ImpactNormal;                                      // 0x0030(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                    TraceStart;                                        // 0x003C(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                    TraceEnd;                                          // 0x0048(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         PenetrationDepth;                                  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         MyItem;                                            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         Item;                                              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         ElementIndex;                                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bBlockingHit : 1;                                  // 0x0061(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bStartPenetrating : 1;                             // 0x0061(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		TWeakObjectPtr<class UPhysicalMaterial>       PhysMaterial;                                      // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActorInstanceHandle                   HitObjectHandle;                                   // 0x006C(0x0018)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TWeakObjectPtr<class UPrimitiveComponent>     Component;                                         // 0x0084(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                   BoneName;                                          // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                   MyBoneName;                                        // 0x0094(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	struct Actor_K2_SetActorLocation final
	{
	public:
		struct FVector                                NewLocation;
		bool                                          bSweep;
		uint8                                         Pad_357[0x3];
		struct FHitResult                             SweepHitResult;
		bool                                          bTeleport;
		bool                                          ReturnValue;
		uint8                                         Pad_358[0x2];
	};

	struct Actor_GetDistanceTo final
	{
	public:
		const class AActor*							  OtherActor;                                        // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_373[0x4];                                      // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	struct Actor_K2_GetActorLocation final
	{
	public:
		struct FVector                                ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	struct Controller_SetControlRotation final
	{
	public:
		struct FRotator                               NewRotation;                                       // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	struct Controller_LineOfSightTo final
	{
	public:
		const class AActor*							  Other;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                ViewPoint;                                         // 0x0008(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bAlternateChecks;                                  // 0x0014(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          ReturnValue;                                       // 0x0015(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_767[0x2];                                      // 0x0016(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	struct PlayerCameraManager_GetCameraLocation final
	{
	public:
		struct FVector                                ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	struct PlayerCameraManager_GetCameraRotation final
	{
	public:
		struct FRotator                               ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	struct PlayerController_GetMousePosition final
	{
	public:
		float                                         LocationX;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LocationY;                                         // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_7B4[0x3];                                      // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	struct ActorComponent_IsActive final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	struct SceneComponent_K2_GetComponentToWorld final
	{
	public:
		struct FTransform                             ReturnValue;                                       // 0x0000(0x0030)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	struct SkinnedMeshComponent_GetBoneName final
	{
	public:
		int32                                         BoneIndex;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                   ReturnValue;                                       // 0x0004(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	struct GameplayStatics_GetPlayerController final
	{
	public:
		const class UObject*						  WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         PlayerIndex;                                       // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_CD8[0x4];                                      // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class APlayerController*					  ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	struct GameplayStatics_ProjectWorldToScreen final
	{
	public:
		class APlayerController*					  Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                WorldPosition;                                     // 0x0008(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              ScreenPosition;                                    // 0x0014(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bPlayerViewportRelative;                           // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          ReturnValue;                                       // 0x001D(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_CF4[0x2];                                      // 0x001E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	struct GameplayStatics_GetWorldDeltaSeconds final
	{
	public:
		const class UObject*						  WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                        ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	struct KismetMathLibrary_Conv_MatrixToTransform final
	{
	public:
		struct FMatrix                                InMatrix;                                          // 0x0000(0x0040)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                             ReturnValue;                                       // 0x0040(0x0030)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	struct KismetMathLibrary_Conv_TransformToMatrix final
	{
	public:
		struct FTransform                             Transform;                                         // 0x0000(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMatrix                                ReturnValue;                                       // 0x0030(0x0040)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	struct KismetMathLibrary_FindLookAtRotation final
	{
	public:
		struct FVector                                Start;                                             // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                Target;                                            // 0x000C(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                               ReturnValue;                                       // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	struct KismetMathLibrary_Multiply_MatrixMatrix final
	{
	public:
		struct FMatrix                                A;                                                 // 0x0000(0x0040)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                B;                                                 // 0x0040(0x0040)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                ReturnValue;                                       // 0x0080(0x0040)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	struct KismetMathLibrary_RInterpTo final
	{
	public:
		struct FRotator                               Current;                                           // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FRotator                               Target;                                            // 0x000C(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                         DeltaTime;                                         // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         InterpSpeed;                                       // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                               ReturnValue;                                       // 0x0020(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	struct KismetMathLibrary_Distance2D final
	{
	public:
		struct FVector2D                              V1;                                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              V2;                                                // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                        ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	struct Canvas_K2_DrawLine final
	{
	public:
		struct FVector2D                              ScreenPositionA;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              ScreenPositionB;                                   // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Thickness;                                         // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           RenderColor;                                       // 0x0014(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	struct Canvas_K2_DrawText final
	{
	public:
		class UFont* RenderFont;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 RenderText;                                        // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              ScreenPosition;                                    // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              Scale;                                             // 0x0020(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           RenderColor;                                       // 0x0028(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Kerning;                                           // 0x0038(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           ShadowColor;                                       // 0x003C(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              ShadowOffset;                                      // 0x004C(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bCentreX;                                          // 0x0054(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bCentreY;                                          // 0x0055(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bOutlined;                                         // 0x0056(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_E8E[0x1];                                      // 0x0057(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		struct FLinearColor                           OutlineColor;                                      // 0x0058(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	struct M1DropContainer_IsObtained final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	struct SkinnedMeshComponent_GetNumBones final
	{
	public:
		int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
}