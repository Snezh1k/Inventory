#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemDataStructs.generated.h"

UENUM()
enum class EItemQuality : uint8
{
	Common UMETA(DisplayName = "Common"),
	Uncommon UMETA(DisplayName = "Uncommon"),
	Rare UMETA(DisplayName = "Rare"),
	Epic UMETA(DisplayName = "Epic"),
	Legendary UMETA(DisplayName = "Legendary")
};

UENUM()
enum class EItemType : uint8
{
	Consumable UMETA(DisplayName = "Consumable"),
	Potion UMETA(DisplayName = "Potion"),
	Weapon UMETA(DisplayName = "Weapon"),
	Cloth UMETA(DisplayName = "Cloth")
};

USTRUCT()
struct FItemStatistics
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere)
	float HealPercent;
	
	UPROPERTY(EditAnywhere)
	float DamageValue;

	UPROPERTY(EditAnywhere)
	float ClothRank;

	UPROPERTY(EditAnywhere)
	float SellValue;
};

USTRUCT()
struct FItemTextData
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere)
	FText Name;
	
	UPROPERTY(EditAnywhere)
	FText Description;
	
	UPROPERTY(EditAnywhere)
	FText InteractionText;

	UPROPERTY(EditAnywhere)
	FText UsageText;
};

USTRUCT()
struct FItemNumericData
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere)
	float Weight;
	
	UPROPERTY(EditAnywhere)
	int32 MaxStackSize;
	
	UPROPERTY(EditAnywhere)
	bool bIsStackable;
};

USTRUCT()
struct FItemAssetData
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere)
	UTexture2D* Icon;
	
	UPROPERTY(EditAnywhere)
	UStaticMesh* Mesh;
};

USTRUCT()
struct FItemData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category="Item Data")
	FName ID;
	
	UPROPERTY(EditAnywhere, Category="Item Data")
	EItemType ItemType;
	
	UPROPERTY(EditAnywhere, Category="Item Data")
	EItemQuality ItemQuality;
	
	UPROPERTY(EditAnywhere, Category="Item Data")
	FItemStatistics ItemStatistics;
	
	UPROPERTY(EditAnywhere, Category="Item Data")
	FItemTextData TextData;
	
	UPROPERTY(EditAnywhere, Category="Item Data")
	FItemNumericData NumericData;
	
	UPROPERTY(EditAnywhere, Category="Item Data")
	FItemAssetData AssetData;
};
