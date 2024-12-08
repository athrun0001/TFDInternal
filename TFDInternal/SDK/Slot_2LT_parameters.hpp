#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Slot_2LT

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Slot_2LT.Slot_2LT_C.UpperBody_U_R
// 0x0020 (0x0020 - 0x0000)
struct Slot_2LT_C_UpperBody_U_R final
{
public:
	struct FPoseLink                              InPose_UpperBody_U_R;                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperBody_U_R_0;                                   // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Slot_2LT.Slot_2LT_C.UpperBody_U
// 0x0020 (0x0020 - 0x0000)
struct Slot_2LT_C_UpperBody_U final
{
public:
	struct FPoseLink                              InPose_UpperBody_U;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperBody_U_0;                                     // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Slot_2LT.Slot_2LT_C.UpperBody_L_Additive
// 0x0020 (0x0020 - 0x0000)
struct Slot_2LT_C_UpperBody_L_Additive final
{
public:
	struct FPoseLink                              InPose_UpperBody_L_Additive;                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperBody_L_Additive_0;                            // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Slot_2LT.Slot_2LT_C.UpperBody_L
// 0x0020 (0x0020 - 0x0000)
struct Slot_2LT_C_UpperBody_L final
{
public:
	struct FPoseLink                              InPose_UpperBody_L;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperBody_L_0;                                     // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Slot_2LT.Slot_2LT_C.Motion_M
// 0x0020 (0x0020 - 0x0000)
struct Slot_2LT_C_Motion_M final
{
public:
	struct FPoseLink                              InPose_Motion_M;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Motion_M_0;                                        // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Slot_2LT.Slot_2LT_C.FullBody
// 0x0020 (0x0020 - 0x0000)
struct Slot_2LT_C_FullBody final
{
public:
	struct FPoseLink                              InPose_FullBody;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              FullBody_0;                                        // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function Slot_2LT.Slot_2LT_C.ExecuteUbergraph_Slot_2LT
// 0x0004 (0x0004 - 0x0000)
struct Slot_2LT_C_ExecuteUbergraph_Slot_2LT final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Slot_2LT.Slot_2LT_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Slot_2LT_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};

}

