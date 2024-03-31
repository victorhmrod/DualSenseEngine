// DualSense Support - Unreal Engine Plugin - (c) Wise Labs 2020-2024

#pragma once

#include "Engine/DeveloperSettings.h"
#include "DsSettings.generated.h"

UCLASS(Config = "Engine", DefaultConfig)
class DUALSENSEENGINE_API UDsSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DualSense", Config)
	uint8 bEmitMouseEventsFromTouchpad : 1;

public:
	UDsSettings();

#if WITH_EDITOR
	virtual FText GetSectionText() const override;

	virtual FText GetSectionDescription() const override;
#endif
};
