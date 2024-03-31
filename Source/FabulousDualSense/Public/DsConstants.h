// DualSense Support - Unreal Engine Plugin - (c) Wise Labs 2020-2024

#pragma once

#include "InputCoreTypes.h"
#include "GenericPlatform/GenericApplicationMessageHandler.h"

namespace DsConstants
{
	DUALSENSEENGINE_API extern const FName InputDeviceName;
	DUALSENSEENGINE_API extern const FString HardwareDeviceIdentifier;

	inline constexpr auto MaxDevicesCount{4};
	inline constexpr auto ButtonsCount{29};
	inline constexpr auto StickDeadZone{30};
	inline constexpr auto TriggerDeadZone{30};

	DUALSENSEENGINE_API extern const FKey TouchpadKey;
	DUALSENSEENGINE_API extern const FKey LogoKey;
	DUALSENSEENGINE_API extern const FKey MuteKey;

	DUALSENSEENGINE_API extern const FKey Touch1Key;
	DUALSENSEENGINE_API extern const FKey Touch1AxisXKey;
	DUALSENSEENGINE_API extern const FKey Touch1AxisYKey;
	DUALSENSEENGINE_API extern const FKey Touch1AxisXYKey;

	DUALSENSEENGINE_API extern const FKey Touch2Key;
	DUALSENSEENGINE_API extern const FKey Touch2AxisXKey;
	DUALSENSEENGINE_API extern const FKey Touch2AxisYKey;
	DUALSENSEENGINE_API extern const FKey Touch2AxisXYKey;

	DUALSENSEENGINE_API extern const FKey GyroscopeAxisRollKey;
	DUALSENSEENGINE_API extern const FKey GyroscopeAxisPitchKey;
	DUALSENSEENGINE_API extern const FKey GyroscopeAxisYawKey;
	DUALSENSEENGINE_API extern const FKey GyroscopeAxisYawPitchKey;

	DUALSENSEENGINE_API const TMap<FGamepadKeyNames::Type, uint32>& GetRegularButtons();
}
