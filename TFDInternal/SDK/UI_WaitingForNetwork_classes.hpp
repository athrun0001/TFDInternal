#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_WaitingForNetwork

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_WaitingForNetwork.UI_WaitingForNetwork_C
// 0x0018 (0x0748 - 0x0730)
class UUI_WaitingForNetwork_C final : public UM1UIWaitingForNetwork
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0730(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UI_ANIM_Open;                                      // 0x0738(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_89;                                          // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_WaitingForNetwork(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_WaitingForNetwork_C">();
	}
	static class UUI_WaitingForNetwork_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_WaitingForNetwork_C>();
	}
};

}

