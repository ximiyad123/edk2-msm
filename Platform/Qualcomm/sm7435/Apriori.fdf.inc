APRIORI DXE {

  #
  # PI DXE Drivers producing Architectural Protocols (EFI Services)
  #
  INF  MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF  MdeModulePkg/Core/Dxe/DxeMain.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/EnvDxe/EnvDxe.inf
  INF  MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF  MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF  MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF  ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF  ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF  EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF  ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  INF  MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF  Platform/EFI_Binaries/Drivers/sm7435/SmemDxe/SmemDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/DALSYSDxe/DALSYSDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/HWIODxe/HWIODxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/ChipInfoDxe/ChipInfoDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/PlatformInfoDxe/PlatformInfoDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/ProjectInfoDxe/ProjectInfoDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/HALIOMMUDxe/HALIOMMUDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/GLinkDxe/GLinkDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/CmdDbDxe/CmdDbDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/PwrUtilsDxe/PwrUtilsDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/ULogDxe/ULogDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/IPCCDxe/IPCCDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/NpaDxe/NpaDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/RpmhDxe/RpmhDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/VcsDxe/VcsDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/ClockDxe/ClockDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/ICBDxe/ICBDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/TzDxe/ScmDxeLA.inf

  INF  MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
  INF  MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

  INF  Platform/EFI_Binaries/Drivers/sm7435/SdccDxe/SdccDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/UFSDxe/UFSDxe.inf

  INF  MdeModulePkg/Bus/Pci/PciBusDxe/PciBusDxe.inf
  INF  FatPkg/EnhancedFatDxe/Fat.inf

  INF  Platform/EFI_Binaries/Drivers/sm7435/TzDxe/TzDxeLA.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/QcomWDogDxe/QcomWDogDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/TLMMDxe/TLMMDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/SPMIDxe/SPMIDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/ResetRuntimeDxe/ResetRuntimeDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/PmicDxe/PmicDxeLa.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/PILDxe/PILDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/PILProxyDxe/PILProxyDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/SPSSDxe/SPSSDxe.inf

!if $(SECURE_BOOT_ENABLE) == TRUE
  INF  SecurityPkg/VariableAuthenticated/SecureBootConfigDxe/SecureBootConfigDxe.inf
  INF  SecurityPkg/VariableAuthenticated/SecureBootDefaultKeysDxe/SecureBootDefaultKeysDxe.inf
!endif

  INF  MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF  EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF  MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF  EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF  MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF  MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF  MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF  MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF  Platform/EFI_Binaries/Drivers/sm7435/FontDxe/FontDxe.inf

  INF  MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF  Platform/EFI_Binaries/Drivers/sm7435/I2CDxe/I2CDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/SPIDxe/SPIDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/QcomChargerDxe/QcomChargerDxeLA.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/ChargerExDxe/ChargerExDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/PmicGlinkDxe/PmicGlinkDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/UsbConfigDxe/UsbConfigDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/UsbInitDxe/UsbInitDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/XhciDxe/XhciDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/TsensDxe/TsensDxe.inf

  INF  Silicon/Qualcomm/QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/GpiDxe/GpiDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/DDRInfoDxe/DDRInfoDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/FeatureEnablerDxe/FeatureEnablerDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/UCDxe/UCDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/RNGDxe/RngDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/UsbMsdDxe/UsbMsdDxe.inf
  INF  Platform/EFI_Binaries/Drivers/sm7435/UsbDeviceDxe/UsbDeviceDxe.inf
     
  INF  EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF  MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF  MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF  MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
}