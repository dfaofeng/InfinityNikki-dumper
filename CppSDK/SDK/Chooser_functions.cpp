﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Chooser

#include "Basic.hpp"

#include "Chooser_classes.hpp"
#include "Chooser_parameters.hpp"


namespace SDK
{

// Function Chooser.ChooserTable.ResultAssetFilter
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// const struct FAssetData&                AssetData                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChooserTable::ResultAssetFilter(const struct FAssetData& AssetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChooserTable", "ResultAssetFilter");

	Params::ChooserTable_ResultAssetFilter Parms{};

	Parms.AssetData = std::move(AssetData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Chooser.ChooserFunctionLibrary.AddChooserObjectInput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChooserEvaluationContext&       Context                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                          Object                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChooserFunctionLibrary::AddChooserObjectInput(struct FChooserEvaluationContext& Context, class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChooserFunctionLibrary", "AddChooserObjectInput");

	Params::ChooserFunctionLibrary_AddChooserObjectInput Parms{};

	Parms.Context = std::move(Context);
	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Context = std::move(Parms.Context);
}


// Function Chooser.ChooserFunctionLibrary.AddChooserStructInput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChooserEvaluationContext&       Context                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChooserFunctionLibrary::AddChooserStructInput(struct FChooserEvaluationContext& Context, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChooserFunctionLibrary", "AddChooserStructInput");

	Params::ChooserFunctionLibrary_AddChooserStructInput Parms{};

	Parms.Context = std::move(Context);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Context = std::move(Parms.Context);
}


// Function Chooser.ChooserFunctionLibrary.EvaluateChooser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class UObject*                    ContextObject                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class UChooserTable*              ChooserTable                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>              ObjectClass                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UChooserFunctionLibrary::EvaluateChooser(const class UObject* ContextObject, const class UChooserTable* ChooserTable, TSubclassOf<class UObject> ObjectClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChooserFunctionLibrary", "EvaluateChooser");

	Params::ChooserFunctionLibrary_EvaluateChooser Parms{};

	Parms.ContextObject = ContextObject;
	Parms.ChooserTable = ChooserTable;
	Parms.ObjectClass = ObjectClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Chooser.ChooserFunctionLibrary.EvaluateChooserMulti
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class UObject*                    ContextObject                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class UChooserTable*              ChooserTable                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>              ObjectClass                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UChooserFunctionLibrary::EvaluateChooserMulti(const class UObject* ContextObject, const class UChooserTable* ChooserTable, TSubclassOf<class UObject> ObjectClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChooserFunctionLibrary", "EvaluateChooserMulti");

	Params::ChooserFunctionLibrary_EvaluateChooserMulti Parms{};

	Parms.ContextObject = ContextObject;
	Parms.ChooserTable = ChooserTable;
	Parms.ObjectClass = ObjectClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Chooser.ChooserFunctionLibrary.EvaluateObjectChooserBase
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChooserEvaluationContext&       Context                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// const struct FInstancedStruct&          ObjectChooser                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>              ObjectClass                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bResultIsClass                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UChooserFunctionLibrary::EvaluateObjectChooserBase(struct FChooserEvaluationContext& Context, const struct FInstancedStruct& ObjectChooser, TSubclassOf<class UObject> ObjectClass, bool bResultIsClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChooserFunctionLibrary", "EvaluateObjectChooserBase");

	Params::ChooserFunctionLibrary_EvaluateObjectChooserBase Parms{};

	Parms.Context = std::move(Context);
	Parms.ObjectChooser = std::move(ObjectChooser);
	Parms.ObjectClass = ObjectClass;
	Parms.bResultIsClass = bResultIsClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Context = std::move(Parms.Context);

	return Parms.ReturnValue;
}


// Function Chooser.ChooserFunctionLibrary.EvaluateObjectChooserBaseMulti
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChooserEvaluationContext&       Context                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// const struct FInstancedStruct&          ObjectChooser                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>              ObjectClass                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bResultIsClass                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UChooserFunctionLibrary::EvaluateObjectChooserBaseMulti(struct FChooserEvaluationContext& Context, const struct FInstancedStruct& ObjectChooser, TSubclassOf<class UObject> ObjectClass, bool bResultIsClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChooserFunctionLibrary", "EvaluateObjectChooserBaseMulti");

	Params::ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti Parms{};

	Parms.Context = std::move(Context);
	Parms.ObjectChooser = std::move(ObjectChooser);
	Parms.ObjectClass = ObjectClass;
	Parms.bResultIsClass = bResultIsClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Context = std::move(Parms.Context);

	return Parms.ReturnValue;
}


// Function Chooser.ChooserFunctionLibrary.EvaluateSoftChooser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// const class UObject*                    ContextObject                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class UChooserTable*              ChooserTable                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>              ObjectClass                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UObject>           ReturnValue                                            (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UObject> UChooserFunctionLibrary::EvaluateSoftChooser(const class UObject* ContextObject, const class UChooserTable* ChooserTable, TSubclassOf<class UObject> ObjectClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChooserFunctionLibrary", "EvaluateSoftChooser");

	Params::ChooserFunctionLibrary_EvaluateSoftChooser Parms{};

	Parms.ContextObject = ContextObject;
	Parms.ChooserTable = ChooserTable;
	Parms.ObjectClass = ObjectClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Chooser.ChooserFunctionLibrary.EvaluateSoftObjectChooserBase
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChooserEvaluationContext&       Context                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// const struct FInstancedStruct&          ObjectChooser                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>              ObjectClass                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bResultIsClass                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UObject>           ReturnValue                                            (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UObject> UChooserFunctionLibrary::EvaluateSoftObjectChooserBase(struct FChooserEvaluationContext& Context, const struct FInstancedStruct& ObjectChooser, TSubclassOf<class UObject> ObjectClass, bool bResultIsClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChooserFunctionLibrary", "EvaluateSoftObjectChooserBase");

	Params::ChooserFunctionLibrary_EvaluateSoftObjectChooserBase Parms{};

	Parms.Context = std::move(Context);
	Parms.ObjectChooser = std::move(ObjectChooser);
	Parms.ObjectClass = ObjectClass;
	Parms.bResultIsClass = bResultIsClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Context = std::move(Parms.Context);

	return Parms.ReturnValue;
}


// Function Chooser.ChooserFunctionLibrary.GetChooserStructOutput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FChooserEvaluationContext&       Context                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                                   Index_0                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32*                                  Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChooserFunctionLibrary::GetChooserStructOutput(struct FChooserEvaluationContext& Context, int32 Index_0, int32* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChooserFunctionLibrary", "GetChooserStructOutput");

	Params::ChooserFunctionLibrary_GetChooserStructOutput Parms{};

	Parms.Context = std::move(Context);
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Context = std::move(Parms.Context);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function Chooser.ChooserFunctionLibrary.MakeChooserEvaluationContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FChooserEvaluationContext        ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FChooserEvaluationContext UChooserFunctionLibrary::MakeChooserEvaluationContext()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChooserFunctionLibrary", "MakeChooserEvaluationContext");

	Params::ChooserFunctionLibrary_MakeChooserEvaluationContext Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Chooser.ChooserFunctionLibrary.MakeEvaluateChooser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UChooserTable*                    Chooser                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInstancedStruct                 ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInstancedStruct UChooserFunctionLibrary::MakeEvaluateChooser(class UChooserTable* Chooser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChooserFunctionLibrary", "MakeEvaluateChooser");

	Params::ChooserFunctionLibrary_MakeEvaluateChooser Parms{};

	Parms.Chooser = Chooser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

