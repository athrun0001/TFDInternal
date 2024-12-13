#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Bunny_Active04

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"
#include "BunnyBeamLevelData_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Skill_Bunny_Active04.Skill_Bunny_Active04_C.OnMontageEventReceived
// 0x0040 (0x0040 - 0x0000)
struct Skill_Bunny_Active04_C_OnMontageEventReceived final
{
public:
	struct FM1AbilityEvent                        InEvent;                                           // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Skill_Bunny_Active04.Skill_Bunny_Active04_C.OnHit
// 0x009C (0x009C - 0x0000)
struct Skill_Bunny_Active04_C_OnHit final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x009C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Skill_Bunny_Active04.Skill_Bunny_Active04_C.OnBeamLevelIncrease__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Skill_Bunny_Active04_C_OnBeamLevelIncrease__DelegateSignature final
{
public:
	int32                                         CurrentBeamLevel;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ChargeTimeToNextLevel;                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMaxLevel;                                         // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_Bunny_Active04.Skill_Bunny_Active04_C.OnBeamActivationChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Skill_Bunny_Active04_C_OnBeamActivationChanged__DelegateSignature final
{
public:
	bool                                          bActivated;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_Bunny_Active04.Skill_Bunny_Active04_C.OnAbilityEvent_4A462A1E4E1E7BE1AE84FA9C4E71DEA4
// 0x0040 (0x0040 - 0x0000)
struct Skill_Bunny_Active04_C_OnAbilityEvent_4A462A1E4E1E7BE1AE84FA9C4E71DEA4 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Skill_Bunny_Active04.Skill_Bunny_Active04_C.JumpEndSection
// 0x0002 (0x0002 - 0x0000)
struct Skill_Bunny_Active04_C_JumpEndSection final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_Bunny_Active04.Skill_Bunny_Active04_C.IncreaseBeamLevel
// 0x0098 (0x0098 - 0x0000)
struct Skill_Bunny_Active04_C_IncreaseBeamLevel final
{
public:
	struct FBunnyBeamLevelData                    BeamLevelData;                                     // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityParamData                    K2Node_MakeStruct_M1AbilityParamData;              // 0x0038(0x0020)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBunnyBeamLevelData                    CallFunc_GetBeamLevelData_BeamLevelData;           // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBeamLevelData_bValid;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92[0x2];                                       // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_Bunny_Active04.Skill_Bunny_Active04_C.ExecuteUbergraph_Skill_Bunny_Active04
// 0x03E8 (0x03E8 - 0x0000)
struct Skill_Bunny_Active04_C_ExecuteUbergraph_Skill_Bunny_Active04 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event;                          // 0x0008(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        Temp_struct_Variable;                              // 0x0058(0x0040)()
	class UM1AbilityTask_WaitAbilityEvent*        CallFunc_WaitAbilityEvent_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bCancelled;                           // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_Event_InEvent;                              // 0x00B8(0x0040)()
	struct FM1AbilityId                           CallFunc_InvokeFirstStatusEffectToSelfByTag_ReturnValue; // 0x00F8(0x0010)(HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNiagaraComponent*>              CallFunc_SpawnFXsForAbility_ReturnValue;           // 0x0110(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_BP_TryStartOperationsToSelfByTag_ReturnValue; // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNiagaraComponent*>              CallFunc_SpawnFXsForAbility_ReturnValue_1;         // 0x0128(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UM1AbilityTask_LocalWaitInput*          CallFunc_LocalWaitInput_ReturnValue;               // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_142[0x6];                                      // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNiagaraComponent*>              CallFunc_SpawnFXsForAbility_ReturnValue_2;         // 0x0148(0x0010)(ReferenceParm, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_HitResult;                            // 0x0160(0x009C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FE[0x2];                                      // 0x01FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0208(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0214(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0220(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x022C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0240(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0248(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x026C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0278(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_1;              // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidEnemy_ReturnValue;                 // 0x0294(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_295[0x3];                                      // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_MakeStruct_M1AbilityEvent;                  // 0x0298(0x0040)()
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_2;              // 0x02D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        K2Node_MakeStruct_M1AbilityEvent_1;                // 0x02E0(0x0040)()
	struct FM1ScaledInteger                       CallFunc_GetStatValue_StatValue;                   // 0x0320(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStatValue_ReturnValue;                 // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329[0x3];                                      // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_ScaledIntToFloat_ReturnValue;        // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryCommitCooltime_ReturnValue;            // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_332[0x6];                                      // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_MakeStruct_M1AbilityEvent_2;                // 0x0338(0x0040)()
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_379[0x7];                                      // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBunnyBeamLevelData                    K2Node_MakeStruct_BunnyBeamLevelData;              // 0x0380(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBunnyBeamLevelData                    K2Node_MakeStruct_BunnyBeamLevelData_1;            // 0x0398(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBunnyBeamLevelData                    K2Node_MakeStruct_BunnyBeamLevelData_2;            // 0x03B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_3;              // 0x03C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AM1Player*                              K2Node_DynamicCast_AsM1Player;                     // 0x03D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D9[0x7];                                      // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x03E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_Bunny_Active04.Skill_Bunny_Active04_C.BP_OnDeactivated
// 0x0001 (0x0001 - 0x0000)
struct Skill_Bunny_Active04_C_BP_OnDeactivated final
{
public:
	bool                                          bCancelled;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skill_Bunny_Active04.Skill_Bunny_Active04_C.GetBeamLevelData
// 0x0060 (0x0060 - 0x0000)
struct Skill_Bunny_Active04_C_GetBeamLevelData final
{
public:
	int32                                         BeamLevel;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBunnyBeamLevelData                    BeamLevelData;                                     // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bValid;                                            // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBunnyBeamLevelData                    Temp_struct_Variable;                              // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBunnyBeamLevelData                    K2Node_Select_Default;                             // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

