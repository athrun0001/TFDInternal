#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_019_Transportstorage

#include "Basic.hpp"


namespace SDK::Params
{

// Function NPC_019_Transportstorage.NPC_019_Transportstorage_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct NPC_019_Transportstorage_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NPC_019_Transportstorage.NPC_019_Transportstorage_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct NPC_019_Transportstorage_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function NPC_019_Transportstorage.NPC_019_Transportstorage_C.ExecuteUbergraph_NPC_019_Transportstorage
// 0x0010 (0x0010 - 0x0000)
struct NPC_019_Transportstorage_C_ExecuteUbergraph_NPC_019_Transportstorage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

