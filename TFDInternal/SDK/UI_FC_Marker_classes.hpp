#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_FC_Marker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_FC_Marker.UI_FC_Marker_C
// 0x0020 (0x0768 - 0x0748)
class UUI_FC_Marker_C final : public UM1UIMissionTaskMarker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0748(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Start;                                        // 0x0750(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLoop;                                          // 0x0758(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 DirectionIcon;                                     // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnShowImpl();
	void ExecuteUbergraph_UI_FC_Marker(int32 EntryPoint);
	void BP_PlayMarkerAnim();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_FC_Marker_C">();
	}
	static class UUI_FC_Marker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_FC_Marker_C>();
	}
};

}

