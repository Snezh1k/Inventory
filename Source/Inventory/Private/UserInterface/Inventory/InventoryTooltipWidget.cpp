#include "UserInterface/Inventory/InventoryTooltipWidget.h"
#include "Items/ItemBase.h"
#include "UserInterface/Inventory/InventoryItemSlotWidget.h"

void UInventoryTooltipWidget::NativeConstruct()
{
	Super::NativeConstruct();

	const UItemBase* ItemBeingHovered = InventorySlotBeingHovered->GetItemReference();

	ItemName->SetText(ItemBeingHovered->TextData.Name);
	DamageValue->SetText(FText::AsNumber(ItemBeingHovered->ItemStatistics.DamageValue));
	ArmorRating->SetText(FText::AsNumber(ItemBeingHovered->ItemStatistics.ClothRank));
	UsageText->SetText(ItemBeingHovered->TextData.UsageText);
	ItemDescription->SetText(ItemBeingHovered->TextData.Description);
	const FString WeightInfo =
		{"Weight: " + FString::SanitizeFloat(ItemBeingHovered->GetItemStackWeight())};
	StackWeight->SetText(FText::FromString(WeightInfo));
	switch (ItemBeingHovered->ItemType) {
	case EItemType::Consumable:
			ItemType->SetText(FText::FromString("Consumable"));
			DamageValue->SetVisibility(ESlateVisibility::Collapsed);
			ArmorRating->SetVisibility(ESlateVisibility::Collapsed);
			UsageText->SetVisibility(ESlateVisibility::Collapsed);
			break;
		case EItemType::Potion:
			ItemType->SetText(FText::FromString("Potion"));
			DamageValue->SetVisibility(ESlateVisibility::Collapsed);
			ArmorRating->SetVisibility(ESlateVisibility::Collapsed);
			break;
		case EItemType::Weapon:
			ItemType->SetText(FText::FromString("Weapon"));
			ArmorRating->SetVisibility(ESlateVisibility::Collapsed);
			break;
		case EItemType::Cloth:
			ItemType->SetText(FText::FromString("Cloth"));
			DamageValue->SetVisibility(ESlateVisibility::Collapsed);
			break;
		default: ;
	}
	if(ItemBeingHovered->NumericData.bIsStackable)
	{
		const FString StackInfo =
			{"Max stack size: " + FString::FromInt(ItemBeingHovered->NumericData.MaxStackSize)};
		MaxStackSize->SetText(FText::FromString(StackInfo));
	}
	else
	{
		MaxStackSize->SetVisibility(ESlateVisibility::Collapsed);
	}
}
