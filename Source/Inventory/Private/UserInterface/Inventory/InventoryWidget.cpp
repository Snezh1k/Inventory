#include "UserInterface/Inventory/InventoryWidget.h"

#include "Components/InventoryComponent.h"
#include "Items/ItemBase.h"
#include "Player/InventoryCharacter.h"
#include "UserInterface/Inventory/ItemDragDropOperation.h"

void UInventoryWidget::RefreshInventory()
{
	if(InventoryReference && InventorySlotClass)
	{
		InventoryPanel->ClearChildren();
		for (UItemBase* const& InventoryItem : InventoryReference->GetInventoryContents())
		{
			UInventoryItemSlotWidget* ItemSlot = CreateWidget<UInventoryItemSlotWidget>(this, InventorySlotClass);
			ItemSlot->SetItemReference(InventoryItem);
			InventoryPanel->AddChildToWrapBox(ItemSlot);
		}
		SetInfoText();
	}
}

void UInventoryWidget::SetInfoText() const
{
	const FString WeightInfoValue =
		{"Weight: " + FString::SanitizeFloat(InventoryReference->GetInventoryTotalWeight()) + '/' +
		FString::SanitizeFloat(InventoryReference->GetWeightCapacity())};

	const FString CapacityInfoValue =
		{"Capacity: " + FString::FromInt(InventoryReference->GetInventoryContents().Num()) + '/' +
		FString::FromInt(InventoryReference->GetSlotCapacity())};
	
	WeightInfo->SetText(FText::FromString(WeightInfoValue));
	CapacityInfo->SetText(FText::FromString(CapacityInfoValue));
}

void UInventoryWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	PlayerCharacter = Cast<AInventoryCharacter>(GetOwningPlayerPawn());
	if(PlayerCharacter)
	{
		InventoryReference = PlayerCharacter->GetInventory();
		if(InventoryReference)
		{
			InventoryReference->OnInventoryUpdated.AddUObject(this, &UInventoryWidget::RefreshInventory);
			SetInfoText();
		}
	}
}

bool UInventoryWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
	UDragDropOperation* InOperation)
{
	const UItemDragDropOperation* ItemDragDropOperation = Cast<UItemDragDropOperation>(InOperation);
	if(ItemDragDropOperation->SourceItem && InventoryReference)
	{
		return true;
	}
	return false;
}
