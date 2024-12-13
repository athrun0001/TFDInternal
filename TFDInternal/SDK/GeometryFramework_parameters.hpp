#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryFramework

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GeometryFramework_structs.hpp"


namespace SDK::Params
{

// Function GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh
// 0x0008 (0x0008 - 0x0000)
struct BaseDynamicMeshComponent_GetDynamicMesh final
{
public:
	class UDynamicMesh*                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode
// 0x0001 (0x0001 - 0x0000)
struct BaseDynamicMeshComponent_SetColorOverrideMode final
{
public:
	EDynamicMeshComponentColorOverrideMode        NewMode;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor
// 0x0004 (0x0004 - 0x0000)
struct BaseDynamicMeshComponent_SetConstantOverrideColor final
{
public:
	struct FColor                                 NewColor;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading
// 0x0001 (0x0001 - 0x0000)
struct BaseDynamicMeshComponent_SetEnableFlatShading final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing
// 0x0001 (0x0001 - 0x0000)
struct BaseDynamicMeshComponent_SetEnableRaytracing final
{
public:
	bool                                          bSetEnabled;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass
// 0x0001 (0x0001 - 0x0000)
struct BaseDynamicMeshComponent_SetEnableWireframeRenderPass final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial
// 0x0008 (0x0008 - 0x0000)
struct BaseDynamicMeshComponent_SetOverrideRenderMaterial final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility
// 0x0001 (0x0001 - 0x0000)
struct BaseDynamicMeshComponent_SetSecondaryBuffersVisibility final
{
public:
	bool                                          bSetVisible;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial
// 0x0008 (0x0008 - 0x0000)
struct BaseDynamicMeshComponent_SetSecondaryRenderMaterial final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled
// 0x0001 (0x0001 - 0x0000)
struct BaseDynamicMeshComponent_SetShadowsEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled
// 0x0001 (0x0001 - 0x0000)
struct BaseDynamicMeshComponent_SetViewModeOverridesEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode
// 0x0001 (0x0001 - 0x0000)
struct BaseDynamicMeshComponent_GetColorOverrideMode final
{
public:
	EDynamicMeshComponentColorOverrideMode        ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor
// 0x0004 (0x0004 - 0x0000)
struct BaseDynamicMeshComponent_GetConstantOverrideColor final
{
public:
	struct FColor                                 ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing
// 0x0001 (0x0001 - 0x0000)
struct BaseDynamicMeshComponent_GetEnableRaytracing final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass
// 0x0001 (0x0001 - 0x0000)
struct BaseDynamicMeshComponent_GetEnableWireframeRenderPass final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled
// 0x0001 (0x0001 - 0x0000)
struct BaseDynamicMeshComponent_GetFlatShadingEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial
// 0x0010 (0x0010 - 0x0000)
struct BaseDynamicMeshComponent_GetOverrideRenderMaterial final
{
public:
	int32                                         MaterialIndex;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility
// 0x0001 (0x0001 - 0x0000)
struct BaseDynamicMeshComponent_GetSecondaryBuffersVisibility final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial
// 0x0008 (0x0008 - 0x0000)
struct BaseDynamicMeshComponent_GetSecondaryRenderMaterial final
{
public:
	class UMaterialInterface*                     ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled
// 0x0001 (0x0001 - 0x0000)
struct BaseDynamicMeshComponent_GetShadowsEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled
// 0x0001 (0x0001 - 0x0000)
struct BaseDynamicMeshComponent_GetViewModeOverridesEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial
// 0x0008 (0x0008 - 0x0000)
struct BaseDynamicMeshComponent_HasOverrideRenderMaterial final
{
public:
	int32                                         K;                                                 // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet
// 0x0010 (0x0010 - 0x0000)
struct DynamicMeshComponent_ConfigureMaterialSet final
{
public:
	TArray<class UMaterialInterface*>             NewMaterialSet;                                    // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled
// 0x0002 (0x0002 - 0x0000)
struct DynamicMeshComponent_SetComplexAsSimpleCollisionEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bImmediateUpdate;                                  // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled
// 0x0002 (0x0002 - 0x0000)
struct DynamicMeshComponent_SetDeferredCollisionUpdatesEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bImmediateUpdate;                                  // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMeshComponent.SetDynamicMesh
// 0x0008 (0x0008 - 0x0000)
struct DynamicMeshComponent_SetDynamicMesh final
{
public:
	class UDynamicMesh*                           NewMesh;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMeshComponent.SetTangentsType
// 0x0001 (0x0001 - 0x0000)
struct DynamicMeshComponent_SetTangentsType final
{
public:
	EDynamicMeshComponentTangentsMode             NewTangentsType;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMeshComponent.UpdateCollision
// 0x0001 (0x0001 - 0x0000)
struct DynamicMeshComponent_UpdateCollision final
{
public:
	bool                                          bOnlyIfPending;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots
// 0x0003 (0x0003 - 0x0000)
struct DynamicMeshComponent_ValidateMaterialSlots final
{
public:
	bool                                          bCreateIfMissing;                                  // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDeleteExtraSlots;                                 // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMeshComponent.GetTangentsType
// 0x0001 (0x0001 - 0x0000)
struct DynamicMeshComponent_GetTangentsType final
{
public:
	EDynamicMeshComponentTangentsMode             ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMeshActor.AllocateComputeMesh
// 0x0008 (0x0008 - 0x0000)
struct DynamicMeshActor_AllocateComputeMesh final
{
public:
	class UDynamicMesh*                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMeshActor.GetComputeMeshPool
// 0x0008 (0x0008 - 0x0000)
struct DynamicMeshActor_GetComputeMeshPool final
{
public:
	class UDynamicMeshPool*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMeshActor.ReleaseComputeMesh
// 0x0010 (0x0010 - 0x0000)
struct DynamicMeshActor_ReleaseComputeMesh final
{
public:
	class UDynamicMesh*                           Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent
// 0x0008 (0x0008 - 0x0000)
struct DynamicMeshActor_GetDynamicMeshComponent final
{
public:
	class UDynamicMeshComponent*                  ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMesh.Reset
// 0x0008 (0x0008 - 0x0000)
struct DynamicMesh_Reset final
{
public:
	class UDynamicMesh*                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMesh.ResetToCube
// 0x0008 (0x0008 - 0x0000)
struct DynamicMesh_ResetToCube final
{
public:
	class UDynamicMesh*                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMesh.GetTriangleCount
// 0x0004 (0x0004 - 0x0000)
struct DynamicMesh_GetTriangleCount final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMesh.IsEmpty
// 0x0001 (0x0001 - 0x0000)
struct DynamicMesh_IsEmpty final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMeshPool.RequestMesh
// 0x0008 (0x0008 - 0x0000)
struct DynamicMeshPool_RequestMesh final
{
public:
	class UDynamicMesh*                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryFramework.DynamicMeshPool.ReturnMesh
// 0x0008 (0x0008 - 0x0000)
struct DynamicMeshPool_ReturnMesh final
{
public:
	class UDynamicMesh*                           Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

