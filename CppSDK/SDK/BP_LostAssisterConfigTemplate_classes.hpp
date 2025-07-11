﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LostAssisterConfigTemplate

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LostAssisterConfigTemplate.BP_LostAssisterConfigTemplate_C
// 0x0060 (0x0090 - 0x0030)
class UBP_LostAssisterConfigTemplate_C final : public UPrimaryDataAsset
{
public:
	double                                        MinStayTime;                                       // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TriggerStayTime;                                   // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TriggerHurtCount;                                  // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TriggerDeathCount;                                 // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 NPCID;                                             // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 DlgName;                                           // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	double                                        WaitInPlacePauseTime;                              // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AcceptSubsidiaryPlatformDistance;                  // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShowLayerDelaySeconds;                             // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DisappearDelaySeconds;                             // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                         FirstLevelSequence;                                // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LostAssisterConfigTemplate_C">();
	}
	static class UBP_LostAssisterConfigTemplate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LostAssisterConfigTemplate_C>();
	}
};
static_assert(alignof(UBP_LostAssisterConfigTemplate_C) == 0x000008, "Wrong alignment on UBP_LostAssisterConfigTemplate_C");
static_assert(sizeof(UBP_LostAssisterConfigTemplate_C) == 0x000090, "Wrong size on UBP_LostAssisterConfigTemplate_C");
static_assert(offsetof(UBP_LostAssisterConfigTemplate_C, MinStayTime) == 0x000030, "Member 'UBP_LostAssisterConfigTemplate_C::MinStayTime' has a wrong offset!");
static_assert(offsetof(UBP_LostAssisterConfigTemplate_C, TriggerStayTime) == 0x000038, "Member 'UBP_LostAssisterConfigTemplate_C::TriggerStayTime' has a wrong offset!");
static_assert(offsetof(UBP_LostAssisterConfigTemplate_C, TriggerHurtCount) == 0x000040, "Member 'UBP_LostAssisterConfigTemplate_C::TriggerHurtCount' has a wrong offset!");
static_assert(offsetof(UBP_LostAssisterConfigTemplate_C, TriggerDeathCount) == 0x000044, "Member 'UBP_LostAssisterConfigTemplate_C::TriggerDeathCount' has a wrong offset!");
static_assert(offsetof(UBP_LostAssisterConfigTemplate_C, NPCID) == 0x000048, "Member 'UBP_LostAssisterConfigTemplate_C::NPCID' has a wrong offset!");
static_assert(offsetof(UBP_LostAssisterConfigTemplate_C, DlgName) == 0x000058, "Member 'UBP_LostAssisterConfigTemplate_C::DlgName' has a wrong offset!");
static_assert(offsetof(UBP_LostAssisterConfigTemplate_C, WaitInPlacePauseTime) == 0x000068, "Member 'UBP_LostAssisterConfigTemplate_C::WaitInPlacePauseTime' has a wrong offset!");
static_assert(offsetof(UBP_LostAssisterConfigTemplate_C, AcceptSubsidiaryPlatformDistance) == 0x000070, "Member 'UBP_LostAssisterConfigTemplate_C::AcceptSubsidiaryPlatformDistance' has a wrong offset!");
static_assert(offsetof(UBP_LostAssisterConfigTemplate_C, ShowLayerDelaySeconds) == 0x000078, "Member 'UBP_LostAssisterConfigTemplate_C::ShowLayerDelaySeconds' has a wrong offset!");
static_assert(offsetof(UBP_LostAssisterConfigTemplate_C, DisappearDelaySeconds) == 0x000080, "Member 'UBP_LostAssisterConfigTemplate_C::DisappearDelaySeconds' has a wrong offset!");
static_assert(offsetof(UBP_LostAssisterConfigTemplate_C, FirstLevelSequence) == 0x000088, "Member 'UBP_LostAssisterConfigTemplate_C::FirstLevelSequence' has a wrong offset!");

}

