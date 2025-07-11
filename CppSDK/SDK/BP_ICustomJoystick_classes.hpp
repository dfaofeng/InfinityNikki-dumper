﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ICustomJoystick

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "EUTCJoystickMode_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ICustomJoystick.BP_ICustomJoystick_C
// 0x0000 (0x0000 - 0x0000)
class IBP_ICustomJoystick_C final : public IInterface
{
public:
	void UseWidgetSize(bool* bUse);
	void UseCustomConfig(bool* bUse);
	void SetUTCJoystickComponent(class UUTCJoystickComponent_C* joystickComponent);
	void Set_Size(const struct FVector2D& Size);
	void Set_Max_Size(double Value);
	void On_Y_Axis_Changed(double Value);
	void On_X_Axis_Changed(double Value);
	void On_Viewport_Size_Changed(const struct FVector2D& Previous_Size, const struct FVector2D& Updated_Size);
	void On_Picker_Location_Changed(const struct FVector& Location);
	void On_Joystick_Released(const struct FVector& Location);
	void On_Joystick_Pressed(const struct FVector& Location);
	void On_Joystick_Location_Changed(const struct FVector& Location);
	void On_Axes_Changed(double X_Axis_Value, double Y_Axis_Value, const struct FVector& Direction);
	void GetWidget(class UWidget** Widget);
	void GetCustomConfig(struct FF_JoystickCustomConfig* Config);
	void BP_GetJoystickMode(EUTCJoystickMode* JoystickMode);

	void Get_Max_Size(double* Value) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ICustomJoystick_C">();
	}
	static class IBP_ICustomJoystick_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_ICustomJoystick_C>();
	}
};
static_assert(alignof(IBP_ICustomJoystick_C) == 0x000001, "Wrong alignment on IBP_ICustomJoystick_C");
static_assert(sizeof(IBP_ICustomJoystick_C) == 0x000001, "Wrong size on IBP_ICustomJoystick_C");

}

