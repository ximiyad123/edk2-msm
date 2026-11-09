// per-device BSP DXEs
INF Platform/EFI_Binaries/Drivers/sm7435/ButtonsDxe/ButtonsDxe.inf

// ACPI Tables: not available for sm7435 yet (boot with the DTB path first)
# FILE FREEFORM = 7E374E25-8E01-4FEE-87F2-390C23C606CD {
#   SECTION RAW = Platform/Xiaomi/sm7435/AcpiTables/garnet/DSDT.aml
#   SECTION RAW = Silicon/Qualcomm/sm7435/AcpiTables/MADT.aml
#   SECTION RAW = Silicon/Qualcomm/sm7435/AcpiTables/FADT.aml
#   SECTION RAW = Silicon/Qualcomm/sm7435/AcpiTables/GTDT.aml
#   SECTION UI = "AcpiTables"
# }

// Mainline device tree blob: not available yet
# FILE FREEFORM = 25462CDA-221F-47DF-AC1D-259CFAA4E326 {
#   SECTION RAW = Platform/Xiaomi/sm7435/FdtBlob/garnet.dtb
# }
