/* MaCmd_HvNoteOff @ 00233294 188B */


/* YAMAHA::MaCmd_HvNoteOff(int, unsigned char*) */

int YAMAHA::MaCmd_HvNoteOff(int param_1,uchar *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 < 0) {
    *param_2 = 0x9c;
    param_2[1] = '\x01';
    param_2[2] = 0x80;
    return 3;
  }
  if (param_1 < 0x80) {
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
      bVar1 = (byte)param_1;
      param_1 = param_1 >> 7;
      param_2[lVar3] = bVar1 & 0x7f;
      if (1 < iVar2 + 1U) break;
      lVar3 = 1;
    } while (0x7f < param_1);
    uVar7 = (ulong)(iVar2 + 2);
    uVar6 = (ulong)(iVar2 + 3);
    uVar5 = (ulong)(iVar2 + 4);
    uVar4 = (ulong)(iVar2 + 1U);
    iVar2 = iVar2 + 5;
  }
  param_2[uVar4] = (byte)param_1 | 0x80;
  param_2[uVar7] = 0x9c;
  param_2[uVar6] = '\x01';
  param_2[uVar5] = 0x80;
  return iVar2;
}

