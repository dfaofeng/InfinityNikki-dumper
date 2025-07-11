﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FoliageFootstepOverrideActor

#include "Basic.hpp"

#include "BP_FoliageFootstepOverrideActor_classes.hpp"
#include "BP_FoliageFootstepOverrideActor_parameters.hpp"


namespace SDK
{

// Function BP_FoliageFootstepOverrideActor.BP_FoliageFootstepOverrideActor_C.CompressPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                         CompressdPosition                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FoliageFootstepOverrideActor_C::CompressPosition(const struct FVector& InPosition, struct FVector* CompressdPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FoliageFootstepOverrideActor_C", "CompressPosition");

	Params::BP_FoliageFootstepOverrideActor_C_CompressPosition Parms{};

	Parms.InPosition = std::move(InPosition);

	UObject::ProcessEvent(Func, &Parms);

	if (CompressdPosition != nullptr)
		*CompressdPosition = std::move(Parms.CompressdPosition);
}


// Function BP_FoliageFootstepOverrideActor.BP_FoliageFootstepOverrideActor_C.Event GeneratePointData
// (BlueprintCallable, BlueprintEvent)

void ABP_FoliageFootstepOverrideActor_C::Event_GeneratePointData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FoliageFootstepOverrideActor_C", "Event GeneratePointData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FoliageFootstepOverrideActor.BP_FoliageFootstepOverrideActor_C.ExecuteUbergraph_BP_FoliageFootstepOverrideActor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FoliageFootstepOverrideActor_C::ExecuteUbergraph_BP_FoliageFootstepOverrideActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FoliageFootstepOverrideActor_C", "ExecuteUbergraph_BP_FoliageFootstepOverrideActor");

	Params::BP_FoliageFootstepOverrideActor_C_ExecuteUbergraph_BP_FoliageFootstepOverrideActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FoliageFootstepOverrideActor.BP_FoliageFootstepOverrideActor_C.ExpandPositionData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FoliageFootstepOverrideActor_C::ExpandPositionData(const struct FVector& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FoliageFootstepOverrideActor_C", "ExpandPositionData");

	Params::BP_FoliageFootstepOverrideActor_C_ExpandPositionData Parms{};

	Parms.InPosition = std::move(InPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FoliageFootstepOverrideActor.BP_FoliageFootstepOverrideActor_C.GenerateData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FoliageFootstepOverrideActor_C::GenerateData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FoliageFootstepOverrideActor_C", "GenerateData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FoliageFootstepOverrideActor.BP_FoliageFootstepOverrideActor_C.GetFoliageInstanceInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                      StaticMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector*                         Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Radius_0                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32*                                  Trinangle                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Height                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FoliageFootstepOverrideActor_C::GetFoliageInstanceInfo(class UStaticMeshComponent* Component, class UStaticMesh* StaticMesh, struct FVector* Location, double* Radius_0, int32* Trinangle, double* Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FoliageFootstepOverrideActor_C", "GetFoliageInstanceInfo");

	Params::BP_FoliageFootstepOverrideActor_C_GetFoliageInstanceInfo Parms{};

	Parms.Component = Component;
	Parms.StaticMesh = StaticMesh;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Radius_0 != nullptr)
		*Radius_0 = Parms.Radius_0;

	if (Trinangle != nullptr)
		*Trinangle = Parms.Trinangle;

	if (Height != nullptr)
		*Height = Parms.Height;
}


// Function BP_FoliageFootstepOverrideActor.BP_FoliageFootstepOverrideActor_C.GetFoliageLocationGroup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FVector, EPhysicalSurface>* NewParam                                               (Parm, OutParm)

void ABP_FoliageFootstepOverrideActor_C::GetFoliageLocationGroup(TMap<struct FVector, EPhysicalSurface>* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FoliageFootstepOverrideActor_C", "GetFoliageLocationGroup");

	Params::BP_FoliageFootstepOverrideActor_C_GetFoliageLocationGroup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function BP_FoliageFootstepOverrideActor.BP_FoliageFootstepOverrideActor_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString ABP_FoliageFootstepOverrideActor_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FoliageFootstepOverrideActor_C", "GetModuleName");

	Params::BP_FoliageFootstepOverrideActor_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

