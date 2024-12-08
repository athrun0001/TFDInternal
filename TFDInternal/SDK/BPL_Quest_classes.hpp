#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_Quest

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_Quest.BPL_Quest_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_Quest_C final : public UBlueprintFunctionLibrary
{
public:
	static void Set_Quest_Type_Bg_Color(EM1QuestType InQuestType, class UImage* InImage, class UObject* __WorldContext);
	static void GetQuestTypeText(EM1QuestType InQuestType, class UObject* __WorldContext, class FString* StringKey);
	static void GetQuestTypeTabIcon(EM1QuestType InQuestType, class UObject* __WorldContext, class UTexture2D** IconTexture);
	static void GetQuestTypeSimpleTextBg(EM1QuestType InQuestType, class UObject* __WorldContext, class UTexture2D** IconTexture);
	static void GetQuestTypeSimpleText(EM1QuestType InQuestType, class UObject* __WorldContext, class FString* StringKey);
	static void GetQuestTypeListlcon(EM1QuestType InQuestType, class UObject* __WorldContext, class UTexture2D** IconTexture);
	static void GetQuestTypeDecoIcon(EM1QuestType InQuestType, class UObject* __WorldContext, class UTexture2D** IconTexture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_Quest_C">();
	}
	static class UBPL_Quest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_Quest_C>();
	}
};

}

