﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraInputModify

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CameraInputModify.BP_CameraInputModify_C
// 0x00A0 (0x00D0 - 0x0030)
class UBP_CameraInputModify_C final : public UPrimaryDataAsset
{
public:
	TMap<int32, double>                           CameraHInputScale;                                 // 0x0030(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, double>                           CameraVInputScale;                                 // 0x0080(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraInputModify_C">();
	}
	static class UBP_CameraInputModify_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CameraInputModify_C>();
	}
};
static_assert(alignof(UBP_CameraInputModify_C) == 0x000008, "Wrong alignment on UBP_CameraInputModify_C");
static_assert(sizeof(UBP_CameraInputModify_C) == 0x0000D0, "Wrong size on UBP_CameraInputModify_C");
static_assert(offsetof(UBP_CameraInputModify_C, CameraHInputScale) == 0x000030, "Member 'UBP_CameraInputModify_C::CameraHInputScale' has a wrong offset!");
static_assert(offsetof(UBP_CameraInputModify_C, CameraVInputScale) == 0x000080, "Member 'UBP_CameraInputModify_C::CameraVInputScale' has a wrong offset!");

}

