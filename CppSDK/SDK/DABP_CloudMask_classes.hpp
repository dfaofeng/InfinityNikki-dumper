﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DABP_CloudMask

#include "Basic.hpp"

#include "ST_CloudMask_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DABP_CloudMask.DABP_CloudMask_C
// 0x0010 (0x0040 - 0x0030)
class UDABP_CloudMask_C final : public UPrimaryDataAsset
{
public:
	TArray<struct FST_CloudMask>                  CloudMaskStructure;                                // 0x0030(0x0010)(Edit, BlueprintVisible)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DABP_CloudMask_C">();
	}
	static class UDABP_CloudMask_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDABP_CloudMask_C>();
	}
};
static_assert(alignof(UDABP_CloudMask_C) == 0x000008, "Wrong alignment on UDABP_CloudMask_C");
static_assert(sizeof(UDABP_CloudMask_C) == 0x000040, "Wrong size on UDABP_CloudMask_C");
static_assert(offsetof(UDABP_CloudMask_C, CloudMaskStructure) == 0x000030, "Member 'UDABP_CloudMask_C::CloudMaskStructure' has a wrong offset!");

}

