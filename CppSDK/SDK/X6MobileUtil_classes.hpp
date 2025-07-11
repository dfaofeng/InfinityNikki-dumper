﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: X6MobileUtil

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class X6MobileUtil.SaveToAlbumOperation
// 0x0040 (0x0070 - 0x0030)
class USaveToAlbumOperation final : public UBlueprintAsyncActionBase
{
public:
	uint8                                         Pad_30[0x30];                                      // 0x0030(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  Finished;                                          // 0x0060(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SaveToAlbumOperation">();
	}
	static class USaveToAlbumOperation* GetDefaultObj()
	{
		return GetDefaultObjImpl<USaveToAlbumOperation>();
	}
};
static_assert(alignof(USaveToAlbumOperation) == 0x000008, "Wrong alignment on USaveToAlbumOperation");
static_assert(sizeof(USaveToAlbumOperation) == 0x000070, "Wrong size on USaveToAlbumOperation");
static_assert(offsetof(USaveToAlbumOperation, Finished) == 0x000060, "Member 'USaveToAlbumOperation::Finished' has a wrong offset!");

// Class X6MobileUtil.X6MobileBlueprintUtil
// 0x0000 (0x0028 - 0x0028)
class UX6MobileBlueprintUtil final : public UBlueprintFunctionLibrary
{
public:
	static double GetMobilePlatformMilliseconds();
	static bool IfConnectingPlayStationGamePad();
	static class USaveToAlbumOperation* SaveToAlbumOperation(class UObject* WorldContextObject, const class FString& InDirPath, const class FString& Name_0, const class FString& Description);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"X6MobileBlueprintUtil">();
	}
	static class UX6MobileBlueprintUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<UX6MobileBlueprintUtil>();
	}
};
static_assert(alignof(UX6MobileBlueprintUtil) == 0x000008, "Wrong alignment on UX6MobileBlueprintUtil");
static_assert(sizeof(UX6MobileBlueprintUtil) == 0x000028, "Wrong size on UX6MobileBlueprintUtil");

}

