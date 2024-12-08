#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ApexDestruction

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ApexDestruction.DestructibleComponent.ApplyDamage
// 0x0020 (0x0020 - 0x0000)
struct DestructibleComponent_ApplyDamage final
{
public:
	float                                         DamageAmount;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HitLocation;                                       // 0x0004(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ImpulseDir;                                        // 0x0010(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ImpulseStrength;                                   // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
// 0x001C (0x001C - 0x0000)
struct DestructibleComponent_ApplyRadiusDamage final
{
public:
	float                                         BaseDamage;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HurtOrigin;                                        // 0x0004(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DamageRadius;                                      // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ImpulseStrength;                                   // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFullDamage;                                       // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
// 0x0008 (0x0008 - 0x0000)
struct DestructibleComponent_GetDestructibleMesh final
{
public:
	class UDestructibleMesh*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
// 0x0008 (0x0008 - 0x0000)
struct DestructibleComponent_SetDestructibleMesh final
{
public:
	class UDestructibleMesh*                      NewMesh;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
