// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HordaFactory.h"
#include "HordaFacilFactory.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AHordaFacilFactory : public AHordaFactory
{
	GENERATED_BODY()

public:
	virtual AZombie* formarHorda(int indicePosicion) override;
	
};
