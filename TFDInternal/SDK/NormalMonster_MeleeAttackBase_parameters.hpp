#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NormalMonster_MeleeAttackBase

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK::Params
{

// Function NormalMonster_MeleeAttackBase.NormalMonster_MeleeAttackBase_C.OnEventReceived_A19958C04C8AB1CE32CDBF9C7D4EC151
// 0x0040 (0x0040 - 0x0000)
struct NormalMonster_MeleeAttackBase_C_OnEventReceived_A19958C04C8AB1CE32CDBF9C7D4EC151 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function NormalMonster_MeleeAttackBase.NormalMonster_MeleeAttackBase_C.OnEventReceived_246FDEEB41893BBA6D12779DDF33B01E
// 0x0040 (0x0040 - 0x0000)
struct NormalMonster_MeleeAttackBase_C_OnEventReceived_246FDEEB41893BBA6D12779DDF33B01E final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function NormalMonster_MeleeAttackBase.NormalMonster_MeleeAttackBase_C.OnCompleted_A19958C04C8AB1CE32CDBF9C7D4EC151
// 0x0040 (0x0040 - 0x0000)
struct NormalMonster_MeleeAttackBase_C_OnCompleted_A19958C04C8AB1CE32CDBF9C7D4EC151 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function NormalMonster_MeleeAttackBase.NormalMonster_MeleeAttackBase_C.OnCompleted_246FDEEB41893BBA6D12779DDF33B01E
// 0x0040 (0x0040 - 0x0000)
struct NormalMonster_MeleeAttackBase_C_OnCompleted_246FDEEB41893BBA6D12779DDF33B01E final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function NormalMonster_MeleeAttackBase.NormalMonster_MeleeAttackBase_C.OnBlendOut_246FDEEB41893BBA6D12779DDF33B01E
// 0x0040 (0x0040 - 0x0000)
struct NormalMonster_MeleeAttackBase_C_OnBlendOut_246FDEEB41893BBA6D12779DDF33B01E final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function NormalMonster_MeleeAttackBase.NormalMonster_MeleeAttackBase_C.ExecuteUbergraph_NormalMonster_MeleeAttackBase
// 0x02A0 (0x02A0 - 0x0000)
struct NormalMonster_MeleeAttackBase_C_ExecuteUbergraph_NormalMonster_MeleeAttackBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_4;                        // 0x0008(0x0040)(ConstParm)
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_3;                        // 0x0048(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate;              // 0x0088(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        Temp_struct_Variable;                              // 0x0098(0x0040)()
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00D8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_2;                        // 0x00E8(0x0040)(ConstParm)
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_1;                        // 0x0128(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0168(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event;                          // 0x0178(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x01B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        Temp_struct_Variable_1;                            // 0x01C8(0x0040)()
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_5;                        // 0x0208(0x0040)(ConstParm)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UM1AbilityTask_PlayMontageAndWait*      CallFunc_PlayMontageAndWaitForEvent_ReturnValue;   // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x025A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryCommitCooltime_ReturnValue;            // 0x025B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25C[0x4];                                      // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_1;              // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0268(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0278(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UM1AbilityTask_PlayMontageAndWait*      CallFunc_PlayLoopCountMontageAndWaitForEvent_ReturnValue; // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NormalMonster_MeleeAttackBase.NormalMonster_MeleeAttackBase_C.CheckOverlapHitDetection
// 0x0010 (0x0010 - 0x0000)
struct NormalMonster_MeleeAttackBase_C_CheckOverlapHitDetection final
{
public:
	TArray<class AActor*>                         HitActors;                                         // 0x0000(0x0010)(Parm, OutParm)
};

// Function NormalMonster_MeleeAttackBase.NormalMonster_MeleeAttackBase_C.ApplyHit
// 0x0010 (0x0010 - 0x0000)
struct NormalMonster_MeleeAttackBase_C_ApplyHit final
{
public:
	TArray<class AActor*>                         CallFunc_CheckOverlapHitDetection_HitActors;       // 0x0000(0x0010)(ReferenceParm)
};

// Function NormalMonster_MeleeAttackBase.NormalMonster_MeleeAttackBase_C.OnBlendOut_A19958C04C8AB1CE32CDBF9C7D4EC151
// 0x0040 (0x0040 - 0x0000)
struct NormalMonster_MeleeAttackBase_C_OnBlendOut_A19958C04C8AB1CE32CDBF9C7D4EC151 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

