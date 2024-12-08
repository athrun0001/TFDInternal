#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterPreviewStageInventory

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CinematicCamera_structs.hpp"


namespace SDK::Params
{

// Function BP_CharacterPreviewStageInventory.BP_CharacterPreviewStageInventory_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_CharacterPreviewStageInventory_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterPreviewStageInventory.BP_CharacterPreviewStageInventory_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_CharacterPreviewStageInventory_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterPreviewStageInventory.BP_CharacterPreviewStageInventory_C.ExecuteUbergraph_BP_CharacterPreviewStageInventory
// 0x00D8 (0x00D8 - 0x0000)
struct BP_CharacterPreviewStageInventory_C_ExecuteUbergraph_BP_CharacterPreviewStageInventory final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class AActor>                  CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0008(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	struct FCameraTrackingFocusSettings           K2Node_MakeStruct_CameraTrackingFocusSettings;     // 0x0038(0x0040)()
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCameraFocusSettings                   K2Node_MakeStruct_CameraFocusSettings;             // 0x0080(0x0058)()
};

// Function BP_CharacterPreviewStageInventory.BP_CharacterPreviewStageInventory_C.GetViewTargets
// 0x0020 (0x0020 - 0x0000)
struct BP_CharacterPreviewStageInventory_C_GetViewTargets final
{
public:
	TArray<class AActor*>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
};

// Function BP_CharacterPreviewStageInventory.BP_CharacterPreviewStageInventory_C.BP_GetCameraComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_CharacterPreviewStageInventory_C_BP_GetCameraComponent final
{
public:
	class UCineCameraComponent*                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}

