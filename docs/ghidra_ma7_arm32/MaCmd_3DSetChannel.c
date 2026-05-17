/* MaCmd_3DSetChannel @ 000f28d0 326B */


/* YAMAHA::MaCmd_3DSetChannel(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_3DSetChannel(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar5 = DAT_000f2a18 + 0xf28e4;
  if (*(char *)(iVar5 + param_1 * 0x65d0 + 0x3c8) != '\x01') {
    iVar7 = param_1 * 0x65d0 + param_3 * 0x1e;
    *(byte *)(iVar5 + iVar7) = (byte)((param_4 & 3) << 4) | 0x40;
    if (param_3 < 0x10) {
      if (param_2 < 0) {
        *param_5 = 0x8b;
        param_5[1] = (char)param_3 + (char)(param_1 << 4) | 0x80;
        iVar1 = 4;
        iVar6 = 3;
        iVar11 = 2;
      }
      else {
        if (param_2 < 0x80) {
          iVar1 = 6;
          iVar6 = 5;
          iVar8 = 3;
          iVar9 = 2;
          iVar10 = 1;
          iVar11 = 4;
          uVar4 = 0;
        }
        else {
          uVar3 = 0;
          do {
            param_5[uVar3] = (byte)param_2 & 0x7f;
            uVar4 = uVar3 + 1;
            iVar2 = param_2 >> 7;
            if (iVar2 < 0x80 || 1 < uVar4) break;
            param_5[uVar4] = (byte)iVar2 & 0x7f;
            uVar4 = uVar3 + 2;
            iVar2 = param_2 >> 0xe;
            if (iVar2 < 0x80 || 1 < uVar4) break;
            param_5[uVar4] = (byte)iVar2 & 0x7f;
            uVar4 = uVar3 + 3;
            iVar2 = param_2 >> 0x15;
            if (iVar2 < 0x80 || 1 < uVar4) break;
            param_5[uVar4] = (byte)iVar2 & 0x7f;
            uVar3 = uVar3 + 4;
            param_2 = param_2 >> 0x1c;
            iVar2 = param_2;
            uVar4 = uVar3;
          } while (0x7f < param_2 && uVar3 < 2);
          iVar10 = uVar4 + 1;
          iVar9 = uVar4 + 2;
          iVar8 = uVar4 + 3;
          iVar6 = uVar4 + 5;
          iVar1 = uVar4 + 6;
          iVar11 = uVar4 + 4;
          param_2 = iVar2;
        }
        param_5[uVar4] = (byte)param_2 | 0x80;
        param_5[iVar10] = 0x8b;
        param_5[iVar9] = (char)param_3 + (char)(param_1 << 4) | 0x80;
        param_5[iVar8] = 0x80;
      }
      param_5[iVar11] = 0x94;
      param_5[iVar6] = *(byte *)(iVar5 + iVar7) | 0x80 | (byte)param_1;
      return iVar1;
    }
  }
  iVar5 = MaCmd_Nop(param_2,0,param_5);
  return iVar5;
}

