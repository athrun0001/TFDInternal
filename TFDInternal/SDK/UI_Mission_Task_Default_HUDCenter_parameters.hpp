#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_Default_HUDCenter

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK::Params
{

// Function UI_Mission_Task_Default_HUDCenter.UI_Mission_Task_Default_HUDCenter_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_Mission_Task_Default_HUDCenter_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Mission_Task_Default_HUDCenter.UI_Mission_Task_Default_HUDCenter_C.OnEventWidgetClose
// 0x0001 (0x0001 - 0x0000)
struct UI_Mission_Task_Default_HUDCenter_C_OnEventWidgetClose final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Mission_Task_Default_HUDCenter.UI_Mission_Task_Default_HUDCenter_C.ExecuteUbergraph_UI_Mission_Task_Default_HUDCenter
// 0x0028 (0x0028 - 0x0000)
struct UI_Mission_Task_Default_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Default_HUDCenter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection_1;                        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

