#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ConsumableItemResearchInfo

#include "Basic.hpp"

#include "UI_ConsumableItemResearchInfo_classes.hpp"
#include "UI_ConsumableItemResearchInfo_parameters.hpp"


namespace SDK
{

// Function UI_ConsumableItemResearchInfo.UI_ConsumableItemResearchInfo_C.ExecuteUbergraph_UI_ConsumableItemResearchInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConsumableItemResearchInfo_C::ExecuteUbergraph_UI_ConsumableItemResearchInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsumableItemResearchInfo_C", "ExecuteUbergraph_UI_ConsumableItemResearchInfo");

	Params::UI_ConsumableItemResearchInfo_C_ExecuteUbergraph_UI_ConsumableItemResearchInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ConsumableItemResearchInfo.UI_ConsumableItemResearchInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ConsumableItemResearchInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsumableItemResearchInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ConsumableItemResearchInfo.UI_ConsumableItemResearchInfo_C.BP_SetRankStatus
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   InRank                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnough                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConsumableItemResearchInfo_C::BP_SetRankStatus(int32 InRank, bool bEnough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsumableItemResearchInfo_C", "BP_SetRankStatus");

	Params::UI_ConsumableItemResearchInfo_C_BP_SetRankStatus Parms{};

	Parms.InRank = InRank;
	Parms.bEnough = bEnough;

	UObject::ProcessEvent(Func, &Parms);
}

}
