#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerkAbilityBase

#include "Basic.hpp"

#include "PerkAbilityBase_classes.hpp"
#include "PerkAbilityBase_parameters.hpp"


namespace SDK
{

// Function PerkAbilityBase.PerkAbilityBase_C.ExecuteUbergraph_PerkAbilityBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkAbilityBase_C::ExecuteUbergraph_PerkAbilityBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkAbilityBase_C", "ExecuteUbergraph_PerkAbilityBase");

	Params::PerkAbilityBase_C_ExecuteUbergraph_PerkAbilityBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkAbilityBase.PerkAbilityBase_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bCancelled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkAbilityBase_C::BP_OnDeactivated(bool bCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkAbilityBase_C", "BP_OnDeactivated");

	Params::PerkAbilityBase_C_BP_OnDeactivated Parms{};

	Parms.bCancelled = bCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkAbilityBase.PerkAbilityBase_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UPerkAbilityBase_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkAbilityBase_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}

