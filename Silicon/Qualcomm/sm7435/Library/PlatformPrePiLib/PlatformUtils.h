#ifndef _PLATFORM_UTILS_H_
#define _PLATFORM_UTILS_H_

#include <Library/PcdLib.h>

#define GICR_WAKER 0x0014
#define GICR_SIZE 0x20000
#define GICR_WAKER_CURRENT_CPU FixedPcdGet64(PcdGicRedistributorsBase) + GICR_WAKER

#define GICR_WAKER_CPU(x) (FixedPcdGet64(PcdGicRedistributorsBase) + ((x) * GICR_SIZE) + GICR_WAKER)
#define EARLY_INIT_CORE_COUNT 2 /* EarlyInitCoreCnt in DeviceConfigurationMap.h */

#define GIC_WAKER_PROCESSORSLEEP 2

VOID PlatformInitialize(VOID);

#endif /* _PLATFORM_UTILS_H_ */