#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerkAbilityBase

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK::Params
{

// Function PerkAbilityBase.PerkAbilityBase_C.ExecuteUbergraph_PerkAbilityBase
// 0x0018 (0x0018 - 0x0000)
struct PerkAbilityBase_C_ExecuteUbergraph_PerkAbilityBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bCancelled;                           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FM1ActiveAbilityOperationId>    CallFunc_BP_StartOperationsToSelfByTag_ReturnValue; // 0x0008(0x0010)(ReferenceParm)
};

// Function PerkAbilityBase.PerkAbilityBase_C.BP_OnDeactivated
// 0x0001 (0x0001 - 0x0000)
struct PerkAbilityBase_C_BP_OnDeactivated final
{
public:
	bool                                          bCancelled;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

