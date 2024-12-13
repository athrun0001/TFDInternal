#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_Bunny_TickCostByValue

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_structs.hpp"


namespace SDK::Params
{

// Function SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.OnRep_bDepleted
// 0x0048 (0x0048 - 0x0000)
struct SE_Bunny_TickCostByValue_C_OnRep_bDepleted final
{
public:
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        K2Node_MakeStruct_M1AbilityEvent;                  // 0x0008(0x0040)()
};

// Function SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.ExecuteTickOperation
// 0x00D8 (0x00D8 - 0x0000)
struct SE_Bunny_TickCostByValue_C_ExecuteTickOperation final
{
public:
	struct FM1AbilityOperationParam               OpParam;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                          CallFunc_BP_TryExecuteCostOperation_ReturnValue;   // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerZero_ReturnValue;            // 0x00B8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetStatValue_StatValue;                   // 0x00C8(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStatValue_ReturnValue;                 // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Equal_ScaledIntScaledInt_ReturnValue;     // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.ExecutePeriodOperation
// 0x00B0 (0x00B0 - 0x0000)
struct SE_Bunny_TickCostByValue_C_ExecutePeriodOperation final
{
public:
	struct FM1AbilityOperationParam               OpParam;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function SE_Bunny_TickCostByValue.SE_Bunny_TickCostByValue_C.MakeTickOpParam
// 0x01D8 (0x01D8 - 0x0000)
struct SE_Bunny_TickCostByValue_C_MakeTickOpParam final
{
public:
	double                                        OpValue;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityOperationParam               OpParam;                                           // 0x0008(0x00B0)(Parm, OutParm, ContainsInstancedReference)
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerOne_ReturnValue;             // 0x00B8(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetStatValue_StatValue;                   // 0x00D0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStatValue_ReturnValue;                 // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_GetStatValue_StatValue_1;                 // 0x00E0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStatValue_ReturnValue_1;               // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue;       // 0x00F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_ScaledIntToFloat_ReturnValue;        // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_ScaledIntToFloat_ReturnValue_1;      // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityOperationParam               CallFunc_MakeTickOpParam_OpParam;                  // 0x0118(0x00B0)(ContainsInstancedReference)
	double                                        CallFunc_FClamp_Max_ImplicitCast;                  // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

