// Fill out your copyright notice in the Description page of Project Settings.


#include "HordaFacilFactory.h"
#include "ZombieComun.h"
#include "ZombieCono.h"
#include "ZombieCubo.h"

AZombie* AHordaFacilFactory::formarHorda(int indicePosicion)
{
	int TipoZombie = FMath::RandRange(1, 3);
	
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(FVector(-1500.0f + indicePosicion * 150, 1600.0f, 200.0f));

	if (TipoZombie == 1)
		return GetWorld()->SpawnActor<AZombieComun>(AZombieComun::StaticClass(), SpawnLocation);
	else if (TipoZombie == 2)
		return GetWorld()->SpawnActor<AZombieCono>(AZombieCono::StaticClass(), SpawnLocation);
	else if (TipoZombie == 3)
		return GetWorld()->SpawnActor<AZombieCubo>(AZombieCubo::StaticClass(), SpawnLocation);
	else
		return nullptr;
}
