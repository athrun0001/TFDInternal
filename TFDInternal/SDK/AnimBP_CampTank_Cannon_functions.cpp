#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_CampTank_Cannon

#include "Basic.hpp"

#include "AnimBP_CampTank_Cannon_classes.hpp"
#include "AnimBP_CampTank_Cannon_parameters.hpp"


namespace SDK
{

// Function AnimBP_CampTank_Cannon.AnimBP_CampTank_Cannon_C.ExecuteUbergraph_AnimBP_CampTank_Cannon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_CampTank_Cannon_C::ExecuteUbergraph_AnimBP_CampTank_Cannon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampTank_Cannon_C", "ExecuteUbergraph_AnimBP_CampTank_Cannon");

	Params::AnimBP_CampTank_Cannon_C_ExecuteUbergraph_AnimBP_CampTank_Cannon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_CampTank_Cannon.AnimBP_CampTank_Cannon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Cannon_AnimGraphNode_TransitionResult_CD680EF24097A6B99708C79E15B9BC23
// (BlueprintEvent)

void UAnimBP_CampTank_Cannon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Cannon_AnimGraphNode_TransitionResult_CD680EF24097A6B99708C79E15B9BC23()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampTank_Cannon_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Cannon_AnimGraphNode_TransitionResult_CD680EF24097A6B99708C79E15B9BC23");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_CampTank_Cannon.AnimBP_CampTank_Cannon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Cannon_AnimGraphNode_TransitionResult_B559CCD84106FE9E49CC2A8BD99E70CE
// (BlueprintEvent)

void UAnimBP_CampTank_Cannon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Cannon_AnimGraphNode_TransitionResult_B559CCD84106FE9E49CC2A8BD99E70CE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampTank_Cannon_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Cannon_AnimGraphNode_TransitionResult_B559CCD84106FE9E49CC2A8BD99E70CE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_CampTank_Cannon.AnimBP_CampTank_Cannon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Cannon_AnimGraphNode_TransitionResult_91D2EF224F628E0E702548BE76CE7D97
// (BlueprintEvent)

void UAnimBP_CampTank_Cannon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Cannon_AnimGraphNode_TransitionResult_91D2EF224F628E0E702548BE76CE7D97()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampTank_Cannon_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_Cannon_AnimGraphNode_TransitionResult_91D2EF224F628E0E702548BE76CE7D97");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_CampTank_Cannon.AnimBP_CampTank_Cannon_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_CampTank_Cannon_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampTank_Cannon_C", "AnimGraph");

	Params::AnimBP_CampTank_Cannon_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}
