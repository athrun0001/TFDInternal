#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_Radar_Icon

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UI_Game_Radar_Icon.UI_Game_Radar_Icon_C.Icon Setting
// 0x0018 (0x0018 - 0x0000)
struct UI_Game_Radar_Icon_C_Icon_Setting final
{
public:
	EM1RadarEntityType                            InObjectType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ItemTierType                               InItemTier;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ImportanceType                             ImportanceType;                                    // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Get_Icon_Image_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Game_Radar_Icon.UI_Game_Radar_Icon_C.Get Icon Image
// 0x01A8 (0x01A8 - 0x0000)
struct UI_Game_Radar_Icon_C_Get_Icon_Image final
{
public:
	EM1RadarEntityType                            InObjectType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ItemTierType                               InItemTier;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ImportanceType                             InImportanceType;                                  // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1ItemTierType                               Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_4;                            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_5;                            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_6;                            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_7;                            // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_8;                            // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1ItemTierType                               Temp_byte_Variable_1;                              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_9;                            // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_10;                           // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_11;                           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_12;                           // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_13;                           // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_14;                           // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1ItemTierType                               Temp_byte_Variable_2;                              // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default_1;                           // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_15;                           // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_16;                           // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_17;                           // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_18;                           // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_19;                           // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_20;                           // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1RadarEntityType                            Temp_byte_Variable_3;                              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default_2;                           // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_21;                           // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_22;                           // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_23;                           // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_24;                           // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_25;                           // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_26;                           // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_27;                           // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_28;                           // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_29;                           // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_30;                           // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_31;                           // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_32;                           // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_33;                           // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_34;                           // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_35;                           // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_36;                           // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_37;                           // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default_3;                           // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_38;                           // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_39;                           // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1ItemTierType                               Temp_byte_Variable_4;                              // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default_4;                           // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Game_Radar_Icon.UI_Game_Radar_Icon_C.ExecuteUbergraph_UI_Game_Radar_Icon
// 0x0024 (0x0024 - 0x0000)
struct UI_Game_Radar_Icon_C_ExecuteUbergraph_UI_Game_Radar_Icon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1RadarEntityType                            K2Node_Event_InType;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ItemTierType                               K2Node_Event_InItemTier;                           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ImportanceType                             K2Node_Event_InItemImportanceType;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_InUpOrDown;                           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Get_UI_PinColor_Pin_Color;                // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Game_Radar_Icon.UI_Game_Radar_Icon_C.Display Height Setting
// 0x0008 (0x0008 - 0x0000)
struct UI_Game_Radar_Icon_C_Display_Height_Setting final
{
public:
	int32                                         InUpOrDown;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Game_Radar_Icon.UI_Game_Radar_Icon_C.BP_UpdateIcon
// 0x0003 (0x0003 - 0x0000)
struct UI_Game_Radar_Icon_C_BP_UpdateIcon final
{
public:
	EM1RadarEntityType                            InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ItemTierType                               InItemTier;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ImportanceType                             InItemImportanceType;                              // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Game_Radar_Icon.UI_Game_Radar_Icon_C.BP_UpdateHeightPanel
// 0x0004 (0x0004 - 0x0000)
struct UI_Game_Radar_Icon_C_BP_UpdateHeightPanel final
{
public:
	int32                                         InUpOrDown;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

