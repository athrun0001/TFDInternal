#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MapBattleZoneUnlockNoti

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_MapBattleZoneUnlockNoti.UI_MapBattleZoneUnlockNoti_C.ExecuteUbergraph_UI_MapBattleZoneUnlockNoti
// 0x0010 (0x0010 - 0x0000)
struct UI_MapBattleZoneUnlockNoti_C_ExecuteUbergraph_UI_MapBattleZoneUnlockNoti final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_CustomEvent_AkEvent;                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MapBattleZoneUnlockNoti.UI_MapBattleZoneUnlockNoti_C.BP_widget_playAkEvent
// 0x0008 (0x0008 - 0x0000)
struct UI_MapBattleZoneUnlockNoti_C_BP_widget_playAkEvent final
{
public:
	class UAkAudioEvent*                          AkEvent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
