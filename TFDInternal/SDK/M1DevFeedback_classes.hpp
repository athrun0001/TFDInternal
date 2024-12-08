#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M1DevFeedback

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class M1DevFeedback.M1DevFeedbackSettings
// 0x0040 (0x0068 - 0x0028)
class UM1DevFeedbackSettings final : public UObject
{
public:
	bool                                          Enabled;                                           // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         NiagaraParticleMemoryWarningSize;                  // 0x0030(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 WebhookUrl;                                        // 0x0038(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CookingErrorWebhookUrl;                            // 0x0048(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CookingTestErrorWebhookUrl;                        // 0x0058(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"M1DevFeedbackSettings">();
	}
	static class UM1DevFeedbackSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM1DevFeedbackSettings>();
	}
};

}

