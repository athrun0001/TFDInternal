#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NPC_034_TextJournal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_NPC_034_TextJournal.AnimBP_NPC_034_TextJournal_C
// 0x02B0 (0x0770 - 0x04C0)
class UAnimBP_NPC_034_TextJournal_C final : public UM1NpcAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x04C8(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x04D0(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x04D8(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x04F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0520(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0548(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0570(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x05B8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x05D8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0620(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0640(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0688(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x06A8(0x00C8)()

public:
	void ExecuteUbergraph_AnimBP_NPC_034_TextJournal(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_034_TextJournal_AnimGraphNode_TransitionResult_9BFDC8BE4D45245521DF1CA48E4117A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_034_TextJournal_AnimGraphNode_TransitionResult_8F9C4D37452038489007E597804A1578();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_NPC_034_TextJournal_C">();
	}
	static class UAnimBP_NPC_034_TextJournal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_NPC_034_TextJournal_C>();
	}
};

}

