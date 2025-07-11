﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DynamicWeather_Master

#include "Basic.hpp"

#include "S_WeatherState_structs.hpp"


namespace SDK::Params
{

// Function BP_DynamicWeather_Master.BP_DynamicWeather_Master_C.WeatherChangeEvent
// 0x0030 (0x0030 - 0x0000)
struct BP_DynamicWeather_Master_C_WeatherChangeEvent final
{
public:
	struct FS_WeatherState                        packedParams;                                      // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicWeather_Master_C_WeatherChangeEvent) == 0x000008, "Wrong alignment on BP_DynamicWeather_Master_C_WeatherChangeEvent");
static_assert(sizeof(BP_DynamicWeather_Master_C_WeatherChangeEvent) == 0x000030, "Wrong size on BP_DynamicWeather_Master_C_WeatherChangeEvent");
static_assert(offsetof(BP_DynamicWeather_Master_C_WeatherChangeEvent, packedParams) == 0x000000, "Member 'BP_DynamicWeather_Master_C_WeatherChangeEvent::packedParams' has a wrong offset!");

// Function BP_DynamicWeather_Master.BP_DynamicWeather_Master_C.ExecuteUbergraph_BP_DynamicWeather_Master
// 0x0038 (0x0038 - 0x0000)
struct BP_DynamicWeather_Master_C_ExecuteUbergraph_BP_DynamicWeather_Master final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_WeatherState                        K2Node_CustomEvent_packedParams;                   // 0x0008(0x0030)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DynamicWeather_Master_C_ExecuteUbergraph_BP_DynamicWeather_Master) == 0x000008, "Wrong alignment on BP_DynamicWeather_Master_C_ExecuteUbergraph_BP_DynamicWeather_Master");
static_assert(sizeof(BP_DynamicWeather_Master_C_ExecuteUbergraph_BP_DynamicWeather_Master) == 0x000038, "Wrong size on BP_DynamicWeather_Master_C_ExecuteUbergraph_BP_DynamicWeather_Master");
static_assert(offsetof(BP_DynamicWeather_Master_C_ExecuteUbergraph_BP_DynamicWeather_Master, EntryPoint) == 0x000000, "Member 'BP_DynamicWeather_Master_C_ExecuteUbergraph_BP_DynamicWeather_Master::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DynamicWeather_Master_C_ExecuteUbergraph_BP_DynamicWeather_Master, K2Node_CustomEvent_packedParams) == 0x000008, "Member 'BP_DynamicWeather_Master_C_ExecuteUbergraph_BP_DynamicWeather_Master::K2Node_CustomEvent_packedParams' has a wrong offset!");

}

