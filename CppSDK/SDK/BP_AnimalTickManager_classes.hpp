﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimalTickManager

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AnimalTickManager.BP_AnimalTickManager_C
// 0x0010 (0x0038 - 0x0028)
class UBP_AnimalTickManager_C final : public UObject
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsTickEnabled;                                    // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSelfActive;                                     // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateIsSelfActive();
	void PostOwnerActorSignificanceChanged(class AActor* Actor, float Significance, float TickInterval, bool TickPaused, ESignificanceLevel SignificanceLevel);
	void NotifyOwnerActorTickEnabled(bool bEnabled);
	void Init(class AActor* Owner);
	void ForceSetIsSelfActive(bool bNewActive);
	void DeInit();
	void BP_IsGlobalAnimalTickManagerActive(bool* bActive);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimalTickManager_C">();
	}
	static class UBP_AnimalTickManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AnimalTickManager_C>();
	}
};
static_assert(alignof(UBP_AnimalTickManager_C) == 0x000008, "Wrong alignment on UBP_AnimalTickManager_C");
static_assert(sizeof(UBP_AnimalTickManager_C) == 0x000038, "Wrong size on UBP_AnimalTickManager_C");
static_assert(offsetof(UBP_AnimalTickManager_C, OwnerActor) == 0x000028, "Member 'UBP_AnimalTickManager_C::OwnerActor' has a wrong offset!");
static_assert(offsetof(UBP_AnimalTickManager_C, bIsTickEnabled) == 0x000030, "Member 'UBP_AnimalTickManager_C::bIsTickEnabled' has a wrong offset!");
static_assert(offsetof(UBP_AnimalTickManager_C, bIsSelfActive) == 0x000031, "Member 'UBP_AnimalTickManager_C::bIsSelfActive' has a wrong offset!");

}

