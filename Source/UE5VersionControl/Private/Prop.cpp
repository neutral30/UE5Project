// Fill out your copyright notice in the Description page of Project Settings.


#include "Prop.h"

AProp::AProp()
{
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	SetRootComponent(MeshComp);
}
void AProp::BeginPlay()
{
	Super::BeginPlay();
	
}
void AProp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

