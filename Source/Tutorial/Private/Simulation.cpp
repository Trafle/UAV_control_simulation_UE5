// Fill out your copyright notice in the Description page of Project Settings.


#include "Simulation.h"

Simulation::Simulation()
{
}

Simulation::~Simulation()
{
}

void UAV::applyForce(FVector F)
{
	 // Newton's motion law
	force += F;
}


void UAV::calcTick()
{
	acceleration = force / mass;
	speed += acceleration;
	location += speed;
	force = FVector(0.0f, 0.0f, 0.0f);
}

FVector AirFriction::calcTick(float A, FVector V, float C)
/**Calculate air friction, where :
A : crossectional area of the object
V : object's speed relative to the fluid
C : drag coefficient of the object*/
{
	FVector force = 0.5 * p * V * V.GetAbs() * C * A * additionalAirFrictionCoefficient;
	return force;
}

FVector Wind::calcTick(FVector& location, int tick) {
	/** Change the direction and strength of Wind on each tick*/
	float randomWindForceX = FMath::GetMappedRangeValueClamped(FVector2D(-1, 1), FVector2D(-maxWindForce, maxWindForce), FMath::PerlinNoise1D((location.X + float(tick))));
	float randomWindForceY = FMath::GetMappedRangeValueClamped(FVector2D(-1, 1), FVector2D(-maxWindForce, maxWindForce), FMath::PerlinNoise1D((location.Y + float(tick))));
	float randomWindForceZ = FMath::GetMappedRangeValueClamped(FVector2D(-1, 1), FVector2D(-maxWindForce, maxWindForce), FMath::PerlinNoise1D((location.Z + float(tick))));
	FVector randomWindForce = (FVector(randomWindForceX, randomWindForceY, randomWindForceZ) * windStrength);
	return randomWindForce;
}