/* MaDevDrv_AutoPowerManagement @ 002211a4 64B */


/* YAMAHA::MaDevDrv_AutoPowerManagement(unsigned int) */

undefined8 YAMAHA::MaDevDrv_AutoPowerManagement(uint param_1)

{
  undefined8 uVar1;
  
  MaDevDrv_DisableIrq();
  uVar1 = machdep_AutoPowerManagement((uint)*(byte *)(DAT_00748ef8 + 8),param_1);
  MaDevDrv_EnableIrq();
  return uVar1;
}

