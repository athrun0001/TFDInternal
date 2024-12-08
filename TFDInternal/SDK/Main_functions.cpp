#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Main

#include "Basic.hpp"

#include "Main_classes.hpp"
#include "Main_parameters.hpp"


namespace SDK
{

// Function Main.Main_C.WireLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        WireLayer_0                                            (Parm, OutParm, NoDestructor)

void UMain_C::WireLayer(const struct FPoseLink& InPose, struct FPoseLink* WireLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "WireLayer");

	Params::Main_C_WireLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (WireLayer_0 != nullptr)
		*WireLayer_0 = std::move(Parms.WireLayer_0);
}


// Function Main.Main_C.UpperBodyLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InputPose                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        UpperBodyLayer_0                                       (Parm, OutParm, NoDestructor)

void UMain_C::UpperBodyLayer(const struct FPoseLink& InputPose, struct FPoseLink* UpperBodyLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "UpperBodyLayer");

	Params::Main_C_UpperBodyLayer Parms{};

	Parms.InputPose = std::move(InputPose);

	UObject::ProcessEvent(Func, &Parms);

	if (UpperBodyLayer_0 != nullptr)
		*UpperBodyLayer_0 = std::move(Parms.UpperBodyLayer_0);
}


// Function Main.Main_C.UpperBody_U_R
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose_UpperBody_U_R                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        UpperBody_U_R_0                                        (Parm, OutParm, NoDestructor)

void UMain_C::UpperBody_U_R(const struct FPoseLink& InPose_UpperBody_U_R, struct FPoseLink* UpperBody_U_R_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "UpperBody_U_R");

	Params::Main_C_UpperBody_U_R Parms{};

	Parms.InPose_UpperBody_U_R = std::move(InPose_UpperBody_U_R);

	UObject::ProcessEvent(Func, &Parms);

	if (UpperBody_U_R_0 != nullptr)
		*UpperBody_U_R_0 = std::move(Parms.UpperBody_U_R_0);
}


// Function Main.Main_C.UpperBody_U
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose_UpperBody_U                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        UpperBody_U_0                                          (Parm, OutParm, NoDestructor)

void UMain_C::UpperBody_U(const struct FPoseLink& InPose_UpperBody_U, struct FPoseLink* UpperBody_U_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "UpperBody_U");

	Params::Main_C_UpperBody_U Parms{};

	Parms.InPose_UpperBody_U = std::move(InPose_UpperBody_U);

	UObject::ProcessEvent(Func, &Parms);

	if (UpperBody_U_0 != nullptr)
		*UpperBody_U_0 = std::move(Parms.UpperBody_U_0);
}


// Function Main.Main_C.UpperBody_L_Additive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose_UpperBody_L_Additive                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        UpperBody_L_Additive_0                                 (Parm, OutParm, NoDestructor)

void UMain_C::UpperBody_L_Additive(const struct FPoseLink& InPose_UpperBody_L_Additive, struct FPoseLink* UpperBody_L_Additive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "UpperBody_L_Additive");

	Params::Main_C_UpperBody_L_Additive Parms{};

	Parms.InPose_UpperBody_L_Additive = std::move(InPose_UpperBody_L_Additive);

	UObject::ProcessEvent(Func, &Parms);

	if (UpperBody_L_Additive_0 != nullptr)
		*UpperBody_L_Additive_0 = std::move(Parms.UpperBody_L_Additive_0);
}


// Function Main.Main_C.UpperBody_L
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose_UpperBody_L                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        UpperBody_L_0                                          (Parm, OutParm, NoDestructor)

void UMain_C::UpperBody_L(const struct FPoseLink& InPose_UpperBody_L, struct FPoseLink* UpperBody_L_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "UpperBody_L");

	Params::Main_C_UpperBody_L Parms{};

	Parms.InPose_UpperBody_L = std::move(InPose_UpperBody_L);

	UObject::ProcessEvent(Func, &Parms);

	if (UpperBody_L_0 != nullptr)
		*UpperBody_L_0 = std::move(Parms.UpperBody_L_0);
}


// Function Main.Main_C.SpecificationLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        SpecificationLayer_0                                   (Parm, OutParm, NoDestructor)

void UMain_C::SpecificationLayer(const struct FPoseLink& InPose, struct FPoseLink* SpecificationLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "SpecificationLayer");

	Params::Main_C_SpecificationLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (SpecificationLayer_0 != nullptr)
		*SpecificationLayer_0 = std::move(Parms.SpecificationLayer_0);
}


// Function Main.Main_C.OnAnimTypeChanged
// (Event, Protected, BlueprintEvent)

void UMain_C::OnAnimTypeChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "OnAnimTypeChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Main.Main_C.NewFunction
// (Public, BlueprintCallable, BlueprintEvent)

void UMain_C::NewFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "NewFunction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Main.Main_C.Motion_M
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose_Motion_M                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Motion_M_0                                             (Parm, OutParm, NoDestructor)

void UMain_C::Motion_M(const struct FPoseLink& InPose_Motion_M, struct FPoseLink* Motion_M_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "Motion_M");

	Params::Main_C_Motion_M Parms{};

	Parms.InPose_Motion_M = std::move(InPose_Motion_M);

	UObject::ProcessEvent(Func, &Parms);

	if (Motion_M_0 != nullptr)
		*Motion_M_0 = std::move(Parms.Motion_M_0);
}


// Function Main.Main_C.LocomotionLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        LocomotionLayer_0                                      (Parm, OutParm, NoDestructor)

void UMain_C::LocomotionLayer(struct FPoseLink* LocomotionLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "LocomotionLayer");

	Params::Main_C_LocomotionLayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LocomotionLayer_0 != nullptr)
		*LocomotionLayer_0 = std::move(Parms.LocomotionLayer_0);
}


// Function Main.Main_C.GetWireAnimLayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Ret                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMain_C::GetWireAnimLayer(class UClass** Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "GetWireAnimLayer");

	Params::Main_C_GetWireAnimLayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function Main.Main_C.GetLocomotionAnimLayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Ret                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMain_C::GetLocomotionAnimLayer(class UClass** Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "GetLocomotionAnimLayer");

	Params::Main_C_GetLocomotionAnimLayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function Main.Main_C.GetAbilityAnimLayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Ret                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMain_C::GetAbilityAnimLayer(class UClass** Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "GetAbilityAnimLayer");

	Params::Main_C_GetAbilityAnimLayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function Main.Main_C.FullBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose_FullBody                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        FullBody_0                                             (Parm, OutParm, NoDestructor)

void UMain_C::FullBody(const struct FPoseLink& InPose_FullBody, struct FPoseLink* FullBody_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "FullBody");

	Params::Main_C_FullBody Parms{};

	Parms.InPose_FullBody = std::move(InPose_FullBody);

	UObject::ProcessEvent(Func, &Parms);

	if (FullBody_0 != nullptr)
		*FullBody_0 = std::move(Parms.FullBody_0);
}


// Function Main.Main_C.ExecuteUbergraph_Main
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMain_C::ExecuteUbergraph_Main(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "ExecuteUbergraph_Main");

	Params::Main_C_ExecuteUbergraph_Main Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Main.Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Main_AnimGraphNode_TwoWayBlend_738D14A944C8ABEB516B26BF23ADF934
// (BlueprintEvent)

void UMain_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Main_AnimGraphNode_TwoWayBlend_738D14A944C8ABEB516B26BF23ADF934()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Main_AnimGraphNode_TwoWayBlend_738D14A944C8ABEB516B26BF23ADF934");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Main.Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Main_AnimGraphNode_LayeredBoneBlend_A250DE804BFC293A006A2F93E0E0819D
// (BlueprintEvent)

void UMain_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Main_AnimGraphNode_LayeredBoneBlend_A250DE804BFC293A006A2F93E0E0819D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Main_AnimGraphNode_LayeredBoneBlend_A250DE804BFC293A006A2F93E0E0819D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Main.Main_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Main_AnimGraphNode_LayeredBoneBlend_5955D63F4365733784B35D92B01C0402
// (BlueprintEvent)

void UMain_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Main_AnimGraphNode_LayeredBoneBlend_5955D63F4365733784B35D92B01C0402()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Main_AnimGraphNode_LayeredBoneBlend_5955D63F4365733784B35D92B01C0402");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Main.Main_C.BlueprintLinkedAnimationLayersInitialized
// (Event, Public, BlueprintEvent)

void UMain_C::BlueprintLinkedAnimationLayersInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "BlueprintLinkedAnimationLayersInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Main.Main_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UMain_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "AnimGraph");

	Params::Main_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function Main.Main_C.AimOffsetLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AimOffsetLayer_0                                       (Parm, OutParm, NoDestructor)

void UMain_C::AimOffsetLayer(const struct FPoseLink& InPose, struct FPoseLink* AimOffsetLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "AimOffsetLayer");

	Params::Main_C_AimOffsetLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AimOffsetLayer_0 != nullptr)
		*AimOffsetLayer_0 = std::move(Parms.AimOffsetLayer_0);
}


// Function Main.Main_C.AbilityLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AbilityLayer_0                                         (Parm, OutParm, NoDestructor)

void UMain_C::AbilityLayer(const struct FPoseLink& InPose, struct FPoseLink* AbilityLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Main_C", "AbilityLayer");

	Params::Main_C_AbilityLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityLayer_0 != nullptr)
		*AbilityLayer_0 = std::move(Parms.AbilityLayer_0);
}

}

