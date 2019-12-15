// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PacmanPawn.generated.h"

UCLASS()
class PACMAN_API APacmanPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APacmanPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
    UPROPERTY(BlueprintReadOnly)
    bool Frozen = true;

public:
    void SetDirection(const FVector Direction);
	bool IsFrozen() { return Frozen; }

	UFUNCTION(BlueprintCallable)
		void SetFrozen(bool value) { Frozen = value; }

private:

	UFUNCTION()
		void OnOverlapBegin(AActor* PlayerActor, AActor* OtherActor);

};
