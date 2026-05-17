/* MaCmd_MasterFineTuning @ 000eb540 390B */


/* YAMAHA::MaCmd_MasterFineTuning(unsigned int, int, unsigned int, unsigned char*) */

void YAMAHA::MaCmd_MasterFineTuning(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  iVar10 = param_1 * 0x65d0 + DAT_000eb6c8 + 0xeb556;
  iVar2 = 0;
  uVar1 = *(ushort *)(DAT_000eb6cc + ((param_3 & 0x3fff) >> 4) * 2 + 0xeb5a6);
  uVar8 = (uint)uVar1;
  uVar13 = (param_1 & 0xf) << 4;
  iVar12 = 0;
  *(ushort *)(iVar10 + 0x3ce) = uVar1;
  if (*(ushort *)(iVar10 + 0x3cc) != 0x400) {
    uVar8 = *(ushort *)(iVar10 + 0x3cc) * uVar8 >> 10;
  }
  do {
    uVar11 = uVar8 * ((uint)*(ushort *)(iVar10 + 0x18) * (uint)*(ushort *)(iVar10 + 0x1a) >> 10) >>
             10;
    *(short *)(iVar10 + 0x16) = (short)uVar11;
    uVar11 = uVar11 & 0xffff;
    if (*(ushort *)(iVar10 + 0x14) != 0x400) {
      uVar11 = *(ushort *)(iVar10 + 0x14) * uVar11 >> 10;
    }
    if (0x3ffe < uVar11) {
      uVar11 = 0x3fff;
    }
    if (param_2 < 0) {
      param_4[iVar2] = 0x8b;
      iVar3 = iVar2 + 2;
      param_4[iVar2 + 1] = (byte)uVar13 | 0x80;
    }
    else {
      uVar4 = 0;
      uVar5 = uVar4;
      uVar6 = param_2;
      uVar7 = param_2;
      if (0x7f < param_2) {
        do {
          param_4[uVar4 + iVar2] = (byte)uVar6 & 0x7f;
          uVar5 = uVar4 + 1;
          uVar7 = (int)uVar6 >> 7;
          if ((int)uVar7 < 0x80 || 1 < uVar5) break;
          param_4[uVar5 + iVar2] = (byte)uVar7 & 0x7f;
          uVar5 = uVar4 + 2;
          uVar7 = (int)uVar6 >> 0xe;
          if ((int)uVar7 < 0x80 || 1 < uVar5) break;
          param_4[uVar5 + iVar2] = (byte)uVar7 & 0x7f;
          uVar5 = uVar4 + 3;
          uVar7 = (int)uVar6 >> 0x15;
          if ((int)uVar7 < 0x80 || 1 < uVar5) break;
          param_4[uVar5 + iVar2] = (byte)uVar7 & 0x7f;
          uVar4 = uVar4 + 4;
          uVar6 = (int)uVar6 >> 0x1c;
          uVar5 = uVar4;
          uVar7 = uVar6;
        } while (0x7f < (int)uVar6 && uVar4 < 2);
      }
      iVar9 = iVar2 + 1 + uVar5;
      param_4[uVar5 + iVar2] = (byte)uVar7 | 0x80;
      iVar3 = iVar9 + 3;
      param_4[iVar9] = 0x8b;
      param_4[iVar9 + 1] = (byte)uVar13 | 0x80;
      param_4[iVar9 + 2] = 0x80;
    }
    iVar12 = iVar12 + 1;
    param_4[iVar3] = 0x90;
    uVar13 = uVar13 + 1 & 0xff;
    param_2 = param_2 & param_2 >> 0x1f;
    iVar10 = iVar10 + 0x1e;
    iVar2 = iVar3 + 3;
    param_4[iVar3 + 1] = (uchar)(uVar11 >> 7);
    param_4[iVar3 + 2] = (byte)uVar11 | 0x80;
    if (iVar12 == 0x10) {
      return;
    }
  } while( true );
}

