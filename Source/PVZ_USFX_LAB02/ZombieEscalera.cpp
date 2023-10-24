// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieEscalera.h"

AZombieEscalera::AZombieEscalera()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B1.Shape_Wedge_B1'"));
	ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);
	Tags.Add("Enemy");
}
