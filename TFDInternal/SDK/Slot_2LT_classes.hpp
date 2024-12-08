#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Slot_2LT

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Slot_2LT.Slot_2LT_C
// 0x0760 (0x0A80 - 0x0320)
class USlot_2LT_C final : public UAnimInstance
{
public:
	uint8                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0328(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0330(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_6;                              // 0x0338(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_5;                              // 0x0358(0x0048)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_5;                   // 0x03A0(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_5;                              // 0x0468(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_4;                   // 0x0488(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_4;                              // 0x0550(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root_4;                              // 0x0598(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;                   // 0x05B8(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x0680(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x06C8(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x06E8(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x07B0(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x07F8(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0818(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x08E0(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0928(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0948(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0A10(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0A58(0x0020)()

public:
	void UpperBody_U_R(const struct FPoseLink& InPose_UpperBody_U_R, struct FPoseLink* UpperBody_U_R_0);
	void UpperBody_U(const struct FPoseLink& InPose_UpperBody_U, struct FPoseLink* UpperBody_U_0);
	void UpperBody_L_Additive(const struct FPoseLink& InPose_UpperBody_L_Additive, struct FPoseLink* UpperBody_L_Additive_0);
	void UpperBody_L(const struct FPoseLink& InPose_UpperBody_L, struct FPoseLink* UpperBody_L_0);
	void Motion_M(const struct FPoseLink& InPose_Motion_M, struct FPoseLink* Motion_M_0);
	void FullBody(const struct FPoseLink& InPose_FullBody, struct FPoseLink* FullBody_0);
	void ExecuteUbergraph_Slot_2LT(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Slot_2LT_C">();
	}
	static class USlot_2LT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlot_2LT_C>();
	}
};

}
