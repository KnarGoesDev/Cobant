// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FloorTile.h"
#include "CobantGameModeBase.generated.h"

class AFloorTile;

/**
 * 
 */
UCLASS()
class COBANT_API ACobantGameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public:

	UPROPERTY(EditAnywhere,Category = "Config")
	TSubclassOf<AFloorTile> FloorTileClass;

	UPROPERTY(EditAnywhere,Category = "Config")
	int32 NumInitialFloorTiles = 10;

	UPROPERTY(VisibleInstanceOnly, Category = "Runtime")
	FTransform NextSpawnPoint;

	UFUNCTION(BlueprintCallable)
	void CreateInitialFloorTiles();

	UFUNCTION(BlueprintCallable)
	void AddFloorTile();


protected:
	virtual void BeginPlay() override ;
};

