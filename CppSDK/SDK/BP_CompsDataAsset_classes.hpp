﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CompsDataAsset

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CompsDataAsset.BP_CompsDataAsset_C
// 0x0000 (0x0030 - 0x0030)
class UBP_CompsDataAsset_C : public UPrimaryDataAsset
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CompsDataAsset_C">();
	}
	static class UBP_CompsDataAsset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CompsDataAsset_C>();
	}
};
static_assert(alignof(UBP_CompsDataAsset_C) == 0x000008, "Wrong alignment on UBP_CompsDataAsset_C");
static_assert(sizeof(UBP_CompsDataAsset_C) == 0x000030, "Wrong size on UBP_CompsDataAsset_C");

}

