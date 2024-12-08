#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FacialAnimation

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class FacialAnimation.AudioCurveSourceComponent
// 0x0040 (0x0BD0 - 0x0B90)
class UAudioCurveSourceComponent final : public UAudioComponent
{
public:
	class FName                                   CurveSourceBindingName;                            // 0x0B90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurveSyncOffset;                                   // 0x0B98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B9C[0x34];                                     // 0x0B9C(0x0034)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioCurveSourceComponent">();
	}
	static class UAudioCurveSourceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioCurveSourceComponent>();
	}
};

}

