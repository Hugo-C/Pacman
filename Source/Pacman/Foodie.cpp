// Fill out your copyright notice in the Description page of Project Settings.


#include "Foodie.h"

#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"

// Sets default values
AFoodie::AFoodie()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFoodie::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AFoodie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFoodie::Consume()
{
    UGameplayStatics::PlaySound2D(this, ConsumptionSound);
    FoodieEatenEvent.Broadcast(FoodieType);
    Destroy();
}
