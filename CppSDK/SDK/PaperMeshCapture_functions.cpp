﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PaperMeshCapture

#include "Basic.hpp"

#include "PaperMeshCapture_classes.hpp"
#include "PaperMeshCapture_parameters.hpp"


namespace SDK
{

// Function PaperMeshCapture.PaperMeshCaptureComponent.CaptureFrame
// (Final, Native, Public, BlueprintCallable)

void UPaperMeshCaptureComponent::CaptureFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperMeshCaptureComponent", "CaptureFrame");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PaperMeshCapture.PaperMeshCaptureComponent.SetEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bInEnable                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperMeshCaptureComponent::SetEnable(bool bInEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperMeshCaptureComponent", "SetEnable");

	Params::PaperMeshCaptureComponent_SetEnable Parms{};

	Parms.bInEnable = bInEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PaperMeshCapture.PaperMeshCaptureComponent.SetNewCaptureIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   NewMeshCaptureChannelIndex                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperMeshCaptureComponent::SetNewCaptureIndex(int32 NewMeshCaptureChannelIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperMeshCaptureComponent", "SetNewCaptureIndex");

	Params::PaperMeshCaptureComponent_SetNewCaptureIndex Parms{};

	Parms.NewMeshCaptureChannelIndex = NewMeshCaptureChannelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PaperMeshCapture.PaperMeshCaptureComponent.SetNewMeshColorTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget*             NewMeshColorCaptureRT                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperMeshCaptureComponent::SetNewMeshColorTarget(class UTextureRenderTarget* NewMeshColorCaptureRT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperMeshCaptureComponent", "SetNewMeshColorTarget");

	Params::PaperMeshCaptureComponent_SetNewMeshColorTarget Parms{};

	Parms.NewMeshColorCaptureRT = NewMeshColorCaptureRT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PaperMeshCapture.PaperMeshCaptureComponent.SetNewMeshDepthTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget*             NewMeshDepthCaptureRT                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperMeshCaptureComponent::SetNewMeshDepthTarget(class UTextureRenderTarget* NewMeshDepthCaptureRT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperMeshCaptureComponent", "SetNewMeshDepthTarget");

	Params::PaperMeshCaptureComponent_SetNewMeshDepthTarget Parms{};

	Parms.NewMeshDepthCaptureRT = NewMeshDepthCaptureRT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PaperMeshCapture.PaperMeshCaptureComponent.SetOrthoWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   NewOrthoWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperMeshCaptureComponent::SetOrthoWidth(float NewOrthoWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaperMeshCaptureComponent", "SetOrthoWidth");

	Params::PaperMeshCaptureComponent_SetOrthoWidth Parms{};

	Parms.NewOrthoWidth = NewOrthoWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

