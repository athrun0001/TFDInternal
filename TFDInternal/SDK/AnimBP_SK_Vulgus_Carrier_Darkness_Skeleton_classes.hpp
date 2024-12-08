#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_SK_Vulgus_Carrier_Darkness_Skeleton

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_SK_Vulgus_Carrier_Darkness_Skeleton.AnimBP_SK_Vulgus_Carrier_Darkness_Skeleton_C
// 0x0210 (0x0530 - 0x0320)
class UAnimBP_SK_Vulgus_Carrier_Darkness_Skeleton_C final : public UAnimInstance
{
public:
	uint8                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0328(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0330(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0338(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0358(0x00C8)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0420(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x04E8(0x0048)()

public:
	void ExecuteUbergraph_AnimBP_SK_Vulgus_Carrier_Darkness_Skeleton(int32 EntryPoint);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_SK_Vulgus_Carrier_Darkness_Skeleton_C">();
	}
	static class UAnimBP_SK_Vulgus_Carrier_Darkness_Skeleton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_SK_Vulgus_Carrier_Darkness_Skeleton_C>();
	}
};

}

