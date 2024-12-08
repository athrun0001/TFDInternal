#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sec_MOB_CMN_1003_A

#include "Basic.hpp"

#include "BP_Sec_MOB_CMN_1003_A_classes.hpp"
#include "BP_Sec_MOB_CMN_1003_A_parameters.hpp"


namespace SDK
{

// Function BP_Sec_MOB_CMN_1003_A.BP_Sec_MOB_CMN_1003_A_C.ExecuteUbergraph_BP_Sec_MOB_CMN_1003_A
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Sec_MOB_CMN_1003_A_C::ExecuteUbergraph_BP_Sec_MOB_CMN_1003_A(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Sec_MOB_CMN_1003_A_C", "ExecuteUbergraph_BP_Sec_MOB_CMN_1003_A");

	Params::BP_Sec_MOB_CMN_1003_A_C_ExecuteUbergraph_BP_Sec_MOB_CMN_1003_A Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Sec_MOB_CMN_1003_A.BP_Sec_MOB_CMN_1003_A_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UBP_Sec_MOB_CMN_1003_A_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Sec_MOB_CMN_1003_A_C", "AnimGraph");

	Params::BP_Sec_MOB_CMN_1003_A_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

