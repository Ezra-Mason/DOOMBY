// Copyright Epic Games, Inc. All Rights Reserved.

#include "DOOMBYWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UDOOMBYWheelFront::UDOOMBYWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}