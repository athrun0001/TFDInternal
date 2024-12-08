#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_PreTaskContext_AddTaskLimitTime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_PreTaskContext_AddTaskLimitTime.UI_Mission_PreTaskContext_AddTaskLimitTime_C
// 0x0018 (0x0730 - 0x0718)
class UUI_Mission_PreTaskContext_AddTaskLimitTime_C final : public UM1UIMissionPreTaskContext_AddTaskLimitTime
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_AddTime;                                    // 0x0720(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               P_Panel_AddedLimitTime;                            // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Mission_PreTaskContext_AddTaskLimitTime(int32 EntryPoint);
	void BP_OnPreTaskUpdated(bool bInRelatedTaskActorActivated);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_PreTaskContext_AddTaskLimitTime_C">();
	}
	static class UUI_Mission_PreTaskContext_AddTaskLimitTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_PreTaskContext_AddTaskLimitTime_C>();
	}
};

}
