#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_succes

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Mission_succes.UI_Mission_Succes_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Mission_Succes_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Mission_succes.UI_Mission_Succes_C.PlayAnimOpenClose
// 0x0008 (0x0008 - 0x0000)
struct UI_Mission_Succes_C_PlayAnimOpenClose final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Mission_succes.UI_Mission_Succes_C.ExecuteUbergraph_UI_Mission_Succes
// 0x0018 (0x0018 - 0x0000)
struct UI_Mission_Succes_C_ExecuteUbergraph_UI_Mission_Succes final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_CustomEvent_AkEvent;                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Mission_succes.UI_Mission_Succes_C.BP_widget_playAkEvent
// 0x0008 (0x0008 - 0x0000)
struct UI_Mission_Succes_C_BP_widget_playAkEvent final
{
public:
	class UAkAudioEvent*                          AkEvent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Mission_succes.UI_Mission_Succes_C.GetEndAnimation
// 0x0008 (0x0008 - 0x0000)
struct UI_Mission_Succes_C_GetEndAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

}

