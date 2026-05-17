/* MaCmd_GetVoiceInfo @ 000ea5b0 302B */


/* YAMAHA::MaCmd_GetVoiceInfo(unsigned int, unsigned int, unsigned int, _MASNDVOICE*) */

undefined4 YAMAHA::MaCmd_GetVoiceInfo(uint param_1,uint param_2,uint param_3,_MASNDVOICE *param_4)

{
  _MASNDVOICE _Var1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar8 = DAT_000ea6e0 + 0xea5c8 + param_1 * 0x65d0 + param_2 * 0x1e;
  uVar4 = (uint)*(byte *)(iVar8 + 4);
  uVar5 = (uint)*(byte *)(iVar8 + 5);
  if (uVar4 < 0x80) {
    iVar8 = *(int *)(DAT_000ea6e4 + 0xea5e4 + param_1 * 4);
    uVar2 = (uint)*(ushort *)(iVar8 + (uVar5 + uVar4 * 0x80 + 0x2e8) * 2);
    if ((uVar2 & 0xc000) == 0xc000) {
      uVar2 = (uint)*(ushort *)(iVar8 + (param_3 + (uVar2 & 0xffff3fff) * 0x80 + 0xae8) * 2);
      if (-1 < (int)(uVar2 << 0x10)) {
        return 0xffffffff;
      }
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 0;
    iVar8 = *(int *)(DAT_000ea6e8 + 0xea636 + param_1 * 4);
    uVar2 = (uint)*(ushort *)(iVar8 + (param_3 + uVar4 * 0x80 + -0x2518) * 2);
  }
  if ((int)(uVar2 << 0x10) < 0) {
    iVar8 = iVar8 + (uVar2 & 0xffff7fff) * 8;
    uVar4 = *(uint *)(iVar8 + 0x45d0);
    uVar3 = *(undefined2 *)(iVar8 + 0x45d4);
    _Var1 = *(_MASNDVOICE *)(iVar8 + 0x45d6);
  }
  else {
    iVar8 = param_1 * 0x65d0 + DAT_000ea6ec + 0xea64e;
    if (*(char *)(iVar8 + 0x3c5) == '\x02') {
      return 0xffffffff;
    }
    if (uVar4 < 0x80) {
      iVar8 = DAT_000ea6f0 + 0xea666;
      uVar4 = (uint)*(ushort *)(iVar8 + uVar5 * 2);
      _Var1 = *(_MASNDVOICE *)(iVar8 + uVar5 + 0x200);
      uVar3 = *(undefined2 *)(iVar8 + uVar5 * 2 + 0x100);
      if (0x7ff < uVar4) {
        *(uint *)param_4 = uVar4;
        *(undefined2 *)(param_4 + 4) = uVar3;
        param_4[6] = _Var1;
        return uVar7;
      }
      uVar7 = 1;
      iVar8 = iVar8 + (param_3 + uVar4 * 0x80) * 2;
      uVar3 = *(undefined2 *)(iVar8 + 0x280);
      uVar4 = (uint)*(ushort *)(iVar8 + 0x780);
    }
    else {
      iVar6 = DAT_000ea6f4 + 0xea6a0;
      _Var1 = *(_MASNDVOICE *)(param_3 + iVar6 + 0xf80);
      uVar3 = *(undefined2 *)(iVar6 + param_3 * 2 + 0xe80);
      uVar4 = (uint)*(ushort *)
                     (iVar6 + (param_3 + (uint)*(byte *)(iVar8 + 0x3c6) * 0x80) * 2 + 0xc80);
    }
  }
  *(uint *)param_4 = uVar4;
  *(undefined2 *)(param_4 + 4) = uVar3;
  param_4[6] = _Var1;
  if (uVar4 == 0) {
    return 0xffffffff;
  }
  return uVar7;
}

