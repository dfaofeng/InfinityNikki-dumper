﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PostProcessHelpBlackActor

#include "Basic.hpp"

#include "PostProcessHelpBlackActor_classes.hpp"
#include "PostProcessHelpBlackActor_parameters.hpp"


namespace SDK
{

// Function PostProcessHelpBlackActor.PostProcessHelpBlackActor_C.ExecuteUbergraph_PostProcessHelpBlackActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APostProcessHelpBlackActor_C::ExecuteUbergraph_PostProcessHelpBlackActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PostProcessHelpBlackActor_C", "ExecuteUbergraph_PostProcessHelpBlackActor");

	Params::PostProcessHelpBlackActor_C_ExecuteUbergraph_PostProcessHelpBlackActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PostProcessHelpBlackActor.PostProcessHelpBlackActor_C.FadeIn
// (BlueprintCallable, BlueprintEvent)

void APostProcessHelpBlackActor_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PostProcessHelpBlackActor_C", "FadeIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PostProcessHelpBlackActor.PostProcessHelpBlackActor_C.FadeInAndDestroy
// (BlueprintCallable, BlueprintEvent)

void APostProcessHelpBlackActor_C::FadeInAndDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PostProcessHelpBlackActor_C", "FadeInAndDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PostProcessHelpBlackActor.PostProcessHelpBlackActor_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              FadeOutColor_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APostProcessHelpBlackActor_C::FadeOut(const struct FLinearColor& FadeOutColor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PostProcessHelpBlackActor_C", "FadeOut");

	Params::PostProcessHelpBlackActor_C_FadeOut Parms{};

	Parms.FadeOutColor_0 = std::move(FadeOutColor_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PostProcessHelpBlackActor.PostProcessHelpBlackActor_C.GetOrAddPostProcessMaterialInstance
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic**        ReturnMaterial                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APostProcessHelpBlackActor_C::GetOrAddPostProcessMaterialInstance(class UMaterialInstanceDynamic** ReturnMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PostProcessHelpBlackActor_C", "GetOrAddPostProcessMaterialInstance");

	Params::PostProcessHelpBlackActor_C_GetOrAddPostProcessMaterialInstance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnMaterial != nullptr)
		*ReturnMaterial = Parms.ReturnMaterial;
}


// Function PostProcessHelpBlackActor.PostProcessHelpBlackActor_C.NewFunction
// (BlueprintCallable, BlueprintEvent)

void APostProcessHelpBlackActor_C::NewFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PostProcessHelpBlackActor_C", "NewFunction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PostProcessHelpBlackActor.PostProcessHelpBlackActor_C.NewFunction_0
// (BlueprintCallable, BlueprintEvent)

void APostProcessHelpBlackActor_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PostProcessHelpBlackActor_C", "NewFunction_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PostProcessHelpBlackActor.PostProcessHelpBlackActor_C.NewFunction_1
// (BlueprintCallable, BlueprintEvent)

void APostProcessHelpBlackActor_C::NewFunction_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PostProcessHelpBlackActor_C", "NewFunction_1");

	UObject::ProcessEvent(Func, nullptr);
}

}

