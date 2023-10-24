// Fill out your copyright notice in the Description page of Project Settings.


#include "HordaDificilFactory.h"
#include "Zombistein.h"
#include "ZombieDeportista.h"
#include "ZombiePortero.h"

AZombie* AHordaDificilFactory::formarHorda(int indicePosicion)
{
	int TipoZombie = FMath::RandRange(1, 3);
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(FVector(-1500.0f + indicePosicion * 150, 1600.0f, 200.0f));

	if (TipoZombie == 1)
		return GetWorld()->SpawnActor<AZombieDeportista>(AZombieDeportista::StaticClass(), SpawnLocation);
	else if (TipoZombie == 2)
		return GetWorld()->SpawnActor<AZombiePortero>(AZombiePortero::StaticClass(), SpawnLocation);
	else if (TipoZombie == 3)
		return GetWorld()->SpawnActor<AZombistein>(AZombistein::StaticClass(), SpawnLocation);
	else
		return nullptr;
}
