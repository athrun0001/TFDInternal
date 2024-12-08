#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Main

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Main_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Main.Main_C
// 0x2850 (0x2CC0 - 0x0470)
#pragma pack(push, 0x1)
class alignas(0x10) UMain_C : public UM1AnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct Main::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0478(0x0004)(HasGetValueTypeHash)
	uint8                                         Pad_47C[0x4];                                      // 0x047C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0480(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0488(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_12;                             // 0x0490(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_10;                  // 0x04B0(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_11;                             // 0x0578(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_9;                   // 0x0598(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_10;                             // 0x0660(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_8;                   // 0x0680(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_9;                              // 0x0748(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_7;                   // 0x0768(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_8;                              // 0x0830(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_6;                   // 0x0850(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_7;                              // 0x0918(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_5;                   // 0x0938(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_6;                              // 0x0A00(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_4;                   // 0x0A20(0x00C8)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization_6;                   // 0x0AE8(0x0100)()
	struct FAnimNode_Root                         AnimGraphNode_Root_5;                              // 0x0BE8(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;                   // 0x0C08(0x00C8)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization_5;                   // 0x0CD0(0x0100)()
	struct FAnimNode_Root                         AnimGraphNode_Root_4;                              // 0x0DD0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x0DF0(0x00C8)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization_4;                   // 0x0EB8(0x0100)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x0FB8(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0FD8(0x00C8)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization_3;                   // 0x10A0(0x0100)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x11A0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x11C0(0x00C8)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization_2;                   // 0x1288(0x0100)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x1388(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x13A8(0x0048)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization_1;                   // 0x13F0(0x0100)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x14F0(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x1510(0x0080)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_SubInstance;                         // 0x1590(0x00B8)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_4;                       // 0x1648(0x00C8)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x1710(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x1738(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x1760(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x1788(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x17D0(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_2;                   // 0x1818(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x1860(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x1880(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x18C8(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x1910(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x1958(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1978(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x19C0(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x1A08(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1A50(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1A70(0x00C8)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_10;                  // 0x1B38(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x1C00(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x1C28(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x1C50(0x0080)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_9;                   // 0x1CD0(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x1D98(0x0048)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_8;                   // 0x1DE0(0x00C8)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_7;                   // 0x1EA8(0x00C8)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization;                     // 0x1F70(0x0100)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_6;                   // 0x2070(0x00C8)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_5;                   // 0x2138(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x2200(0x0080)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x2280(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x22C8(0x0028)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_4;                   // 0x22F0(0x00C8)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_3;                   // 0x23B8(0x00C8)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_3;                       // 0x2480(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x2548(0x0028)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_2;                   // 0x2570(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x2638(0x0028)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_2;                       // 0x2660(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x2728(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x2750(0x0028)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_1;                       // 0x2778(0x00C8)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x2840(0x00C8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x2908(0x00E0)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_1;                   // 0x29E8(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x2AB0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x2AD8(0x0028)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x2B00(0x00C8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x2BC8(0x00E0)()
	class UClass*                                 SpecificationInstance;                             // 0x2CA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseOnlyUpperbodyAnim;                             // 0x2CB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void WireLayer(const struct FPoseLink& InPose, struct FPoseLink* WireLayer_0);
	void UpperBodyLayer(const struct FPoseLink& InputPose, struct FPoseLink* UpperBodyLayer_0);
	void UpperBody_U_R(const struct FPoseLink& InPose_UpperBody_U_R, struct FPoseLink* UpperBody_U_R_0);
	void UpperBody_U(const struct FPoseLink& InPose_UpperBody_U, struct FPoseLink* UpperBody_U_0);
	void UpperBody_L_Additive(const struct FPoseLink& InPose_UpperBody_L_Additive, struct FPoseLink* UpperBody_L_Additive_0);
	void UpperBody_L(const struct FPoseLink& InPose_UpperBody_L, struct FPoseLink* UpperBody_L_0);
	void SpecificationLayer(const struct FPoseLink& InPose, struct FPoseLink* SpecificationLayer_0);
	void OnAnimTypeChanged();
	void NewFunction();
	void Motion_M(const struct FPoseLink& InPose_Motion_M, struct FPoseLink* Motion_M_0);
	void LocomotionLayer(struct FPoseLink* LocomotionLayer_0);
	void GetWireAnimLayer(class UClass** Ret);
	void GetLocomotionAnimLayer(class UClass** Ret);
	void GetAbilityAnimLayer(class UClass** Ret);
	void FullBody(const struct FPoseLink& InPose_FullBody, struct FPoseLink* FullBody_0);
	void ExecuteUbergraph_Main(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Main_AnimGraphNode_TwoWayBlend_738D14A944C8ABEB516B26BF23ADF934();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Main_AnimGraphNode_LayeredBoneBlend_A250DE804BFC293A006A2F93E0E0819D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Main_AnimGraphNode_LayeredBoneBlend_5955D63F4365733784B35D92B01C0402();
	void BlueprintLinkedAnimationLayersInitialized();
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AimOffsetLayer(const struct FPoseLink& InPose, struct FPoseLink* AimOffsetLayer_0);
	void AbilityLayer(const struct FPoseLink& InPose, struct FPoseLink* AbilityLayer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Main_C">();
	}
	static class UMain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMain_C>();
	}
};
#pragma pack(pop)

}
