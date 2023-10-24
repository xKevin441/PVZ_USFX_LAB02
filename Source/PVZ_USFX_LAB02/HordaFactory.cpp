// Fill out your copyright notice in the Description page of Project Settings.


#include "HordaFactory.h"
#include "Zombie.h"

// Sets default values
AHordaFactory::AHordaFactory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHordaFactory::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHordaFactory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AZombie* AHordaFactory::crearHorda(int indice)
{
	AZombie* Zombie = formarHorda(indice);
	Zombie->SetSpawnAfter(FMath::RandRange(1, 10));
	Zombie->SetActorHiddenInGame(false);
	Zombie->SetActorEnableCollision(true);    
	Zombie->SetCanMove(true);

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Created zombie")));
	return Zombie;
}
