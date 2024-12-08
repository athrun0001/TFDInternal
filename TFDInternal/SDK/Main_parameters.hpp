#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Main

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Main.Main_C.WireLayer
// 0x0020 (0x0020 - 0x0000)
struct Main_C_WireLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              WireLayer_0;                                       // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Main.Main_C.UpperBodyLayer
// 0x0020 (0x0020 - 0x0000)
struct Main_C_UpperBodyLayer final
{
public:
	struct FPoseLink                              InputPose;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperBodyLayer_0;                                  // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Main.Main_C.UpperBody_U_R
// 0x0020 (0x0020 - 0x0000)
struct Main_C_UpperBody_U_R final
{
public:
	struct FPoseLink                              InPose_UpperBody_U_R;                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperBody_U_R_0;                                   // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Main.Main_C.UpperBody_U
// 0x0020 (0x0020 - 0x0000)
struct Main_C_UpperBody_U final
{
public:
	struct FPoseLink                              InPose_UpperBody_U;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperBody_U_0;                                     // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Main.Main_C.UpperBody_L_Additive
// 0x0020 (0x0020 - 0x0000)
struct Main_C_UpperBody_L_Additive final
{
public:
	struct FPoseLink                              InPose_UpperBody_L_Additive;                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperBody_L_Additive_0;                            // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Main.Main_C.UpperBody_L
// 0x0020 (0x0020 - 0x0000)
struct Main_C_UpperBody_L final
{
public:
	struct FPoseLink                              InPose_UpperBody_L;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperBody_L_0;                                     // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Main.Main_C.SpecificationLayer
// 0x0020 (0x0020 - 0x0000)
struct Main_C_SpecificationLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              SpecificationLayer_0;                              // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Main.Main_C.Motion_M
// 0x0020 (0x0020 - 0x0000)
struct Main_C_Motion_M final
{
public:
	struct FPoseLink                              InPose_Motion_M;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Motion_M_0;                                        // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Main.Main_C.LocomotionLayer
// 0x0010 (0x0010 - 0x0000)
struct Main_C_LocomotionLayer final
{
public:
	struct FPoseLink                              LocomotionLayer_0;                                 // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Main.Main_C.GetWireAnimLayer
// 0x0010 (0x0010 - 0x0000)
struct Main_C_GetWireAnimLayer final
{
public:
	class UClass*                                 Ret;                                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UAnimInstance>              CallFunc_GetCurrentAnimLayer_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function Main.Main_C.GetLocomotionAnimLayer
// 0x0018 (0x0018 - 0x0000)
struct Main_C_GetLocomotionAnimLayer final
{
public:
	class UClass*                                 Ret;                                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UAnimInstance>              CallFunc_GetCurrentAnimLayer_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Main.Main_C.GetAbilityAnimLayer
// 0x0010 (0x0010 - 0x0000)
struct Main_C_GetAbilityAnimLayer final
{
public:
	class UClass*                                 Ret;                                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UAnimInstance>              CallFunc_GetCurrentAnimLayer_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function Main.Main_C.FullBody
// 0x0020 (0x0020 - 0x0000)
struct Main_C_FullBody final
{
public:
	struct FPoseLink                              InPose_FullBody;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              FullBody_0;                                        // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Main.Main_C.ExecuteUbergraph_Main
// 0x0070 (0x0070 - 0x0000)
struct Main_C_ExecuteUbergraph_Main final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMontageSlotWeight_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetLocomotionAnimLayer_Ret;               // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetAbilityAnimLayer_Ret;                  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurveValue_ReturnValue;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetWireAnimLayer_Ret;                     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UAnimInstance>              CallFunc_GetCurrentAnimLayer_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Set_Item_ImplicitCast;              // 0x0058(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Set_Item_ImplicitCast_1;            // 0x005C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_StructMemberSet_Alpha_ImplicitCast;         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Main.Main_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Main_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Main.Main_C.AimOffsetLayer
// 0x0020 (0x0020 - 0x0000)
struct Main_C_AimOffsetLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AimOffsetLayer_0;                                  // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Main.Main_C.AbilityLayer
// 0x0020 (0x0020 - 0x0000)
struct Main_C_AbilityLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AbilityLayer_0;                                    // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

}
