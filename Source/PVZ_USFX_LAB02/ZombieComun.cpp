// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieComun.h"


AZombieComun::AZombieComun()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));
	ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);
	Tags.Add("Enemy");

}
