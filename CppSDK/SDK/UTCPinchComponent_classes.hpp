﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UTCPinchComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UTCComponent_classes.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass UTCPinchComponent.UTCPinchComponent_C
// 0x01A0 (0x0390 - 0x01F0)
class UUTCPinchComponent_C final : public UUTCComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UTCPinchComponent_C;                // 0x01F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Use_Debug_Touch_Location;                          // 0x01F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Two_Fingers_On_Screen;                          // 0x01F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FA[0x6];                                      // 0x01FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Initial_Length;                                    // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Current_Length;                                    // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Initial_Angle;                                     // 0x0210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Current_Angle;                                     // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Initial_Pan_Location;                              // 0x0220(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Current_Pan_Location;                              // 0x0238(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BanPinchAreaEnable;                                // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                BanAreanLocation;                                  // 0x0258(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BanPinchScale;                                     // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BanAreaHalfSize;                                   // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BanTime;                                           // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<ETouchIndex>                             BanFingers;                                        // 0x0288(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          FixedBanPinchEnable;                               // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              FixedBanPinchScale;                                // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              FixedBanPinchArea;                                 // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Debug_Touch_Location;                              // 0x0300(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUTCPinchDebugWidget_C*                 Debug_Widget;                                      // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(double Zoom, double Rotation_Angle, const struct FVector& Initial_Pan_Location, const struct FVector& Current_Pan_Location, const struct FVector& Pan_Offset)> On_Two_Fingers_Move; // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(const struct FVector& Pan_Location)> On_Two_Fingers_Pressed;       // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(double Zoom, double Rotation_Angle, const struct FVector& Initial_Pan_Location, const struct FVector& Current_Pan_Location, const struct FVector& Pan_Offset)> On_Two_Fingers_Released; // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Clamp_After_Release;                               // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_351[0x7];                                      // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Clamping_Speed;                                    // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(double Zoom, double RotationAngle, const struct FVector& InitialPanLocation, const struct FVector& CurrentPanLocation, const struct FVector& PanOffset, double CurrentLength)> TwoFingerMove; // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(const struct FVector& PanLocation, double InitLength)> TwoFingerPressed; // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(double Zoom, double RotationAngle, const struct FVector& InitialPanLocation, const struct FVector& CurrentPanLocation, const struct FVector& PanOffset)> TwoFingerReleased; // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void UpdateBanAreaSize();
	void UpdateBanAreaInfo(bool BanAreaEnable, const struct FVector& BanAreaLocation);
	void Update_Debug_Widget();
	void Uninitialize_Debug_Widget();
	void Remove_Debug_Touch_Location();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnJoystickReleased(const struct FVector& Location);
	void On_Viewport_Size_Is_Changed();
	void On_Event_Touch_Released(const struct FVector& Location, ETouchIndex FingerIndex);
	void On_Event_Touch_Pressed(const struct FVector& Location, ETouchIndex FingerIndex);
	void On_Event_Touch_Moved(const struct FVector& Location, ETouchIndex FingerIndex);
	void On_Event_Touch_Canceled(const struct FVector& Location, ETouchIndex FingerIndex);
	void Initialize_Debug_Widget();
	void Get_Length_and_Angle(double* Length, double* Angle, struct FVector* Halfway_Vector);
	void ExecuteUbergraph_UTCPinchComponent(int32 EntryPoint);
	void CheckFingerLocationBan(const struct FVector& Location, ETouchIndex FingerIndex, bool* FixedBan);
	void Check_Debug_Touch_Location();
	void Add_Debug_Touch_Location(const struct FVector& Location);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UTCPinchComponent_C">();
	}
	static class UUTCPinchComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUTCPinchComponent_C>();
	}
};
static_assert(alignof(UUTCPinchComponent_C) == 0x000008, "Wrong alignment on UUTCPinchComponent_C");
static_assert(sizeof(UUTCPinchComponent_C) == 0x000390, "Wrong size on UUTCPinchComponent_C");
static_assert(offsetof(UUTCPinchComponent_C, UberGraphFrame_UTCPinchComponent_C) == 0x0001F0, "Member 'UUTCPinchComponent_C::UberGraphFrame_UTCPinchComponent_C' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, Use_Debug_Touch_Location) == 0x0001F8, "Member 'UUTCPinchComponent_C::Use_Debug_Touch_Location' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, Is_Two_Fingers_On_Screen) == 0x0001F9, "Member 'UUTCPinchComponent_C::Is_Two_Fingers_On_Screen' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, Initial_Length) == 0x000200, "Member 'UUTCPinchComponent_C::Initial_Length' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, Current_Length) == 0x000208, "Member 'UUTCPinchComponent_C::Current_Length' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, Initial_Angle) == 0x000210, "Member 'UUTCPinchComponent_C::Initial_Angle' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, Current_Angle) == 0x000218, "Member 'UUTCPinchComponent_C::Current_Angle' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, Initial_Pan_Location) == 0x000220, "Member 'UUTCPinchComponent_C::Initial_Pan_Location' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, Current_Pan_Location) == 0x000238, "Member 'UUTCPinchComponent_C::Current_Pan_Location' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, BanPinchAreaEnable) == 0x000250, "Member 'UUTCPinchComponent_C::BanPinchAreaEnable' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, BanAreanLocation) == 0x000258, "Member 'UUTCPinchComponent_C::BanAreanLocation' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, BanPinchScale) == 0x000270, "Member 'UUTCPinchComponent_C::BanPinchScale' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, BanAreaHalfSize) == 0x000278, "Member 'UUTCPinchComponent_C::BanAreaHalfSize' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, BanTime) == 0x000280, "Member 'UUTCPinchComponent_C::BanTime' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, BanFingers) == 0x000288, "Member 'UUTCPinchComponent_C::BanFingers' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, FixedBanPinchEnable) == 0x0002D8, "Member 'UUTCPinchComponent_C::FixedBanPinchEnable' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, FixedBanPinchScale) == 0x0002E0, "Member 'UUTCPinchComponent_C::FixedBanPinchScale' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, FixedBanPinchArea) == 0x0002F0, "Member 'UUTCPinchComponent_C::FixedBanPinchArea' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, Debug_Touch_Location) == 0x000300, "Member 'UUTCPinchComponent_C::Debug_Touch_Location' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, Debug_Widget) == 0x000318, "Member 'UUTCPinchComponent_C::Debug_Widget' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, On_Two_Fingers_Move) == 0x000320, "Member 'UUTCPinchComponent_C::On_Two_Fingers_Move' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, On_Two_Fingers_Pressed) == 0x000330, "Member 'UUTCPinchComponent_C::On_Two_Fingers_Pressed' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, On_Two_Fingers_Released) == 0x000340, "Member 'UUTCPinchComponent_C::On_Two_Fingers_Released' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, Clamp_After_Release) == 0x000350, "Member 'UUTCPinchComponent_C::Clamp_After_Release' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, Clamping_Speed) == 0x000358, "Member 'UUTCPinchComponent_C::Clamping_Speed' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, TwoFingerMove) == 0x000360, "Member 'UUTCPinchComponent_C::TwoFingerMove' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, TwoFingerPressed) == 0x000370, "Member 'UUTCPinchComponent_C::TwoFingerPressed' has a wrong offset!");
static_assert(offsetof(UUTCPinchComponent_C, TwoFingerReleased) == 0x000380, "Member 'UUTCPinchComponent_C::TwoFingerReleased' has a wrong offset!");

}

