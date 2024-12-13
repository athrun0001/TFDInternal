#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SeasonReinforceAbility_Season_AllMoveSpeed

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_structs.hpp"


namespace SDK::Params
{

// Function SeasonReinforceAbility_Season_AllMoveSpeed.SeasonReinforceAbility_Season_AllMoveSpeed_C.Reset
// 0x0003 (0x0003 - 0x0000)
struct SeasonReinforceAbility_Season_AllMoveSpeed_C_Reset final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SeasonReinforceAbility_Season_AllMoveSpeed.SeasonReinforceAbility_Season_AllMoveSpeed_C.OnAbilityEvent_67A689F44AFB1780E58CAB95CF755A71
// 0x0040 (0x0040 - 0x0000)
struct SeasonReinforceAbility_Season_AllMoveSpeed_C_OnAbilityEvent_67A689F44AFB1780E58CAB95CF755A71 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SeasonReinforceAbility_Season_AllMoveSpeed.SeasonReinforceAbility_Season_AllMoveSpeed_C.OnAbilityDeactivated_E291E59E46B657E1F6E60EBC4D7AED77
// 0x0020 (0x0020 - 0x0000)
struct SeasonReinforceAbility_Season_AllMoveSpeed_C_OnAbilityDeactivated_E291E59E46B657E1F6E60EBC4D7AED77 final
{
public:
	struct FM1AbilityId                           InAbilityId;                                       // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	const class AActor*                           Owner;                                             // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanceled;                                         // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SeasonReinforceAbility_Season_AllMoveSpeed.SeasonReinforceAbility_Season_AllMoveSpeed_C.ExecuteUbergraph_SeasonReinforceAbility_Season_AllMoveSpeed
// 0x02A8 (0x02A8 - 0x0000)
struct SeasonReinforceAbility_Season_AllMoveSpeed_C_ExecuteUbergraph_SeasonReinforceAbility_Season_AllMoveSpeed final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event;                          // 0x0008(0x0040)(ConstParm)
	struct FM1AbilityEvent                        Temp_struct_Variable;                              // 0x0048(0x0040)()
	class UM1AbilityTask_WaitAbilityEvent*        CallFunc_WaitAbilityEventFromTargetQuery_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FM1TaggedAbilityParamData>      Temp_struct_Variable_1;                            // 0x0098(0x0010)(ConstParm, ReferenceParm)
	struct FM1AbilityEventData_DamageInfo         CallFunc_GetAbilityEventData_DamageInfo_ReturnValue; // 0x00A8(0x0148)(ContainsInstancedReference)
	TArray<class FName>                           Temp_name_Variable;                                // 0x01F0(0x0010)(ConstParm, ReferenceParm)
	struct FM1AbilityContextHandle                CallFunc_BP_MakeForwardingContext_ReturnValue;     // 0x0200(0x0010)()
	struct FM1AbilityId                           CallFunc_InvokeFirstStatusEffectToSelfByTag_ReturnValue; // 0x0210(0x0010)(HasGetValueTypeHash)
	struct FM1AbilityId                           K2Node_CustomEvent_InAbilityId;                    // 0x0220(0x0010)(ConstParm, HasGetValueTypeHash)
	const class AActor*                           K2Node_CustomEvent_Owner;                          // 0x0230(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bCanceled;                      // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239[0x3];                                      // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FM1AbilityId& InAbilityId, class AActor* Owner, bool bCanceled)> K2Node_CreateDelegate_OutputDelegate;              // 0x023C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24D[0x3];                                      // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Temp_object_Variable;                              // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityId                           Temp_struct_Variable_2;                            // 0x0258(0x0010)(HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0268(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_272[0x2];                                      // 0x0272(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0274(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckCooltime_ReturnValue;                // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0285(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryApplyCoolTime_ReturnValue;             // 0x0286(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_287[0x1];                                      // 0x0287(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AbilityTask_WaitAbilityDeactivated*  CallFunc_WaitAbilityDeactivated_ReturnValue;       // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_292[0x6];                                      // 0x0292(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_1;              // 0x0298(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

