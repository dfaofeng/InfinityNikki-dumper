﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BulletFilterCustomRotatorModifier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BulletFilterCustomRotatorModifier.BP_BulletFilterCustomRotatorModifier_C
// 0x0040 (0x0080 - 0x0040)
class UBP_BulletFilterCustomRotatorModifier_C final : public UX6BulletSimpleBasicModifier
{
public:
	bool                                          bPenetrate;                                        // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ShapeTraceDataAsset_C*              HitTraceShape;                                     // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        FloorAngle;                                        // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TraceDistance;                                     // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      SlopeObjectTypes;                                  // 0x0060(0x0010)(Edit, BlueprintVisible)
	TArray<EObjectTypeQuery>                      TargetObjectTypes;                                 // 0x0070(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	class FString GetModuleName() const;
	void K2_Destroy() const;
	void K2_OnAsyncLoadComplete() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BulletFilterCustomRotatorModifier_C">();
	}
	static class UBP_BulletFilterCustomRotatorModifier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BulletFilterCustomRotatorModifier_C>();
	}
};
static_assert(alignof(UBP_BulletFilterCustomRotatorModifier_C) == 0x000008, "Wrong alignment on UBP_BulletFilterCustomRotatorModifier_C");
static_assert(sizeof(UBP_BulletFilterCustomRotatorModifier_C) == 0x000080, "Wrong size on UBP_BulletFilterCustomRotatorModifier_C");
static_assert(offsetof(UBP_BulletFilterCustomRotatorModifier_C, bPenetrate) == 0x000040, "Member 'UBP_BulletFilterCustomRotatorModifier_C::bPenetrate' has a wrong offset!");
static_assert(offsetof(UBP_BulletFilterCustomRotatorModifier_C, HitTraceShape) == 0x000048, "Member 'UBP_BulletFilterCustomRotatorModifier_C::HitTraceShape' has a wrong offset!");
static_assert(offsetof(UBP_BulletFilterCustomRotatorModifier_C, FloorAngle) == 0x000050, "Member 'UBP_BulletFilterCustomRotatorModifier_C::FloorAngle' has a wrong offset!");
static_assert(offsetof(UBP_BulletFilterCustomRotatorModifier_C, TraceDistance) == 0x000058, "Member 'UBP_BulletFilterCustomRotatorModifier_C::TraceDistance' has a wrong offset!");
static_assert(offsetof(UBP_BulletFilterCustomRotatorModifier_C, SlopeObjectTypes) == 0x000060, "Member 'UBP_BulletFilterCustomRotatorModifier_C::SlopeObjectTypes' has a wrong offset!");
static_assert(offsetof(UBP_BulletFilterCustomRotatorModifier_C, TargetObjectTypes) == 0x000070, "Member 'UBP_BulletFilterCustomRotatorModifier_C::TargetObjectTypes' has a wrong offset!");

}

