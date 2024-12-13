#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemIcon_Reactor_Node

#include "Basic.hpp"

#include "UI_ItemIcon_Reactor_Node_classes.hpp"
#include "UI_ItemIcon_Reactor_Node_parameters.hpp"


namespace SDK
{

// Function UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.SetSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIcon_Reactor_Node_C::SetSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIcon_Reactor_Node_C", "SetSize");

	Params::UI_ItemIcon_Reactor_Node_C_SetSize Parms{};

	Parms.Size = std::move(Size);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.SetFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Fill                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIcon_Reactor_Node_C::SetFill(bool Fill, bool Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIcon_Reactor_Node_C", "SetFill");

	Params::UI_ItemIcon_Reactor_Node_C_SetFill Parms{};

	Parms.Fill = Fill;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.SetEnchant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnchant                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIcon_Reactor_Node_C::SetEnchant(bool bEnchant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIcon_Reactor_Node_C", "SetEnchant");

	Params::UI_ItemIcon_Reactor_Node_C_SetEnchant Parms{};

	Parms.bEnchant = bEnchant;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIcon_Reactor_Node_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIcon_Reactor_Node_C", "PreConstruct");

	Params::UI_ItemIcon_Reactor_Node_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.ExecuteUbergraph_UI_ItemIcon_Reactor_Node
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIcon_Reactor_Node_C::ExecuteUbergraph_UI_ItemIcon_Reactor_Node(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIcon_Reactor_Node_C", "ExecuteUbergraph_UI_ItemIcon_Reactor_Node");

	Params::UI_ItemIcon_Reactor_Node_C_ExecuteUbergraph_UI_ItemIcon_Reactor_Node Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIcon_Reactor_Node.UI_ItemIcon_Reactor_Node_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ItemIcon_Reactor_Node_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIcon_Reactor_Node_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

