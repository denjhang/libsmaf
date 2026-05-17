/* MaCmd_GetVoiceInfo @ 00231aac 404B */


/* YAMAHA::MaCmd_GetVoiceInfo(unsigned int, unsigned int, unsigned int, _MASNDVOICE*) */

undefined8 YAMAHA::MaCmd_GetVoiceInfo(uint param_1,uint param_2,uint param_3,_MASNDVOICE *param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  _MASNDVOICE _Var4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined2 uVar9;
  
  lVar8 = (ulong)param_2 * 0x1e + (ulong)param_1 * 0x65d0;
  bVar1 = (&DAT_0074a414)[lVar8];
  bVar2 = (&DAT_0074a415)[lVar8];
  if (bVar1 < 0x80) {
    uVar6 = 0;
    lVar8 = *(long *)(&DAT_00763b50 + (ulong)param_1 * 8);
    uVar3 = *(ushort *)(lVar8 + ((ulong)bVar1 * 0x80 + (ulong)bVar2 + 0x2e8) * 2);
    uVar7 = (ulong)uVar3;
    if ((uVar3 & 0xc000) == 0xc000) {
      uVar6 = 1;
      uVar3 = *(ushort *)(lVar8 + ((uVar7 & 0x3fff) * 0x80 + (ulong)param_3 + 0xae8) * 2);
      uVar7 = (ulong)uVar3;
      if (-1 < (short)uVar3) {
        return 0xffffffff;
      }
    }
    if ((uint)uVar7 >> 0xf != 0) {
LAB_00231b14:
      lVar8 = lVar8 + (uVar7 & 0x7fff) * 8;
      uVar5 = *(uint *)(lVar8 + 0x45d0);
      uVar9 = *(undefined2 *)(lVar8 + 0x45d4);
      _Var4 = *(_MASNDVOICE *)(lVar8 + 0x45d6);
      goto LAB_00231b2c;
    }
  }
  else {
    uVar6 = 0;
    lVar8 = *(long *)(&DAT_00763b50 + (ulong)param_1 * 8);
    uVar3 = *(ushort *)(lVar8 + ((ulong)(bVar1 - 0x80) * 0x80 + (ulong)param_3 + 0x1ae8) * 2);
    uVar7 = (ulong)uVar3;
    if ((short)uVar3 < 0) goto LAB_00231b14;
  }
  lVar8 = (ulong)param_1 * 0x65d0;
  if ((&DAT_0074a7d5)[lVar8] == '\x02') {
    return 0xffffffff;
  }
  if (bVar1 < 0x80) {
    _Var4 = *(_MASNDVOICE *)(&DAT_0052e000 + bVar2);
    uVar3 = *(ushort *)(&DAT_0052de00 + (ulong)bVar2 * 2);
    uVar9 = *(undefined2 *)(&DAT_0052df00 + (ulong)bVar2 * 2);
    if (0x7ff < uVar3) {
      *(uint *)param_4 = (uint)uVar3;
      *(undefined2 *)(param_4 + 4) = uVar9;
      param_4[6] = _Var4;
      return uVar6;
    }
    uVar6 = 1;
    lVar8 = (ulong)uVar3 * 0x80 + (ulong)param_3;
    uVar9 = *(undefined2 *)(&DAT_0052e080 + lVar8 * 2);
    uVar5 = (uint)*(ushort *)(&DAT_0052e580 + lVar8 * 2);
  }
  else {
    uVar9 = *(undefined2 *)(&DAT_0052ec80 + (ulong)param_3 * 2);
    _Var4 = *(_MASNDVOICE *)(&DAT_0052ed80 + param_3);
    uVar5 = (uint)*(ushort *)
                   (&DAT_0052ea80 +
                   ((ulong)param_3 + (ulong)(byte)(&DAT_0074a7d6)[lVar8] * 0x80) * 2);
  }
LAB_00231b2c:
  *(uint *)param_4 = uVar5;
  *(undefined2 *)(param_4 + 4) = uVar9;
  param_4[6] = _Var4;
  if (uVar5 == 0) {
    return 0xffffffff;
  }
  return uVar6;
}

