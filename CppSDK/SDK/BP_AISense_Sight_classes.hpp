﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AISense_Sight

#include "Basic.hpp"

#include "X6Game_structs.hpp"
#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AISense_Sight.BP_AISense_Sight_C
// 0x0000 (0x0170 - 0x0170)
class UBP_AISense_Sight_C final : public UX6AISense_Sight
{
public:
	bool IsInterestedTarget(const class AActor* ListenerActor, class AActor* TargetActor, class UX6AISenseConfig_Sight* Config);
	bool ReportStimulus(const class AActor* ListenerActor, class AActor* TargetActor, class UX6AISenseConfig_Sight* Config, EX6AISenseSightResultType ResultType, bool bLastResult);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AISense_Sight_C">();
	}
	static class UBP_AISense_Sight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AISense_Sight_C>();
	}
};
static_assert(alignof(UBP_AISense_Sight_C) == 0x000008, "Wrong alignment on UBP_AISense_Sight_C");
static_assert(sizeof(UBP_AISense_Sight_C) == 0x000170, "Wrong size on UBP_AISense_Sight_C");

}

