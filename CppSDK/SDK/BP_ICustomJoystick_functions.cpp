﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ICustomJoystick

#include "Basic.hpp"

#include "BP_ICustomJoystick_classes.hpp"
#include "BP_ICustomJoystick_parameters.hpp"


namespace SDK
{

// Function BP_ICustomJoystick.BP_ICustomJoystick_C.UseWidgetSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   bUse                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::UseWidgetSize(bool* bUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "UseWidgetSize");

	Params::BP_ICustomJoystick_C_UseWidgetSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bUse != nullptr)
		*bUse = Parms.bUse;
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.UseCustomConfig
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   bUse                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::UseCustomConfig(bool* bUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "UseCustomConfig");

	Params::BP_ICustomJoystick_C_UseCustomConfig Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bUse != nullptr)
		*bUse = Parms.bUse;
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.SetUTCJoystickComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUTCJoystickComponent_C*          joystickComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::SetUTCJoystickComponent(class UUTCJoystickComponent_C* joystickComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "SetUTCJoystickComponent");

	Params::BP_ICustomJoystick_C_SetUTCJoystickComponent Parms{};

	Parms.joystickComponent = joystickComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.Set Size
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector2D&                 Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::Set_Size(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "Set Size");

	Params::BP_ICustomJoystick_C_Set_Size Parms{};

	Parms.Size = std::move(Size);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.Set Max Size
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::Set_Max_Size(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "Set Max Size");

	Params::BP_ICustomJoystick_C_Set_Max_Size Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.On Y Axis Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::On_Y_Axis_Changed(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "On Y Axis Changed");

	Params::BP_ICustomJoystick_C_On_Y_Axis_Changed Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.On X Axis Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::On_X_Axis_Changed(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "On X Axis Changed");

	Params::BP_ICustomJoystick_C_On_X_Axis_Changed Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.On Viewport Size Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector2D&                 Previous_Size                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector2D&                 Updated_Size                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::On_Viewport_Size_Changed(const struct FVector2D& Previous_Size, const struct FVector2D& Updated_Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "On Viewport Size Changed");

	Params::BP_ICustomJoystick_C_On_Viewport_Size_Changed Parms{};

	Parms.Previous_Size = std::move(Previous_Size);
	Parms.Updated_Size = std::move(Updated_Size);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.On Picker Location Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::On_Picker_Location_Changed(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "On Picker Location Changed");

	Params::BP_ICustomJoystick_C_On_Picker_Location_Changed Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.On Joystick Released
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::On_Joystick_Released(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "On Joystick Released");

	Params::BP_ICustomJoystick_C_On_Joystick_Released Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.On Joystick Pressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::On_Joystick_Pressed(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "On Joystick Pressed");

	Params::BP_ICustomJoystick_C_On_Joystick_Pressed Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.On Joystick Location Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::On_Joystick_Location_Changed(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "On Joystick Location Changed");

	Params::BP_ICustomJoystick_C_On_Joystick_Location_Changed Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.On Axes Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  X_Axis_Value                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Y_Axis_Value                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::On_Axes_Changed(double X_Axis_Value, double Y_Axis_Value, const struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "On Axes Changed");

	Params::BP_ICustomJoystick_C_On_Axes_Changed Parms{};

	Parms.X_Axis_Value = X_Axis_Value;
	Parms.Y_Axis_Value = Y_Axis_Value;
	Parms.Direction = std::move(Direction);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.GetWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                         Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::GetWidget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "GetWidget");

	Params::BP_ICustomJoystick_C_GetWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.GetCustomConfig
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_JoystickCustomConfig*         Config                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::GetCustomConfig(struct FF_JoystickCustomConfig* Config)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "GetCustomConfig");

	Params::BP_ICustomJoystick_C_GetCustomConfig Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Config != nullptr)
		*Config = std::move(Parms.Config);
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.BP_GetJoystickMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUTCJoystickMode*                       JoystickMode                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::BP_GetJoystickMode(EUTCJoystickMode* JoystickMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "BP_GetJoystickMode");

	Params::BP_ICustomJoystick_C_BP_GetJoystickMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (JoystickMode != nullptr)
		*JoystickMode = Parms.JoystickMode;
}


// Function BP_ICustomJoystick.BP_ICustomJoystick_C.Get Max Size
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// double*                                 Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_ICustomJoystick_C::Get_Max_Size(double* Value) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ICustomJoystick_C", "Get Max Size");

	Params::BP_ICustomJoystick_C_Get_Max_Size Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}

}

