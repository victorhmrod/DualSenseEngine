// DualSense Support - Unreal Engine Plugin - (c) Wise Labs 2020-2024

#include "DsSettings.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(DsSettings)

#define LOCTEXT_NAMESPACE "DsSettings"

UDsSettings::UDsSettings()
{
	CategoryName = FName{TEXTVIEW("Plugins")};
}

#if WITH_EDITOR
FText UDsSettings::GetSectionText() const
{
	return LOCTEXT("Section", "DualSense Engine");
}

FText UDsSettings::GetSectionDescription() const
{
	return LOCTEXT("SectionDescription", "DualSense Engine Settings");
}
#endif

#undef LOCTEXT_NAMESPACE
