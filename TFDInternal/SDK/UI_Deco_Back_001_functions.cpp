#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Deco_Back_001

#include "Basic.hpp"

#include "UI_Deco_Back_001_classes.hpp"
#include "UI_Deco_Back_001_parameters.hpp"


namespace SDK
{

// Function UI_Deco_Back_001.UI_Deco_Back_001_C.SetUIStyleDecoBack001
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    BgOFF                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DotOFF_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutlineOFF_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     BgColor_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  BgOpacity_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    White_Gradient_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    BG_Embossing_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Deco_Back_001_C::SetUIStyleDecoBack001(bool BgOFF, bool DotOFF_0, bool OutlineOFF_0, const struct FLinearColor& BgColor_0, double BgOpacity_0, bool White_Gradient_0, bool BG_Embossing_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Deco_Back_001_C", "SetUIStyleDecoBack001");

	Params::UI_Deco_Back_001_C_SetUIStyleDecoBack001 Parms{};

	Parms.BgOFF = BgOFF;
	Parms.DotOFF_0 = DotOFF_0;
	Parms.OutlineOFF_0 = OutlineOFF_0;
	Parms.BgColor_0 = std::move(BgColor_0);
	Parms.BgOpacity_0 = BgOpacity_0;
	Parms.White_Gradient_0 = White_Gradient_0;
	Parms.BG_Embossing_0 = BG_Embossing_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Deco_Back_001.UI_Deco_Back_001_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Deco_Back_001_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Deco_Back_001_C", "PreConstruct");

	Params::UI_Deco_Back_001_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Deco_Back_001.UI_Deco_Back_001_C.ExecuteUbergraph_UI_Deco_Back_001
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Deco_Back_001_C::ExecuteUbergraph_UI_Deco_Back_001(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Deco_Back_001_C", "ExecuteUbergraph_UI_Deco_Back_001");

	Params::UI_Deco_Back_001_C_ExecuteUbergraph_UI_Deco_Back_001 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Deco_Back_001.UI_Deco_Back_001_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Deco_Back_001_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Deco_Back_001_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

