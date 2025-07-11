﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModularGameplay

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK
{

// Enum ModularGameplay.EGameFrameworkAddComponentFlags
// NumValues: 0x0005
enum class EGameFrameworkAddComponentFlags : uint8
{
	None                                     = 0,
	AddUnique                                = 1,
	AddIfNotChild                            = 2,
	UseAutoGeneratedName                     = 4,
	EGameFrameworkAddComponentFlags_MAX      = 5,
};

// ScriptStruct ModularGameplay.ActorInitStateChangedParams
// 0x0020 (0x0020 - 0x0000)
struct FActorInitStateChangedParams final
{
public:
	class AActor*                                 OwningActor;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   FeatureName;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                Implementer;                                       // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           FeatureState;                                      // 0x0018(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FActorInitStateChangedParams) == 0x000008, "Wrong alignment on FActorInitStateChangedParams");
static_assert(sizeof(FActorInitStateChangedParams) == 0x000020, "Wrong size on FActorInitStateChangedParams");
static_assert(offsetof(FActorInitStateChangedParams, OwningActor) == 0x000000, "Member 'FActorInitStateChangedParams::OwningActor' has a wrong offset!");
static_assert(offsetof(FActorInitStateChangedParams, FeatureName) == 0x000008, "Member 'FActorInitStateChangedParams::FeatureName' has a wrong offset!");
static_assert(offsetof(FActorInitStateChangedParams, Implementer) == 0x000010, "Member 'FActorInitStateChangedParams::Implementer' has a wrong offset!");
static_assert(offsetof(FActorInitStateChangedParams, FeatureState) == 0x000018, "Member 'FActorInitStateChangedParams::FeatureState' has a wrong offset!");

}

