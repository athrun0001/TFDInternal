#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampSimple

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Actor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CampSimple.BP_CampSimple_C
// 0x0028 (0x0290 - 0x0268)
class ABP_CampSimple_C final : public AM1StaticMeshActor
{
public:
	class UM1ClientOnlySkeletalMeshComponent*     ClientOnlySkeletalMesh;                            // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionPermissionComponent_C*        BP_ActionPermissionComponent;                      // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CubeCollision1;                                    // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CubeCollision;                                     // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void SetCampState(class USkeletalMeshComponent* InMesh, bool bIsNewlyActivated);
	void PlayCampAnimation(bool bIsNewlyActivated);
	void EnableNiagaraEffect(bool bEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CampSimple_C">();
	}
	static class ABP_CampSimple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CampSimple_C>();
	}
};

}

