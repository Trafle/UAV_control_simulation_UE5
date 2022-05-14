// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Math/Vector.h"
#include "CoreMinimal.h"
#include "Math/UnrealMathUtility.h"
#include "CoreFwd.h"

class TUTORIAL_API Simulation
{
public:
	Simulation();
	~Simulation();
};

class SimulationAgent
{
public:
	virtual int calcStep();
};

class AirFriction
{
private:
	float p = 1.255; // Air density in kg/m^3
	float additionalAirFrictionCoefficient = 1;

public:
	FVector calcTick(float A, FVector V, float C);
};

class Wind
{
private:
	float windStrength = 1;
	FVector rateOfChange = FVector(0.0001f, 0.0001f, 0.00005f);
	float maxWindForce = 0.1;

public:
	FVector calcTick(FVector& location, int tick);
};

class UAV {
public:

	float mass = 1.5;
	float crossSectionalArea = 0.1;
	float dragCoefficient = 1.2;
	FVector force = FVector(0.0f, 0.0f, 0.0f);
	FVector speed = FVector(0.0f, 0.0f, 0.0f);
	FVector acceleration = FVector(0.0f, 0.0f, 0.0f);
	FVector location = FVector(0.0f, 0.0f, 0.0f);
	FVector engineAxesPower = FVector(5.0f, 5.0f, 7.0f);
	AirFriction airFriction;
	Wind wind;

	void applyForce(FVector F);
	void calcTick();
};

class Force
{
public:
	FVector force = FVector(0.0f, 0.0f, 0.0f);
};

class Controls : Force
{
private:
	FVector directionalEnginePower = FVector(1.0f, 1.5f, 1.0f);
};

class keyBoardControls : Controls {
	void calcStep();
};