// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombistein.h"

AZombistein::AZombistein()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule2.Shape_WideCapsule2'"));
	ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);
	Tags.Add("Enemy");
}
