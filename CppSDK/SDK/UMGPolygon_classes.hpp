﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMGPolygon

#include "Basic.hpp"

#include "UMGPolygon_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class UMGPolygon.PolygonWidget
// 0x0248 (0x03D0 - 0x0188)
class UPolygonWidget final : public UWidget
{
public:
	uint8                                         Pad_188[0x8];                                      // 0x0188(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUMGPolygonInfo                        PolygonInfo;                                       // 0x0190(0x01F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_380[0x10];                                     // 0x0380(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUMGPolygonCurves                      PolygonCurves;                                     // 0x0390(0x0038)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3C8[0x8];                                      // 0x03C8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddPolygonEdgePoint(const struct FUMGPolygonPoint& PolygonPoint, bool bUpdatePolygon);
	void AddPolygonEdgePointAtIndex(const struct FUMGPolygonPoint& PolygonPoint, int32 Index_0, bool bUpdatePolygon);
	void ChangePolygonEdgePointAtIndex(const struct FUMGPolygonPoint& PolygonPoint, int32 Index_0, bool bUpdatePolygon);
	void RemoveAllPolygonEdgePoint(bool bUpdatePolygon);
	void RemovePolygonEdgePoint(int32 Index_0, bool bUpdatePolygon);
	void SetPolygonType(EUMGPolygonType Type);
	void UpdatePolygon();

	bool CheckPointInPolygon(const struct FVector2D& Point) const;
	struct FVector2D GetDirectionAtDistanceAlongPolygonEdge(float Distance, EUMGPolygonCoordinateSpace CoordinateSpace) const;
	struct FVector2D GetDirectionAtPolygonEdgeInputKey(float InKey, EUMGPolygonCoordinateSpace CoordinateSpace) const;
	struct FVector2D GetDirectionAtPolygonEdgePoint(int32 PointIndex, EUMGPolygonCoordinateSpace CoordinateSpace) const;
	float GetDistanceAlongPolygonAtPolygonEdgeInputKey(float InKey) const;
	float GetInputKeyAtDistanceAlongPolygonEdge(float Distance, EUMGPolygonCoordinateSpace CoordinateSpace) const;
	struct FVector2D GetLocationAtDistanceAlongPolygonEdge(float Distance, EUMGPolygonCoordinateSpace CoordinateSpace) const;
	struct FVector2D GetLocationAtPolygonEdgeInputKey(float InKey, EUMGPolygonCoordinateSpace CoordinateSpace) const;
	struct FVector2D GetLocationAtPolygonEdgePoint(int32 PointIndex, EUMGPolygonCoordinateSpace CoordinateSpace) const;
	int32 GetNumberOfPolygonEdgePoints() const;
	float GetPolygonEdgeLength() const;
	EUMGPolygonType GetPolygonType() const;
	float GetRotationAngleAtDistanceAlongPolygonEdge(float Distance, EUMGPolygonCoordinateSpace CoordinateSpace) const;
	float GetRotationAngleAtPolygonEdgeInputKey(float InKey, EUMGPolygonCoordinateSpace CoordinateSpace) const;
	struct FVector2D GetTangentAtDistanceAlongPolygonEdge(float Distance, EUMGPolygonCoordinateSpace CoordinateSpace) const;
	struct FVector2D GetTangentAtPolygonEdgeInputKey(float InKey, EUMGPolygonCoordinateSpace CoordinateSpace) const;
	struct FVector2D GetTangentAtPolygonEdgePoint(int32 PointIndex, EUMGPolygonCoordinateSpace CoordinateSpace) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PolygonWidget">();
	}
	static class UPolygonWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPolygonWidget>();
	}
};
static_assert(alignof(UPolygonWidget) == 0x000010, "Wrong alignment on UPolygonWidget");
static_assert(sizeof(UPolygonWidget) == 0x0003D0, "Wrong size on UPolygonWidget");
static_assert(offsetof(UPolygonWidget, PolygonInfo) == 0x000190, "Member 'UPolygonWidget::PolygonInfo' has a wrong offset!");
static_assert(offsetof(UPolygonWidget, PolygonCurves) == 0x000390, "Member 'UPolygonWidget::PolygonCurves' has a wrong offset!");

}

