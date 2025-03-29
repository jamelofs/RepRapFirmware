#include "Devices.h"
#include <RepRapFirmware.h>
#include <AnalogIn.h>
#include <AnalogOut.h>
#ifndef __STM32MP1__
USBSerial serialUSB;
#endif


// Device initialisation
void DeviceInit() noexcept
{
	LegacyAnalogIn::AnalogInInit();
	AnalogOut::Init();

}

void StopAnalogTask() noexcept
{
}

void StopUsbTask() noexcept
{
#if CORE_USES_TINYUSB
	usbDeviceTask.TerminateAndUnlink();
#endif
}

