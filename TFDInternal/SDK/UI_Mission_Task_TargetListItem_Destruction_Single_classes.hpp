#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_TargetListItem_Destruction_Single

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Task_TargetListItem_Destruction_Single.UI_Mission_Task_TargetListItem_Destruction_Single_C
// 0x0010 (0x0728 - 0x0718)
class UUI_Mission_Task_TargetListItem_Destruction_Single_C final : public UM1UITaskTargetListItem_Destruction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Common_Fx_Immune_C*                 UI_Common_Fx_Immune;                               // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Mission_Task_TargetListItem_Destruction_Single(int32 EntryPoint);
	void BP_SetImmune(bool bImmune);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Task_TargetListItem_Destruction_Single_C">();
	}
	static class UUI_Mission_Task_TargetListItem_Destruction_Single_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Task_TargetListItem_Destruction_Single_C>();
	}
};

}

