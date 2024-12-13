#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Viessa_Active03

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Skill_Viessa_Active03.Skill_Viessa_Active03_C.OnEventReceived_45DD66B44E5E751D754DBDA71D4FE9D3
// 0x0040 (0x0040 - 0x0000)
struct Skill_Viessa_Active03_C_OnEventReceived_45DD66B44E5E751D754DBDA71D4FE9D3 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Skill_Viessa_Active03.Skill_Viessa_Active03_C.OnEvent_D196BC7B42E13027592E6BA51E2B0BF6
// 0x0140 (0x0140 - 0x0000)
struct Skill_Viessa_Active03_C_OnEvent_D196BC7B42E13027592E6BA51E2B0BF6 final
{
public:
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0000(0x0140)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Skill_Viessa_Active03.Skill_Viessa_Active03_C.OnCompleted_45DD66B44E5E751D754DBDA71D4FE9D3
// 0x0040 (0x0040 - 0x0000)
struct Skill_Viessa_Active03_C_OnCompleted_45DD66B44E5E751D754DBDA71D4FE9D3 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Skill_Viessa_Active03.Skill_Viessa_Active03_C.OnBlendOut_45DD66B44E5E751D754DBDA71D4FE9D3
// 0x0040 (0x0040 - 0x0000)
struct Skill_Viessa_Active03_C_OnBlendOut_45DD66B44E5E751D754DBDA71D4FE9D3 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Skill_Viessa_Active03.Skill_Viessa_Active03_C.GetBoxLocation
// 0x0078 (0x0078 - 0x0000)
struct Skill_Viessa_Active03_C_GetBoxLocation final
{
public:
	struct FVector                                BoxLocation;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_Viessa_Active03.Skill_Viessa_Active03_C.ExecuteUbergraph_Skill_Viessa_Active03
// 0x0758 (0x0758 - 0x0000)
struct Skill_Viessa_Active03_C_ExecuteUbergraph_Skill_Viessa_Active03 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_2;                        // 0x0010(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_1;                        // 0x0060(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event;                          // 0x00B0(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00F0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        Temp_struct_Variable;                              // 0x0100(0x0040)()
	class UM1AbilityTask_PlayMontageAndWait*      CallFunc_PlayMontageAndWaitForEvent_ReturnValue;   // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x3];                                      // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x014C(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FM1CalcDamageInfo& DamageInfo)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0154(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1CalcDamageInfo                      K2Node_CustomEvent_DamageInfo;                     // 0x0168(0x0140)(ConstParm, ContainsInstancedReference)
	struct FM1CalcDamageInfo                      Temp_struct_Variable_2;                            // 0x02A8(0x0140)(ContainsInstancedReference)
	class UM1AbilityTask_WaitDamageEvent*         CallFunc_WaitGiveDamageEvent_ReturnValue;          // 0x03E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x03F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x03F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F3[0x1];                                      // 0x03F3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x03F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x03F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x03FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0408(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0414(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0420(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42C[0x4];                                      // 0x042C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0430(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0438(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0440(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0458(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x045C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0464(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0470(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C[0x4];                                      // 0x047C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseDamageOnMonster_ReturnValue;  // 0x0480(0x0068)()
	TArray<struct FM1SkillFTestTestCase>          K2Node_MakeArray_Array;                            // 0x04E8(0x0010)(ReferenceParm)
	class AM1Monster*                             CallFunc_GetTestMonster_ReturnValue;               // 0x04F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1SkillFTestTestCaseSheet             K2Node_MakeStruct_M1SkillFTestTestCaseSheet;       // 0x0500(0x0040)()
	bool                                          CallFunc_TryCommitAbility_ReturnValue;             // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_541[0x7];                                      // 0x0541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseStatusEffectOnMonster_ReturnValue; // 0x0548(0x0068)()
	struct FVector                                CallFunc_GetBoxLocation_BoxLocation;               // 0x05B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BC[0x4];                                      // 0x05BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_1;              // 0x05C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_2;              // 0x05C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x05D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBoxLocation_BoxLocation_1;             // 0x05DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x05E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F4[0x4];                                      // 0x05F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_3;              // 0x05F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseDamageOnMonster_ReturnValue_1; // 0x0600(0x0068)()
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue_1;      // 0x0668(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_674[0x4];                                      // 0x0674(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseSpawnAbilityActor_ReturnValue; // 0x0678(0x0068)()
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue_1;       // 0x06E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EC[0x4];                                      // 0x06EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FM1SkillFTestTestCase>          K2Node_MakeArray_Array_1;                          // 0x06F0(0x0010)(ReferenceParm)
	TArray<class AActor*>                         CallFunc_FindBoxOverlapActors_OutActors;           // 0x0700(0x0010)(ReferenceParm)
	bool                                          CallFunc_FindBoxOverlapActors_ReturnValue;         // 0x0710(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_711[0x7];                                      // 0x0711(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1SkillFTestTestCaseSheet             K2Node_MakeStruct_M1SkillFTestTestCaseSheet_1;     // 0x0718(0x0040)()
};

// Function Skill_Viessa_Active03.Skill_Viessa_Active03_C.AttackTargets
// 0x0040 (0x0040 - 0x0000)
struct Skill_Viessa_Active03_C_AttackTargets final
{
public:
	TArray<class AActor*>                         Targets;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityId                           CallFunc_InvokeFirstStatusEffectToTargetByTag_ReturnValue; // 0x0028(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

