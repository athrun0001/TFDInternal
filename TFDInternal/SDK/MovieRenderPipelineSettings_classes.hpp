#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieRenderPipelineSettings

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "MovieRenderPipelineCore_classes.hpp"
#include "MovieRenderPipelineSettings_structs.hpp"


namespace SDK
{

// Class MovieRenderPipelineSettings.MoviePipelineBurnInWidget
// 0x0000 (0x0250 - 0x0250)
class UMoviePipelineBurnInWidget final : public UUserWidget
{
public:
	void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineBurnInWidget">();
	}
	static class UMoviePipelineBurnInWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineBurnInWidget>();
	}
};

// Class MovieRenderPipelineSettings.MoviePipelineBurnInSetting
// 0x0068 (0x00B0 - 0x0048)
class UMoviePipelineBurnInSetting final : public UMoviePipelineRenderPass
{
public:
	struct FSoftClassPath                         BurnInClass;                                       // 0x0048(0x0020)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCompositeOntoFinalImage;                          // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_69[0x2F];                                      // 0x0069(0x002F)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x0098(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMoviePipelineBurnInWidget*>     BurnInWidgetInstances;                             // 0x00A0(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineBurnInSetting">();
	}
	static class UMoviePipelineBurnInSetting* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineBurnInSetting>();
	}
};

// Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
// 0x00B0 (0x00F8 - 0x0048)
class UMoviePipelineConsoleVariableSetting final : public UMoviePipelineSetting
{
public:
	TArray<TScriptInterface<class IMovieSceneConsoleVariableTrackInterface>> ConsoleVariablePresets;                            // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FString, float>                    ConsoleVariables;                                  // 0x0058(0x0050)(Deprecated, NativeAccessSpecifierPublic)
	TArray<class FString>                         StartConsoleCommands;                              // 0x00A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                         EndConsoleCommands;                                // 0x00B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMoviePipelineConsoleVariableEntry> CVars;                                             // 0x00C8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_D8[0x20];                                      // 0x00D8(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool AddConsoleVariable(const class FString& Name_0, const float Value);
	bool AddOrUpdateConsoleVariable(const class FString& Name_0, const float Value);
	bool RemoveConsoleVariable(const class FString& Name_0, const bool bRemoveAllInstances);
	bool UpdateConsoleVariableEnableState(const class FString& Name_0, const bool bIsEnabled);

	TArray<struct FMoviePipelineConsoleVariableEntry> GetConsoleVariables() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineConsoleVariableSetting">();
	}
	static class UMoviePipelineConsoleVariableSetting* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineConsoleVariableSetting>();
	}
};

// Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
// 0x0020 (0x0068 - 0x0048)
class UMoviePipelineWidgetRenderer final : public UMoviePipelineRenderPass
{
public:
	bool                                          bCompositeOntoFinalImage;                          // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x17];                                      // 0x0049(0x0017)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x0060(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePipelineWidgetRenderer">();
	}
	static class UMoviePipelineWidgetRenderer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePipelineWidgetRenderer>();
	}
};

}
