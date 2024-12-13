#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sec_FLW_DOG_001_A001

#include "Basic.hpp"

#include "BP_Sec_FLW_DOG_001_A001_classes.hpp"
#include "BP_Sec_FLW_DOG_001_A001_parameters.hpp"


namespace SDK
{

// Function BP_Sec_FLW_DOG_001_A001.BP_Sec_FLW_DOG_001_A001_C.ExecuteUbergraph_BP_Sec_FLW_DOG_001_A001
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Sec_FLW_DOG_001_A001_C::ExecuteUbergraph_BP_Sec_FLW_DOG_001_A001(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Sec_FLW_DOG_001_A001_C", "ExecuteUbergraph_BP_Sec_FLW_DOG_001_A001");

	Params::BP_Sec_FLW_DOG_001_A001_C_ExecuteUbergraph_BP_Sec_FLW_DOG_001_A001 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Sec_FLW_DOG_001_A001.BP_Sec_FLW_DOG_001_A001_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UBP_Sec_FLW_DOG_001_A001_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Sec_FLW_DOG_001_A001_C", "AnimGraph");

	Params::BP_Sec_FLW_DOG_001_A001_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function BP_Sec_FLW_DOG_001_A001.BP_Sec_FLW_DOG_001_A001_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Sec_FLW_DOG_001_A001_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Sec_FLW_DOG_001_A001_C", "BlueprintThreadSafeUpdateAnimation");

	Params::BP_Sec_FLW_DOG_001_A001_C_BlueprintThreadSafeUpdateAnimation Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

