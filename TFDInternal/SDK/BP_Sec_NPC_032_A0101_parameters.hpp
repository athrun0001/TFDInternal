#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sec_NPC_032_A0101

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Sec_NPC_032_A0101.BP_Sec_NPC_032_A0101_C.ExecuteUbergraph_BP_Sec_NPC_032_A0101
// 0x0004 (0x0004 - 0x0000)
struct BP_Sec_NPC_032_A0101_C_ExecuteUbergraph_BP_Sec_NPC_032_A0101 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Sec_NPC_032_A0101.BP_Sec_NPC_032_A0101_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct BP_Sec_NPC_032_A0101_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AnimGraph_0;                                       // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

}

