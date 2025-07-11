﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_X6_UIPFInteractor_Foliage

#include "Basic.hpp"

#include "BP_UIPFInteractor_Foliage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_X6_UIPFInteractor_Foliage.BP_X6_UIPFInteractor_Foliage_C
// 0x0000 (0x0360 - 0x0360)
class UBP_X6_UIPFInteractor_Foliage_C final : public UBP_UIPFInteractor_Foliage_C
{
public:
	class AUIPFManager* GetUIPFManagerToRegister();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_X6_UIPFInteractor_Foliage_C">();
	}
	static class UBP_X6_UIPFInteractor_Foliage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_X6_UIPFInteractor_Foliage_C>();
	}
};
static_assert(alignof(UBP_X6_UIPFInteractor_Foliage_C) == 0x000010, "Wrong alignment on UBP_X6_UIPFInteractor_Foliage_C");
static_assert(sizeof(UBP_X6_UIPFInteractor_Foliage_C) == 0x000360, "Wrong size on UBP_X6_UIPFInteractor_Foliage_C");

}

