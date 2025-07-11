﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TT_TargetingSelection_RecoveryAOEPicker

#include "Basic.hpp"

#include "TT_TargetingSelection_RecoveryAOEPicker_classes.hpp"
#include "TT_TargetingSelection_RecoveryAOEPicker_parameters.hpp"


namespace SDK
{

// Function TT_TargetingSelection_RecoveryAOEPicker.TT_TargetingSelection_RecoveryAOEPicker_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UTT_TargetingSelection_RecoveryAOEPicker_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TT_TargetingSelection_RecoveryAOEPicker_C", "GetModuleName");

	Params::TT_TargetingSelection_RecoveryAOEPicker_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TT_TargetingSelection_RecoveryAOEPicker.TT_TargetingSelection_RecoveryAOEPicker_C.GetSourceRotation
// (HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FTargetingRequestHandle&   TargetingHandle                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FQuat                            ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FQuat UTT_TargetingSelection_RecoveryAOEPicker_C::GetSourceRotation(const struct FTargetingRequestHandle& TargetingHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TT_TargetingSelection_RecoveryAOEPicker_C", "GetSourceRotation");

	Params::TT_TargetingSelection_RecoveryAOEPicker_C_GetSourceRotation Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TT_TargetingSelection_RecoveryAOEPicker.TT_TargetingSelection_RecoveryAOEPicker_C.K2_CanSelect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FTargetingRequestHandle&   TargetingHandle                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// const struct FTargetingSourceContext&   SourceContext                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UTT_TargetingSelection_RecoveryAOEPicker_C::K2_CanSelect(const struct FTargetingRequestHandle& TargetingHandle, const struct FTargetingSourceContext& SourceContext) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TT_TargetingSelection_RecoveryAOEPicker_C", "K2_CanSelect");

	Params::TT_TargetingSelection_RecoveryAOEPicker_C_K2_CanSelect Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);
	Parms.SourceContext = std::move(SourceContext);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TT_TargetingSelection_RecoveryAOEPicker.TT_TargetingSelection_RecoveryAOEPicker_C.K2_MarkHitResult
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult*                      HitResult                                              (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UTT_TargetingSelection_RecoveryAOEPicker_C::K2_MarkHitResult(class AActor* Actor, class UPrimitiveComponent* Component, struct FHitResult* HitResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TT_TargetingSelection_RecoveryAOEPicker_C", "K2_MarkHitResult");

	Params::TT_TargetingSelection_RecoveryAOEPicker_C_K2_MarkHitResult Parms{};

	Parms.Actor = Actor;
	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

	if (HitResult != nullptr)
		*HitResult = std::move(Parms.HitResult);
}


// Function TT_TargetingSelection_RecoveryAOEPicker.TT_TargetingSelection_RecoveryAOEPicker_C.SelectTargets
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FTargetingRequestHandle&   TargetingHandle                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// const struct FTargetingSourceContext&   SourceContext                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTT_TargetingSelection_RecoveryAOEPicker_C::SelectTargets(const struct FTargetingRequestHandle& TargetingHandle, const struct FTargetingSourceContext& SourceContext) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TT_TargetingSelection_RecoveryAOEPicker_C", "SelectTargets");

	Params::TT_TargetingSelection_RecoveryAOEPicker_C_SelectTargets Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);
	Parms.SourceContext = std::move(SourceContext);

	UObject::ProcessEvent(Func, &Parms);
}

}

