#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_EpicBossIconItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_EpicBossIconItem.UI_EpicBossIconItem_C.SetDataImpl
// 0x0008 (0x0008 - 0x0000)
struct UI_EpicBossIconItem_C_SetDataImpl final
{
public:
	class UM1UIData*                              InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// Function UI_EpicBossIconItem.UI_EpicBossIconItem_C.ExecuteUbergraph_UI_EpicBossIconItem
// 0x0028 (0x0028 - 0x0000)
struct UI_EpicBossIconItem_C_ExecuteUbergraph_UI_EpicBossIconItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIData*                              K2Node_Event_InData;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UM1UIDataSimpleIcon*                    K2Node_DynamicCast_AsM1UIData_Simple_Icon;         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetIcon_ReturnValue;                      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

