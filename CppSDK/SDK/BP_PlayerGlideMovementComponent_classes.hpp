﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerGlideMovementComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerGlideMovementComponent.BP_PlayerGlideMovementComponent_C
// 0x0008 (0x00B0 - 0x00A8)
class UBP_PlayerGlideMovementComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_PlayerGlideMovementComponent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerGlideMovementComponent_C">();
	}
	static class UBP_PlayerGlideMovementComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerGlideMovementComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerGlideMovementComponent_C) == 0x000008, "Wrong alignment on UBP_PlayerGlideMovementComponent_C");
static_assert(sizeof(UBP_PlayerGlideMovementComponent_C) == 0x0000B0, "Wrong size on UBP_PlayerGlideMovementComponent_C");
static_assert(offsetof(UBP_PlayerGlideMovementComponent_C, UberGraphFrame) == 0x0000A8, "Member 'UBP_PlayerGlideMovementComponent_C::UberGraphFrame' has a wrong offset!");

}

