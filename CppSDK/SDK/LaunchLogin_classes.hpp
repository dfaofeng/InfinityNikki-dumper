﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LaunchLogin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LaunchLogin.LaunchLogin_C
// 0x0028 (0x03D8 - 0x03B0)
class ALaunchLogin_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 ClassMask;                                         // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkRtpc*                                MasterVolume;                                      // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkRtpc*                                MusicVolume;                                       // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            WBP_BG;                                            // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_LaunchLogin(int32 EntryPoint);
	void CheckNeedLoad(bool* bNeedLoaded);
	void SetupBG();
	void StopLoading();

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LaunchLogin_C">();
	}
	static class ALaunchLogin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALaunchLogin_C>();
	}
};
static_assert(alignof(ALaunchLogin_C) == 0x000008, "Wrong alignment on ALaunchLogin_C");
static_assert(sizeof(ALaunchLogin_C) == 0x0003D8, "Wrong size on ALaunchLogin_C");
static_assert(offsetof(ALaunchLogin_C, UberGraphFrame) == 0x0003B0, "Member 'ALaunchLogin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALaunchLogin_C, ClassMask) == 0x0003B8, "Member 'ALaunchLogin_C::ClassMask' has a wrong offset!");
static_assert(offsetof(ALaunchLogin_C, MasterVolume) == 0x0003C0, "Member 'ALaunchLogin_C::MasterVolume' has a wrong offset!");
static_assert(offsetof(ALaunchLogin_C, MusicVolume) == 0x0003C8, "Member 'ALaunchLogin_C::MusicVolume' has a wrong offset!");
static_assert(offsetof(ALaunchLogin_C, WBP_BG) == 0x0003D0, "Member 'ALaunchLogin_C::WBP_BG' has a wrong offset!");

}

