#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DLSS

#include "Basic.hpp"

#include "DLSS_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class DLSS.DLSSOverrideSettings
// 0x0008 (0x0030 - 0x0028)
class UDLSSOverrideSettings final : public UObject
{
public:
	EDLSSSettingOverride                          EnableDLSSInEditorViewportsOverride;               // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSSettingOverride                          EnableDLSSInPlayInEditorViewportsOverride;         // 0x0029(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowDLSSIncompatiblePluginsToolsWarnings;         // 0x002A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSSettingOverride                          ShowDLSSSDebugOnScreenMessages;                    // 0x002B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DLSSOverrideSettings">();
	}
	static class UDLSSOverrideSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDLSSOverrideSettings>();
	}
};

// Class DLSS.DLSSSettings
// 0x0040 (0x0068 - 0x0028)
class UDLSSSettings final : public UObject
{
public:
	bool                                          bEnableDLSSD3D12;                                  // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSD3D11;                                  // 0x0029(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSVulkan;                                 // 0x002A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSInEditorViewports;                      // 0x002B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSInPlayInEditorViewports;                // 0x002C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowDLSSSDebugOnScreenMessages;                   // 0x002D(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 GenericDLSSBinaryPath;                             // 0x0030(0x0010)(Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bGenericDLSSBinaryExists;                          // 0x0040(0x0001)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        NVIDIANGXApplicationId;                            // 0x0044(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CustomDLSSBinaryPath;                              // 0x0048(0x0010)(Edit, ZeroConstructor, Config, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCustomDLSSBinaryExists;                           // 0x0058(0x0001)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowOTAUpdate;                                   // 0x0059(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowDLSSIncompatiblePluginsToolsWarnings;         // 0x005A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSPreset                                   DLAAPreset;                                        // 0x005B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x1];                                       // 0x005C(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	EDLSSPreset                                   DLSSQualityPreset;                                 // 0x005D(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSPreset                                   DLSSBalancedPreset;                                // 0x005E(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSPreset                                   DLSSPerformancePreset;                             // 0x005F(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSPreset                                   DLSSUltraPerformancePreset;                        // 0x0060(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DLSSSettings">();
	}
	static class UDLSSSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDLSSSettings>();
	}
};

}

