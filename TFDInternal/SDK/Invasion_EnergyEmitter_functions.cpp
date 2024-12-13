#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Invasion_EnergyEmitter

#include "Basic.hpp"

#include "Invasion_EnergyEmitter_classes.hpp"
#include "Invasion_EnergyEmitter_parameters.hpp"


namespace SDK
{

// Function Invasion_EnergyEmitter.Invasion_EnergyEmitter_C.ReserveDestroy
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                                   LifeSpan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInvasion_EnergyEmitter_C::ReserveDestroy(float LifeSpan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Invasion_EnergyEmitter_C", "ReserveDestroy");

	Params::Invasion_EnergyEmitter_C_ReserveDestroy Parms{};

	Parms.LifeSpan = LifeSpan;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Invasion_EnergyEmitter.Invasion_EnergyEmitter_C.ExecuteUbergraph_Invasion_EnergyEmitter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInvasion_EnergyEmitter_C::ExecuteUbergraph_Invasion_EnergyEmitter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Invasion_EnergyEmitter_C", "ExecuteUbergraph_Invasion_EnergyEmitter");

	Params::Invasion_EnergyEmitter_C_ExecuteUbergraph_Invasion_EnergyEmitter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

