/* MaCmd_NoteOffMa2 @ 000ece38 294B */


/* YAMAHA::MaCmd_NoteOffMa2(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_NoteOffMa2(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

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
  _MASNDVOICE a_Stack_28 [12];
  
  iVar1 = MaCmd_GetVoiceInfo(param_1,param_3 & 0xf,param_4 & 0x7f,a_Stack_28);
  iVar6 = DAT_000ecf60 + 0xece68 + param_1 * 0x65d0 + (param_3 & 0xf) * 0x1e;
  if (iVar1 < 0) {
    iVar1 = MaCmd_Nop(param_2,0,param_5);
    return iVar1;
  }
  uVar3 = 0;
  *(undefined1 *)(iVar6 + 2) = 0;
  if (param_2 < 0) {
    *param_5 = 0x80;
    iVar1 = 4;
    iVar7 = 3;
    iVar2 = 2;
    param_5[1] = *(byte *)(iVar6 + 3) | 0x80;
  }
  else {
    if (param_2 < 0x80) {
      iVar1 = 6;
      iVar7 = 5;
      iVar10 = 3;
      iVar8 = 2;
      iVar9 = 1;
      iVar2 = 4;
    }
    else {
      do {
        param_5[uVar3] = (byte)param_2 & 0x7f;
        uVar4 = uVar3 + 1;
        iVar5 = param_2 >> 7;
        if (iVar5 < 0x80 || 1 < uVar4) break;
        param_5[uVar4] = (byte)iVar5 & 0x7f;
        uVar4 = uVar3 + 2;
        iVar5 = param_2 >> 0xe;
        if (iVar5 < 0x80 || 1 < uVar4) break;
        param_5[uVar4] = (byte)iVar5 & 0x7f;
        uVar4 = uVar3 + 3;
        iVar5 = param_2 >> 0x15;
        if (iVar5 < 0x80 || 1 < uVar4) break;
        param_5[uVar4] = (byte)iVar5 & 0x7f;
        uVar3 = uVar3 + 4;
        param_2 = param_2 >> 0x1c;
        uVar4 = uVar3;
        iVar5 = param_2;
      } while (0x7f < param_2 && uVar3 < 2);
      iVar9 = uVar4 + 1;
      iVar8 = uVar4 + 2;
      iVar10 = uVar4 + 3;
      iVar7 = uVar4 + 5;
      iVar1 = uVar4 + 6;
      iVar2 = uVar4 + 4;
      uVar3 = uVar4;
      param_2 = iVar5;
    }
    param_5[uVar3] = (byte)param_2 | 0x80;
    param_5[iVar9] = 0x80;
    param_5[iVar8] = *(byte *)(iVar6 + 3) | 0x80;
    param_5[iVar10] = 0x80;
  }
  param_5[iVar2] = 0x8a;
  param_5[iVar7] = 0x80;
  return iVar1;
}

