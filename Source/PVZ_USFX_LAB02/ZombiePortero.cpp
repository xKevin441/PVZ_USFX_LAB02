// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombiePortero.h"

AZombiePortero::AZombiePortero()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder2.Shape_Cylinder2'"));
	ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);
	Tags.Add("Enemy");
}
