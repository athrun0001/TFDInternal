#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_Goal_Invasion

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Task_Goal_Invasion.UI_Mission_Task_Goal_Invasion_C
// 0x0008 (0x0720 - 0x0718)
class UUI_Mission_Task_Goal_Invasion_C final : public UM1UIMissionTaskGoalInvasion
{
public:
	class UUI_Mission_Task_TargetNameTag_C*       UI_Mission_Task_TargetNameTag;                     // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Task_Goal_Invasion_C">();
	}
	static class UUI_Mission_Task_Goal_Invasion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Task_Goal_Invasion_C>();
	}
};

}
