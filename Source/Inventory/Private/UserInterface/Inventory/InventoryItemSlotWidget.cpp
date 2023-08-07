#include "UserInterface/Inventory/InventoryItemSlotWidget.h"
#include "Components/Image.h"
#include "Items/ItemBase.h"
#include "UserInterface/Inventory/DragItemVisualWidget.h"
#include "UserInterface/Inventory/InventoryTooltipWidget.h"
#include "UserInterface/Inventory/ItemDragDropOperation.h"

void UInventoryItemSlotWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if(TooltipClass)
	{
		UInventoryTooltipWidget* ToolTip = CreateWidget<UInventoryTooltipWidget>(this, TooltipClass);
		ToolTip->InventorySlotBeingHovered = this;
		SetToolTip(ToolTip);
	}
}

void UInventoryItemSlotWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if(ItemReference)
	{
		switch (ItemReference->ItemQuality)
		{
		case EItemQuality::Common:
			ItemBorder->SetBrushColor(FLinearColor::Gray);
			break;
		case EItemQuality::Uncommon:
			ItemBorder->SetBrushColor(FLinearColor::Green);
			break;
		case EItemQuality::Rare:
			ItemBorder->SetBrushColor(FLinearColor::Blue);
			break;
		case EItemQuality::Epic:
			ItemBorder->SetBrushColor(FLinearColor(0.6f, 0.2f, 1.0f, 1.0f));
			break;
		case EItemQuality::Legendary:
			ItemBorder->SetBrushColor(FLinearColor::Yellow);
			break;
		default: ;
		}
		ItemIcon->SetBrushFromTexture(ItemReference->AssetData.Icon);
		if(ItemReference->NumericData.bIsStackable)
		{
			ItemQuantity->SetText(FText::AsNumber(ItemReference->Quantity));
		}
		else
		{
			ItemQuantity->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

FReply UInventoryItemSlotWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	FReply Reply = Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
	if(InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		return Reply.Handled().DetectDrag(TakeWidget(), EKeys::LeftMouseButton);
	}
	//Submenu on Right Click
	return Reply.Unhandled();
}

void UInventoryItemSlotWidget::NativeOnMouseLeave(const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseLeave(InMouseEvent);
}

void UInventoryItemSlotWidget::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent,
	UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);

	if(DragItemVisualClass)
	{
		const TObjectPtr<UDragItemVisualWidget> DragItemVisual = CreateWidget<UDragItemVisualWidget>(this, DragItemVisualClass);
		DragItemVisual->ItemIcon->SetBrushFromTexture(ItemReference->AssetData.Icon);
		DragItemVisual->ItemBorder->SetBrushColor(ItemBorder->GetBrushColor());
		ItemReference->NumericData.bIsStackable ?
			DragItemVisual->ItemQuantity->SetText(FText::AsNumber(ItemReference->Quantity)) :
			DragItemVisual->ItemQuantity->SetVisibility(ESlateVisibility::Collapsed);
		
		UItemDragDropOperation* DragDropOperation = NewObject<UItemDragDropOperation>();
		DragDropOperation->SourceItem = ItemReference;
		DragDropOperation->SourceInventory = ItemReference->OwningInventory;
		DragDropOperation->DefaultDragVisual = DragItemVisual;
		DragDropOperation->Pivot = EDragPivot::TopLeft;
		OutOperation = DragDropOperation;
	}
}

bool UInventoryItemSlotWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
	UDragDropOperation* InOperation)
{
	return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);
}
