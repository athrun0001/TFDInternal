#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemIconOnly

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UI_ItemIconOnly.UI_ItemIconOnly_C.ShowEquippedIcon
// 0x0020 (0x0020 - 0x0000)
struct UI_ItemIconOnly_C_ShowEquippedIcon final
{
public:
	class UM1UIDataItemInfo*                      InItemInfo;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIDataItemInfo_Equipment*            K2Node_DynamicCast_AsM1UIData_Item_Info_Equipment; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEquipped_ReturnValue;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ItemIconOnly.UI_ItemIconOnly_C.SetUIItemIconType
// 0x00B8 (0x00B8 - 0x0000)
struct UI_ItemIconOnly_C_SetUIItemIconType final
{
public:
	class UM1UIDataItemInfo*                      UIData_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EM1ItemIconType                               IconType;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIDataItemInfo_Customizing*          K2Node_DynamicCast_AsM1UIData_Item_Info_Customizing; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIDataItemInfo_Equipment*            K2Node_DynamicCast_AsM1UIData_Item_Info_Equipment; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1CustomizingItemCategoryType                CallFunc_GetCategoryType_ReturnValue;              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1EquipmentCategoryType                      CallFunc_GetCategory_ReturnValue;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ItemType                                   CallFunc_GetItemType_ReturnValue;                  // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ItemType                                   CallFunc_GetItemType_ReturnValue_1;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetBigIcon_ReturnValue;                   // 0x0038(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetIcon_ReturnValue;                      // 0x0068(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D                K2Node_SetFieldsInStruct_ImageSize_ImplicitCast;   // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D                K2Node_SetFieldsInStruct_ImageSize_ImplicitCast_1; // 0x00A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D                K2Node_SetFieldsInStruct_ImageSize_ImplicitCast_2; // 0x00A8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D                K2Node_SetFieldsInStruct_ImageSize_ImplicitCast_3; // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
};

// Function UI_ItemIconOnly.UI_ItemIconOnly_C.SetUIIconStretch
// 0x0001 (0x0001 - 0x0000)
struct UI_ItemIconOnly_C_SetUIIconStretch final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ItemIconOnly.UI_ItemIconOnly_C.SetUIIconScaleFit
// 0x0001 (0x0001 - 0x0000)
struct UI_ItemIconOnly_C_SetUIIconScaleFit final
{
public:
	bool                                          ScaleToFitX;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ItemIconOnly.UI_ItemIconOnly_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_ItemIconOnly_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ItemIconOnly.UI_ItemIconOnly_C.ExecuteUbergraph_UI_ItemIconOnly
// 0x0028 (0x0028 - 0x0000)
struct UI_ItemIconOnly_C_ExecuteUbergraph_UI_ItemIconOnly final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDeprecateSlateVector2D                K2Node_SetFieldsInStruct_ImageSize_ImplicitCast;   // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D                K2Node_SetFieldsInStruct_ImageSize_ImplicitCast_1; // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
};

}

