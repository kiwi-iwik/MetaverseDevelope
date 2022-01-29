// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GalaxyHUD.generated.h"

UCLASS()
class AGalaxyHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGalaxyHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

