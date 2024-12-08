#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractiveToolsFramework

#include "Basic.hpp"

#include "InteractiveToolsFramework_classes.hpp"
#include "InteractiveToolsFramework_parameters.hpp"


namespace SDK
{

// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
// (Final, Native, Public)
// Parameters:
// bool                                    bHoveringIn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoBaseComponent", "UpdateHoverState");

	Params::GizmoBaseComponent_UpdateHoverState Parms{};

	Parms.bHoveringIn = bHoveringIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
// (Final, Native, Public)
// Parameters:
// bool                                    bWorldIn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoBaseComponent", "UpdateWorldLocalState");

	Params::GizmoBaseComponent_UpdateWorldLocalState Parms{};

	Parms.bWorldIn = bWorldIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FTransform                       NewTransform                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoTransformSource::SetTransform(const struct FTransform& NewTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoTransformSource", "SetTransform");

	Params::GizmoTransformSource_SetTransform Parms{};

	Parms.NewTransform = std::move(NewTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform IGizmoTransformSource::GetTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoTransformSource", "GetTransform");

	Params::GizmoTransformSource_GetTransform Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector IGizmoAxisSource::GetDirection() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoAxisSource", "GetDirection");

	Params::GizmoAxisSource_GetDirection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector IGizmoAxisSource::GetOrigin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoAxisSource", "GetOrigin");

	Params::GizmoAxisSource_GetOrigin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
// (Native, Public, HasOutParams, HasDefaults, Const)
// Parameters:
// struct FVector                          TangentXOut                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          TangentYOut                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoAxisSource::GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoAxisSource", "GetTangentVectors");

	Params::GizmoAxisSource_GetTangentVectors Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (TangentXOut != nullptr)
		*TangentXOut = std::move(Parms.TangentXOut);

	if (TangentYOut != nullptr)
		*TangentYOut = std::move(Parms.TangentYOut);
}


// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
// (Native, Public, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGizmoAxisSource::HasTangentVectors() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoAxisSource", "HasTangentVectors");

	Params::GizmoAxisSource_HasTangentVectors Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
// (Native, Public)
// Parameters:
// bool                                    bHovering                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoClickTarget::UpdateHoverState(bool bHovering)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoClickTarget", "UpdateHoverState");

	Params::GizmoClickTarget_UpdateHoverState Parms{};

	Parms.bHovering = bHovering;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoClickTarget.UpdateInteractingState
// (Native, Public)
// Parameters:
// bool                                    bInteracting                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoClickTarget::UpdateInteractingState(bool bInteracting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoClickTarget", "UpdateInteractingState");

	Params::GizmoClickTarget_UpdateInteractingState Parms{};

	Parms.bInteracting = bInteracting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHittableState
// (Native, Public)
// Parameters:
// bool                                    bHittable                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                                  InPartIdentifier                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoClickMultiTarget::UpdateHittableState(bool bHittable, uint32 InPartIdentifier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoClickMultiTarget", "UpdateHittableState");

	Params::GizmoClickMultiTarget_UpdateHittableState Parms{};

	Parms.bHittable = bHittable;
	Parms.InPartIdentifier = InPartIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHoverState
// (Native, Public)
// Parameters:
// bool                                    bHovering                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                                  InPartIdentifier                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoClickMultiTarget::UpdateHoverState(bool bHovering, uint32 InPartIdentifier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoClickMultiTarget", "UpdateHoverState");

	Params::GizmoClickMultiTarget_UpdateHoverState Parms{};

	Parms.bHovering = bHovering;
	Parms.InPartIdentifier = InPartIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateInteractingState
// (Native, Public)
// Parameters:
// bool                                    bInteracting                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                                  InPartIdentifier                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoClickMultiTarget::UpdateInteractingState(bool bInteracting, uint32 InPartIdentifier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoClickMultiTarget", "UpdateInteractingState");

	Params::GizmoClickMultiTarget_UpdateInteractingState Parms{};

	Parms.bInteracting = bInteracting;
	Parms.InPartIdentifier = InPartIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoRenderMultiTarget.UpdateVisibilityState
// (Native, Public)
// Parameters:
// bool                                    bVisible                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                                  InPartIdentifier                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoRenderMultiTarget::UpdateVisibilityState(bool bVisible, uint32 InPartIdentifier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoRenderMultiTarget", "UpdateVisibilityState");

	Params::GizmoRenderMultiTarget_UpdateVisibilityState Parms{};

	Parms.bVisible = bVisible;
	Parms.InPartIdentifier = InPartIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
// (Native, Public)

void IGizmoStateTarget::BeginUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoStateTarget", "BeginUpdate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
// (Native, Public)

void IGizmoStateTarget::EndUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoStateTarget", "EndUpdate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
// (Native, Public)

void IGizmoFloatParameterSource::BeginModify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoFloatParameterSource", "BeginModify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
// (Native, Public)

void IGizmoFloatParameterSource::EndModify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoFloatParameterSource", "EndModify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
// (Native, Public)
// Parameters:
// float                                   NewValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoFloatParameterSource::SetParameter(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoFloatParameterSource", "SetParameter");

	Params::GizmoFloatParameterSource_SetParameter Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
// (Native, Public, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float IGizmoFloatParameterSource::GetParameter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoFloatParameterSource", "GetParameter");

	Params::GizmoFloatParameterSource_GetParameter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
// (Native, Public)

void IGizmoVec2ParameterSource::BeginModify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "BeginModify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
// (Native, Public)

void IGizmoVec2ParameterSource::EndModify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "EndModify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector2D                        NewValue                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoVec2ParameterSource::SetParameter(const struct FVector2D& NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "SetParameter");

	Params::GizmoVec2ParameterSource_SetParameter Parms{};

	Parms.NewValue = std::move(NewValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D IGizmoVec2ParameterSource::GetParameter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "GetParameter");

	Params::GizmoVec2ParameterSource_GetParameter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

