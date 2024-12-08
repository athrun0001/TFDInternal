#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_INTER_MilitarySupplies

#include "Basic.hpp"

#include "AnimBP_INTER_MilitarySupplies_classes.hpp"
#include "AnimBP_INTER_MilitarySupplies_parameters.hpp"


namespace SDK
{

// Function AnimBP_INTER_MilitarySupplies.AnimBP_INTER_MilitarySupplies_C.ExecuteUbergraph_AnimBP_INTER_MilitarySupplies
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_INTER_MilitarySupplies_C::ExecuteUbergraph_AnimBP_INTER_MilitarySupplies(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_INTER_MilitarySupplies_C", "ExecuteUbergraph_AnimBP_INTER_MilitarySupplies");

	Params::AnimBP_INTER_MilitarySupplies_C_ExecuteUbergraph_AnimBP_INTER_MilitarySupplies Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_INTER_MilitarySupplies.AnimBP_INTER_MilitarySupplies_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_INTER_MilitarySupplies_AnimGraphNode_TransitionResult_5BFEFF874F6BD8C1320E7C949758F28E
// (BlueprintEvent)

void UAnimBP_INTER_MilitarySupplies_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_INTER_MilitarySupplies_AnimGraphNode_TransitionResult_5BFEFF874F6BD8C1320E7C949758F28E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_INTER_MilitarySupplies_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_INTER_MilitarySupplies_AnimGraphNode_TransitionResult_5BFEFF874F6BD8C1320E7C949758F28E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_INTER_MilitarySupplies.AnimBP_INTER_MilitarySupplies_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_INTER_MilitarySupplies_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_INTER_MilitarySupplies_C", "AnimGraph");

	Params::AnimBP_INTER_MilitarySupplies_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}
