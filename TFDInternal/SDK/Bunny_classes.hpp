#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bunny

#include "Basic.hpp"

#include "PlayerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Bunny.Bunny_C
// 0x0010 (0x1230 - 0x1220)
class ABunny_C final : public APlayerBase_C
{
public:
	class UM1PlayerBeamComponent*                 M1PlayerBeam_Lv3;                                  // 0x1218(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1PlayerBeamComponent*                 M1PlayerBeam_Lv2;                                  // 0x1220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1PlayerBeamComponent*                 M1PlayerBeam_Lv1;                                  // 0x1228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Bunny_C">();
	}
	static class ABunny_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABunny_C>();
	}
};

}
