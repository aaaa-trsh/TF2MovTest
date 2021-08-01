// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TF2_MOVHUD.generated.h"

UCLASS()
class ATF2_MOVHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATF2_MOVHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

