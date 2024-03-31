﻿// DualSense Support - Unreal Engine Plugin - (c) Wise Labs 2020-2024

#include "DualSenseEngineModule.h"
#include "DsInputDevice.h"

IMPLEMENT_MODULE(FDualSenseEngineModule, DualSenseEngineDualSense)

#define LOCTEXT_NAMESPACE "DualSenseEngineModule"

void FDualSenseEngineModule::StartupModule()
{
	IInputDeviceModule::StartupModule();

	static const FName CategoryName{TEXTVIEW("DualSense")};

	EKeys::AddMenuCategoryDisplayInfo(CategoryName, LOCTEXT("Category", "DualSense"), FName{TEXTVIEW("GraphEditor.PadEvent_16x")});

	EKeys::AddKey({DsConstants::TouchpadKey, LOCTEXT("TouchpadKey", "DualSense Touchpad"), FKeyDetails::GamepadKey, CategoryName});
	EKeys::AddKey({DsConstants::LogoKey, LOCTEXT("LogoKey", "DualSense Logo"), FKeyDetails::GamepadKey, CategoryName});
	EKeys::AddKey({DsConstants::MuteKey, LOCTEXT("MuteKey", "DualSense Mute"), FKeyDetails::GamepadKey, CategoryName});

	// Touch 1.

	EKeys::AddKey({
		DsConstants::Touch1Key, LOCTEXT("Touch1Key", "DualSense Touch 1"), FKeyDetails::GamepadKey | FKeyDetails::Touch, CategoryName
	});

	EKeys::AddKey({
		DsConstants::Touch1AxisXKey, LOCTEXT("Touch1AxisXKey", "DualSense Touch 1 X-Axis"),
		FKeyDetails::GamepadKey | FKeyDetails::Touch | FKeyDetails::Axis1D | FKeyDetails::UpdateAxisWithoutSamples, CategoryName
	});

	EKeys::AddKey({
		DsConstants::Touch1AxisYKey, LOCTEXT("Touch1AxisYKey", "DualSense Touch 1 Y-Axis"),
		FKeyDetails::GamepadKey | FKeyDetails::Touch | FKeyDetails::Axis1D | FKeyDetails::UpdateAxisWithoutSamples, CategoryName
	});

	EKeys::AddPairedKey({
		                    DsConstants::Touch1AxisXYKey, LOCTEXT("Touch1AxisXYKey", "DualSense Touch 1 XY-Axis"),
		                    FKeyDetails::GamepadKey | FKeyDetails::Touch | FKeyDetails::Axis2D | FKeyDetails::UpdateAxisWithoutSamples,
		                    CategoryName
	                    }, DsConstants::Touch1AxisXKey, DsConstants::Touch1AxisYKey);

	// Touch 2.

	EKeys::AddKey({
		DsConstants::Touch2Key, LOCTEXT("Touch2Key", "DualSense Touch 2"), FKeyDetails::GamepadKey | FKeyDetails::Touch, CategoryName
	});

	EKeys::AddKey({
		DsConstants::Touch2AxisXKey, LOCTEXT("Touch2AxisXKey", "DualSense Touch 2 X-Axis"),
		FKeyDetails::GamepadKey | FKeyDetails::Touch | FKeyDetails::Axis1D | FKeyDetails::UpdateAxisWithoutSamples, CategoryName
	});

	EKeys::AddKey({
		DsConstants::Touch2AxisYKey, LOCTEXT("Touch2AxisYKey", "DualSense Touch 2 Y-Axis"),
		FKeyDetails::GamepadKey | FKeyDetails::Touch | FKeyDetails::Axis1D | FKeyDetails::UpdateAxisWithoutSamples, CategoryName
	});

	EKeys::AddPairedKey({
		                    DsConstants::Touch2AxisXYKey, LOCTEXT("Touch2AxisXYKey", "DualSense Touch 2 XY-Axis"),
		                    FKeyDetails::GamepadKey | FKeyDetails::Touch | FKeyDetails::Axis2D | FKeyDetails::UpdateAxisWithoutSamples,
		                    CategoryName
	                    }, DsConstants::Touch2AxisXKey, DsConstants::Touch2AxisYKey);

	// Gyroscope.

	EKeys::AddKey({
		DsConstants::GyroscopeAxisRollKey, LOCTEXT("GyroscopeAxisRollKey", "DualSense Gyroscope Roll Axis"),
		FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::UpdateAxisWithoutSamples, CategoryName
	});

	EKeys::AddKey({
		DsConstants::GyroscopeAxisPitchKey, LOCTEXT("GyroscopeAxisPitchKey", "DualSense Gyroscope Pitch Axis"),
		FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::UpdateAxisWithoutSamples, CategoryName
	});

	EKeys::AddKey({
		DsConstants::GyroscopeAxisYawKey, LOCTEXT("GyroscopeAxisYawKey", "DualSense Gyroscope Yaw Axis"),
		FKeyDetails::GamepadKey | FKeyDetails::Axis1D | FKeyDetails::UpdateAxisWithoutSamples, CategoryName
	});

	EKeys::AddPairedKey({
		                    DsConstants::GyroscopeAxisYawPitchKey,
		                    LOCTEXT("GyroscopeAxisYawPitchKey", "DualSense Gyroscope Yaw/Pitch Axis"),
		                    FKeyDetails::GamepadKey | FKeyDetails::Axis2D | FKeyDetails::UpdateAxisWithoutSamples, CategoryName
	                    }, DsConstants::GyroscopeAxisYawKey, DsConstants::GyroscopeAxisPitchKey);
}

TSharedPtr<IInputDevice> FDualSenseEngineModule::CreateInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& MessageHandler)
{
	return MakeShared<FDsInputDevice>(MessageHandler);
}

#undef LOCTEXT_NAMESPACE
