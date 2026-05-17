/* ldistsub1 @ 00248f48 248B */


/* YAMAHA::ldistsub1(unsigned short, unsigned short, unsigned short) */

void YAMAHA::ldistsub1(ushort param_1,ushort param_2,ushort param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  short sVar8;
  int iVar9;
  
  puVar6 = PTR_lprm_00567530;
  bVar2 = *PTR_ltavd_up_00567ee0;
  sVar8 = (short)(((uint)param_1 * 0x7cbf) / 0x7f) + 0x340;
  iVar5 = (int)sVar8;
  *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavd_up_00567ee0[1] * 2 + 0x26) = sVar8;
  *(short *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = sVar8;
  puVar6 = PTR_ltavd_up_00567ee0;
  uVar7 = (uint)param_2;
  if (param_3 == 0) {
    iVar9 = 0x7ea;
    if (param_1 < 0xb) {
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = 0xa900000 / iVar5;
      }
      iVar9 = 0;
      if (iVar5 != 0) {
        iVar9 = (iVar4 << 7) / iVar5;
      }
    }
    uVar3 = iVar9 * *(int *)(PTR_ltb_vol_00567a08 + (long)(int)uVar7 * 4);
    uVar1 = uVar3 + 0x7f;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    sVar8 = (short)(((ulong)uVar1 << 0x21) >> 0x30);
    if ((sVar8 == 0) && (uVar7 != 0)) {
      sVar8 = 1;
    }
  }
  else {
    sVar8 = (short)*(undefined4 *)(PTR_ltb_vol_00567a08 + (long)(int)uVar7 * 4);
  }
  *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavd_up_00567ee0[4] * 2 + 0x26) = sVar8;
  LSendCoef('\x02',puVar6);
  LSendCoef('\x01',puVar6 + 4);
  return;
}

