#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NPC_Facial

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimBP_NPC_Facial_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_NPC_Facial.AnimBP_NPC_Facial_C
// 0x04B0 (0x07D0 - 0x0320)
class UAnimBP_NPC_Facial_C final : public UAnimInstance
{
public:
	uint8                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct AnimBP_NPC_Facial::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0328(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_32A[0x6];                                      // 0x032A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0330(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0338(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0340(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0360(0x00C8)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0428(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0450(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0478(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0498(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x04E0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0500(0x00C8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x05C8(0x00E0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x06A8(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0728(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0750(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0778(0x0048)()
	class UAnimSequence*                          FacialAnim;                                        // 0x07C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableFacialAnim;                                 // 0x07C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AnimBP_NPC_Facial(int32 EntryPoint);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_NPC_Facial_C">();
	}
	static class UAnimBP_NPC_Facial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_NPC_Facial_C>();
	}
};

}

