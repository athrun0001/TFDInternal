#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Bunny_Active03

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function Skill_Bunny_Active03.Skill_Bunny_Active03_C.ExecuteUbergraph_Skill_Bunny_Active03
// 0x0050 (0x0050 - 0x0000)
struct Skill_Bunny_Active03_C_ExecuteUbergraph_Skill_Bunny_Active03 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FM1TaggedAbilityParamData>      Temp_struct_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_TryCommitAbility_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ConstParm, ReferenceParm)
	struct FM1AbilityContextHandle                CallFunc_BP_MakeForwardingContext_ReturnValue;     // 0x0030(0x0010)()
	struct FM1AbilityId                           CallFunc_InvokeFirstStatusEffectToSelfByTag_ReturnValue; // 0x0040(0x0010)(HasGetValueTypeHash)
};

}

