#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_INTER_VulgusBox

#include "Basic.hpp"

#include "AnimBP_INTER_VulgusBox_classes.hpp"
#include "AnimBP_INTER_VulgusBox_parameters.hpp"


namespace SDK
{

// Function AnimBP_INTER_VulgusBox.AnimBP_INTER_VulgusBox_C.ExecuteUbergraph_AnimBP_INTER_VulgusBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_INTER_VulgusBox_C::ExecuteUbergraph_AnimBP_INTER_VulgusBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_INTER_VulgusBox_C", "ExecuteUbergraph_AnimBP_INTER_VulgusBox");

	Params::AnimBP_INTER_VulgusBox_C_ExecuteUbergraph_AnimBP_INTER_VulgusBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_INTER_VulgusBox.AnimBP_INTER_VulgusBox_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_INTER_VulgusBox_AnimGraphNode_TransitionResult_1982649C48803CD28A4C4588CF35FAC1
// (BlueprintEvent)

void UAnimBP_INTER_VulgusBox_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_INTER_VulgusBox_AnimGraphNode_TransitionResult_1982649C48803CD28A4C4588CF35FAC1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_INTER_VulgusBox_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_INTER_VulgusBox_AnimGraphNode_TransitionResult_1982649C48803CD28A4C4588CF35FAC1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_INTER_VulgusBox.AnimBP_INTER_VulgusBox_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_INTER_VulgusBox_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_INTER_VulgusBox_C", "AnimGraph");

	Params::AnimBP_INTER_VulgusBox_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

