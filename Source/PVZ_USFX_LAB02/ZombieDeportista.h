// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zombie.h"
#include "ZombieDeportista.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AZombieDeportista : public AZombie
{
	GENERATED_BODY()
public:
	AZombieDeportista();
	virtual void BeginPlay() override;
	void CambiarCarril();

	FTimerHandle TimerCambioCarril;
	bool bCambioCarril = false;
};