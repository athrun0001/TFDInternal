#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NPC_035_VoiceJournal

#include "Basic.hpp"

#include "AnimBP_NPC_035_VoiceJournal_classes.hpp"
#include "AnimBP_NPC_035_VoiceJournal_parameters.hpp"


namespace SDK
{

// Function AnimBP_NPC_035_VoiceJournal.AnimBP_NPC_035_VoiceJournal_C.ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_NPC_035_VoiceJournal_C::ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_035_VoiceJournal_C", "ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal");

	Params::AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_NPC_035_VoiceJournal.AnimBP_NPC_035_VoiceJournal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal_AnimGraphNode_TransitionResult_9AE2F79F41FCB9118D97F7B61BA84105
// (BlueprintEvent)

void UAnimBP_NPC_035_VoiceJournal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal_AnimGraphNode_TransitionResult_9AE2F79F41FCB9118D97F7B61BA84105()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_035_VoiceJournal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal_AnimGraphNode_TransitionResult_9AE2F79F41FCB9118D97F7B61BA84105");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_NPC_035_VoiceJournal.AnimBP_NPC_035_VoiceJournal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal_AnimGraphNode_TransitionResult_5461E16240D9BACD59BE7283783B26DB
// (BlueprintEvent)

void UAnimBP_NPC_035_VoiceJournal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal_AnimGraphNode_TransitionResult_5461E16240D9BACD59BE7283783B26DB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_035_VoiceJournal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal_AnimGraphNode_TransitionResult_5461E16240D9BACD59BE7283783B26DB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_NPC_035_VoiceJournal.AnimBP_NPC_035_VoiceJournal_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_NPC_035_VoiceJournal_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_035_VoiceJournal_C", "BlueprintUpdateAnimation");

	Params::AnimBP_NPC_035_VoiceJournal_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_NPC_035_VoiceJournal.AnimBP_NPC_035_VoiceJournal_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_NPC_035_VoiceJournal_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_035_VoiceJournal_C", "AnimGraph");

	Params::AnimBP_NPC_035_VoiceJournal_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

