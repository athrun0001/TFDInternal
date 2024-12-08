#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTargetExplosionBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_MissionTargetExplosionBase.BP_MissionTargetExplosionBase_C.ExecuteUbergraph_BP_MissionTargetExplosionBase
// 0x0004 (0x0004 - 0x0000)
struct BP_MissionTargetExplosionBase_C_ExecuteUbergraph_BP_MissionTargetExplosionBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MissionTargetExplosionBase.BP_MissionTargetExplosionBase_C.BP_GetPushAwayCollsionRadius
// 0x0048 (0x0048 - 0x0000)
struct BP_MissionTargetExplosionBase_C_BP_GetPushAwayCollsionRadius final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetScaledBoxExtent_ReturnValue;           // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector3f_X;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector3f_Y;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector3f_Z;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FMax_A_ImplicitCast;                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_B_ImplicitCast;                      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MissionTargetExplosionBase.BP_MissionTargetExplosionBase_C.BP_GetCollisionShapes
// 0x0020 (0x0020 - 0x0000)
struct BP_MissionTargetExplosionBase_C_BP_GetCollisionShapes final
{
public:
	TArray<class UShapeComponent*>                ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TArray<class UShapeComponent*>                K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};

}

