#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionSubTaskOccuaption

#include "Basic.hpp"

#include "BP_MissionSubTaskOccuaption_classes.hpp"
#include "BP_MissionSubTaskOccuaption_parameters.hpp"


namespace SDK
{

// Function BP_MissionSubTaskOccuaption.BP_MissionSubTaskOccuaption_C.ExecuteUbergraph_BP_MissionSubTaskOccuaption
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MissionSubTaskOccuaption_C::ExecuteUbergraph_BP_MissionSubTaskOccuaption(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissionSubTaskOccuaption_C", "ExecuteUbergraph_BP_MissionSubTaskOccuaption");

	Params::BP_MissionSubTaskOccuaption_C_ExecuteUbergraph_BP_MissionSubTaskOccuaption Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MissionSubTaskOccuaption.BP_MissionSubTaskOccuaption_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MissionSubTaskOccuaption_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MissionSubTaskOccuaption_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
