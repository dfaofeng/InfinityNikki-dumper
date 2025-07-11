﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ClothesSoundComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ClothesSoundComponent.BP_ClothesSoundComponent_C
// 0x0008 (0x00B0 - 0x00A8)
class UBP_ClothesSoundComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ClothesSoundComponent(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ClothesSoundComponent_C">();
	}
	static class UBP_ClothesSoundComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ClothesSoundComponent_C>();
	}
};
static_assert(alignof(UBP_ClothesSoundComponent_C) == 0x000008, "Wrong alignment on UBP_ClothesSoundComponent_C");
static_assert(sizeof(UBP_ClothesSoundComponent_C) == 0x0000B0, "Wrong size on UBP_ClothesSoundComponent_C");
static_assert(offsetof(UBP_ClothesSoundComponent_C, UberGraphFrame) == 0x0000A8, "Member 'UBP_ClothesSoundComponent_C::UberGraphFrame' has a wrong offset!");

}

