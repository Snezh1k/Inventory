// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Player/InventoryCharacter.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORY_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY()
	AInventoryCharacter* PlayerCharacter;

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
};
