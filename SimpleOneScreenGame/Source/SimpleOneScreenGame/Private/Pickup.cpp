// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"
#include "Components/SphereComponent.h"
#include "PaperSpriteComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Engine/Engine.h"



// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Colision Sphere as root component
	PickupSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	RootComponent = PickupSphere;
	PickupSphere->InitSphereRadius(50.0f);
	PickupSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	PickupSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	PickupSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	PickupSphere->SetGenerateOverlapEvents(true);
	//Visual Mesh
	PickupSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	PickupSprite->SetupAttachment(RootComponent);
	PickupSprite->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	//Bind overlap event
	PickupSphere->OnComponentBeginOverlap.AddDynamic(this, &APickup::OnSphereOverLap);
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bRotate)
	{
		// Rotates the sprite mesh smoothly along the Yaw axis based on your RotateSpeed variable
		AddActorLocalRotation(FRotator(0.0f, RotateSpeed * DeltaTime, 0.0f));
	}
}


void APickup::OnSphereOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 1. Cast to the C++ base Character class
	ACharacter* PlayerChar = Cast<ACharacter>(OtherActor);

	// 2. Safely verify it is a valid player character
	if (PlayerChar)
	{
		// Display pickup message
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, pickupMessage.ToString());
		}

		// Play pickup sound
		if (PickupSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, PickupSound, GetActorLocation());
		}

		// Destroy the pickup actor
		Destroy();
	}
}


