#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_039_A101_AnimBP

#include "Basic.hpp"

#include "NPC_039_A101_AnimBP_classes.hpp"
#include "NPC_039_A101_AnimBP_parameters.hpp"


namespace SDK
{

// Function NPC_039_A101_AnimBP.NPC_039_A101_AnimBP_C.ExecuteUbergraph_NPC_039_A101_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_039_A101_AnimBP_C::ExecuteUbergraph_NPC_039_A101_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_039_A101_AnimBP_C", "ExecuteUbergraph_NPC_039_A101_AnimBP");

	Params::NPC_039_A101_AnimBP_C_ExecuteUbergraph_NPC_039_A101_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_039_A101_AnimBP.NPC_039_A101_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UNPC_039_A101_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_039_A101_AnimBP_C", "AnimGraph");

	Params::NPC_039_A101_AnimBP_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}
