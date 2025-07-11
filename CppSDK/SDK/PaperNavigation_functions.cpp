﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PaperNavigation

#include "Basic.hpp"

#include "PaperNavigation_classes.hpp"
#include "PaperNavigation_parameters.hpp"


namespace SDK
{

// Function PaperNavigation.PaperNavigationBlueprintLibrary.ReplaceParentMaterialWithTargetMaterial
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstance*                Instance                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*               TargetMaterial                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperNavigationBlueprintLibrary::ReplaceParentMaterialWithTargetMaterial(class UMaterialInstance* Instance, class UMaterialInterface* TargetMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PaperNavigationBlueprintLibrary", "ReplaceParentMaterialWithTargetMaterial");

	Params::PaperNavigationBlueprintLibrary_ReplaceParentMaterialWithTargetMaterial Parms{};

	Parms.Instance = Instance;
	Parms.TargetMaterial = TargetMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PaperNavigation.PaperNavMeshBoundsVolume.AlignSplinePoint
// (Final, Native, Public, BlueprintCallable)

void APaperNavMeshBoundsVolume::AlignSplinePoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperNavMeshBoundsVolume", "AlignSplinePoint");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PaperNavigation.PaperNavMeshBoundsVolume.BuildAllSplinePointsLinear
// (Final, Native, Public, BlueprintCallable)

void APaperNavMeshBoundsVolume::BuildAllSplinePointsLinear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperNavMeshBoundsVolume", "BuildAllSplinePointsLinear");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PaperNavigation.PaperNavMeshBoundsVolume.BuildSpline
// (Final, Native, Public, BlueprintCallable)

void APaperNavMeshBoundsVolume::BuildSpline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperNavMeshBoundsVolume", "BuildSpline");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

