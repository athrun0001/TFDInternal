#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTaskInteraction

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK::Params
{

// Function BP_MissionTaskInteraction.BP_MissionTaskInteraction_C.BP_RunResult
// 0x0001 (0x0001 - 0x0000)
struct BP_MissionTaskInteraction_C_BP_RunResult final
{
public:
	EM1TaskEventActorRunResult                    InRunResult;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MissionTaskInteraction.BP_MissionTaskInteraction_C.ExecuteUbergraph_BP_MissionTaskInteraction
// 0x0008 (0x0008 - 0x0000)
struct BP_MissionTaskInteraction_C_ExecuteUbergraph_BP_MissionTaskInteraction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1TaskEventActorRunResult                    K2Node_Event_InRunResult;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MissionTaskInteraction.BP_MissionTaskInteraction_C.BP_GetPushAwayCollsionRadius
// 0x0004 (0x0004 - 0x0000)
struct BP_MissionTaskInteraction_C_BP_GetPushAwayCollsionRadius final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

