#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sec_PC_001_A_VAR_BODY_000

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Sec_PC_001_A_VAR_BODY_000.BP_Sec_PC_001_A_VAR_BODY_000_C.ExecuteUbergraph_BP_Sec_PC_001_A_VAR_BODY_000
// 0x0004 (0x0004 - 0x0000)
struct BP_Sec_PC_001_A_VAR_BODY_000_C_ExecuteUbergraph_BP_Sec_PC_001_A_VAR_BODY_000 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Sec_PC_001_A_VAR_BODY_000.BP_Sec_PC_001_A_VAR_BODY_000_C.BlueprintThreadSafeUpdateAnimation
// 0x0028 (0x0028 - 0x0000)
struct BP_Sec_PC_001_A_VAR_BODY_000_C_BlueprintThreadSafeUpdateAnimation final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurveValue_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Sec_PC_001_A_VAR_BODY_000.BP_Sec_PC_001_A_VAR_BODY_000_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct BP_Sec_PC_001_A_VAR_BODY_000_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AnimGraph_0;                                       // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

}

