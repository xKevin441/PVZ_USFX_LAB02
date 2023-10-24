// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieDeportista.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"

AZombieDeportista::AZombieDeportista()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);
	
	Tags.Add("Enemy");
}

void AZombieDeportista::BeginPlay()
{
	Super::BeginPlay();
	MoveToTarget(FVector(-800.0f, -600.0f, 160.0f));
	float DelayCambioCarril = FMath::RandRange(1.0f, 3.0f);
	GetWorld()->GetTimerManager().SetTimer(TimerCambioCarril, this, &AZombieDeportista::CambiarCarril, DelayCambioCarril, false);
}

void AZombieDeportista::CambiarCarril()
{

		bCambioCarril = true;
		FVector NewLocation = AZombieDeportista::GetActorLocation();
		float NewX = FMath::RandRange(-100.0f, 100.0f);
		NewLocation.X = NewX;
}
