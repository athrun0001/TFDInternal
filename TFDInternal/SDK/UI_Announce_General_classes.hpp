#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Announce_General

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Announce_General.UI_Announce_General_C
// 0x0008 (0x0720 - 0x0718)
class UUI_Announce_General_C final : public UM1UIAnnounce
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_UI_Announce_General(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Announce_General_C">();
	}
	static class UUI_Announce_General_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Announce_General_C>();
	}
};

}

