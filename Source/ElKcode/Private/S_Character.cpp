// Fill out your copyright notice in the Description page of Project Settings.


#include "S_Character.h"
#include"GameFramework/SpringArmComponent.h"
#include"Camera/CameraComponent.h"

// Sets default values
AS_Character::AS_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComp");
	CameraComp = CreateDefaultSubobject<UCameraComponent>("Camercomp");
}

// Called when the game starts or when spawned
void AS_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AS_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AS_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

