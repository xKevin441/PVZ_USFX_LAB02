// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieCaja.h"

AZombieCaja::AZombieCaja()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_CubeBox.Shape_CubeBox'"));
	ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);
	Tags.Add("Enemy");
}
