#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingSystemRuntimeNv

#include "Basic.hpp"

#include "ClothingSystemRuntimeInterface_classes.hpp"
#include "ClothingSystemRuntimeNv_structs.hpp"
#include "ClothingSystemRuntimeCommon_structs.hpp"
#include "ClothingSystemRuntimeCommon_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class ClothingSystemRuntimeNv.ClothConfigNv
// 0x0118 (0x0140 - 0x0028)
class UClothConfigNv final : public UClothConfigCommon
{
public:
	EClothingWindMethodNv                         ClothingWindMethod;                                // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FClothConstraintSetupNv                VerticalConstraint;                                // 0x002C(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetupNv                HorizontalConstraint;                              // 0x003C(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetupNv                BendConstraint;                                    // 0x004C(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetupNv                ShearConstraint;                                   // 0x005C(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         SelfCollisionRadius;                               // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SelfCollisionStiffness;                            // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SelfCollisionCullScale;                            // 0x0074(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Damping;                                           // 0x0078(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Friction;                                          // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WindDragCoefficient;                               // 0x0088(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WindLiftCoefficient;                               // 0x008C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LinearDrag;                                        // 0x0090(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularDrag;                                       // 0x009C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LinearInertiaScale;                                // 0x00A8(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AngularInertiaScale;                               // 0x00B4(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                CentrifugalInertiaScale;                           // 0x00C0(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SolverFrequency;                                   // 0x00CC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StiffnessFrequency;                                // 0x00D0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GravityScale;                                      // 0x00D4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                GravityOverride;                                   // 0x00D8(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseGravityOverride;                               // 0x00E4(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E5[0x3];                                       // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TetherStiffness;                                   // 0x00E8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TetherLimit;                                       // 0x00EC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CollisionThickness;                                // 0x00F0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimDriveSpringStiffness;                          // 0x00F4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimDriveDamperStiffness;                          // 0x00F8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EClothingWindMethod_Legacy                    WindMethod;                                        // 0x00FC(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FClothConstraintSetup_Legacy           VerticalConstraintConfig;                          // 0x0100(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy           HorizontalConstraintConfig;                        // 0x0110(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy           BendConstraintConfig;                              // 0x0120(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy           ShearConstraintConfig;                             // 0x0130(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothConfigNv">();
	}
	static class UClothConfigNv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothConfigNv>();
	}
};

// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// 0x0000 (0x0028 - 0x0028)
class UClothingSimulationFactoryNv final : public UClothingSimulationFactory
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationFactoryNv">();
	}
	static class UClothingSimulationFactoryNv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationFactoryNv>();
	}
};

// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// 0x0018 (0x00A8 - 0x0090)
class UClothingSimulationInteractorNv final : public UClothingSimulationInteractor
{
public:
	uint8                                         Pad_90[0x18];                                      // 0x0090(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetAnimDriveDamperStiffness(float InStiffness);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationInteractorNv">();
	}
	static class UClothingSimulationInteractorNv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationInteractorNv>();
	}
};

// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// 0x0040 (0x0120 - 0x00E0)
class UClothPhysicalMeshDataNv_Legacy final : public UClothPhysicalMeshDataBase_Legacy
{
public:
	TArray<float>                                 MaxDistances;                                      // 0x00E0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 BackstopDistances;                                 // 0x00F0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 BackstopRadiuses;                                  // 0x0100(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 AnimDriveMultipliers;                              // 0x0110(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothPhysicalMeshDataNv_Legacy">();
	}
	static class UClothPhysicalMeshDataNv_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothPhysicalMeshDataNv_Legacy>();
	}
};

}

