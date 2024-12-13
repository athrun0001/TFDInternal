#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InventoryPreviewAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InventoryPreviewAnimBP_structs.hpp"
#include "M1Data_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass InventoryPreviewAnimBP.InventoryPreviewAnimBP_C
// 0x0BE0 (0x0F90 - 0x03B0)
class UInventoryPreviewAnimBP_C final : public UM1PreviewAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct InventoryPreviewAnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x03B8(0x0003)(HasGetValueTypeHash)
	uint8                                         Pad_3BB[0x5];                                      // 0x03BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x03C0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x03C8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x03D0(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03F0(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x0410(0x0028)()
	struct FM1AnimNode_ModifyBone_Multi           M1AnimGraphNode_ModifyBone_Multi;                  // 0x0438(0x00F0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x0528(0x0028)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK;                           // 0x0550(0x01F0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0740(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0760(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x0780(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x07A8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x07D0(0x0028)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x07F8(0x00C8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x08C0(0x0048)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0908(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0A10(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0A38(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0A60(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0A88(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0AB0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0AD8(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0B00(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0B20(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0B68(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0B88(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0BD0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0BF0(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0CB8(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0D00(0x00E0)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0DE0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0E28(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0E70(0x0080)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0EF0(0x0080)()
	class UM1DataInventoryCharacterAnim*          CharacterAnimData;                                 // 0x0F70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          IdleAnimSequence;                                  // 0x0F78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          RandomAnimSequence;                                // 0x0F80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentIdleAnimRepeatCount;                        // 0x0F88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DesiredIdleAnimRepeatCount;                        // 0x0F8C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnPrivatePreviewAnimFromWeaponChanged(const class UAnimSequence* NewPrivatePreviewAnim);
	void OnAnimTypeChanged();
	void LocomotionLayer(struct FPoseLink* LocomotionLayer_0);
	void GetRandomAnimSequence(class UAnimSequence** NewParam);
	void GetIdleAnimSequence(class UAnimSequence** NewParam);
	void ExecuteUbergraph_InventoryPreviewAnimBP(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_InventoryPreviewAnimBP_AnimGraphNode_TransitionResult_CE7603B345BA5BFD579B39ACE8547327();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_InventoryPreviewAnimBP_AnimGraphNode_TransitionResult_8077B77C458D813BC87B4BAA7BC5C719();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_InventoryPreviewAnimBP_AnimGraphNode_ModifyBone_FAA4F5294639E6BB91D7D3ADB13B2C70();
	void BlueprintInitializeAnimation();
	void AnimNotify_ToRandomStateTransitionStarted();
	void AnimNotify_RandomStateLeft();
	void AnimNotify_IdleStateLeft();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InventoryPreviewAnimBP_C">();
	}
	static class UInventoryPreviewAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInventoryPreviewAnimBP_C>();
	}
};

}

