// DualSense Support - Unreal Engine Plugin - (c) Wise Labs 2020-2024

#pragma once

#include "IInputDeviceModule.h"

class DUALSENSEENGINE_API FDualSenseEngineModule : public IInputDeviceModule
{
public:
	virtual void StartupModule() override;

	virtual TSharedPtr<IInputDevice> CreateInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& MessageHandler) override;
};
