#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_Bunny_GaugeDeltaByMaxRatio

#include "Basic.hpp"

#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function SE_Bunny_GaugeDeltaByMaxRatio.SE_Bunny_GaugeDeltaByMaxRatio_C.GetTickRate
// 0x0030 (0x0030 - 0x0000)
struct SE_Bunny_GaugeDeltaByMaxRatio_C_GetTickRate final
{
public:
	double                                        TickRate;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetStatValue_StatValue;                   // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStatValue_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_ScaledIntToFloat_ReturnValue;        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SE_Bunny_GaugeDeltaByMaxRatio.SE_Bunny_GaugeDeltaByMaxRatio_C.ExecuteUbergraph_SE_Bunny_GaugeDeltaByMaxRatio
// 0x0008 (0x0008 - 0x0000)
struct SE_Bunny_GaugeDeltaByMaxRatio_C_ExecuteUbergraph_SE_Bunny_GaugeDeltaByMaxRatio final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   CallFunc_ConvertGaugeStatType_CurrentToMax_OutMaxStatType; // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ConvertGaugeStatType_CurrentToMax_ReturnValue; // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
