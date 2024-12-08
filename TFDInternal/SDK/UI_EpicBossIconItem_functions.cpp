#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_EpicBossIconItem

#include "Basic.hpp"

#include "UI_EpicBossIconItem_classes.hpp"
#include "UI_EpicBossIconItem_parameters.hpp"


namespace SDK
{

// Function UI_EpicBossIconItem.UI_EpicBossIconItem_C.SetDataImpl
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UM1UIData*                        InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_EpicBossIconItem_C::SetDataImpl(class UM1UIData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_EpicBossIconItem_C", "SetDataImpl");

	Params::UI_EpicBossIconItem_C_SetDataImpl Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_EpicBossIconItem.UI_EpicBossIconItem_C.ExecuteUbergraph_UI_EpicBossIconItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EpicBossIconItem_C::ExecuteUbergraph_UI_EpicBossIconItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_EpicBossIconItem_C", "ExecuteUbergraph_UI_EpicBossIconItem");

	Params::UI_EpicBossIconItem_C_ExecuteUbergraph_UI_EpicBossIconItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
