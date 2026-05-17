/* MaCmd_SetVolume @ 0023a148 200B */


/* YAMAHA::MaCmd_SetVolume(unsigned int, int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_SetVolume(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 < 0) {
    iVar2 = 3;
    uVar5 = 2;
    uVar6 = 1;
    uVar7 = 0;
  }
  else {
    if (param_2 < 0x80) {
      iVar2 = 4;
      uVar5 = 3;
      uVar6 = 2;
      uVar7 = 1;
      uVar4 = 0;
    }
    else {
      lVar3 = 0;
      do {
        iVar2 = (int)lVar3;
        bVar1 = (byte)param_2;
        param_2 = param_2 >> 7;
        param_4[lVar3] = bVar1 & 0x7f;
        if (1 < iVar2 + 1U) break;
        lVar3 = 1;
      } while (0x7f < param_2);
      uVar7 = (ulong)(iVar2 + 2);
      uVar6 = (ulong)(iVar2 + 3);
      uVar5 = (ulong)(iVar2 + 4);
      uVar4 = (ulong)(iVar2 + 1U);
      iVar2 = iVar2 + 5;
    }
    param_4[uVar4] = (byte)param_2 | 0x80;
  }
  param_4[uVar7] = 0xf2;
  param_4[uVar6] = (uchar)param_1;
  param_4[uVar5] = (byte)param_3 & 0x7c | 0x81;
  if (param_1 < 4) {
    (&DAT_0074a7d4)[(ulong)param_1 * 0x65d0] = (byte)param_3;
  }
  return iVar2;
}

