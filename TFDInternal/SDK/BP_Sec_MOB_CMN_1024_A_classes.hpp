#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sec_MOB_CMN_1024_A

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BP_Sec_MOB_CMN_1024_A.BP_Sec_MOB_CMN_1024_A_C
// 0x0100 (0x0420 - 0x0320)
class UBP_Sec_MOB_CMN_1024_A_C final : public UAnimInstance
{
public:
	uint8                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0328(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0330(0x0008)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0338(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0400(0x0020)()

public:
	void ExecuteUbergraph_BP_Sec_MOB_CMN_1024_A(int32 EntryPoint);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Sec_MOB_CMN_1024_A_C">();
	}
	static class UBP_Sec_MOB_CMN_1024_A_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Sec_MOB_CMN_1024_A_C>();
	}
};

}

