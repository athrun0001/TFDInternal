#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameTop_MasteryRank_LevelUp_Possible

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK::Params
{

// Function UI_GameTop_MasteryRank_LevelUp_Possible.UI_GameTop_MasteryRank_LevelUp_Possible_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_GameTop_MasteryRank_LevelUp_Possible_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameTop_MasteryRank_LevelUp_Possible.UI_GameTop_MasteryRank_LevelUp_Possible_C.GetEndAnimation
// 0x0008 (0x0008 - 0x0000)
struct UI_GameTop_MasteryRank_LevelUp_Possible_C_GetEndAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameTop_MasteryRank_LevelUp_Possible.UI_GameTop_MasteryRank_LevelUp_Possible_C.ExecuteUbergraph_UI_GameTop_MasteryRank_LevelUp_Possible
// 0x0018 (0x0018 - 0x0000)
struct UI_GameTop_MasteryRank_LevelUp_Possible_C_ExecuteUbergraph_UI_GameTop_MasteryRank_LevelUp_Possible final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
