#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_Bunny_IncreaseCommonGaugeByPassive

#include "Basic.hpp"


namespace SDK::Params
{

// Function SE_Bunny_IncreaseCommonGaugeByPassive.SE_Bunny_IncreaseCommonGaugeByPassive_C.OnActiveTick
// 0x0004 (0x0004 - 0x0000)
struct SE_Bunny_IncreaseCommonGaugeByPassive_C_OnActiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SE_Bunny_IncreaseCommonGaugeByPassive.SE_Bunny_IncreaseCommonGaugeByPassive_C.ExecuteUbergraph_SE_Bunny_IncreaseCommonGaugeByPassive
// 0x0038 (0x0038 - 0x0000)
struct SE_Bunny_IncreaseCommonGaugeByPassive_C_ExecuteUbergraph_SE_Bunny_IncreaseCommonGaugeByPassive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGaugeStatFull_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_2;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bCancelled;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SE_Bunny_IncreaseCommonGaugeByPassive.SE_Bunny_IncreaseCommonGaugeByPassive_C.BP_OnDeactivated
// 0x0001 (0x0001 - 0x0000)
struct SE_Bunny_IncreaseCommonGaugeByPassive_C_BP_OnDeactivated final
{
public:
	bool                                          bCancelled;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
