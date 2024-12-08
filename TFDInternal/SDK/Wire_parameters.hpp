#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wire

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Wire.Wire_C.WireLayer
// 0x0020 (0x0020 - 0x0000)
struct Wire_C_WireLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              WireLayer_0;                                       // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Wire.Wire_C.ExecuteUbergraph_Wire
// 0x0004 (0x0004 - 0x0000)
struct Wire_C_ExecuteUbergraph_Wire final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wire.Wire_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Wire_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Wire.Wire_C.GetReverseYaw
// 0x0018 (0x0018 - 0x0000)
struct Wire_C_GetReverseYaw final
{
public:
	double                                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
