#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RocketLauncherHitArea

#include "Basic.hpp"

#include "NormalMonster_AOE_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RocketLauncherHitArea.RocketLauncherHitArea_C
// 0x0008 (0x0800 - 0x07F8)
class ARocketLauncherHitArea_C final : public ANormalMonster_AOE_Base_C
{
public:
	class USphereComponent*                       Sphere;                                            // 0x07F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RocketLauncherHitArea_C">();
	}
	static class ARocketLauncherHitArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARocketLauncherHitArea_C>();
	}
};

}

