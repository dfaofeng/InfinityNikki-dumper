﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RMConfigContext_InAir

#include "Basic.hpp"

#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RMConfigContext_InAir.BP_RMConfigContext_InAir_C
// 0x0000 (0x0170 - 0x0170)
class UBP_RMConfigContext_InAir_C final : public URMConfigContext_InAir
{
public:
	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RMConfigContext_InAir_C">();
	}
	static class UBP_RMConfigContext_InAir_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RMConfigContext_InAir_C>();
	}
};
static_assert(alignof(UBP_RMConfigContext_InAir_C) == 0x000008, "Wrong alignment on UBP_RMConfigContext_InAir_C");
static_assert(sizeof(UBP_RMConfigContext_InAir_C) == 0x000170, "Wrong size on UBP_RMConfigContext_InAir_C");

}

