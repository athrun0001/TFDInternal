#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_Defense_HUDCenter

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Mission_Task_Defense_HUDCenter.UI_Mission_Task_Defense_HUDCenter_C.ExecuteUbergraph_UI_Mission_Task_Defense_HUDCenter
// 0x0038 (0x0038 - 0x0000)
struct UI_Mission_Task_Defense_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Defense_HUDCenter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInShow;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Mission_Task_Defense_HUDCenter.UI_Mission_Task_Defense_HUDCenter_C.BP_ShowWidget
// 0x0001 (0x0001 - 0x0000)
struct UI_Mission_Task_Defense_HUDCenter_C_BP_ShowWidget final
{
public:
	bool                                          bInShow;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Mission_Task_Defense_HUDCenter.UI_Mission_Task_Defense_HUDCenter_C.BP_GetTargetListItems
// 0x0020 (0x0020 - 0x0000)
struct UI_Mission_Task_Defense_HUDCenter_C_BP_GetTargetListItems final
{
public:
	TArray<class UWidget*>                        ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TArray<class UWidget*>                        K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};

}

