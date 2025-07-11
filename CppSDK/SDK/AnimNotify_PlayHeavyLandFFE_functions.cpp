﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_PlayHeavyLandFFE

#include "Basic.hpp"

#include "AnimNotify_PlayHeavyLandFFE_classes.hpp"
#include "AnimNotify_PlayHeavyLandFFE_parameters.hpp"


namespace SDK
{

// Function AnimNotify_PlayHeavyLandFFE.AnimNotify_PlayHeavyLandFFE_C.PlayHeavyLandFFE
// (Public, BlueprintCallable, BlueprintEvent, Const)

void UAnimNotify_PlayHeavyLandFFE_C::PlayHeavyLandFFE() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_PlayHeavyLandFFE_C", "PlayHeavyLandFFE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimNotify_PlayHeavyLandFFE.AnimNotify_PlayHeavyLandFFE_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FAnimNotifyEventReference& EventReference                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAnimNotify_PlayHeavyLandFFE_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_PlayHeavyLandFFE_C", "Received_Notify");

	Params::AnimNotify_PlayHeavyLandFFE_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

