#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EsiemoExplosionValue

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function EsiemoExplosionValue.EsiemoExplosionValue_C.CalculateValue
// 0x0168 (0x0168 - 0x0000)
struct EsiemoExplosionValue_C_CalculateValue final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1ScaledInteger                       ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_FromInt_ReturnValue;                      // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue;                    // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue;  // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue_1;                  // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromInt_ReturnValue_1;                    // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_ScaledIntToText_ReturnValue;         // 0x0048(0x0018)()
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_1; // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0050)(HasGetValueTypeHash)
	struct FM1ScaledInteger                       K2Node_Select_Default;                             // 0x00B8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_ScaledIntToText_ReturnValue_1;       // 0x00C0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00D8(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0128(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0138(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast;           // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast_1;         // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

