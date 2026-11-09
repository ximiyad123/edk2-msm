#include <Library/ArmGicLib.h>
#include <Library/ArmLib.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Library/HobLib.h>
#include <Library/IoLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/PcdLib.h>
#include <Library/PrintLib.h>
#include <Library/SerialPortLib.h>
#include <Library/MemoryMapHelperLib.h>
#include <Library/PlatformPrePiLib.h>

#include "PlatformUtils.h"

VOID InitializeSharedUartBuffers(VOID)
{
  INTN *pFbConPosition =
      (INTN
           *)(FixedPcdGet32(PcdMipiFrameBufferAddress) + (FixedPcdGet32(PcdMipiFrameBufferWidth) * FixedPcdGet32(PcdMipiFrameBufferHeight) * FixedPcdGet32(PcdMipiFrameBufferPixelBpp) / 8));

  *(pFbConPosition + 0) = 0;
  *(pFbConPosition + 1) = 0;
}

VOID UartInit(VOID)
{
  SerialPortInitialize();
  InitializeSharedUartBuffers();

  DEBUG((EFI_D_INFO, "\nRenegade Project edk2-msm (AArch64)\n"));
  DEBUG(
      (EFI_D_INFO, "Firmware version %s built %a %a\n\n",
       (CHAR16 *)PcdGetPtr(PcdFirmwareVersionString), __TIME__, __DATE__));
}

VOID PlatformInitialize(VOID)
{
  // Initialize UART Serial
  UartInit();

  // Initialize GIC (wake up redistributors of the early-init cores)
  for (UINTN i = 0; i < EARLY_INIT_CORE_COUNT; i++) {
    MmioWrite32(
        GICR_WAKER_CPU(i),
        (MmioRead32(GICR_WAKER_CPU(i)) & ~GIC_WAKER_PROCESSORSLEEP));
  }
  /* TODO: Netrani also detaches the MDP SMMU streams (0x800,0x801,0x804,0xC01)
     via ArmSmmuDetach(); needed if the display stops after the handover. */
}
