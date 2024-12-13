#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Guide_Respawn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Guide_Respawn.UI_Guide_Respawn_C
// 0x0040 (0x0760 - 0x0720)
class UUI_Guide_Respawn_C final : public UM1UIPlayerRespawnVolumeWarning
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimLoop;                                          // 0x0728(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ANIMClose;                                         // 0x0730(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ANIMOpen;                                          // 0x0738(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Des;                                          // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Title;                                        // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bOverlapping;                                      // 0x0758(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UILoop();
	void ExecuteUbergraph_UI_Guide_Respawn(int32 EntryPoint);
	void SequenceEvent__ENTRYPOINTUI_Guide_Respawn();
	void BP_widget_playAkEvent(class UAkAudioEvent* AkEvent);
	void BP_EndOverlap();
	void BP_BeginOverlap();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Guide_Respawn_C">();
	}
	static class UUI_Guide_Respawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Guide_Respawn_C>();
	}
};

}

