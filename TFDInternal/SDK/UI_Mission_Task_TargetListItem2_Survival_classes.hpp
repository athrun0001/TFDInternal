#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_TargetListItem2_Survival

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Task_TargetListItem2_Survival.UI_Mission_Task_TargetListItem2_Survival_C
// 0x0040 (0x0768 - 0x0728)
class UUI_Mission_Task_TargetListItem2_Survival_C final : public UM1UITaskTargetListItem_WaveSurvival
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0728(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NamedMonsterSpawned;                               // 0x0730(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIOpenAnim;                                        // 0x0738(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Active;                                            // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Common_Fx_01_C*                     UI_Common_Fx_01;                                   // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Cube_01_C*                     UI_Deco_Cube_01;                                   // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsAnimPlaying;                                    // 0x0760(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Finished_A91C80D44D68822C6CDEAB81F8E5D8BC();
	void ExecuteUbergraph_UI_Mission_Task_TargetListItem2_Survival(int32 EntryPoint);
	void Construct();
	void BP_SetAllMonstersKilled(bool bInAllMonsterdKilled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Task_TargetListItem2_Survival_C">();
	}
	static class UUI_Mission_Task_TargetListItem2_Survival_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Task_TargetListItem2_Survival_C>();
	}
};

}

