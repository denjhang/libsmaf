/* MaSrm_SetStopTime @ 001a98d0 40B */


/* YAMAHA::MaSrm_SetStopTime(unsigned int, unsigned int) */

void YAMAHA::MaSrm_SetStopTime(uint param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = DAT_005dd9b8 + ((ulong)param_1 & 3) * 0x78;
  *(uint *)(lVar1 + 0x18) = param_2;
  *(undefined1 *)(lVar1 + 0x45) = 1;
  return;
}

