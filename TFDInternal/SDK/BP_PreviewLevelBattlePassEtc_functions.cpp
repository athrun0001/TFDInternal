#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PreviewLevelBattlePassEtc

#include "Basic.hpp"

#include "BP_PreviewLevelBattlePassEtc_classes.hpp"
#include "BP_PreviewLevelBattlePassEtc_parameters.hpp"


namespace SDK
{

// Function BP_PreviewLevelBattlePassEtc.BP_PreviewLevelBattlePassEtc_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PreviewLevelBattlePassEtc_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PreviewLevelBattlePassEtc_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PreviewLevelBattlePassEtc.BP_PreviewLevelBattlePassEtc_C.ExecuteUbergraph_BP_PreviewLevelBattlePassEtc
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PreviewLevelBattlePassEtc_C::ExecuteUbergraph_BP_PreviewLevelBattlePassEtc(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PreviewLevelBattlePassEtc_C", "ExecuteUbergraph_BP_PreviewLevelBattlePassEtc");

	Params::BP_PreviewLevelBattlePassEtc_C_ExecuteUbergraph_BP_PreviewLevelBattlePassEtc Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

