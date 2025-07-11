﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FEventMapLevelLoadGroupConfig

#include "Basic.hpp"

#include "FEventMapSingleLevelLoadConfig_structs.hpp"


namespace SDK
{

// UserDefinedStruct FEventMapLevelLoadGroupConfig.FEventMapLevelLoadGroupConfig
// 0x0018 (0x0018 - 0x0000)
struct FFEventMapLevelLoadGroupConfig final
{
public:
	int64                                         GroupID_3_02CC84624C02DCC35550AAB689F84D30;        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFEventMapSingleLevelLoadConfig> LevelConfigs_10_477E884D42715F15EEA52C85D869A989; // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FFEventMapLevelLoadGroupConfig) == 0x000008, "Wrong alignment on FFEventMapLevelLoadGroupConfig");
static_assert(sizeof(FFEventMapLevelLoadGroupConfig) == 0x000018, "Wrong size on FFEventMapLevelLoadGroupConfig");
static_assert(offsetof(FFEventMapLevelLoadGroupConfig, GroupID_3_02CC84624C02DCC35550AAB689F84D30) == 0x000000, "Member 'FFEventMapLevelLoadGroupConfig::GroupID_3_02CC84624C02DCC35550AAB689F84D30' has a wrong offset!");
static_assert(offsetof(FFEventMapLevelLoadGroupConfig, LevelConfigs_10_477E884D42715F15EEA52C85D869A989) == 0x000008, "Member 'FFEventMapLevelLoadGroupConfig::LevelConfigs_10_477E884D42715F15EEA52C85D869A989' has a wrong offset!");

}

