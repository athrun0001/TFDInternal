#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieSceneCapture

#include "Basic.hpp"

#include "MovieSceneCapture_structs.hpp"


namespace SDK::Params
{

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneCaptureProtocolBase_GetState final
{
public:
	EMovieSceneCaptureProtocolState               ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneCaptureProtocolBase_IsCapturing final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneCapture_GetAudioCaptureProtocol final
{
public:
	class UMovieSceneCaptureProtocolBase*         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneCapture_GetImageCaptureProtocol final
{
public:
	class UMovieSceneCaptureProtocolBase*         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneCapture_SetAudioCaptureProtocolType final
{
public:
	TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneCapture_SetImageCaptureProtocolType final
{
public:
	TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneCaptureEnvironment_FindAudioCaptureProtocol final
{
public:
	class UMovieSceneAudioCaptureProtocolBase*    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneCaptureEnvironment_FindImageCaptureProtocol final
{
public:
	class UMovieSceneImageCaptureProtocolBase*    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneCaptureEnvironment_GetCaptureElapsedTime final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneCaptureEnvironment_GetCaptureFrameNumber final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneCaptureEnvironment_IsCaptureInProgress final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
// 0x0070 (0x0070 - 0x0000)
struct UserDefinedCaptureProtocol_OnPixelsReceived final
{
public:
	struct FCapturedPixels                        Pixels;                                            // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FCapturedPixelsID                      ID;                                                // 0x0010(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFrameMetrics                          FrameMetrics;                                      // 0x0060(0x0010)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
// 0x0001 (0x0001 - 0x0000)
struct UserDefinedCaptureProtocol_OnSetup final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
// 0x0058 (0x0058 - 0x0000)
struct UserDefinedCaptureProtocol_ResolveBuffer final
{
public:
	class UTexture*                               Buffer;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCapturedPixelsID                      BufferID;                                          // 0x0008(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
// 0x0050 (0x0050 - 0x0000)
struct UserDefinedCaptureProtocol_StartCapturingFinalPixels final
{
public:
	struct FCapturedPixelsID                      StreamID;                                          // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
// 0x0020 (0x0020 - 0x0000)
struct UserDefinedCaptureProtocol_GenerateFilename final
{
public:
	struct FFrameMetrics                          InFrameMetrics;                                    // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
// 0x0010 (0x0010 - 0x0000)
struct UserDefinedCaptureProtocol_GetCurrentFrameMetrics final
{
public:
	struct FFrameMetrics                          ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
// 0x0001 (0x0001 - 0x0000)
struct UserDefinedCaptureProtocol_OnCanFinalize final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
// 0x0068 (0x0068 - 0x0000)
struct UserDefinedImageCaptureProtocol_GenerateFilenameForBuffer final
{
public:
	class UTexture*                               Buffer;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCapturedPixelsID                      StreamID;                                          // 0x0008(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0058(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
// 0x0010 (0x0010 - 0x0000)
struct UserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
// 0x0078 (0x0078 - 0x0000)
struct UserDefinedImageCaptureProtocol_WriteImageToDisk final
{
public:
	struct FCapturedPixels                        PixelData;                                         // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FCapturedPixelsID                      StreamID;                                          // 0x0010(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFrameMetrics                          FrameMetrics;                                      // 0x0060(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bCopyImageData;                                    // 0x0070(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

