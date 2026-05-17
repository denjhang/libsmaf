/* MaDevDrv_PowerManagementEx @ 00221164 64B */


/* YAMAHA::MaDevDrv_PowerManagementEx(MADEVDRV_POWERS*) */

undefined8 YAMAHA::MaDevDrv_PowerManagementEx(MADEVDRV_POWERS *param_1)

{
  undefined8 uVar1;
  
  MaDevDrv_DisableIrq();
  uVar1 = machdep_PowerManagementEx((uint)*(byte *)(DAT_00748ef8 + 8),(_MAMACHDEP_POWERS *)param_1);
  MaDevDrv_EnableIrq();
  return uVar1;
}

