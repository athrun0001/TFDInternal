#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemIconOnly_Rune

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_ItemIconOnly_Rune.UI_ItemIconOnly_Rune_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_ItemIconOnly_Rune_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ItemIconOnly_Rune.UI_ItemIconOnly_Rune_C.ExecuteUbergraph_UI_ItemIconOnly_Rune
// 0x0050 (0x0050 - 0x0000)
struct UI_ItemIconOnly_Rune_C_ExecuteUbergraph_UI_ItemIconOnly_Rune final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIData*                              K2Node_Event_InData;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UM1UIDataItemInfo_Rune*                 K2Node_DynamicCast_AsM1UIData_Item_Info_Rune;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetIcon_ReturnValue;                      // 0x0020(0x0030)(UObjectWrapper, HasGetValueTypeHash)
};

// Function UI_ItemIconOnly_Rune.UI_ItemIconOnly_Rune_C.SetUI_RunePadding
// 0x0018 (0x0018 - 0x0000)
struct UI_ItemIconOnly_Rune_C_SetUI_RunePadding final
{
public:
	struct FMargin                                Margin;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ItemIconOnly_Rune.UI_ItemIconOnly_Rune_C.SetUI_RuneIcon
// 0x0038 (0x0038 - 0x0000)
struct UI_ItemIconOnly_Rune_C_SetUI_RuneIcon final
{
public:
	class UM1UIDataItemInfo*                      UIData_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetIcon_ReturnValue;                      // 0x0008(0x0030)(UObjectWrapper, HasGetValueTypeHash)
};

// Function UI_ItemIconOnly_Rune.UI_ItemIconOnly_Rune_C.SetDataImpl
// 0x0008 (0x0008 - 0x0000)
struct UI_ItemIconOnly_Rune_C_SetDataImpl final
{
public:
	class UM1UIData*                              InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}

