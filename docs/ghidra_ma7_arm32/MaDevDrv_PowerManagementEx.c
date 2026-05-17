/* MaDevDrv_PowerManagementEx @ 000de690 32B */


/* YAMAHA::MaDevDrv_PowerManagementEx(MADEVDRV_POWERS*) */

undefined4 YAMAHA::MaDevDrv_PowerManagementEx(MADEVDRV_POWERS *param_1)

{
  undefined4 uVar1;
  
  MaDevDrv_DisableIrq();
  uVar1 = machdep_PowerManagementEx
                    ((uint)*(byte *)(*(int *)(DAT_000de6b0 + 0xde6a0) + 8),
                     (_MAMACHDEP_POWERS *)param_1);
  MaDevDrv_EnableIrq();
  return uVar1;
}

