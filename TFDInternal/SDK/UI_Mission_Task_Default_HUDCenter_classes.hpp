#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_Default_HUDCenter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Task_Default_HUDCenter.UI_Mission_Task_Default_HUDCenter_C
// 0x0010 (0x0720 - 0x0710)
class UUI_Mission_Task_Default_HUDCenter_C final : public UM1UIMissionTaskGoal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0710(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0718(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void OnEventWidgetClose(EM1WidgetAnimDirection InDirection);
	void ExecuteUbergraph_UI_Mission_Task_Default_HUDCenter(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Task_Default_HUDCenter_C">();
	}
	static class UUI_Mission_Task_Default_HUDCenter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Task_Default_HUDCenter_C>();
	}
};

}

