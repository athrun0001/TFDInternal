#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EngineSettings

#include "Basic.hpp"

#include "EngineSettings_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class EngineSettings.ConsoleSettings
// 0x0048 (0x0070 - 0x0028)
class UConsoleSettings final : public UObject
{
public:
	int32                                         MaxScrollbackSize;                                 // 0x0028(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAutoCompleteCommand>           ManualAutoCompleteList;                            // 0x0030(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                         AutoCompleteMapPaths;                              // 0x0040(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	float                                         BackgroundOpacityPercentage;                       // 0x0050(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOrderTopToBottom;                                 // 0x0054(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisplayHelpInAutoComplete;                        // 0x0055(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_56[0x2];                                       // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 InputColor;                                        // 0x0058(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 HistoryColor;                                      // 0x005C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 AutoCompleteCommandColor;                          // 0x0060(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 AutoCompleteCVarColor;                             // 0x0064(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 AutoCompleteFadedColor;                            // 0x0068(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConsoleSettings">();
	}
	static class UConsoleSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsoleSettings>();
	}
};

// Class EngineSettings.GameMapsSettings
// 0x0118 (0x0140 - 0x0028)
class UGameMapsSettings final : public UObject
{
public:
	class FString                                 LocalMapOptions;                                   // 0x0028(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        TransitionMap;                                     // 0x0038(0x0020)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseSplitscreen;                                   // 0x0058(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETwoPlayerSplitScreenType                     TwoPlayerSplitscreenLayout;                        // 0x0059(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EThreePlayerSplitScreenType                   ThreePlayerSplitscreenLayout;                      // 0x005A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFourPlayerSplitScreenType                    FourPlayerSplitscreenLayout;                       // 0x005B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOffsetPlayerGamepadIds;                           // 0x005C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftClassPath                         GameInstanceClass;                                 // 0x0060(0x0020)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        PrologueMap;                                       // 0x0080(0x0020)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        GameDefaultMap;                                    // 0x00A0(0x0020)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                        ServerDefaultMap;                                  // 0x00C0(0x0020)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftClassPath                         GlobalDefaultGameMode;                             // 0x00E0(0x0020)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftClassPath                         GlobalDefaultServerGameMode;                       // 0x0100(0x0020)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGameModeName>                  GameModeMapPrefixes;                               // 0x0120(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)
	TArray<struct FGameModeName>                  GameModeClassAliases;                              // 0x0130(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)

public:
	static class UGameMapsSettings* GetGameMapsSettings();

	void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);

	bool GetSkipAssigningGamepadToPlayer1() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameMapsSettings">();
	}
	static class UGameMapsSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameMapsSettings>();
	}
};

// Class EngineSettings.GameNetworkManagerSettings
// 0x0030 (0x0058 - 0x0028)
class UGameNetworkManagerSettings final : public UObject
{
public:
	int32                                         MinDynamicBandwidth;                               // 0x0028(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxDynamicBandwidth;                               // 0x002C(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TotalNetBandwidth;                                 // 0x0030(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BadPingThreshold;                                  // 0x0034(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIsStandbyCheckingEnabled : 1;                     // 0x0038(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StandbyRxCheatTime;                                // 0x003C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StandbyTxCheatTime;                                // 0x0040(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PercentMissingForRxStandby;                        // 0x0044(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PercentMissingForTxStandby;                        // 0x0048(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PercentForBadPing;                                 // 0x004C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JoinInProgressStandbyWaitTime;                     // 0x0050(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameNetworkManagerSettings">();
	}
	static class UGameNetworkManagerSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameNetworkManagerSettings>();
	}
};

// Class EngineSettings.GameSessionSettings
// 0x0010 (0x0038 - 0x0028)
class UGameSessionSettings final : public UObject
{
public:
	int32                                         MaxSpectators;                                     // 0x0028(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxPlayers;                                        // 0x002C(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bRequiresPushToTalk : 1;                           // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameSessionSettings">();
	}
	static class UGameSessionSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameSessionSettings>();
	}
};

// Class EngineSettings.GeneralEngineSettings
// 0x0000 (0x0028 - 0x0028)
class UGeneralEngineSettings final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeneralEngineSettings">();
	}
	static class UGeneralEngineSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeneralEngineSettings>();
	}
};

// Class EngineSettings.GeneralProjectSettings
// 0x00F0 (0x0118 - 0x0028)
class UGeneralProjectSettings final : public UObject
{
public:
	class FString                                 CompanyName;                                       // 0x0028(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CompanyDistinguishedName;                          // 0x0038(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CopyrightNotice;                                   // 0x0048(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Description;                                       // 0x0058(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Homepage;                                          // 0x0068(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LicensingTerms;                                    // 0x0078(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PrivacyPolicy;                                     // 0x0088(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ProjectID;                                         // 0x0098(0x0010)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ProjectName;                                       // 0x00A8(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ProjectVersion;                                    // 0x00B8(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SupportContact;                                    // 0x00C8(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   ProjectDisplayedTitle;                             // 0x00D8(0x0018)(Edit, Config, NativeAccessSpecifierPublic)
	class FText                                   ProjectDebugTitleInfo;                             // 0x00F0(0x0018)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                          bShouldWindowPreserveAspectRatio;                  // 0x0108(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseBorderlessWindow;                              // 0x0109(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStartInVR;                                        // 0x010A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowWindowResize;                                // 0x010B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowClose;                                       // 0x010C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowMaximize;                                    // 0x010D(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowMinimize;                                    // 0x010E(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10F[0x1];                                      // 0x010F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EyeOffsetForFakeStereoRenderingDevice;             // 0x0110(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FOVForFakeStereoRenderingDevice;                   // 0x0114(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeneralProjectSettings">();
	}
	static class UGeneralProjectSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeneralProjectSettings>();
	}
};

// Class EngineSettings.HudSettings
// 0x0018 (0x0040 - 0x0028)
class UHudSettings final : public UObject
{
public:
	uint8                                         bShowHUD : 1;                                      // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           DebugDisplay;                                      // 0x0030(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HudSettings">();
	}
	static class UHudSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHudSettings>();
	}
};

}

