﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CalledVehicleInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct BP_CalledVehicleInfo.BP_CalledVehicleInfo
// 0x0090 (0x0090 - 0x0000)
struct FBP_CalledVehicleInfo final
{
public:
	TSoftClassPtr<class UClass>                   VehicleBP_21_140A4E1244082D22F55C158A9FC0C511;     // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	double                                        AutoDestroyTime_28_17234E33472ED072DE0FE0BC04EC056D; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TraceRightOffset_2_EEA20382408E633C6C0C5AA44E749421; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TraceForwardOffset_4_2A43EB134EB7672C46BC80A22DFE34EB; // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TraceUpOffset_6_4EE749624F4C763BCF9347A83D4AC9D4;  // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TraceDownOffset_8_673CAEF94A4A61D959251F800275B7C9; // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PlaceUpOffset_10_F0CFF6FB45943A5AD806ACBA08D29C04; // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceHalfSize_13_F55431354FC7E13CA7BE6EB59C3EC8DF; // 0x0058(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FindFloorTraceOffset_32_670C8C1542C2A96E2603EF8CEC0B084E; // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxPlaceWaterDeep_35_2CB78A44442FECE8C15503B4AC62398C; // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int64>                                 GroupActorIDArray_39_8D9F5D554BA02B9AF4C38B9AFCBDB61A; // 0x0080(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FBP_CalledVehicleInfo) == 0x000008, "Wrong alignment on FBP_CalledVehicleInfo");
static_assert(sizeof(FBP_CalledVehicleInfo) == 0x000090, "Wrong size on FBP_CalledVehicleInfo");
static_assert(offsetof(FBP_CalledVehicleInfo, VehicleBP_21_140A4E1244082D22F55C158A9FC0C511) == 0x000000, "Member 'FBP_CalledVehicleInfo::VehicleBP_21_140A4E1244082D22F55C158A9FC0C511' has a wrong offset!");
static_assert(offsetof(FBP_CalledVehicleInfo, AutoDestroyTime_28_17234E33472ED072DE0FE0BC04EC056D) == 0x000028, "Member 'FBP_CalledVehicleInfo::AutoDestroyTime_28_17234E33472ED072DE0FE0BC04EC056D' has a wrong offset!");
static_assert(offsetof(FBP_CalledVehicleInfo, TraceRightOffset_2_EEA20382408E633C6C0C5AA44E749421) == 0x000030, "Member 'FBP_CalledVehicleInfo::TraceRightOffset_2_EEA20382408E633C6C0C5AA44E749421' has a wrong offset!");
static_assert(offsetof(FBP_CalledVehicleInfo, TraceForwardOffset_4_2A43EB134EB7672C46BC80A22DFE34EB) == 0x000038, "Member 'FBP_CalledVehicleInfo::TraceForwardOffset_4_2A43EB134EB7672C46BC80A22DFE34EB' has a wrong offset!");
static_assert(offsetof(FBP_CalledVehicleInfo, TraceUpOffset_6_4EE749624F4C763BCF9347A83D4AC9D4) == 0x000040, "Member 'FBP_CalledVehicleInfo::TraceUpOffset_6_4EE749624F4C763BCF9347A83D4AC9D4' has a wrong offset!");
static_assert(offsetof(FBP_CalledVehicleInfo, TraceDownOffset_8_673CAEF94A4A61D959251F800275B7C9) == 0x000048, "Member 'FBP_CalledVehicleInfo::TraceDownOffset_8_673CAEF94A4A61D959251F800275B7C9' has a wrong offset!");
static_assert(offsetof(FBP_CalledVehicleInfo, PlaceUpOffset_10_F0CFF6FB45943A5AD806ACBA08D29C04) == 0x000050, "Member 'FBP_CalledVehicleInfo::PlaceUpOffset_10_F0CFF6FB45943A5AD806ACBA08D29C04' has a wrong offset!");
static_assert(offsetof(FBP_CalledVehicleInfo, TraceHalfSize_13_F55431354FC7E13CA7BE6EB59C3EC8DF) == 0x000058, "Member 'FBP_CalledVehicleInfo::TraceHalfSize_13_F55431354FC7E13CA7BE6EB59C3EC8DF' has a wrong offset!");
static_assert(offsetof(FBP_CalledVehicleInfo, FindFloorTraceOffset_32_670C8C1542C2A96E2603EF8CEC0B084E) == 0x000070, "Member 'FBP_CalledVehicleInfo::FindFloorTraceOffset_32_670C8C1542C2A96E2603EF8CEC0B084E' has a wrong offset!");
static_assert(offsetof(FBP_CalledVehicleInfo, MaxPlaceWaterDeep_35_2CB78A44442FECE8C15503B4AC62398C) == 0x000078, "Member 'FBP_CalledVehicleInfo::MaxPlaceWaterDeep_35_2CB78A44442FECE8C15503B4AC62398C' has a wrong offset!");
static_assert(offsetof(FBP_CalledVehicleInfo, GroupActorIDArray_39_8D9F5D554BA02B9AF4C38B9AFCBDB61A) == 0x000080, "Member 'FBP_CalledVehicleInfo::GroupActorIDArray_39_8D9F5D554BA02B9AF4C38B9AFCBDB61A' has a wrong offset!");

}

