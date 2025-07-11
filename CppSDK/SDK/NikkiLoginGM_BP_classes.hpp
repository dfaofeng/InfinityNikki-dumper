﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NikkiLoginGM_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NikkiLoginGM_BP.NikkiLoginGM_BP_C
// 0x0008 (0x0450 - 0x0448)
class ANikkiLoginGM_BP_C final : public AGameModeBase
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NikkiLoginGM_BP_C">();
	}
	static class ANikkiLoginGM_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANikkiLoginGM_BP_C>();
	}
};
static_assert(alignof(ANikkiLoginGM_BP_C) == 0x000008, "Wrong alignment on ANikkiLoginGM_BP_C");
static_assert(sizeof(ANikkiLoginGM_BP_C) == 0x000450, "Wrong size on ANikkiLoginGM_BP_C");
static_assert(offsetof(ANikkiLoginGM_BP_C, DefaultSceneRoot) == 0x000448, "Member 'ANikkiLoginGM_BP_C::DefaultSceneRoot' has a wrong offset!");

}

