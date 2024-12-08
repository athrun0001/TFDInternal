#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameTop_LevelUp_SkillIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_GameTop_LevelUp_SkillIcon.UI_GameTop_LevelUp_SkillIcon_C.SetDataImpl
// 0x0008 (0x0008 - 0x0000)
struct UI_GameTop_LevelUp_SkillIcon_C_SetDataImpl final
{
public:
	class UM1UIData*                              InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameTop_LevelUp_SkillIcon.UI_GameTop_LevelUp_SkillIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_GameTop_LevelUp_SkillIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameTop_LevelUp_SkillIcon.UI_GameTop_LevelUp_SkillIcon_C.PlayOpenAnim
// 0x0008 (0x0008 - 0x0000)
struct UI_GameTop_LevelUp_SkillIcon_C_PlayOpenAnim final
{
public:
	double                                        InDelay;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameTop_LevelUp_SkillIcon.UI_GameTop_LevelUp_SkillIcon_C.ExecuteUbergraph_UI_GameTop_LevelUp_SkillIcon
// 0x0078 (0x0078 - 0x0000)
struct UI_GameTop_LevelUp_SkillIcon_C_ExecuteUbergraph_UI_GameTop_LevelUp_SkillIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIData*                              K2Node_Event_InData;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIDataCharacterSkill*                K2Node_DynamicCast_AsM1UIData_Character_Skill;     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetSkillIcon_ReturnValue;                 // 0x0028(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_InDelay;                        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

