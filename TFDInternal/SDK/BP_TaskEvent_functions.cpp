#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TaskEvent

#include "Basic.hpp"

#include "BP_TaskEvent_classes.hpp"
#include "BP_TaskEvent_parameters.hpp"


namespace SDK
{

// Function BP_TaskEvent.BP_TaskEvent_C.RunOnLocalImpl
// (BlueprintEvent)
// Parameters:
// class AM1Player*                        InPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_TaskEvent_C::RunOnLocalImpl(class AM1Player* InPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TaskEvent_C", "RunOnLocalImpl");

	Params::BP_TaskEvent_C_RunOnLocalImpl Parms{};

	Parms.InPlayer = InPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TaskEvent.BP_TaskEvent_C.RunOnAuthorityImpl
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AM1Player*>                InPlayers                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_TaskEvent_C::RunOnAuthorityImpl(const TArray<class AM1Player*>& InPlayers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TaskEvent_C", "RunOnAuthorityImpl");

	Params::BP_TaskEvent_C_RunOnAuthorityImpl Parms{};

	Parms.InPlayers = std::move(InPlayers);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TaskEvent.BP_TaskEvent_C.ExecuteUbergraph_BP_TaskEvent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TaskEvent_C::ExecuteUbergraph_BP_TaskEvent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TaskEvent_C", "ExecuteUbergraph_BP_TaskEvent");

	Params::BP_TaskEvent_C_ExecuteUbergraph_BP_TaskEvent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

