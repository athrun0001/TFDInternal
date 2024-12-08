#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Renderer

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class Renderer.SparseVolumeTextureViewerComponent
// 0x0030 (0x04A0 - 0x0470)
class USparseVolumeTextureViewerComponent final : public UPrimitiveComponent
{
public:
	class USparseVolumeTexture*                   SparseVolumeTexturePreview;                        // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAnimate : 1;                                      // 0x0478(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_479[0x3];                                      // 0x0479(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AnimationFrame;                                    // 0x047C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrameRate;                                         // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimationTime;                                     // 0x0484(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ComponentToVisualize;                              // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_48C[0x14];                                     // 0x048C(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SparseVolumeTextureViewerComponent">();
	}
	static class USparseVolumeTextureViewerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USparseVolumeTextureViewerComponent>();
	}
};

// Class Renderer.SparseVolumeTextureViewer
// 0x0008 (0x0250 - 0x0248)
class ASparseVolumeTextureViewer final : public AInfo
{
public:
	class USparseVolumeTextureViewerComponent*    SparseVolumeTextureViewerComponent;                // 0x0248(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SparseVolumeTextureViewer">();
	}
	static class ASparseVolumeTextureViewer* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASparseVolumeTextureViewer>();
	}
};

}

