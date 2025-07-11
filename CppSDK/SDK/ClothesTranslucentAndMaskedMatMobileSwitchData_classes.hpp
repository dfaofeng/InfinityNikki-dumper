﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothesTranslucentAndMaskedMatMobileSwitchData

#include "Basic.hpp"

#include "Struct_ClothesMobileMatSwitchPair_structs.hpp"
#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ClothesTranslucentAndMaskedMatMobileSwitchData.ClothesTranslucentAndMaskedMatMobileSwitchData_C
// 0x0010 (0x0038 - 0x0028)
class UClothesTranslucentAndMaskedMatMobileSwitchData_C final : public UX6ClothesTranslucentAndMaskedMatMobileSwitchData
{
public:
	TArray<struct FStruct_ClothesMobileMatSwitchPair> MatPair;                                       // 0x0028(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClothesTranslucentAndMaskedMatMobileSwitchData_C">();
	}
	static class UClothesTranslucentAndMaskedMatMobileSwitchData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothesTranslucentAndMaskedMatMobileSwitchData_C>();
	}
};
static_assert(alignof(UClothesTranslucentAndMaskedMatMobileSwitchData_C) == 0x000008, "Wrong alignment on UClothesTranslucentAndMaskedMatMobileSwitchData_C");
static_assert(sizeof(UClothesTranslucentAndMaskedMatMobileSwitchData_C) == 0x000038, "Wrong size on UClothesTranslucentAndMaskedMatMobileSwitchData_C");
static_assert(offsetof(UClothesTranslucentAndMaskedMatMobileSwitchData_C, MatPair) == 0x000028, "Member 'UClothesTranslucentAndMaskedMatMobileSwitchData_C::MatPair' has a wrong offset!");

}

