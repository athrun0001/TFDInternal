#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_Bunny_DecreaseCommonGaugeByPassive

#include "Basic.hpp"

#include "SE_Bunny_DecreaseCommonGaugeByPassive_classes.hpp"
#include "SE_Bunny_DecreaseCommonGaugeByPassive_parameters.hpp"


namespace SDK
{

// Function SE_Bunny_DecreaseCommonGaugeByPassive.SE_Bunny_DecreaseCommonGaugeByPassive_C.ExecuteUbergraph_SE_Bunny_DecreaseCommonGaugeByPassive
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_Bunny_DecreaseCommonGaugeByPassive_C::ExecuteUbergraph_SE_Bunny_DecreaseCommonGaugeByPassive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_Bunny_DecreaseCommonGaugeByPassive_C", "ExecuteUbergraph_SE_Bunny_DecreaseCommonGaugeByPassive");

	Params::SE_Bunny_DecreaseCommonGaugeByPassive_C_ExecuteUbergraph_SE_Bunny_DecreaseCommonGaugeByPassive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_Bunny_DecreaseCommonGaugeByPassive.SE_Bunny_DecreaseCommonGaugeByPassive_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bCancelled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_Bunny_DecreaseCommonGaugeByPassive_C::BP_OnDeactivated(bool bCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_Bunny_DecreaseCommonGaugeByPassive_C", "BP_OnDeactivated");

	Params::SE_Bunny_DecreaseCommonGaugeByPassive_C_BP_OnDeactivated Parms{};

	Parms.bCancelled = bCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_Bunny_DecreaseCommonGaugeByPassive.SE_Bunny_DecreaseCommonGaugeByPassive_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void USE_Bunny_DecreaseCommonGaugeByPassive_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_Bunny_DecreaseCommonGaugeByPassive_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SE_Bunny_DecreaseCommonGaugeByPassive.SE_Bunny_DecreaseCommonGaugeByPassive_C.CanPerformTick
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bCanApply                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_Bunny_DecreaseCommonGaugeByPassive_C::CanPerformTick(bool* bCanApply) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_Bunny_DecreaseCommonGaugeByPassive_C", "CanPerformTick");

	Params::SE_Bunny_DecreaseCommonGaugeByPassive_C_CanPerformTick Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bCanApply != nullptr)
		*bCanApply = Parms.bCanApply;
}

}

