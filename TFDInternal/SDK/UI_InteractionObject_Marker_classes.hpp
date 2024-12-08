#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InteractionObject_Marker

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_InteractionObject_Marker.UI_InteractionObject_Marker_C
// 0x0010 (0x0718 - 0x0708)
class UUI_InteractionObject_Marker_C final : public UM1UIWidget
{
public:
	class UImage*                                 Marker;                                            // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MI_Flicker;                                        // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ChangeMarkerColor(uint8 Box);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_InteractionObject_Marker_C">();
	}
	static class UUI_InteractionObject_Marker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_InteractionObject_Marker_C>();
	}
};

}

