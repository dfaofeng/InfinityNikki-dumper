﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReverseVelocity

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class ReverseVelocity.ReverseWorldSubsystem
// 0x0008 (0x0048 - 0x0040)
class UReverseWorldSubsystem final : public UTickableWorldSubsystem
{
public:
	uint8                                         Pad_40[0x8];                                       // 0x0040(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReverseWorldSubsystem">();
	}
	static class UReverseWorldSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReverseWorldSubsystem>();
	}
};
static_assert(alignof(UReverseWorldSubsystem) == 0x000008, "Wrong alignment on UReverseWorldSubsystem");
static_assert(sizeof(UReverseWorldSubsystem) == 0x000048, "Wrong size on UReverseWorldSubsystem");

}

