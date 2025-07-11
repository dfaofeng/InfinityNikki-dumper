﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PaperFXManager

#include "Basic.hpp"

#include "BP_PaperFXManager_classes.hpp"
#include "BP_PaperFXManager_parameters.hpp"


namespace SDK
{

// Function BP_PaperFXManager.BP_PaperFXManager_C.SetFXActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PaperFXManager_C::SetFXActive(class AActor* Actor, bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PaperFXManager_C", "SetFXActive");

	Params::BP_PaperFXManager_C_SetFXActive Parms{};

	Parms.Actor = Actor;
	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PaperFXManager.BP_PaperFXManager_C.NotifyFXVisibleChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PaperFXManager_C::NotifyFXVisibleChange(int64 ID, bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PaperFXManager_C", "NotifyFXVisibleChange");

	Params::BP_PaperFXManager_C_NotifyFXVisibleChange Parms{};

	Parms.ID = ID;
	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PaperFXManager.BP_PaperFXManager_C.BP_SetInteractPropsLifeTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                FXCom                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PaperFXManager_C::BP_SetInteractPropsLifeTime(class UNiagaraComponent* FXCom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PaperFXManager_C", "BP_SetInteractPropsLifeTime");

	Params::BP_PaperFXManager_C_BP_SetInteractPropsLifeTime Parms{};

	Parms.FXCom = FXCom;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PaperFXManager.BP_PaperFXManager_C.BP_GetInteractPropsMeshIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             MeshCom                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32*                                  Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PaperFXManager_C::BP_GetInteractPropsMeshIndex(class UStaticMeshComponent* MeshCom, int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PaperFXManager_C", "BP_GetInteractPropsMeshIndex");

	Params::BP_PaperFXManager_C_BP_GetInteractPropsMeshIndex Parms{};

	Parms.MeshCom = MeshCom;

	UObject::ProcessEvent(Func, &Parms);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}


// Function BP_PaperFXManager.BP_PaperFXManager_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString ABP_PaperFXManager_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PaperFXManager_C", "GetModuleName");

	Params::BP_PaperFXManager_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

