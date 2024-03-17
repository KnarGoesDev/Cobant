// Fill out your copyright notice in the Description page of Project Settings.


#include "CobantGameModeBase.h"

void ACobantGameModeBase::BeginPlay()
{
	CreateInitialFloorTiles();
}

void ACobantGameModeBase::CreateInitialFloorTiles()
{
	for (int i = 0; i < NumInitialFloorTiles; i++) {
		AddFloorTile();
	}
}

void ACobantGameModeBase::AddFloorTile()
{
	UWorld* World = GetWorld();

	if (World)
	{
		AFloorTile* Tile = World->SpawnActor<AFloorTile>(FloorTileClass,NextSpawnPoint);

		if (Tile)
		{
			NextSpawnPoint = Tile->GetAttachTransform();
		}
	}
	
}


