// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperSpriteComponent.h" 
#include "Pickup.generated.h"

UCLASS()
class SIMPLEONESCREENGAME_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Components
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		class USphereComponent* PickupSphere;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UPaperSpriteComponent* PickupSprite; 

	//Debug Messages
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
		FText pickupMessage = FText::FromString("You picked up an item!");

		//Pickup properties

		//Rotation
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
		bool bRotate = true;

		//Rotation speed
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup", meta = (ClampMin = "0.0"))
		float RotateSpeed = 60.0f;

		//Sound
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
		class USoundBase* PickupSound = nullptr;

	//Overlap
		UFUNCTION()
		void OnSphereOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
