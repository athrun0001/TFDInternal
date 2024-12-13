#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_AJaxHyperCube

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.OnEventReceived_6BD88B004E57299C75FE6DB6B89DE81C
// 0x0040 (0x0040 - 0x0000)
struct Skill_AJaxHyperCube_C_OnEventReceived_6BD88B004E57299C75FE6DB6B89DE81C final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.OnCompleted_6BD88B004E57299C75FE6DB6B89DE81C
// 0x0040 (0x0040 - 0x0000)
struct Skill_AJaxHyperCube_C_OnCompleted_6BD88B004E57299C75FE6DB6B89DE81C final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.OnBlendOut_6BD88B004E57299C75FE6DB6B89DE81C
// 0x0040 (0x0040 - 0x0000)
struct Skill_AJaxHyperCube_C_OnBlendOut_6BD88B004E57299C75FE6DB6B89DE81C final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.OnAbilityEvent_1F6E028A4095C5034DD575915DFF51D5
// 0x0040 (0x0040 - 0x0000)
struct Skill_AJaxHyperCube_C_OnAbilityEvent_1F6E028A4095C5034DD575915DFF51D5 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.GetSkillMontage
// 0x0010 (0x0010 - 0x0000)
struct Skill_AJaxHyperCube_C_GetSkillMontage final
{
public:
	class UAnimMontage*                           SkillMontage;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsStrengthenedSkill_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.ExecuteUbergraph_Skill_AJaxHyperCube
// 0x04B0 (0x04B0 - 0x0000)
struct Skill_AJaxHyperCube_C_ExecuteUbergraph_Skill_AJaxHyperCube final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_2;                        // 0x0008(0x0040)(ConstParm)
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_1;                        // 0x0048(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate;              // 0x0088(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        Temp_struct_Variable;                              // 0x0098(0x0040)()
	TArray<struct FM1TaggedAbilityParamData>      Temp_struct_Variable_1;                            // 0x00D8(0x0010)(ConstParm, ReferenceParm)
	TArray<class FName>                           Temp_name_Variable;                                // 0x00E8(0x0010)(ConstParm, ReferenceParm)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityContextHandle                CallFunc_BP_MakeForwardingContext_ReturnValue;     // 0x0100(0x0010)()
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event;                          // 0x0110(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0150(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        Temp_struct_Variable_2;                            // 0x0160(0x0040)()
	class UM1AbilityTask_WaitAbilityEvent*        CallFunc_WaitAbilityEvent_ReturnValue;             // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x3];                                      // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_3;                        // 0x01B0(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x01F0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_1;              // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0212(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0213(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_2;              // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0220(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_2;               // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_232[0x6];                                      // 0x0232(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_3;              // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_3;               // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_242[0x6];                                      // 0x0242(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseSpawnAbilityActor_ReturnValue; // 0x0248(0x0068)()
	TArray<struct FM1SkillFTestTestCase>          K2Node_MakeArray_Array;                            // 0x02B0(0x0010)(ReferenceParm)
	struct FM1SkillFTestTestCaseSheet             K2Node_MakeStruct_M1SkillFTestTestCaseSheet;       // 0x02C0(0x0040)()
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseDamageOnAbilityActor_ReturnValue; // 0x0300(0x0068)()
	TArray<struct FM1SkillFTestTestCase>          K2Node_MakeArray_Array_1;                          // 0x0368(0x0010)(ReferenceParm)
	struct FM1SkillFTestTestCaseSheet             K2Node_MakeStruct_M1SkillFTestTestCaseSheet_1;     // 0x0378(0x0040)()
	TArray<class AAbilityActor_HyperCube_C*>      CallFunc_GetAllActorsOfClass_OutActors;            // 0x03B8(0x0010)(ReferenceParm)
	class AAbilityActor_HyperCube_C*              CallFunc_Array_Get_Item;                           // 0x03C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryCommitAbility_ReturnValue;             // 0x03D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D5[0x3];                                      // 0x03D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityContextHandle                CallFunc_GetAbilityContextHandle_ReturnValue;      // 0x03D8(0x0010)(ConstParm)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_4;              // 0x03E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_AbilityContextGetInstigator_ReturnValue;  // 0x03F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x03F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0404(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_405[0x3];                                      // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;            // 0x040C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0418(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x041C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0424(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_425[0x3];                                      // 0x0425(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0428(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_434[0xC];                                      // 0x0434(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0440(0x0030)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0470(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_474[0x4];                                      // 0x0474(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AM1AbilityActor*                        CallFunc_SpawnFirstAbilityActorByTag_ReturnValue;  // 0x0478(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAbilityActor_HyperCube_C*              K2Node_DynamicCast_AsAbility_Actor_Hyper_Cube;     // 0x0480(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_489[0x7];                                      // 0x0489(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_GetSkillMontage_SkillMontage;             // 0x0490(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsStrengthenedSkill_ReturnValue;          // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_499[0x7];                                      // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AbilityTask_PlayMontageAndWait*      CallFunc_PlayMontageAndWaitForEvent_ReturnValue;   // 0x04A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bCancelled;                           // 0x04A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.BP_OnDeactivated
// 0x0001 (0x0001 - 0x0000)
struct Skill_AJaxHyperCube_C_BP_OnDeactivated final
{
public:
	bool                                          bCancelled;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_AJaxHyperCube.Skill_AJaxHyperCube_C.BP_MakePreloadAssetList
// 0x00D0 (0x00D0 - 0x0000)
struct Skill_AJaxHyperCube_C_BP_MakePreloadAssetList final
{
public:
	struct FM1AbilityAssetPreload                 OutAbilityAssetPreload;                            // 0x0000(0x0040)(Parm, OutParm)
	struct FSoftObjectPath                        CallFunc_GetSoftObjectPath_ReturnValue;            // 0x0040(0x0020)(ZeroConstructor, HasGetValueTypeHash)
	struct FSoftObjectPath                        CallFunc_GetSoftObjectPath_ReturnValue_1;          // 0x0060(0x0020)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSoftObjectPath>                K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	struct FM1AbilityAssetPreload                 K2Node_MakeStruct_M1AbilityAssetPreload;           // 0x0090(0x0040)()
};

}

