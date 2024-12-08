#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryFramework

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "GeometryFramework_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class GeometryFramework.MeshCommandChangeTarget
// 0x0000 (0x0028 - 0x0028)
class IMeshCommandChangeTarget final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCommandChangeTarget">();
	}
	static class IMeshCommandChangeTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMeshCommandChangeTarget>();
	}
};

// Class GeometryFramework.MeshReplacementCommandChangeTarget
// 0x0000 (0x0028 - 0x0028)
class IMeshReplacementCommandChangeTarget final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshReplacementCommandChangeTarget">();
	}
	static class IMeshReplacementCommandChangeTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMeshReplacementCommandChangeTarget>();
	}
};

// Class GeometryFramework.MeshVertexCommandChangeTarget
// 0x0000 (0x0028 - 0x0028)
class IMeshVertexCommandChangeTarget final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshVertexCommandChangeTarget">();
	}
	static class IMeshVertexCommandChangeTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMeshVertexCommandChangeTarget>();
	}
};

// Class GeometryFramework.BaseDynamicMeshComponent
// 0x0060 (0x0510 - 0x04B0)
class UBaseDynamicMeshComponent : public UMeshComponent
{
public:
	uint8                                         Pad_4A8[0x20];                                     // 0x04A8(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bExplicitShowWireframe;                            // 0x04C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C9[0x3];                                      // 0x04C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           WireframeColor;                                    // 0x04CC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDynamicMeshComponentColorOverrideMode        ColorMode;                                         // 0x04DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4DD[0x3];                                      // 0x04DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 ConstantColor;                                     // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableFlatShading;                                // 0x04E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableViewModeOverrides;                          // 0x04E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E6[0x2];                                      // 0x04E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     OverrideRenderMaterial;                            // 0x04E8(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                     SecondaryRenderMaterial;                           // 0x04F0(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4F8[0x1];                                      // 0x04F8(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bEnableRayTracing;                                 // 0x04F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4FA[0x6];                                      // 0x04FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             BaseMaterials;                                     // 0x0500(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	void ClearOverrideRenderMaterial();
	void ClearSecondaryRenderMaterial();
	class UDynamicMesh* GetDynamicMesh();
	void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode);
	void SetConstantOverrideColor(const struct FColor& NewColor);
	void SetEnableFlatShading(bool bEnable);
	void SetEnableRaytracing(bool bSetEnabled);
	void SetEnableWireframeRenderPass(bool bEnable);
	void SetOverrideRenderMaterial(class UMaterialInterface* Material);
	void SetSecondaryBuffersVisibility(bool bSetVisible);
	void SetSecondaryRenderMaterial(class UMaterialInterface* Material);
	void SetShadowsEnabled(bool bEnabled);
	void SetViewModeOverridesEnabled(bool bEnabled);

	EDynamicMeshComponentColorOverrideMode GetColorOverrideMode() const;
	struct FColor GetConstantOverrideColor() const;
	bool GetEnableRaytracing() const;
	bool GetEnableWireframeRenderPass() const;
	bool GetFlatShadingEnabled() const;
	class UMaterialInterface* GetOverrideRenderMaterial(int32 MaterialIndex) const;
	bool GetSecondaryBuffersVisibility() const;
	class UMaterialInterface* GetSecondaryRenderMaterial() const;
	bool GetShadowsEnabled() const;
	bool GetViewModeOverridesEnabled() const;
	bool HasOverrideRenderMaterial(int32 K) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BaseDynamicMeshComponent">();
	}
	static class UBaseDynamicMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBaseDynamicMeshComponent>();
	}
};

// Class GeometryFramework.DynamicMeshComponent
// 0x0210 (0x0720 - 0x0510)
class UDynamicMeshComponent final : public UBaseDynamicMeshComponent
{
public:
	uint8                                         Pad_510[0x8];                                      // 0x0510(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UDynamicMesh*                           MeshObject;                                        // 0x0518(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_520[0xF0];                                     // 0x0520(0x00F0)(Fixing Size After Last Property [ Dumper-7 ])
	EDynamicMeshComponentTangentsMode             TangentsType;                                      // 0x0610(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_611[0x3F];                                     // 0x0611(0x003F)(Fixing Size After Last Property [ Dumper-7 ])
	ECollisionTraceFlag                           CollisionType;                                     // 0x0650(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseAsyncCooking;                                  // 0x0651(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableComplexCollision;                           // 0x0652(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDeferCollisionUpdates;                            // 0x0653(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_654[0x4];                                      // 0x0654(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBodySetup*                             MeshBodySetup;                                     // 0x0658(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_660[0x38];                                     // 0x0660(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKAggregateGeom                        AggGeom;                                           // 0x0698(0x0070)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<class UBodySetup*>                     AsyncBodySetupQueue;                               // 0x0708(0x0010)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_718[0x8];                                      // 0x0718(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ConfigureMaterialSet(const TArray<class UMaterialInterface*>& NewMaterialSet);
	void EnableComplexAsSimpleCollision();
	void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);
	void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);
	void SetDynamicMesh(class UDynamicMesh* NewMesh);
	void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType);
	void UpdateCollision(bool bOnlyIfPending);
	bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);

	EDynamicMeshComponentTangentsMode GetTangentsType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicMeshComponent">();
	}
	static class UDynamicMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicMeshComponent>();
	}
};

// Class GeometryFramework.DynamicMeshActor
// 0x0018 (0x0260 - 0x0248)
class ADynamicMeshActor final : public AActor
{
public:
	class UDynamicMeshComponent*                  DynamicMeshComponent;                              // 0x0248(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bEnableComputeMeshPool;                            // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDynamicMeshPool*                       DynamicMeshPool;                                   // 0x0258(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	class UDynamicMesh* AllocateComputeMesh();
	void FreeAllComputeMeshes();
	class UDynamicMeshPool* GetComputeMeshPool();
	void ReleaseAllComputeMeshes();
	bool ReleaseComputeMesh(class UDynamicMesh* Mesh);

	class UDynamicMeshComponent* GetDynamicMeshComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicMeshActor">();
	}
	static class ADynamicMeshActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADynamicMeshActor>();
	}
};

// Class GeometryFramework.DynamicMeshGenerator
// 0x0000 (0x0028 - 0x0028)
class UDynamicMeshGenerator final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicMeshGenerator">();
	}
	static class UDynamicMeshGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicMeshGenerator>();
	}
};

// Class GeometryFramework.DynamicMesh
// 0x0088 (0x00B0 - 0x0028)
class UDynamicMesh final : public UObject
{
public:
	uint8                                         Pad_28[0x48];                                      // 0x0028(0x0048)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             MeshModifiedBPEvent;                               // 0x0070(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_80[0x20];                                      // 0x0080(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	class UDynamicMeshGenerator*                  MeshGenerator;                                     // 0x00A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bEnableMeshGenerator;                              // 0x00A8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UDynamicMesh* Reset();
	class UDynamicMesh* ResetToCube();

	int32 GetTriangleCount() const;
	bool IsEmpty() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicMesh">();
	}
	static class UDynamicMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicMesh>();
	}
};

// Class GeometryFramework.DynamicMeshPool
// 0x0020 (0x0048 - 0x0028)
class UDynamicMeshPool final : public UObject
{
public:
	TArray<class UDynamicMesh*>                   CachedMeshes;                                      // 0x0028(0x0010)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UDynamicMesh*>                   AllCreatedMeshes;                                  // 0x0038(0x0010)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

public:
	void FreeAllMeshes();
	class UDynamicMesh* RequestMesh();
	void ReturnAllMeshes();
	void ReturnMesh(class UDynamicMesh* Mesh);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicMeshPool">();
	}
	static class UDynamicMeshPool* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicMeshPool>();
	}
};

}

