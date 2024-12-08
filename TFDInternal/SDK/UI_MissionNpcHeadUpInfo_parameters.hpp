#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MissionNpcHeadUpInfo

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_MissionNpcHeadUpInfo.UI_MissionNpcHeadUpInfo_C.ExecuteUbergraph_UI_MissionNpcHeadUpInfo
// 0x0050 (0x0050 - 0x0000)
struct UI_MissionNpcHeadUpInfo_C_ExecuteUbergraph_UI_MissionNpcHeadUpInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHasWave;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EM1LegionCategory>                     K2Node_Event_InLegionCategory;                     // 0x0018(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_PlayTimeGuideStringId;                // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MissionNpcHeadUpInfo.UI_MissionNpcHeadUpInfo_C.BP_SetMissionWaveType
// 0x0001 (0x0001 - 0x0000)
struct UI_MissionNpcHeadUpInfo_C_BP_SetMissionWaveType final
{
public:
	bool                                          bHasWave;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MissionNpcHeadUpInfo.UI_MissionNpcHeadUpInfo_C.BP_SetMissionPlayTimeGuide
// 0x0008 (0x0008 - 0x0000)
struct UI_MissionNpcHeadUpInfo_C_BP_SetMissionPlayTimeGuide final
{
public:
	class FName                                   PlayTimeGuideStringId;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MissionNpcHeadUpInfo.UI_MissionNpcHeadUpInfo_C.BP_SetMissionLegionCategory
// 0x0010 (0x0010 - 0x0000)
struct UI_MissionNpcHeadUpInfo_C_BP_SetMissionLegionCategory final
{
public:
	TArray<EM1LegionCategory>                     InLegionCategory;                                  // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_MissionNpcHeadUpInfo.UI_MissionNpcHeadUpInfo_C.BP_PlayCloseAnim
// 0x0010 (0x0010 - 0x0000)
struct UI_MissionNpcHeadUpInfo_C_BP_PlayCloseAnim final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

