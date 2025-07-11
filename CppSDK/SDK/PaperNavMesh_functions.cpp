﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PaperNavMesh

#include "Basic.hpp"

#include "PaperNavMesh_classes.hpp"
#include "PaperNavMesh_parameters.hpp"


namespace SDK
{

// Function PaperNavMesh.NavWaterDepthComponent.SetAreaClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UNavArea>             NewAreaClass                                           (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNavWaterDepthComponent::SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavWaterDepthComponent", "SetAreaClass");

	Params::NavWaterDepthComponent_SetAreaClass Parms{};

	Parms.NewAreaClass = NewAreaClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PaperNavMesh.NavWaterDepthManager.OnNavDataGenerationFinished
// (Final, Native, Protected)
// Parameters:
// class ANavigationData*                  NavData                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANavWaterDepthManager::OnNavDataGenerationFinished(class ANavigationData* NavData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavWaterDepthManager", "OnNavDataGenerationFinished");

	Params::NavWaterDepthManager_OnNavDataGenerationFinished Parms{};

	Parms.NavData = NavData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PaperNavMesh.NavWaterDepthManager.OnNavDataGenerationStart
// (Final, Native, Protected)
// Parameters:
// class ANavigationData*                  NavData                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANavWaterDepthManager::OnNavDataGenerationStart(class ANavigationData* NavData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavWaterDepthManager", "OnNavDataGenerationStart");

	Params::NavWaterDepthManager_OnNavDataGenerationStart Parms{};

	Parms.NavData = NavData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

