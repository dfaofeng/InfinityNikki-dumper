﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlendStack

#include "Basic.hpp"

#include "BlendStack_classes.hpp"
#include "BlendStack_parameters.hpp"


namespace SDK
{

// Function BlendStack.BlendStackAnimNodeLibrary.BlendTo
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// const struct FAnimUpdateContext&        Context                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// const struct FBlendStackAnimNodeReference&BlendStackNode                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UAnimationAsset*                  AnimationAsset                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   AnimationTime                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bLoop                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bMirrored                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   BlendTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FVector&                   BlendParameters                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   WantedPlayRate                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ActivationDelay                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlendStackAnimNodeLibrary::BlendTo(const struct FAnimUpdateContext& Context, const struct FBlendStackAnimNodeReference& BlendStackNode, class UAnimationAsset* AnimationAsset, float AnimationTime, bool bLoop, bool bMirrored, float BlendTime, const struct FVector& BlendParameters, float WantedPlayRate, float ActivationDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendStackAnimNodeLibrary", "BlendTo");

	Params::BlendStackAnimNodeLibrary_BlendTo Parms{};

	Parms.Context = std::move(Context);
	Parms.BlendStackNode = std::move(BlendStackNode);
	Parms.AnimationAsset = AnimationAsset;
	Parms.AnimationTime = AnimationTime;
	Parms.bLoop = bLoop;
	Parms.bMirrored = bMirrored;
	Parms.BlendTime = BlendTime;
	Parms.BlendParameters = std::move(BlendParameters);
	Parms.WantedPlayRate = WantedPlayRate;
	Parms.ActivationDelay = ActivationDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BlendStack.BlendStackAnimNodeLibrary.ConvertToBlendStackNode
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FAnimNodeReference&        Node                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// EAnimNodeReferenceConversionResult*     Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlendStackAnimNodeReference     ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FBlendStackAnimNodeReference UBlendStackAnimNodeLibrary::ConvertToBlendStackNode(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendStackAnimNodeLibrary", "ConvertToBlendStackNode");

	Params::BlendStackAnimNodeLibrary_ConvertToBlendStackNode Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}


// Function BlendStack.BlendStackAnimNodeLibrary.ConvertToBlendStackNodePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// const struct FAnimNodeReference&        Node                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FBlendStackAnimNodeReference*    BlendStackNode                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool*                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlendStackAnimNodeLibrary::ConvertToBlendStackNodePure(const struct FAnimNodeReference& Node, struct FBlendStackAnimNodeReference* BlendStackNode, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendStackAnimNodeLibrary", "ConvertToBlendStackNodePure");

	Params::BlendStackAnimNodeLibrary_ConvertToBlendStackNodePure Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (BlendStackNode != nullptr)
		*BlendStackNode = std::move(Parms.BlendStackNode);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BlendStack.BlendStackAnimNodeLibrary.ForceBlendNextUpdate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FBlendStackAnimNodeReference&BlendStackNode                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UBlendStackAnimNodeLibrary::ForceBlendNextUpdate(const struct FBlendStackAnimNodeReference& BlendStackNode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendStackAnimNodeLibrary", "ForceBlendNextUpdate");

	Params::BlendStackAnimNodeLibrary_ForceBlendNextUpdate Parms{};

	Parms.BlendStackNode = std::move(BlendStackNode);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BlendStack.BlendStackAnimNodeLibrary.GetCurrentBlendStackAnimAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// const struct FAnimNodeReference&        Node                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UAnimationAsset*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimationAsset* UBlendStackAnimNodeLibrary::GetCurrentBlendStackAnimAsset(const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendStackAnimNodeLibrary", "GetCurrentBlendStackAnimAsset");

	Params::BlendStackAnimNodeLibrary_GetCurrentBlendStackAnimAsset Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function BlendStack.BlendStackAnimNodeLibrary.GetCurrentBlendStackAnimAssetTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// const struct FAnimNodeReference&        Node                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBlendStackAnimNodeLibrary::GetCurrentBlendStackAnimAssetTime(const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendStackAnimNodeLibrary", "GetCurrentBlendStackAnimAssetTime");

	Params::BlendStackAnimNodeLibrary_GetCurrentBlendStackAnimAssetTime Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function BlendStack.BlendStackInputAnimNodeLibrary.ConvertToBlendStackInputNode
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FAnimNodeReference&        Node                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// EAnimNodeReferenceConversionResult*     Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlendStackInputAnimNodeReferenceReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FBlendStackInputAnimNodeReference UBlendStackInputAnimNodeLibrary::ConvertToBlendStackInputNode(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendStackInputAnimNodeLibrary", "ConvertToBlendStackInputNode");

	Params::BlendStackInputAnimNodeLibrary_ConvertToBlendStackInputNode Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}


// Function BlendStack.BlendStackInputAnimNodeLibrary.ConvertToBlendStackInputNodePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// const struct FAnimNodeReference&        Node                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FBlendStackInputAnimNodeReference*BlendStackInputNode                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool*                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlendStackInputAnimNodeLibrary::ConvertToBlendStackInputNodePure(const struct FAnimNodeReference& Node, struct FBlendStackInputAnimNodeReference* BlendStackInputNode, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendStackInputAnimNodeLibrary", "ConvertToBlendStackInputNodePure");

	Params::BlendStackInputAnimNodeLibrary_ConvertToBlendStackInputNodePure Parms{};

	Parms.Node = std::move(Node);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (BlendStackInputNode != nullptr)
		*BlendStackInputNode = std::move(Parms.BlendStackInputNode);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BlendStack.BlendStackInputAnimNodeLibrary.GetProperties
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const struct FBlendStackInputAnimNodeReference&BlendStackInputNode                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UAnimationAsset**                 AnimationAsset                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                                  AccumulatedTime                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlendStackInputAnimNodeLibrary::GetProperties(const struct FBlendStackInputAnimNodeReference& BlendStackInputNode, class UAnimationAsset** AnimationAsset, float* AccumulatedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlendStackInputAnimNodeLibrary", "GetProperties");

	Params::BlendStackInputAnimNodeLibrary_GetProperties Parms{};

	Parms.BlendStackInputNode = std::move(BlendStackInputNode);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (AnimationAsset != nullptr)
		*AnimationAsset = Parms.AnimationAsset;

	if (AccumulatedTime != nullptr)
		*AccumulatedTime = Parms.AccumulatedTime;
}

}

