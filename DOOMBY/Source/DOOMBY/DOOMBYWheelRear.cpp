// Copyright Epic Games, Inc. All Rights Reserved.

#include "DOOMBYWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UDOOMBYWheelRear::UDOOMBYWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}