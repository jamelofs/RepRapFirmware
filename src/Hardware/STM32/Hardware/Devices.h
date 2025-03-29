#ifndef SRC_STM32_HARDWARE_DEVICES_H_
#define SRC_STM32_HARDWARE_DEVICES_H_

#include <AsyncSerial.h>
typedef AsyncSerial UARTClass;
#ifndef __STM32MP1__
#define SUPPORT_USB		1		// needed by USBSerial.h
#include <USBSerial.h>
extern USBSerial serialUSB;
#endif
void DeviceInit() noexcept;
void StopAnalogTask() noexcept;
void StopUsbTask() noexcept;

#endif /* SRC_STM32_HARDWARE_DEVICES_H_ */
