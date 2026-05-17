/* MaSrm_GetPan @ 001a95dc 48B */


/* YAMAHA::MaSrm_GetPan(unsigned int) */

ulong YAMAHA::MaSrm_GetPan(uint param_1)

{
  long lVar1;
  
  lVar1 = DAT_005dd9b8 + ((ulong)param_1 & 3) * 0x78;
  if (*(int *)(lVar1 + 0x4c) != 0) {
    return (ulong)*(byte *)(lVar1 + 0x44);
  }
  return 0xffffffff;
}

