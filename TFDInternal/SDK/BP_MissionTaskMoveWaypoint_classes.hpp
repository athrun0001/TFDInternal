#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTaskMoveWaypoint

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionTaskMoveWaypoint.BP_MissionTaskMoveWaypoint_C
// 0x0008 (0x0268 - 0x0260)
class ABP_MissionTaskMoveWaypoint_C final : public AM1MissionTaskMoveWayPoint
{
public:
	class UBillboardComponent*                    Billboard;                                         // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionTaskMoveWaypoint_C">();
	}
	static class ABP_MissionTaskMoveWaypoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionTaskMoveWaypoint_C>();
	}
};

}

