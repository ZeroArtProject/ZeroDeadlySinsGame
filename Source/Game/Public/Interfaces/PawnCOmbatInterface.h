// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PawnCOmbatInterface.generated.h"

class UPawnCombatComponent;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPawnCOmbatInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GAME_API IPawnCOmbatInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual UPawnCombatComponent* GetPawnCombatComponent() const = 0;
};
