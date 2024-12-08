#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_Occupation_HUDCenter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Task_Occupation_HUDCenter.UI_Mission_Task_Occupation_HUDCenter_C
// 0x0030 (0x0788 - 0x0758)
class UUI_Mission_Task_Occupation_HUDCenter_C final : public UM1UIMissionTaskGoal_Occupation
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0758(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0760(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Occupating;                                 // 0x0768(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           Panel_OccupationTaskInfo;                          // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Common_Fx_01_C*                     UI_Common_Fx_01;                                   // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsVisible;                                        // 0x0780(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void OnEventWidgetClose(EM1WidgetAnimDirection InDirection);
	void ExecuteUbergraph_UI_Mission_Task_Occupation_HUDCenter(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Task_Occupation_HUDCenter_C">();
	}
	static class UUI_Mission_Task_Occupation_HUDCenter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Task_Occupation_HUDCenter_C>();
	}
};

}

