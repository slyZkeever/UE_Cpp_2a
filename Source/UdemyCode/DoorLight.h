// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/LightComponent.h"
#include "Engine/Light.h"
#include "OpenDoor.h"
#include "DoorLight.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UDEMYCODE_API UDoorLight : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorLight();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere)
	ALight* LightComponent = nullptr;

	UPROPERTY(EditAnywhere)
	UOpenDoor* Open = nullptr; //component from OpenDoor class

	void AllowPassing();
};


