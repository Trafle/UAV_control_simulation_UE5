// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Simulation.h"
#include "GameCharacter.generated.h"

UCLASS()
class TUTORIAL_API AGameCharacter : public APawn, public UAV
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGameCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Main pawn camera 
	UPROPERTY(EditAnywhere);
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere);
	UStaticMeshComponent* CameraMesh;

	float* Counter;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	int tickCount;


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Forward_moveAxis(float AxisValue);
	void Side_moveAxis(float AxisValue);
	void Vertical_moveAxis(float AxisValue);
	void Z_rotationAxis(float AxisValue);
};
