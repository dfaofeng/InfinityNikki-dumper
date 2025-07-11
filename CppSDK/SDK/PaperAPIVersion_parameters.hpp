﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PaperAPIVersion

#include "Basic.hpp"


namespace SDK::Params
{

// Function PaperAPIVersion.PaperAPIVersionBlueprintLibrary.GetCurrentAPIVersion
// 0x0010 (0x0010 - 0x0000)
struct PaperAPIVersionBlueprintLibrary_GetCurrentAPIVersion final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperAPIVersionBlueprintLibrary_GetCurrentAPIVersion) == 0x000008, "Wrong alignment on PaperAPIVersionBlueprintLibrary_GetCurrentAPIVersion");
static_assert(sizeof(PaperAPIVersionBlueprintLibrary_GetCurrentAPIVersion) == 0x000010, "Wrong size on PaperAPIVersionBlueprintLibrary_GetCurrentAPIVersion");
static_assert(offsetof(PaperAPIVersionBlueprintLibrary_GetCurrentAPIVersion, ReturnValue) == 0x000000, "Member 'PaperAPIVersionBlueprintLibrary_GetCurrentAPIVersion::ReturnValue' has a wrong offset!");

// Function PaperAPIVersion.PaperAPIVersionBlueprintLibrary.GetCurrentAPIVersionNum
// 0x0008 (0x0008 - 0x0000)
struct PaperAPIVersionBlueprintLibrary_GetCurrentAPIVersionNum final
{
public:
	int64                                         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperAPIVersionBlueprintLibrary_GetCurrentAPIVersionNum) == 0x000008, "Wrong alignment on PaperAPIVersionBlueprintLibrary_GetCurrentAPIVersionNum");
static_assert(sizeof(PaperAPIVersionBlueprintLibrary_GetCurrentAPIVersionNum) == 0x000008, "Wrong size on PaperAPIVersionBlueprintLibrary_GetCurrentAPIVersionNum");
static_assert(offsetof(PaperAPIVersionBlueprintLibrary_GetCurrentAPIVersionNum, ReturnValue) == 0x000000, "Member 'PaperAPIVersionBlueprintLibrary_GetCurrentAPIVersionNum::ReturnValue' has a wrong offset!");

// Function PaperAPIVersion.PaperAPIVersionBlueprintLibrary.ToVersionNum
// 0x0018 (0x0018 - 0x0000)
struct PaperAPIVersionBlueprintLibrary_ToVersionNum final
{
public:
	class FString                                 Ver;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PaperAPIVersionBlueprintLibrary_ToVersionNum) == 0x000008, "Wrong alignment on PaperAPIVersionBlueprintLibrary_ToVersionNum");
static_assert(sizeof(PaperAPIVersionBlueprintLibrary_ToVersionNum) == 0x000018, "Wrong size on PaperAPIVersionBlueprintLibrary_ToVersionNum");
static_assert(offsetof(PaperAPIVersionBlueprintLibrary_ToVersionNum, Ver) == 0x000000, "Member 'PaperAPIVersionBlueprintLibrary_ToVersionNum::Ver' has a wrong offset!");
static_assert(offsetof(PaperAPIVersionBlueprintLibrary_ToVersionNum, ReturnValue) == 0x000010, "Member 'PaperAPIVersionBlueprintLibrary_ToVersionNum::ReturnValue' has a wrong offset!");

}

