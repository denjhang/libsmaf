/* lset_sc @ 00244fdc 228B */


/* YAMAHA::lset_sc(unsigned char) */

void YAMAHA::lset_sc(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar8 = PTR_lprm_00567530;
  puVar7 = PTR_ltavd_sc_005671e8;
  bVar1 = PTR_ltavd_sc_005671e8[1];
  bVar2 = PTR_ltavd_sc_005671e8[2];
  bVar3 = PTR_ltavd_sc_005671e8[3];
  bVar4 = PTR_ltavd_sc_005671e8[4];
  sVar6 = 0x3fff - (short)(((uint)param_1 * 0x1fff) / 0x7f);
  *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)*PTR_ltavd_sc_005671e8 * 2 + 0x26) = 0x7fff;
  *(short *)(puVar8 + (ulong)bVar1 * 2 + 0x26) = sVar6;
  *(short *)(puVar8 + (ulong)bVar2 * 2 + 0x26) = sVar6;
  *(short *)(puVar8 + (ulong)bVar3 * 2 + 0x26) = sVar6;
  *(short *)(puVar8 + (ulong)bVar4 * 2 + 0x26) = sVar6;
  bVar1 = PTR_ltavd_mx_00567788[1];
  bVar2 = PTR_ltavd_mx_00567788[2];
  bVar3 = PTR_ltavd_mx_00567788[3];
  bVar4 = PTR_ltavd_mx_00567788[4];
  bVar5 = PTR_ltavd_mx_00567788[5];
  *(undefined2 *)(puVar8 + (ulong)(byte)*PTR_ltavd_mx_00567788 * 2 + 0x26) = 0;
  *(undefined2 *)(puVar8 + (ulong)bVar1 * 2 + 0x26) = 0x1980;
  *(undefined2 *)(puVar8 + (ulong)bVar2 * 2 + 0x26) = 0x1980;
  *(undefined2 *)(puVar8 + (ulong)bVar3 * 2 + 0x26) = 0x1980;
  *(undefined2 *)(puVar8 + (ulong)bVar4 * 2 + 0x26) = 0x1980;
  *(undefined2 *)(puVar8 + (ulong)bVar5 * 2 + 0x26) = 0x1980;
  LSendCoef('\x05',puVar7);
  return;
}

