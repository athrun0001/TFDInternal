#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemSteam

#include "Basic.hpp"

#include "PacketHandler_classes.hpp"
#include "OnlineSubsystemUtils_classes.hpp"


namespace SDK
{

// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// 0x0000 (0x0028 - 0x0028)
class USteamAuthComponentModuleInterface final : public UHandlerComponentFactory
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamAuthComponentModuleInterface">();
	}
	static class USteamAuthComponentModuleInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamAuthComponentModuleInterface>();
	}
};

// Class OnlineSubsystemSteam.SteamNetConnection
// 0x0008 (0x1E50 - 0x1E48)
class USteamNetConnection final : public UIpConnection
{
public:
	bool                                          bIsPassthrough;                                    // 0x1E48(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E49[0x7];                                     // 0x1E49(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamNetConnection">();
	}
	static class USteamNetConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamNetConnection>();
	}
};

// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0008 (0x0870 - 0x0868)
class USteamNetDriver final : public UIpNetDriver
{
public:
	uint8                                         Pad_868[0x8];                                      // 0x0868(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamNetDriver">();
	}
	static class USteamNetDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamNetDriver>();
	}
};

}

