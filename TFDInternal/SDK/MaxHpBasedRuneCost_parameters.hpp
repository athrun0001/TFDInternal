#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MaxHpBasedRuneCost

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_structs.hpp"


namespace SDK::Params
{

// Function MaxHpBasedRuneCost.MaxHpBasedRuneCost_C.CalculateValue
// 0x0048 (0x0048 - 0x0000)
struct MaxHpBasedRuneCost_C_CalculateValue final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1ScaledInteger                       ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       FinalValue;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_CalculateValue_ReturnValue;               // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerOne_ReturnValue;             // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerOne_ReturnValue_1;           // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_NegateScaledInt_ReturnValue;              // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_NegateScaledInt_ReturnValue_1;            // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_ScaledIntScaledInt_ReturnValue;   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

