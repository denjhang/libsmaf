/* MaCmd_DrySendLevel @ 000edaf4 306B */


/* YAMAHA::MaCmd_DrySendLevel(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_DrySendLevel(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  code cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar6 = param_3 & 0x1f;
  cVar1 = MaCmd_ChorusSendLevel[DAT_000edc28 + (param_4 & 0x7f)];
  *(code *)(DAT_000edc2c + param_1 * 0x65d0 + uVar6 * 0x1e + 0xedb37) = cVar1;
  if (0xf < uVar6) {
    iVar2 = MaCmd_Nop(param_2,0,param_5);
    return iVar2;
  }
  if (param_2 < 0) {
    *param_5 = 0x8b;
    param_5[1] = (char)uVar6 + (char)(param_1 << 4) | 0x80;
    iVar2 = 4;
    iVar8 = 3;
    iVar7 = 2;
  }
  else {
    if (param_2 < 0x80) {
      iVar2 = 6;
      iVar8 = 5;
      iVar9 = 3;
      iVar10 = 2;
      iVar11 = 1;
      iVar7 = 4;
      uVar5 = 0;
    }
    else {
      uVar4 = 0;
      do {
        param_5[uVar4] = (byte)param_2 & 0x7f;
        uVar5 = uVar4 + 1;
        iVar3 = param_2 >> 7;
        if (iVar3 < 0x80 || 1 < uVar5) break;
        param_5[uVar5] = (byte)iVar3 & 0x7f;
        uVar5 = uVar4 + 2;
        iVar3 = param_2 >> 0xe;
        if (iVar3 < 0x80 || 1 < uVar5) break;
        param_5[uVar5] = (byte)iVar3 & 0x7f;
        uVar5 = uVar4 + 3;
        iVar3 = param_2 >> 0x15;
        if (iVar3 < 0x80 || 1 < uVar5) break;
        param_5[uVar5] = (byte)iVar3 & 0x7f;
        uVar4 = uVar4 + 4;
        param_2 = param_2 >> 0x1c;
        iVar3 = param_2;
        uVar5 = uVar4;
      } while (0x7f < param_2 && uVar4 < 2);
      iVar11 = uVar5 + 1;
      iVar10 = uVar5 + 2;
      iVar9 = uVar5 + 3;
      iVar8 = uVar5 + 5;
      iVar2 = uVar5 + 6;
      iVar7 = uVar5 + 4;
      param_2 = iVar3;
    }
    param_5[uVar5] = (byte)param_2 | 0x80;
    param_5[iVar11] = 0x8b;
    param_5[iVar10] = (char)uVar6 + (char)(param_1 << 4) | 0x80;
    param_5[iVar9] = 0x80;
  }
  param_5[iVar7] = 0x97;
  param_5[iVar8] = (byte)cVar1 & 0x7c | 0x80;
  return iVar2;
}

