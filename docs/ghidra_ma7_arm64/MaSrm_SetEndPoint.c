/* MaSrm_SetEndPoint @ 001a98f8 68B */


/* YAMAHA::MaSrm_SetEndPoint(unsigned int, unsigned int) */

void YAMAHA::MaSrm_SetEndPoint(uint param_1,uint param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    *(uint *)(DAT_005dd9b8 + (ulong)(param_1 & 3) * 0x78 + 0x1c) = param_2;
    return;
  }
  lVar1 = DAT_005dd9b8 + (ulong)(param_1 & 3) * 0x78;
  *(undefined4 *)(lVar1 + 0x1c) = *(undefined4 *)(lVar1 + 4);
  return;
}

