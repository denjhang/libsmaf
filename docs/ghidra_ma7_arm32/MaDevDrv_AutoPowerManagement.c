/* MaDevDrv_AutoPowerManagement @ 000de6b4 32B */


/* YAMAHA::MaDevDrv_AutoPowerManagement(unsigned int) */

undefined4 YAMAHA::MaDevDrv_AutoPowerManagement(uint param_1)

{
  undefined4 uVar1;
  
  MaDevDrv_DisableIrq();
  uVar1 = machdep_AutoPowerManagement((uint)*(byte *)(*(int *)(DAT_000de6d4 + 0xde6c4) + 8),param_1)
  ;
  MaDevDrv_EnableIrq();
  return uVar1;
}

