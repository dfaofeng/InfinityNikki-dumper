﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GyroControlConfig

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GyroControlConfig.BP_GyroControlConfig_C
// 0x00C0 (0x00F0 - 0x0030)
class UBP_GyroControlConfig_C final : public UPrimaryDataAsset
{
public:
	double                                        YawRotateDeadZone;                                 // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PitchRotateDeadZone;                               // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, double>                           YawRotateSpeedMap;                                 // 0x0040(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, double>                           PitchRotateSpeedMap;                               // 0x0090(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCurveFloat*                            PitchRotateRateScaleCurve;                         // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            YawRotateRateScaleCurve;                           // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GyroControlConfig_C">();
	}
	static class UBP_GyroControlConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GyroControlConfig_C>();
	}
};
static_assert(alignof(UBP_GyroControlConfig_C) == 0x000008, "Wrong alignment on UBP_GyroControlConfig_C");
static_assert(sizeof(UBP_GyroControlConfig_C) == 0x0000F0, "Wrong size on UBP_GyroControlConfig_C");
static_assert(offsetof(UBP_GyroControlConfig_C, YawRotateDeadZone) == 0x000030, "Member 'UBP_GyroControlConfig_C::YawRotateDeadZone' has a wrong offset!");
static_assert(offsetof(UBP_GyroControlConfig_C, PitchRotateDeadZone) == 0x000038, "Member 'UBP_GyroControlConfig_C::PitchRotateDeadZone' has a wrong offset!");
static_assert(offsetof(UBP_GyroControlConfig_C, YawRotateSpeedMap) == 0x000040, "Member 'UBP_GyroControlConfig_C::YawRotateSpeedMap' has a wrong offset!");
static_assert(offsetof(UBP_GyroControlConfig_C, PitchRotateSpeedMap) == 0x000090, "Member 'UBP_GyroControlConfig_C::PitchRotateSpeedMap' has a wrong offset!");
static_assert(offsetof(UBP_GyroControlConfig_C, PitchRotateRateScaleCurve) == 0x0000E0, "Member 'UBP_GyroControlConfig_C::PitchRotateRateScaleCurve' has a wrong offset!");
static_assert(offsetof(UBP_GyroControlConfig_C, YawRotateRateScaleCurve) == 0x0000E8, "Member 'UBP_GyroControlConfig_C::YawRotateRateScaleCurve' has a wrong offset!");

}

