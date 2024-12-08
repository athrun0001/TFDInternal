#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcSubSkillDamage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"
#include "M1_structs.hpp"


namespace SDK::Params
{

// Function CalcSubSkillDamage.CalcSubSkillDamage_C.DoCalculation
// 0x01F8 (0x01F8 - 0x0000)
struct CalcSubSkillDamage_C_DoCalculation final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0140)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue;       // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0158(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0170(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01C0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01D0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};

// Function CalcSubSkillDamage.CalcSubSkillDamage_C.Apply Subskill ATK
// 0x0398 (0x0398 - 0x0000)
struct CalcSubSkillDamage_C_Apply_Subskill_ATK final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0140)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerOne_ReturnValue;             // 0x0148(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue;                    // 0x0150(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue;       // 0x0158(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue;                   // 0x0160(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_1;                 // 0x0168(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue;       // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_1;     // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0190(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01A8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01C0(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0210(0x0050)(HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_2;                 // 0x0260(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_2;     // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0278(0x0018)()
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_3;                 // 0x0290(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0298(0x0050)(HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerOne_ReturnValue_1;           // 0x02E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue_1;     // 0x02F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue;  // 0x02F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue_1; // 0x0300(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0308(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0358(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0368(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0380(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast;           // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
