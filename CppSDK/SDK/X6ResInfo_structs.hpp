﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: X6ResInfo

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct X6ResInfo.X6ResStruct
// 0x0038 (0x0038 - 0x0000)
struct FX6ResStruct final
{
public:
	TSoftObjectPtr<class UObject>                 Object;                                            // 0x0000(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         Path;                                              // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FX6ResStruct) == 0x000008, "Wrong alignment on FX6ResStruct");
static_assert(sizeof(FX6ResStruct) == 0x000038, "Wrong size on FX6ResStruct");
static_assert(offsetof(FX6ResStruct, Object) == 0x000000, "Member 'FX6ResStruct::Object' has a wrong offset!");
static_assert(offsetof(FX6ResStruct, Path) == 0x000028, "Member 'FX6ResStruct::Path' has a wrong offset!");

}

