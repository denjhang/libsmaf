/* MaSrm_SetStream @ 00089bd4 76B */


/* YAMAHA::MaSrm_SetStream(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char
   const*, unsigned int) */

undefined4
YAMAHA::MaSrm_SetStream
          (uint param_1,uint param_2,uint param_3,uint param_4,uchar *param_5,uint param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = 0x3e < param_2;
  bVar4 = param_2 == 0x3f;
  if (param_2 < 0x40) {
    bVar5 = 2 < param_1;
    bVar4 = param_1 == 3;
  }
  if (!bVar5 || bVar4) {
    iVar1 = (param_2 + param_1 * 0x40) * 0x10;
    iVar3 = DAT_00089c20 + 0x89bf4 + iVar1;
    *(uint *)(DAT_00089c20 + 0x89bf4 + iVar1) = param_4;
    *(uchar **)(iVar3 + 8) = param_5;
    *(char *)(iVar3 + 0xc) = (char)param_3;
    *(uint *)(iVar3 + 4) = param_6;
    *(undefined1 *)(iVar3 + 0xe) = 0;
    *(undefined1 *)(iVar3 + 0xd) = 0xff;
    uVar2 = 0;
    if ((param_3 & 0x20) != 0) {
      *(undefined1 *)(iVar3 + 0xd) = 0x80;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

