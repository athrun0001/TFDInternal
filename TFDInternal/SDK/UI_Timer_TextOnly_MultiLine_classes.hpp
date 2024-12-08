#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Timer_TextOnly_MultiLine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Timer_TextOnly_MultiLine.UI_Timer_TextOnly_MultiLine_C
// 0x0318 (0x0A70 - 0x0758)
class UUI_Timer_TextOnly_MultiLine_C final : public UM1UITimer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0758(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTextBlockStyle                        TextStyle;                                         // 0x0760(0x0310)(Edit, BlueprintVisible)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Timer_TextOnly_MultiLine(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Timer_TextOnly_MultiLine_C">();
	}
	static class UUI_Timer_TextOnly_MultiLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Timer_TextOnly_MultiLine_C>();
	}
};

}

