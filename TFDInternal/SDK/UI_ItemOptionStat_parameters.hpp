#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemOptionStat

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UI_ItemOptionStat.UI_ItemOptionStat_C.UISet_StatTierColor
// 0x0014 (0x0014 - 0x0000)
struct UI_ItemOptionStat_C_UISet_StatTierColor final
{
public:
	EM1ItemOptionTierType                         OptionTier;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Get_UI_ItemOptionTierColor_TierColor;     // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ItemOptionStat.UI_ItemOptionStat_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_ItemOptionStat_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ItemOptionStat.UI_ItemOptionStat_C.ExecuteUbergraph_UI_ItemOptionStat
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemOptionStat_C_ExecuteUbergraph_UI_ItemOptionStat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ItemOptionTierType                         K2Node_Event_InOptionTier;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ItemOptionStat.UI_ItemOptionStat_C.BP_SetOptionTier
// 0x0001 (0x0001 - 0x0000)
struct UI_ItemOptionStat_C_BP_SetOptionTier final
{
public:
	EM1ItemOptionTierType                         InOptionTier;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

