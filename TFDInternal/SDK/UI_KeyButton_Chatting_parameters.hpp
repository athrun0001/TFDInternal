#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_KeyButton_Chatting

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "M1_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_KeyButton_Chatting.UI_KeyButton_Chatting_C.SetTextureAndOpacity
// 0x00F0 (0x00F0 - 0x0000)
struct UI_KeyButton_Chatting_C_SetTextureAndOpacity final
{
public:
	class UImage*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               PaperTexture;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Opacity;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0020(0x00C0)()
	float                                         CallFunc_SetOpacity_InOpacity_ImplicitCast;        // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_KeyButton_Chatting.UI_KeyButton_Chatting_C.SetTextColor
// 0x0028 (0x0028 - 0x0000)
struct UI_KeyButton_Chatting_C_SetTextColor final
{
public:
	struct FSlateColor                            KeyText;                                           // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                            ButtonText;                                        // 0x0014(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_KeyButton_Chatting.UI_KeyButton_Chatting_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_KeyButton_Chatting_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_KeyButton_Chatting.UI_KeyButton_Chatting_C.ExecuteUbergraph_UI_KeyButton_Chatting
// 0x0028 (0x0028 - 0x0000)
struct UI_KeyButton_Chatting_C_ExecuteUbergraph_UI_KeyButton_Chatting final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ButtonUIType                               K2Node_Event_InType;                               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_InDimmed;                             // 0x000A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AM1PlayerController*                    K2Node_DynamicCast_AsM1Player_Controller;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_KeyButton_Chatting.UI_KeyButton_Chatting_C.BP_ChangeDimmedUI
// 0x0001 (0x0001 - 0x0000)
struct UI_KeyButton_Chatting_C_BP_ChangeDimmedUI final
{
public:
	bool                                          InDimmed;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_KeyButton_Chatting.UI_KeyButton_Chatting_C.BP_ChangeButtonUI
// 0x0001 (0x0001 - 0x0000)
struct UI_KeyButton_Chatting_C_BP_ChangeButtonUI final
{
public:
	EM1ButtonUIType                               InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

