﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrefabAsset

#include "Basic.hpp"


namespace SDK
{

// Enum PrefabAsset.EPrefabVariantRuleType
// NumValues: 0x0002
enum class EPrefabVariantRuleType : uint8
{
	SkipProp                                 = 0,
	EPrefabVariantRuleType_MAX               = 1,
};

// Enum PrefabAsset.EPrefabVisualizerType
// NumValues: 0x0003
enum class EPrefabVisualizerType : uint8
{
	WireBox                                  = 0,
	WireSphere                               = 1,
	EPrefabVisualizerType_MAX                = 2,
};

// Enum PrefabAsset.EPTUITheme
// NumValues: 0x0003
enum class EPTUITheme : uint32
{
	Default                                  = 0,
	Dark                                     = 1,
	EPTUITheme_MAX                           = 2,
};

// ScriptStruct PrefabAsset.PrefabVariantRule
// 0x0020 (0x0020 - 0x0000)
struct FPrefabVariantRule final
{
public:
	class FName                                   Scope;                                             // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Rule;                                              // 0x0008(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPrefabVariantRuleType                        RuleType;                                          // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnable;                                           // 0x0019(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPrefabVariantRule) == 0x000008, "Wrong alignment on FPrefabVariantRule");
static_assert(sizeof(FPrefabVariantRule) == 0x000020, "Wrong size on FPrefabVariantRule");
static_assert(offsetof(FPrefabVariantRule, Scope) == 0x000000, "Member 'FPrefabVariantRule::Scope' has a wrong offset!");
static_assert(offsetof(FPrefabVariantRule, Rule) == 0x000008, "Member 'FPrefabVariantRule::Rule' has a wrong offset!");
static_assert(offsetof(FPrefabVariantRule, RuleType) == 0x000018, "Member 'FPrefabVariantRule::RuleType' has a wrong offset!");
static_assert(offsetof(FPrefabVariantRule, bEnable) == 0x000019, "Member 'FPrefabVariantRule::bEnable' has a wrong offset!");

}

