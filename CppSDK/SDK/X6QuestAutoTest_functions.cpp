﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: X6QuestAutoTest

#include "Basic.hpp"

#include "X6QuestAutoTest_classes.hpp"
#include "X6QuestAutoTest_parameters.hpp"


namespace SDK
{

// Function X6QuestAutoTest.X6QuestAutoRunner.AddRunnerLog
// (Final, Native, Public)
// Parameters:
// const class FString&                    LogMessage                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ErrorLevel                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UX6QuestAutoRunner::AddRunnerLog(const class FString& LogMessage, int32 ErrorLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("X6QuestAutoRunner", "AddRunnerLog");

	Params::X6QuestAutoRunner_AddRunnerLog Parms{};

	Parms.LogMessage = std::move(LogMessage);
	Parms.ErrorLevel = ErrorLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function X6QuestAutoTest.X6QuestAutoRunner.OpenQuestGraph
// (Final, Native, Public)
// Parameters:
// const class FString&                    GraphAssetName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                                   ObjectiveID                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UX6QuestAutoRunner::OpenQuestGraph(const class FString& GraphAssetName, int64 ObjectiveID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("X6QuestAutoRunner", "OpenQuestGraph");

	Params::X6QuestAutoRunner_OpenQuestGraph Parms{};

	Parms.GraphAssetName = std::move(GraphAssetName);
	Parms.ObjectiveID = ObjectiveID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function X6QuestAutoTest.X6QuestAutoRunner.StartAutoTest
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bEnableMemoryLeakDetection                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UX6QuestAutoRunner::StartAutoTest(bool bEnableMemoryLeakDetection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("X6QuestAutoRunner", "StartAutoTest");

	Params::X6QuestAutoRunner_StartAutoTest Parms{};

	Parms.bEnableMemoryLeakDetection = bEnableMemoryLeakDetection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function X6QuestAutoTest.X6QuestAutoRunner.StopAutoTest
// (Native, Event, Public, BlueprintEvent)

void UX6QuestAutoRunner::StopAutoTest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("X6QuestAutoRunner", "StopAutoTest");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

