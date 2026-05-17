/* MaDmyHvDrv_SetCommand @ 001a51b8 8B */


/* YAMAHA::MaDmyHvDrv_SetCommand(unsigned int, unsigned int, unsigned long) */

undefined1  [16] YAMAHA::MaDmyHvDrv_SetCommand(uint param_1,uint param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._8_4_ = param_2;
  auVar1._0_8_ = 0xffffffff;
  return auVar1;
}

