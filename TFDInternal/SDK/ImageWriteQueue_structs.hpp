#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImageWriteQueue

#include "Basic.hpp"


namespace SDK
{

// Enum ImageWriteQueue.EDesiredImageFormat
// NumValues: 0x0005
enum class EDesiredImageFormat : uint8
{
	PNG                                      = 0,
	JPG                                      = 1,
	BMP                                      = 2,
	EXR                                      = 3,
	EDesiredImageFormat_MAX                  = 4,
};

// ScriptStruct ImageWriteQueue.ImageWriteOptions
// 0x0060 (0x0060 - 0x0000)
struct alignas(0x10) FImageWriteOptions final
{
public:
	EDesiredImageFormat                           Format;                                            // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bSuccess)>                OnComplete;                                        // 0x0004(0x0010)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CompressionQuality;                                // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverwriteFile;                                    // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAsync;                                            // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A[0x46];                                      // 0x001A(0x0046)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

