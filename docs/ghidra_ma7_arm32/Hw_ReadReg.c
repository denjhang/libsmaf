/* Hw_ReadReg @ 000354b8 946B */


uint Hw_ReadReg(int param_1)

{
  ushort *puVar1;
  byte bVar2;
  uchar uVar3;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  bool bVar11;
  uint uVar4;
  
  if (*(char *)(DAT_0003588c + 0x354c2) != '\0') {
    return 0xff;
  }
  EnterCriticalSection((critical_section *)(DAT_00035890 + 0x354d2));
  iVar7 = DAT_000358a8;
  switch(param_1) {
  case 0:
    uVar9 = (uint)*(byte *)(DAT_000358a8 + 0x355a9);
    iVar6 = ARM::SIrqFifo_GetStatus();
    iVar8 = DAT_000358ac;
    if (iVar6 << 0x1f < 0) {
      uVar10 = *(ushort *)(iVar7 + 0x355aa) & 0xffef;
    }
    else {
      uVar10 = *(ushort *)(iVar7 + 0x355aa) | 0x10;
    }
    *(ushort *)(DAT_000358ac + 0x355b6) = uVar10;
    iVar6 = ARM::Sequencer_GetStatus('\0');
    iVar7 = DAT_000358b0;
    if (iVar6 << 0x1d < 0) {
      uVar10 = *(ushort *)(iVar8 + 0x355b6) | 0x4000;
    }
    else {
      uVar10 = *(ushort *)(iVar8 + 0x355b6) & 0xbfff;
    }
    *(ushort *)(DAT_000358b0 + 0x355e6) = uVar10;
    FUN_00034180(0);
    FUN_00034180(1);
    FUN_00034180(2);
    FUN_00034180(3);
    iVar8 = ARM::Sequencer_GetStatus('\x01');
    puVar1 = (ushort *)(DAT_000358b4 + 0x35652);
    bVar11 = -1 < iVar8 << 0x1d;
    if (bVar11) {
      uVar4 = (*(ushort *)(iVar7 + 0x355e6) & 0xffffff7f) << 0x10;
    }
    else {
      uVar4 = *(ushort *)(iVar7 + 0x355e6) | 0x80;
    }
    uVar10 = *(ushort *)(DAT_000358b8 + 0x35628);
    if (bVar11) {
      uVar4 = uVar4 >> 0x10;
    }
    *(short *)(DAT_000358b4 + 0x35618) = (short)uVar4;
    if ((uVar4 & (uVar10 & *puVar1)) != 0) {
      uVar9 = uVar9 | 1;
    }
    break;
  case 1:
    uVar9 = (uint)*(byte *)(DAT_000358a4 + 0x355a0);
    break;
  case 2:
    uVar9 = FUN_00033fe4(*(undefined1 *)(DAT_000358a0 + 0x35588));
    break;
  case 3:
    uVar9 = (uint)*(byte *)(DAT_0003589c + 0x355b8);
    *(byte *)(DAT_0003589c + 0x35575) = *(byte *)(DAT_0003589c + 0x35575) & 0xcd;
    break;
  case 4:
    uVar9 = ARM::SIrqFifo_GetData();
    break;
  case 5:
    uVar9 = 0x71;
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    uVar3 = (uchar)(param_1 - 6U);
    uVar4 = ARM::STMCONTROL_GetStreamPG(uVar3);
    *(uint *)(DAT_00035898 + (param_1 - 6U & 0xff) * 4 + 0x3556a) = uVar4;
    pbVar5 = (byte *)ARM::VIRTUALREGISTER_GetStreamInfoPointer(uVar3);
    bVar2 = *pbVar5;
    if ((bVar2 & 3) == 1) {
      if ((bVar2 & 0x40) == 0) {
        uVar9 = 5;
      }
      else {
        uVar9 = 9;
      }
    }
    else if ((bVar2 & 3) == 0) {
      uVar9 = 3;
    }
    else if ((bVar2 & 0x40) == 0) {
      uVar9 = 3;
    }
    else {
      uVar9 = 5;
    }
    if (uVar4 < uVar9) {
      uVar9 = 0x80;
    }
    else {
      uVar9 = 0;
    }
    if ((bVar2 & 0x40) == 0) {
      iVar7 = 0x16;
    }
    else {
      iVar7 = 0x15;
    }
    uVar9 = (uVar4 << iVar7) >> 0x19 | uVar9;
    break;
  case 10:
    uVar9 = 0;
    break;
  case 0xb:
    iVar6 = ARM::SIrqFifo_GetStatus();
    iVar8 = DAT_000358e8;
    iVar7 = DAT_000358e4;
    if (iVar6 << 0x1f < 0) {
      uVar10 = *(ushort *)(DAT_000358e0 + 0x357ac) & 0xffef;
    }
    else {
      uVar10 = *(ushort *)(DAT_00035900 + 0x35874) | 0x10;
    }
    *(ushort *)(DAT_000358e4 + 0x357c0) = uVar10;
    iVar6 = ARM::Sequencer_GetStatus('\0');
    if (iVar6 << 0x1d < 0) {
      uVar10 = *(ushort *)(iVar7 + 0x357c0) | 0x4000;
    }
    else {
      uVar10 = *(ushort *)(iVar7 + 0x357c0) & 0xbfff;
    }
    *(ushort *)(iVar8 + 0x357c2) = uVar10;
    FUN_00034180(0);
    FUN_00034180(1);
    FUN_00034180(2);
    FUN_00034180(3);
    iVar7 = ARM::Sequencer_GetStatus('\x01');
    uVar9 = (uint)*(ushort *)(iVar8 + 0x357c2);
    pbVar5 = (byte *)(DAT_000358ec + 0x35842);
    bVar11 = -1 < iVar7 << 0x1d;
    if (bVar11) {
      uVar9 = (uVar9 & 0xffffff7f) << 0x10;
    }
    else {
      uVar9 = uVar9 | 0x80;
    }
    bVar2 = *(byte *)(DAT_000358f0 + 0x3581a);
    if (bVar11) {
      uVar9 = uVar9 >> 0x10;
    }
    *(short *)(DAT_000358ec + 0x35808) = (short)uVar9;
    uVar9 = (bVar2 & *pbVar5) & uVar9;
    break;
  case 0xc:
    iVar8 = ARM::SIrqFifo_GetStatus();
    iVar7 = DAT_000358d4;
    if (iVar8 << 0x1f < 0) {
      uVar10 = *(ushort *)(DAT_000358d0 + 0x3571a) & 0xffef;
    }
    else {
      uVar10 = *(ushort *)(DAT_000358f8 + 0x35852) | 0x10;
    }
    *(ushort *)(DAT_000358d4 + 0x3572a) = uVar10;
    iVar6 = ARM::Sequencer_GetStatus('\0');
    iVar8 = DAT_000358d8;
    if (iVar6 << 0x1d < 0) {
      uVar10 = *(ushort *)(iVar7 + 0x3572a) | 0x4000;
    }
    else {
      uVar10 = *(ushort *)(iVar7 + 0x3572a) & 0xbfff;
    }
    *(ushort *)(DAT_000358d8 + 0x35742) = uVar10;
    FUN_00034180(0);
    FUN_00034180(1);
    FUN_00034180(2);
    FUN_00034180(3);
    iVar7 = ARM::Sequencer_GetStatus('\x01');
    bVar11 = -1 < iVar7 << 0x1d;
    if (bVar11) {
      uVar9 = (*(ushort *)(iVar8 + 0x35742) & 0xffffff7f) << 0x10;
    }
    else {
      uVar9 = *(ushort *)(iVar8 + 0x35742) | 0x80;
    }
    puVar1 = (ushort *)(DAT_000358dc + 0x357ba);
    if (bVar11) {
      uVar9 = uVar9 >> 0x10;
    }
    *(short *)(DAT_000358dc + 0x35780) = (short)uVar9;
    uVar9 = (uVar9 & *puVar1) >> 8;
    break;
  case 0xd:
    uVar9 = (uint)*(byte *)(DAT_000358f4 + 0x35878);
    break;
  case 0xe:
    uVar9 = (uint)(*(ushort *)(DAT_000358cc + 0x3573e) >> 8);
    break;
  case 0xf:
    iVar6 = ARM::SIrqFifo_GetStatus();
    iVar8 = DAT_000358c4;
    iVar7 = DAT_000358c0;
    if (iVar6 << 0x1f < 0) {
      uVar10 = *(ushort *)(DAT_000358bc + 0x35660) & 0xffef;
    }
    else {
      uVar10 = *(ushort *)(DAT_000358fc + 0x35862) | 0x10;
    }
    *(ushort *)(DAT_000358c0 + 0x35676) = uVar10;
    iVar6 = ARM::Sequencer_GetStatus('\0');
    if (iVar6 << 0x1d < 0) {
      uVar10 = *(ushort *)(iVar7 + 0x35676) | 0x4000;
    }
    else {
      uVar10 = *(ushort *)(iVar7 + 0x35676) & 0xbfff;
    }
    *(ushort *)(iVar8 + 0x35678) = uVar10;
    FUN_00034180(0);
    FUN_00034180(1);
    FUN_00034180(2);
    FUN_00034180(3);
    iVar7 = ARM::Sequencer_GetStatus('\x01');
    uVar9 = (uint)*(ushort *)(iVar8 + 0x35678);
    if (iVar7 << 0x1d < 0) {
      uVar9 = uVar9 | 0x80;
    }
    else {
      uVar9 = uVar9 & 0xffffff7f;
    }
    *(short *)(DAT_000358c8 + 0x356cc) = (short)uVar9;
    uVar9 = (int)uVar9 >> 7 & 0x80U | (int)uVar9 >> 1 & 0x40U | uVar9 & 0x1f;
    break;
  default:
    uVar9 = 0xff;
  }
  LeaveCriticalSection((critical_section *)(DAT_00035894 + 0x3550a));
  return uVar9;
}

