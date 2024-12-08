#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WP_Nosferatu_1001_AnimBP

#include "Basic.hpp"

#include "WP_Nosferatu_1001_AnimBP_classes.hpp"
#include "WP_Nosferatu_1001_AnimBP_parameters.hpp"


namespace SDK
{

// Function WP_Nosferatu_1001_AnimBP.WP_Nosferatu_1001_AnimBP_C.ExecuteUbergraph_WP_Nosferatu_1001_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWP_Nosferatu_1001_AnimBP_C::ExecuteUbergraph_WP_Nosferatu_1001_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WP_Nosferatu_1001_AnimBP_C", "ExecuteUbergraph_WP_Nosferatu_1001_AnimBP");

	Params::WP_Nosferatu_1001_AnimBP_C_ExecuteUbergraph_WP_Nosferatu_1001_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WP_Nosferatu_1001_AnimBP.WP_Nosferatu_1001_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UWP_Nosferatu_1001_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WP_Nosferatu_1001_AnimBP_C", "AnimGraph");

	Params::WP_Nosferatu_1001_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}
