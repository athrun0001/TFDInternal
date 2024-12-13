#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_VoidVaultStabilizer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_VoidVaultStabilizer.AnimBP_VoidVaultStabilizer_C
// 0x05B0 (0x08E0 - 0x0330)
class UAnimBP_VoidVaultStabilizer_C final : public UM1VoidVaultStabilzerAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0338(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0340(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0348(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0368(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0390(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x03B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x03E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0408(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0430(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0458(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0480(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x04A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x04D0(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x04F8(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0518(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x0540(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0588(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x05A8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x05F0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0610(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0658(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0678(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x06C0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x06E0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0728(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0748(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0790(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x07B0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x07F8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0818(0x00C8)()

public:
	void ExecuteUbergraph_AnimBP_VoidVaultStabilizer(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_VoidVaultStabilizer_AnimGraphNode_TransitionResult_D9C97BB0481C879032B73EBF40D365DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_VoidVaultStabilizer_AnimGraphNode_TransitionResult_D70F18064721B86DD608B489DE496004();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_VoidVaultStabilizer_AnimGraphNode_TransitionResult_CF449BE34E1E8B03AD2B879D3A97FF1A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_VoidVaultStabilizer_AnimGraphNode_TransitionResult_B4442D5641C9D69DA50C578AC70AA53E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_VoidVaultStabilizer_AnimGraphNode_TransitionResult_A740518343F2FA97AD4F399E139F77F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_VoidVaultStabilizer_AnimGraphNode_TransitionResult_5EE44DAF4512B1CDDF6D2DAD87D01ED2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_VoidVaultStabilizer_AnimGraphNode_TransitionResult_524A45A943087839ED8E728B2233C4D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_VoidVaultStabilizer_AnimGraphNode_TransitionResult_3C690EBE4FE9B55160AE62A5237D6F1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_VoidVaultStabilizer_AnimGraphNode_TransitionResult_3B17AE9A47B82B676EB6A69CB4664860();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_VoidVaultStabilizer_AnimGraphNode_TransitionResult_049CF36B4A3E4C8E83B072984BF8DF68();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_VoidVaultStabilizer_C">();
	}
	static class UAnimBP_VoidVaultStabilizer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_VoidVaultStabilizer_C>();
	}
};

}

