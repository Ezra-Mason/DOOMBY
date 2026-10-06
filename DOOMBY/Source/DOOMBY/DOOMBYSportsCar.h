// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DOOMBYPawn.h"
#include "DOOMBYSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class DOOMBY_API ADOOMBYSportsCar : public ADOOMBYPawn
{
	GENERATED_BODY()
	
public:

	ADOOMBYSportsCar();
};
