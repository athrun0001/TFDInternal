#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_SkillPropertyGroup

#include "Basic.hpp"

#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function UI_Mission_SkillPropertyGroup.UI_Mission_SkillPropertyGroup_C.SetElementalType
// 0x0008 (0x0008 - 0x0000)
struct UI_Mission_SkillPropertyGroup_C_SetElementalType final
{
public:
	EM1ElementalDamageChannel                     InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

