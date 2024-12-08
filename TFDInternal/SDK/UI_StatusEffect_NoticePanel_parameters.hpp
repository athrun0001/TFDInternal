#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_StatusEffect_NoticePanel

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK::Params
{

// Function UI_StatusEffect_NoticePanel.UI_StatusEffect_NoticePanel_C.SetUIAlign
// 0x0078 (0x0078 - 0x0000)
struct UI_StatusEffect_NoticePanel_C_SetUIAlign final
{
public:
	EVerticalAlignment                            InVerticalAling;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0028(0x0010)(NoDestructor)
	struct FAnchors                               K2Node_MakeStruct_Anchors_1;                       // 0x0038(0x0010)(NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// Function UI_StatusEffect_NoticePanel.UI_StatusEffect_NoticePanel_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_StatusEffect_NoticePanel_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_StatusEffect_NoticePanel.UI_StatusEffect_NoticePanel_C.ExecuteUbergraph_UI_StatusEffect_NoticePanel
// 0x0030 (0x0030 - 0x0000)
struct UI_StatusEffect_NoticePanel_C_ExecuteUbergraph_UI_StatusEffect_NoticePanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	const class UM1UIWidget*                      K2Node_Event_InNoticeWidget;                       // 0x0008(0x0008)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_StatusEffect_Notice_C*              K2Node_DynamicCast_AsUI_Status_Effect_Notice;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIWidget*                            CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// Function UI_StatusEffect_NoticePanel.UI_StatusEffect_NoticePanel_C.BP_OnAddedStatusEffectNotice
// 0x0008 (0x0008 - 0x0000)
struct UI_StatusEffect_NoticePanel_C_BP_OnAddedStatusEffectNotice final
{
public:
	const class UM1UIWidget*                      InNoticeWidget;                                    // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
