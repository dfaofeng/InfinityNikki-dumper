﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Nikki_JumpPlunge_2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GA_AbilityMontageBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Nikki_JumpPlunge_2.GA_Nikki_JumpPlunge_2_C
// 0x0040 (0x05D8 - 0x0598)
class UGA_Nikki_JumpPlunge_2_C final : public UGA_AbilityMontageBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Nikki_JumpPlunge_2_C;            // 0x0598(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           PlayAM;                                            // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         CrashLimitHeight;                                  // 0x05A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StartCheckHeight;                                  // 0x05AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         WaterEffect;                                       // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        MaxDuration;                                       // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TraceLength;                                       // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SplashIntensityCurve;                              // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           BigRangeTag;                                       // 0x05D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Nikki_JumpPlunge_2(int32 EntryPoint);
	void K2_ActivateAbility();

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Nikki_JumpPlunge_2_C">();
	}
	static class UGA_Nikki_JumpPlunge_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Nikki_JumpPlunge_2_C>();
	}
};
static_assert(alignof(UGA_Nikki_JumpPlunge_2_C) == 0x000008, "Wrong alignment on UGA_Nikki_JumpPlunge_2_C");
static_assert(sizeof(UGA_Nikki_JumpPlunge_2_C) == 0x0005D8, "Wrong size on UGA_Nikki_JumpPlunge_2_C");
static_assert(offsetof(UGA_Nikki_JumpPlunge_2_C, UberGraphFrame_GA_Nikki_JumpPlunge_2_C) == 0x000598, "Member 'UGA_Nikki_JumpPlunge_2_C::UberGraphFrame_GA_Nikki_JumpPlunge_2_C' has a wrong offset!");
static_assert(offsetof(UGA_Nikki_JumpPlunge_2_C, PlayAM) == 0x0005A0, "Member 'UGA_Nikki_JumpPlunge_2_C::PlayAM' has a wrong offset!");
static_assert(offsetof(UGA_Nikki_JumpPlunge_2_C, CrashLimitHeight) == 0x0005A8, "Member 'UGA_Nikki_JumpPlunge_2_C::CrashLimitHeight' has a wrong offset!");
static_assert(offsetof(UGA_Nikki_JumpPlunge_2_C, StartCheckHeight) == 0x0005AC, "Member 'UGA_Nikki_JumpPlunge_2_C::StartCheckHeight' has a wrong offset!");
static_assert(offsetof(UGA_Nikki_JumpPlunge_2_C, WaterEffect) == 0x0005B0, "Member 'UGA_Nikki_JumpPlunge_2_C::WaterEffect' has a wrong offset!");
static_assert(offsetof(UGA_Nikki_JumpPlunge_2_C, MaxDuration) == 0x0005B8, "Member 'UGA_Nikki_JumpPlunge_2_C::MaxDuration' has a wrong offset!");
static_assert(offsetof(UGA_Nikki_JumpPlunge_2_C, TraceLength) == 0x0005C0, "Member 'UGA_Nikki_JumpPlunge_2_C::TraceLength' has a wrong offset!");
static_assert(offsetof(UGA_Nikki_JumpPlunge_2_C, SplashIntensityCurve) == 0x0005C8, "Member 'UGA_Nikki_JumpPlunge_2_C::SplashIntensityCurve' has a wrong offset!");
static_assert(offsetof(UGA_Nikki_JumpPlunge_2_C, BigRangeTag) == 0x0005D0, "Member 'UGA_Nikki_JumpPlunge_2_C::BigRangeTag' has a wrong offset!");

}

