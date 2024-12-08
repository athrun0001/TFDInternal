#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_007_BP

#include "Basic.hpp"


namespace SDK::Params
{

// Function F_007_BP.F_007_BP_C.OnHeadAnimInstanceChanged
// 0x0008 (0x0008 - 0x0000)
struct F_007_BP_C_OnHeadAnimInstanceChanged final
{
public:
	class UM1HeadAnimInstance*                    HeadAnimInstance_0;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function F_007_BP.F_007_BP_C.FindRequiredAnimInstances
// 0x0018 (0x0018 - 0x0000)
struct F_007_BP_C_FindRequiredAnimInstances final
{
public:
	class UAnimInstance*                          CallFunc_FindLinkedAnimLayerInstanceByClass_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocomotion_C*                          K2Node_DynamicCast_AsLocomotion;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function F_007_BP.F_007_BP_C.ExecuteUbergraph_F_007_BP
// 0x0038 (0x0038 - 0x0000)
struct F_007_BP_C_ExecuteUbergraph_F_007_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1HeadAnimInstance*                    K2Node_Event_HeadAnimInstance;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UF_007_Head_BP_C*                       K2Node_DynamicCast_AsF_007_Head_BP;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_LocoSpeed_ImplicitCast;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_LocoMoveYaw_ImplicitCast;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function F_007_BP.F_007_BP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct F_007_BP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

