// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zombie.h"
#include "HordaFactory.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AHordaFactory : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHordaFactory();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual AZombie* formarHorda(int indicePosicion) PURE_VIRTUAL(AHordaFactory::formarHorda, return nullptr;);
	AZombie* AHordaFactory::crearHorda(int indice);
};

