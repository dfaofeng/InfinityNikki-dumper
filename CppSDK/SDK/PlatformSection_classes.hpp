﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlatformSection

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EPlatformType_structs.hpp"
#include "X6CustomizableSequencerTracks_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlatformSection.PlatformSection_C
// 0x0020 (0x0280 - 0x0260)
class UPlatformSection_C final : public UX6SequencerParameterSectionBP
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EPlatformType                                 Platform;                                          // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_269[0x7];                                      // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ActorName;                                         // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlatformSection(int32 EntryPoint);
	void GetCurrentPlatform(TArray<EPlatformType>* PlatformType);
	void K2_OnSectionBegin_WithBindingObject(class UObject* BindingObject);
	void K2_OnSectionEnd_WithBindingObject(class UObject* BindingObject);
	void K2_OnSectionUpdate_WithBindingObject(class UObject* BindingObject);
	void SetPlatform(EPlatformType NewPlatform);
	void UpdateCondition(class AActor* Actor, bool CurrentCondition, bool* FinalCondition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlatformSection_C">();
	}
	static class UPlatformSection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlatformSection_C>();
	}
};
static_assert(alignof(UPlatformSection_C) == 0x000008, "Wrong alignment on UPlatformSection_C");
static_assert(sizeof(UPlatformSection_C) == 0x000280, "Wrong size on UPlatformSection_C");
static_assert(offsetof(UPlatformSection_C, UberGraphFrame) == 0x000260, "Member 'UPlatformSection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlatformSection_C, Platform) == 0x000268, "Member 'UPlatformSection_C::Platform' has a wrong offset!");
static_assert(offsetof(UPlatformSection_C, ActorName) == 0x000270, "Member 'UPlatformSection_C::ActorName' has a wrong offset!");

}

