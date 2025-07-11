﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EffectWindDataAsset

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EffectWindDataAsset.BP_EffectWindDataAsset_C
// 0x0028 (0x0058 - 0x0030)
class UBP_EffectWindDataAsset_C final : public UPrimaryDataAsset
{
public:
	class UCurveFloat*                            Curve;                                             // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Radius;                                            // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxForce;                                          // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LifeSpan;                                          // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ParentDestroyExtraLifeSpan;                        // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EffectWindDataAsset_C">();
	}
	static class UBP_EffectWindDataAsset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EffectWindDataAsset_C>();
	}
};
static_assert(alignof(UBP_EffectWindDataAsset_C) == 0x000008, "Wrong alignment on UBP_EffectWindDataAsset_C");
static_assert(sizeof(UBP_EffectWindDataAsset_C) == 0x000058, "Wrong size on UBP_EffectWindDataAsset_C");
static_assert(offsetof(UBP_EffectWindDataAsset_C, Curve) == 0x000030, "Member 'UBP_EffectWindDataAsset_C::Curve' has a wrong offset!");
static_assert(offsetof(UBP_EffectWindDataAsset_C, Radius) == 0x000038, "Member 'UBP_EffectWindDataAsset_C::Radius' has a wrong offset!");
static_assert(offsetof(UBP_EffectWindDataAsset_C, MaxForce) == 0x000040, "Member 'UBP_EffectWindDataAsset_C::MaxForce' has a wrong offset!");
static_assert(offsetof(UBP_EffectWindDataAsset_C, LifeSpan) == 0x000048, "Member 'UBP_EffectWindDataAsset_C::LifeSpan' has a wrong offset!");
static_assert(offsetof(UBP_EffectWindDataAsset_C, ParentDestroyExtraLifeSpan) == 0x000050, "Member 'UBP_EffectWindDataAsset_C::ParentDestroyExtraLifeSpan' has a wrong offset!");

}

