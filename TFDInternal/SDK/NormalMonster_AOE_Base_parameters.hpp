#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NormalMonster_AOE_Base

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.SpawnPreActivateFX
// 0x0040 (0x0040 - 0x0000)
struct NormalMonster_AOE_Base_C_SpawnPreActivateFX final
{
public:
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0000(0x0030)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>              CallFunc_SpawnFXsForAbility_ReturnValue;           // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
};

// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.SpawnPersistantAOEFx
// 0x0040 (0x0040 - 0x0000)
struct NormalMonster_AOE_Base_C_SpawnPersistantAOEFx final
{
public:
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0000(0x0030)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>              CallFunc_SpawnFXsForAbility_ReturnValue;           // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
};

// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.SpawnHitFX
// 0x00E0 (0x00E0 - 0x0000)
struct NormalMonster_AOE_Base_C_SpawnHitFX final
{
public:
	TArray<class AActor*>                         Actor_Transform;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0030(0x0030)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88[0x8];                                       // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0030)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNiagaraComponent*>              CallFunc_SpawnFXsForAbility_ReturnValue;           // 0x00C8(0x0010)(ReferenceParm, ContainsInstancedReference)
};

// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.SpawnExplosionFX
// 0x0040 (0x0040 - 0x0000)
struct NormalMonster_AOE_Base_C_SpawnExplosionFX final
{
public:
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0000(0x0030)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>              CallFunc_SpawnFXsForAbility_ReturnValue;           // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
};

// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.SpawnDecalFX
// 0x00A0 (0x00A0 - 0x0000)
struct NormalMonster_AOE_Base_C_SpawnDecalFX final
{
public:
	class FName                                   FName;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Duration;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Size;                                              // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Height;                                            // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0030)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FM1FXScalarParam>               CallFunc_MakeDecalParams_ReturnParams;             // 0x0050(0x0010)(ReferenceParm)
	struct FM1FXParam                             K2Node_MakeStruct_M1FXParam;                       // 0x0060(0x0030)()
	TArray<class UNiagaraComponent*>              CallFunc_SpawnFXsForAbility_ReturnValue;           // 0x0090(0x0010)(ReferenceParm, ContainsInstancedReference)
};

// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.NetMultiSpawnHitFX
// 0x0010 (0x0010 - 0x0000)
struct NormalMonster_AOE_Base_C_NetMultiSpawnHitFX final
{
public:
	TArray<class AActor*>                         Overalpping_Actors;                                // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.InitalizeCollision
// 0x0018 (0x0018 - 0x0000)
struct NormalMonster_AOE_Base_C_InitalizeCollision final
{
public:
	class UM1CylinderComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UShapeComponent*                        CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.FindExplosionOverlapTargets
// 0x0038 (0x0038 - 0x0000)
struct NormalMonster_AOE_Base_C_FindExplosionOverlapTargets final
{
public:
	TArray<class AActor*>                         NewParam;                                          // 0x0000(0x0010)(Parm, OutParm)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActorsNoFilter_ReturnValue; // 0x0018(0x0010)(ReferenceParm)
	TArray<class AActor*>                         CallFunc_FilterActorByRelations_ReturnValue;       // 0x0028(0x0010)(ReferenceParm)
};

// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.ExecuteUbergraph_NormalMonster_AOE_Base
// 0x00B8 (0x00B8 - 0x0000)
struct NormalMonster_AOE_Base_C_ExecuteUbergraph_NormalMonster_AOE_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_CustomEvent_Overalpping_Actors;             // 0x0008(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B[0x1];                                       // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F[0x1];                                       // 0x004F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_3;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_4;          // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73[0x5];                                       // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetCollisionOverlappingActors_OverlappingActors; // 0x0078(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;  // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetLifeSpan_InLifespan_ImplicitCast;      // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast_1;            // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.ExecuteIntervalHit
// 0x0088 (0x0088 - 0x0000)
struct NormalMonster_AOE_Base_C_ExecuteIntervalHit final
{
public:
	class AActor*                                 OverlappingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FM1TaggedAbilityParamData>      Temp_struct_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	class UM1StatusEffectComponent*               CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           Temp_name_Variable;                                // 0x0020(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityContextHandle                CallFunc_BP_MakeForwardingContext_ReturnValue;     // 0x0038(0x0010)()
	TArray<struct FM1AbilityId>                   CallFunc_InvokeAllStatusEffectToTargetByTag_ReturnValue; // 0x0048(0x0010)(ReferenceParm)
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x0060(0x0020)()
	bool                                          CallFunc_IsActiveStatusEffectIdTag_ReturnValue;    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NormalMonster_AOE_Base.NormalMonster_AOE_Base_C.ApplyExplosion
// 0x0088 (0x0088 - 0x0000)
struct NormalMonster_AOE_Base_C_ApplyExplosion final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           Temp_name_Variable;                                // 0x0008(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FM1TaggedAbilityParamData>      Temp_struct_Variable;                              // 0x0020(0x0010)(ConstParm, ReferenceParm)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityContextHandle                CallFunc_BP_MakeForwardingContext_ReturnValue;     // 0x0038(0x0010)()
	TArray<class AActor*>                         CallFunc_FindExplosionOverlapTargets_NewParam;     // 0x0048(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FM1AbilityId>                   CallFunc_InvokeAllStatusEffectToTargetByTag_ReturnValue; // 0x0070(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValidEnemy_ReturnValue;                 // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
