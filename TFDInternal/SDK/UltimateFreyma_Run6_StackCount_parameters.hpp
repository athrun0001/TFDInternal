#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UltimateFreyma_Run6_StackCount

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_structs.hpp"


namespace SDK::Params
{

// Function UltimateFreyma_Run6_StackCount.UltimateFreyma_Run6_StackCount_C.CalculateValue
// 0x0040 (0x0040 - 0x0000)
struct UltimateFreyma_Run6_StackCount_C_CalculateValue final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1ScaledInteger                       ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromInt_ReturnValue;                      // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromInt_ReturnValue_1;                    // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue;                    // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue;       // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue;  // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast;           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

