#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DeveloperSettings

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct DeveloperSettings.PerPlatformSettings
// 0x0010 (0x0010 - 0x0000)
struct FPerPlatformSettings final
{
public:
	TArray<class UPlatformSettings*>              Settings;                                          // 0x0000(0x0010)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// ScriptStruct DeveloperSettings.PlatformSettingsInstances
// 0x0058 (0x0058 - 0x0000)
struct FPlatformSettingsInstances final
{
public:
	class UPlatformSettings*                      PlatformInstance;                                  // 0x0000(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class UPlatformSettings*>   OtherPlatforms;                                    // 0x0008(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};

}

