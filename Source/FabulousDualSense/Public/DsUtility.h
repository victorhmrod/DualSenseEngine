// DualSense Support - Unreal Engine Plugin - (c) Wise Labs 2020-2024

#pragma once

#include <DualSenseWindows.h>

#include "Logging/LogMacros.h"

DUALSENSEENGINE_API DECLARE_LOG_CATEGORY_EXTERN(LogDualSenseEngine, Log, All)

namespace DsUtility
{
	DUALSENSEENGINE_API constexpr FStringView ReturnValueToString(DS5W_ReturnValue ReturnValue);

	DUALSENSEENGINE_API constexpr FStringView DeviceConnectionToString(DS5W::DeviceConnection DeviceConnection);
}
