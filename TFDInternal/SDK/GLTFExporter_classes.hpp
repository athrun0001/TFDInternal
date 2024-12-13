#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GLTFExporter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GLTFExporter_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class GLTFExporter.GLTFExportOptions
// 0x0078 (0x00A0 - 0x0028)
class UGLTFExportOptions final : public UObject
{
public:
	float                                         ExportUniformScale;                                // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportPreviewMesh;                                // 0x002C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSkipNearDefaultValues;                            // 0x002D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportProxyMaterials;                             // 0x002E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportUnlitMaterials;                             // 0x002F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportClearCoatMaterials;                         // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGLTFMaterialBakeMode                         BakeMaterialInputs;                                // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGLTFMaterialBakeSizePOT                      DefaultMaterialBakeSize;                           // 0x0032(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureFilter                                DefaultMaterialBakeFilter;                         // 0x0033(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               DefaultMaterialBakeTiling;                         // 0x0034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                          // 0x0038(0x0050)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	int32                                         DefaultLevelOfDetail;                              // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportVertexColors;                               // 0x008C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportVertexSkinWeights;                          // 0x008D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseMeshQuantization;                              // 0x008E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportLevelSequences;                             // 0x008F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportAnimationSequences;                         // 0x0090(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGLTFTextureImageFormat                       TextureImageFormat;                                // 0x0091(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_92[0x2];                                       // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextureImageQuality;                               // 0x0094(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportTextureTransforms;                          // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAdjustNormalmaps;                                 // 0x0099(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportHiddenInGame;                               // 0x009A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportLights;                                     // 0x009B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportCameras;                                    // 0x009C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGLTFMaterialVariantMode                      ExportMaterialVariants;                            // 0x009D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9E[0x2];                                       // 0x009E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ResetToDefault();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFExportOptions">();
	}
	static class UGLTFExportOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFExportOptions>();
	}
};

// Class GLTFExporter.GLTFExporter
// 0x0000 (0x0078 - 0x0078)
class UGLTFExporter : public UExporter
{
public:
	static bool ExportToGLTF(class UObject* Object, const class FString& FilePath, const class UGLTFExportOptions* Options, const TSet<class AActor*>& SelectedActors, struct FGLTFExportMessages* OutMessages);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFExporter">();
	}
	static class UGLTFExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFExporter>();
	}
};

// Class GLTFExporter.GLTFMaterialExporter
// 0x0000 (0x0078 - 0x0078)
class UGLTFMaterialExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFMaterialExporter">();
	}
	static class UGLTFMaterialExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFMaterialExporter>();
	}
};

// Class GLTFExporter.GLTFAnimSequenceExporter
// 0x0000 (0x0078 - 0x0078)
class UGLTFAnimSequenceExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFAnimSequenceExporter">();
	}
	static class UGLTFAnimSequenceExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFAnimSequenceExporter>();
	}
};

// Class GLTFExporter.GLTFLevelExporter
// 0x0000 (0x0078 - 0x0078)
class UGLTFLevelExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFLevelExporter">();
	}
	static class UGLTFLevelExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFLevelExporter>();
	}
};

// Class GLTFExporter.GLTFLevelVariantSetsExporter
// 0x0000 (0x0078 - 0x0078)
class UGLTFLevelVariantSetsExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFLevelVariantSetsExporter">();
	}
	static class UGLTFLevelVariantSetsExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFLevelVariantSetsExporter>();
	}
};

// Class GLTFExporter.GLTFLevelSequenceExporter
// 0x0000 (0x0078 - 0x0078)
class UGLTFLevelSequenceExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFLevelSequenceExporter">();
	}
	static class UGLTFLevelSequenceExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFLevelSequenceExporter>();
	}
};

// Class GLTFExporter.GLTFSkeletalMeshExporter
// 0x0000 (0x0078 - 0x0078)
class UGLTFSkeletalMeshExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFSkeletalMeshExporter">();
	}
	static class UGLTFSkeletalMeshExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFSkeletalMeshExporter>();
	}
};

// Class GLTFExporter.GLTFStaticMeshExporter
// 0x0000 (0x0078 - 0x0078)
class UGLTFStaticMeshExporter final : public UGLTFExporter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFStaticMeshExporter">();
	}
	static class UGLTFStaticMeshExporter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFStaticMeshExporter>();
	}
};

// Class GLTFExporter.GLTFProxyOptions
// 0x0058 (0x0080 - 0x0028)
class UGLTFProxyOptions final : public UObject
{
public:
	bool                                          bBakeMaterialInputs;                               // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGLTFMaterialBakeSizePOT                      DefaultMaterialBakeSize;                           // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureFilter                                DefaultMaterialBakeFilter;                         // 0x002A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               DefaultMaterialBakeTiling;                         // 0x002B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                          // 0x0030(0x0050)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)

public:
	void ResetToDefault();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFProxyOptions">();
	}
	static class UGLTFProxyOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFProxyOptions>();
	}
};

// Class GLTFExporter.GLTFMaterialExportOptions
// 0x0060 (0x0088 - 0x0028)
class UGLTFMaterialExportOptions final : public UAssetUserData
{
public:
	class UMaterialInterface*                     Proxy;                                             // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGLTFOverrideMaterialBakeSettings      Default;                                           // 0x0030(0x0006)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> Inputs;                                            // 0x0038(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GLTFMaterialExportOptions">();
	}
	static class UGLTFMaterialExportOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGLTFMaterialExportOptions>();
	}
};

}

