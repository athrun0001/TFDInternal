#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GamePlayerInfoListItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "M1Data_structs.hpp"
#include "M1_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.SetColor
// 0x0018 (0x0018 - 0x0000)
struct UI_GamePlayerInfoListItem_C_SetColor final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Get_UI_PinColor_Pin_Color;                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.OnEventWidgetClose
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_OnEventWidgetClose final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.ExecuteUbergraph_UI_GamePlayerInfoListItem
// 0x0040 (0x0040 - 0x0000)
struct UI_GamePlayerInfoListItem_C_ExecuteUbergraph_UI_GamePlayerInfoListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InIndex;                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsMaxLevel;                          // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bAway;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSamePartyWithLocalPlayer;          // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsPartyLeader;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection_1;                        // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue_1;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         K2Node_Event_InLocalPlatformType;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         K2Node_Event_InPlayerPlatformType;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bMarked;                              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bDBNO;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.BP_UpdatePartyLeader
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_BP_UpdatePartyLeader final
{
public:
	bool                                          bIsPartyLeader;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.BP_UpdateIsSameParty
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_BP_UpdateIsSameParty final
{
public:
	bool                                          bIsSamePartyWithLocalPlayer;                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.BP_UpdateAwayFromGameplay
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_BP_UpdateAwayFromGameplay final
{
public:
	bool                                          bAway;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.BP_UpdateAppearanceByLevel
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_BP_UpdateAppearanceByLevel final
{
public:
	bool                                          bIsMaxLevel;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.BP_SetSquadIndex
// 0x0004 (0x0004 - 0x0000)
struct UI_GamePlayerInfoListItem_C_BP_SetSquadIndex final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.BP_SetPlatformIcon
// 0x0002 (0x0002 - 0x0000)
struct UI_GamePlayerInfoListItem_C_BP_SetPlatformIcon final
{
public:
	EM1LoginPlatformTypes                         InLocalPlatformType;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         InPlayerPlatformType;                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.BP_OnChangedPlayerDBNOState
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_BP_OnChangedPlayerDBNOState final
{
public:
	bool                                          bDBNO;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GamePlayerInfoListItem.UI_GamePlayerInfoListItem_C.BP_MarkedRestart
// 0x0001 (0x0001 - 0x0000)
struct UI_GamePlayerInfoListItem_C_BP_MarkedRestart final
{
public:
	bool                                          bMarked;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

