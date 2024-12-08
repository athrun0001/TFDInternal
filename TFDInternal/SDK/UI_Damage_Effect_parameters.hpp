#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Damage_Effect

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_Damage_Effect.UI_Damage_Effect_C.SetVisibilityByDamagedEffectType
// 0x0020 (0x0020 - 0x0000)
struct UI_Damage_Effect_C_SetVisibilityByDamagedEffectType final
{
public:
	EM1UIDamagedEffectType                        InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              InVisibility;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlay*                               Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EM1UIDamagedEffectType                        Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlay*                               K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Damage_Effect.UI_Damage_Effect_C.ExecuteUbergraph_UI_Damage_Effect
// 0x0038 (0x0038 - 0x0000)
struct UI_Damage_Effect_C_ExecuteUbergraph_UI_Damage_Effect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1UIDamagedEffectType                        Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1UIDamagedEffectType                        K2Node_Event_InType_1;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1UIDamagedEffectType                        K2Node_Event_InType;                               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1UIDamagedEffectType                        Temp_byte_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_Select_Default_1;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Damage_Effect.UI_Damage_Effect_C.BP_StopDamagedEffectAnim
// 0x0001 (0x0001 - 0x0000)
struct UI_Damage_Effect_C_BP_StopDamagedEffectAnim final
{
public:
	EM1UIDamagedEffectType                        InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Damage_Effect.UI_Damage_Effect_C.BP_PlayDamagedEffectAnim
// 0x0001 (0x0001 - 0x0000)
struct UI_Damage_Effect_C_BP_PlayDamagedEffectAnim final
{
public:
	EM1UIDamagedEffectType                        InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Damage_Effect.UI_Damage_Effect_C.BP_GetDamagedEffectAnim
// 0x0028 (0x0028 - 0x0000)
struct UI_Damage_Effect_C_BP_GetDamagedEffectAnim final
{
public:
	EM1UIDamagedEffectType                        InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1UIDamagedEffectType                        Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
