#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_Viessa_PassiveEpicBoss01

#include "Basic.hpp"

#include "SE_Viessa_PassiveEpicBoss01_classes.hpp"
#include "SE_Viessa_PassiveEpicBoss01_parameters.hpp"


namespace SDK
{

// Function SE_Viessa_PassiveEpicBoss01.SE_Viessa_PassiveEpicBoss01_C.ExecuteUbergraph_SE_Viessa_PassiveEpicBoss01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_Viessa_PassiveEpicBoss01_C::ExecuteUbergraph_SE_Viessa_PassiveEpicBoss01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_Viessa_PassiveEpicBoss01_C", "ExecuteUbergraph_SE_Viessa_PassiveEpicBoss01");

	Params::SE_Viessa_PassiveEpicBoss01_C_ExecuteUbergraph_SE_Viessa_PassiveEpicBoss01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_Viessa_PassiveEpicBoss01.SE_Viessa_PassiveEpicBoss01_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bCancelled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USE_Viessa_PassiveEpicBoss01_C::BP_OnDeactivated(bool bCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_Viessa_PassiveEpicBoss01_C", "BP_OnDeactivated");

	Params::SE_Viessa_PassiveEpicBoss01_C_BP_OnDeactivated Parms{};

	Parms.bCancelled = bCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SE_Viessa_PassiveEpicBoss01.SE_Viessa_PassiveEpicBoss01_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void USE_Viessa_PassiveEpicBoss01_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SE_Viessa_PassiveEpicBoss01_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}

