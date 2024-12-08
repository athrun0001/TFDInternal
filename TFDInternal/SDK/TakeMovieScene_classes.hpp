#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TakeMovieScene

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"
#include "MovieSceneTracks_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class TakeMovieScene.MovieSceneTakeSection
// 0x0620 (0x0710 - 0x00F0)
class UMovieSceneTakeSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneIntegerChannel              HoursCurve;                                        // 0x00F0(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel              MinutesCurve;                                      // 0x01F0(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel              SecondsCurve;                                      // 0x02F0(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel              FramesCurve;                                       // 0x03F0(0x0100)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                SubFramesCurve;                                    // 0x04F0(0x0110)(NativeAccessSpecifierPublic)
	struct FMovieSceneStringChannel               Slate;                                             // 0x0600(0x0110)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneTakeSection">();
	}
	static class UMovieSceneTakeSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneTakeSection>();
	}
};

// Class TakeMovieScene.MovieSceneTakeSettings
// 0x0060 (0x0088 - 0x0028)
class UMovieSceneTakeSettings final : public UObject
{
public:
	class FString                                 HoursName;                                         // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MinutesName;                                       // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SecondsName;                                       // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FramesName;                                        // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SubFramesName;                                     // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SlateName;                                         // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneTakeSettings">();
	}
	static class UMovieSceneTakeSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneTakeSettings>();
	}
};

// Class TakeMovieScene.MovieSceneTakeTrack
// 0x0010 (0x00A8 - 0x0098)
class UMovieSceneTakeTrack final : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>             Sections;                                          // 0x0098(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneTakeTrack">();
	}
	static class UMovieSceneTakeTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneTakeTrack>();
	}
};

}

