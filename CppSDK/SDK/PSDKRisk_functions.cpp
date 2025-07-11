﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PSDKRisk

#include "Basic.hpp"

#include "PSDKRisk_classes.hpp"
#include "PSDKRisk_parameters.hpp"


namespace SDK
{

// Function PSDKRisk.PCPaperRiskCaptchaUI.Handle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    Params_0                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPCPaperRiskCaptchaUI::Handle(const class FString& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCPaperRiskCaptchaUI", "Handle");

	Params::PCPaperRiskCaptchaUI_Handle Parms{};

	Parms.Params_0 = std::move(Params_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PSDKRisk.PCPaperRiskCaptchaUI.OnCloseButton
// (Final, Native, Public, BlueprintCallable)

void UPCPaperRiskCaptchaUI::OnCloseButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCPaperRiskCaptchaUI", "OnCloseButton");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PSDKRisk.PCPaperRiskCaptchaUI.OnCloseButtonDelegate
// (Final, Native, Public)
// Parameters:
// const bool                              Close                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPCPaperRiskCaptchaUI::OnCloseButtonDelegate(const bool Close)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCPaperRiskCaptchaUI", "OnCloseButtonDelegate");

	Params::PCPaperRiskCaptchaUI_OnCloseButtonDelegate Parms{};

	Parms.Close = Close;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PSDKRisk.PCPaperRiskCaptchaUI.WebBrowerLoadCompleted
// (Final, Native, Public, BlueprintCallable)

void UPCPaperRiskCaptchaUI::WebBrowerLoadCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCPaperRiskCaptchaUI", "WebBrowerLoadCompleted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PSDKRisk.PCPaperRiskCaptchaUI.WebBrowerLoadError
// (Final, Native, Public, BlueprintCallable)

void UPCPaperRiskCaptchaUI::WebBrowerLoadError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCPaperRiskCaptchaUI", "WebBrowerLoadError");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PSDKRisk.PCPaperRiskCaptchaUI.WebBrowerLoadStarted
// (Final, Native, Public, BlueprintCallable)

void UPCPaperRiskCaptchaUI::WebBrowerLoadStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCPaperRiskCaptchaUI", "WebBrowerLoadStarted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PSDKRisk.PCPaperRiskModalUI.OnCloseButton
// (Final, Native, Public, BlueprintCallable)

void UPCPaperRiskModalUI::OnCloseButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCPaperRiskModalUI", "OnCloseButton");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PSDKRisk.PCPaperRiskModalUI.OnCommitButton
// (Final, Native, Public, BlueprintCallable)

void UPCPaperRiskModalUI::OnCommitButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCPaperRiskModalUI", "OnCommitButton");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PSDKRisk.PCPaperRiskVerifyUI.OnCloseButton
// (Final, Native, Public, BlueprintCallable)

void UPCPaperRiskVerifyUI::OnCloseButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCPaperRiskVerifyUI", "OnCloseButton");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PSDKRisk.PCPaperRiskVerifyUI.OnCloseButtonDelegate
// (Final, Native, Protected)
// Parameters:
// const bool                              Close                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPCPaperRiskVerifyUI::OnCloseButtonDelegate(const bool Close)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCPaperRiskVerifyUI", "OnCloseButtonDelegate");

	Params::PCPaperRiskVerifyUI_OnCloseButtonDelegate Parms{};

	Parms.Close = Close;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PSDKRisk.PCPaperRiskVerifyUI.OnCommitButton
// (Final, Native, Public, BlueprintCallable)

void UPCPaperRiskVerifyUI::OnCommitButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCPaperRiskVerifyUI", "OnCommitButton");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PSDKRisk.PCPaperRiskVerifyUI.OnGetCodeButton
// (Final, Native, Public, BlueprintCallable)

void UPCPaperRiskVerifyUI::OnGetCodeButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCPaperRiskVerifyUI", "OnGetCodeButton");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PSDKRisk.PCPaperRiskVerifyUI.TextBoxInputCodeChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    Text                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPCPaperRiskVerifyUI::TextBoxInputCodeChanged(const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCPaperRiskVerifyUI", "TextBoxInputCodeChanged");

	Params::PCPaperRiskVerifyUI_TextBoxInputCodeChanged Parms{};

	Parms.Text = std::move(Text);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PSDKRisk.PCPaperRiskVerifyUI.TextBoxInputMobileChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    Text                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPCPaperRiskVerifyUI::TextBoxInputMobileChanged(const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCPaperRiskVerifyUI", "TextBoxInputMobileChanged");

	Params::PCPaperRiskVerifyUI_TextBoxInputMobileChanged Parms{};

	Parms.Text = std::move(Text);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

