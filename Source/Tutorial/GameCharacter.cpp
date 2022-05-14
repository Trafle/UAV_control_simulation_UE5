// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCharacter.h"
#include "Engine/Engine.h"
#include "Math/UnrealMathUtility.h"

#define int FPS = 60

// Sets default values
AGameCharacter::AGameCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	tickCount = 0;

	// Create components
	CameraMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraMesh"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	// Setup camera
	Camera->FieldOfView = 120.f;
	Camera->SetupAttachment(CameraMesh);
	Camera->SetRelativeLocation(FVector(-100.0f, 0.0f, 50.0f));
	location = Camera->GetRelativeLocation();
}

// Called when the game starts or when spawned
void AGameCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	tickCount++;
	

	FVector airFrictionForce = airFriction.calcTick(crossSectionalArea, speed, dragCoefficient);
	FVector windForce = wind.calcTick(location, tickCount);

	applyForce(-airFrictionForce);
	applyForce(windForce);

	calcTick();
	Camera->SetRelativeLocation(location);

	FString DebugMsg7 = FString::Printf(TEXT("tickCount: %s"), *FString::SanitizeFloat(float(tickCount)));
	GEngine->AddOnScreenDebugMessage(7, 0.0f, FColor::Purple, DebugMsg7);

	FString DebugMsg8 = FString::Printf(TEXT("windForce: (%s; %s; %s)"), *FString::SanitizeFloat(windForce.X), *FString::SanitizeFloat(windForce.Y), *FString::SanitizeFloat(windForce.Z));
	GEngine->AddOnScreenDebugMessage(7, 0.0f, FColor::Purple, DebugMsg8);

	FString DebugMsg = FString::Printf(TEXT("speed: %s, force: %s"), *FString::SanitizeFloat(speed.X), *FString::SanitizeFloat(force.Length()));
	GEngine->AddOnScreenDebugMessage(1, 0.0f, FColor::Green, DebugMsg);

	FString DebugMsg4 = FString::Printf(TEXT("DeltaTime: %s"), *FString::SanitizeFloat(DeltaTime));
	GEngine->AddOnScreenDebugMessage(4, 0.0f, FColor::Yellow, DebugMsg4);

	FString DebugMsg5 = FString::Printf(TEXT("Location: (%s; %s; %s)"), *FString::SanitizeFloat(location.X), *FString::SanitizeFloat(location.Y), *FString::SanitizeFloat(location.Z));
	GEngine->AddOnScreenDebugMessage(5, 0.0f, FColor::Cyan, DebugMsg5);


}

// Called to bind functionality to input
void AGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("Forward_move"), this, &AGameCharacter::Forward_moveAxis);
	PlayerInputComponent->BindAxis(TEXT("Side_move"), this, &AGameCharacter::Side_moveAxis);
	PlayerInputComponent->BindAxis(TEXT("Vertical_move"), this, &AGameCharacter::Vertical_moveAxis);
	PlayerInputComponent->BindAxis(TEXT("Z_rotation"), this, &AGameCharacter::Z_rotationAxis);
	
}

void AGameCharacter::Forward_moveAxis(float AxisValue) {
	
	float forwardAngle = FMath::Cos(Camera->GetRelativeRotation().Yaw * PI / 180);
	float sideAngle = FMath::Sin(Camera->GetRelativeRotation().Yaw * PI / 180);
	applyForce(FVector(AxisValue * forwardAngle * engineAxesPower.X, AxisValue * sideAngle * engineAxesPower.Y, 0.0f));

	if (GEngine) {

		FString DebugMsg2 = FString::Printf(TEXT("acceleration: %s"), *FString::SanitizeFloat(acceleration.Length()));
		GEngine->AddOnScreenDebugMessage(2, 0.0f, FColor::Blue, DebugMsg2);

		FString DebugMsg6 = FString::Printf(TEXT("Rotation: %s"), *FString::SanitizeFloat(Camera->GetRelativeRotation().Yaw));
		GEngine->AddOnScreenDebugMessage(6, 0.0f, FColor::Black, DebugMsg6);

		FString DebugMsg3 = FString::Printf(TEXT("AxisValue: %s"), *FString::SanitizeFloat(AxisValue));
		GEngine->AddOnScreenDebugMessage(3, 0.0f, FColor::Red, DebugMsg3);
	}
};
void AGameCharacter::Side_moveAxis(float AxisValue) {
	float sideAngle = FMath::Cos(Camera->GetRelativeRotation().Yaw * PI / 180);
	float forwardAngle = FMath::Sin(Camera->GetRelativeRotation().Yaw * PI / 180);
	applyForce(FVector(AxisValue * -forwardAngle * engineAxesPower.X, AxisValue * sideAngle * engineAxesPower.Y, 0.0f));
};
void AGameCharacter::Vertical_moveAxis(float AxisValue) {
	applyForce(FVector(0.0f, 0.0f, AxisValue * engineAxesPower.Z));
};
void AGameCharacter::Z_rotationAxis(float AxisValue) {
	Camera->AddRelativeRotation(FRotator(0.0f, AxisValue, 0.0f));	
};

