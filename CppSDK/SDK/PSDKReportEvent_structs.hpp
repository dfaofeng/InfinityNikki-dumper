﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PSDKReportEvent

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct PSDKReportEvent.PSdkUIEventReportModel
// 0x0078 (0x0078 - 0x0000)
struct FPSdkUIEventReportModel final
{
public:
	class FString                                 part_event;                                        // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 modelname;                                         // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 pageName;                                          // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 actionType;                                        // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ElementName;                                       // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         timeOnPages;                                       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 eventResult;                                       // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Extra;                                             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPSdkUIEventReportModel) == 0x000008, "Wrong alignment on FPSdkUIEventReportModel");
static_assert(sizeof(FPSdkUIEventReportModel) == 0x000078, "Wrong size on FPSdkUIEventReportModel");
static_assert(offsetof(FPSdkUIEventReportModel, part_event) == 0x000000, "Member 'FPSdkUIEventReportModel::part_event' has a wrong offset!");
static_assert(offsetof(FPSdkUIEventReportModel, modelname) == 0x000010, "Member 'FPSdkUIEventReportModel::modelname' has a wrong offset!");
static_assert(offsetof(FPSdkUIEventReportModel, pageName) == 0x000020, "Member 'FPSdkUIEventReportModel::pageName' has a wrong offset!");
static_assert(offsetof(FPSdkUIEventReportModel, actionType) == 0x000030, "Member 'FPSdkUIEventReportModel::actionType' has a wrong offset!");
static_assert(offsetof(FPSdkUIEventReportModel, ElementName) == 0x000040, "Member 'FPSdkUIEventReportModel::ElementName' has a wrong offset!");
static_assert(offsetof(FPSdkUIEventReportModel, timeOnPages) == 0x000050, "Member 'FPSdkUIEventReportModel::timeOnPages' has a wrong offset!");
static_assert(offsetof(FPSdkUIEventReportModel, eventResult) == 0x000058, "Member 'FPSdkUIEventReportModel::eventResult' has a wrong offset!");
static_assert(offsetof(FPSdkUIEventReportModel, Extra) == 0x000068, "Member 'FPSdkUIEventReportModel::Extra' has a wrong offset!");

}

