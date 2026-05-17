/* ldistsub2 @ 00249040 216B */


/* YAMAHA::ldistsub2() */

void YAMAHA::ldistsub2(void)

{
  uchar *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_lprm_00567530;
  lset_sc(PTR_lprm_00567530[0x31a]);
  iVar2 = (int)*(short *)(puVar4 + (ulong)(byte)PTR_ltavd_sc_005671e8[1] * 2 + 0x26) >> 7;
  iVar2 = ((((iVar2 + 0x40) * iVar2 + 0x1000) * iVar2 + 0x40000) * iVar2 + 0x1000000) / 5 >> 9;
  if (iVar2 == 0x8000) {
    *(undefined2 *)(puVar4 + (ulong)(byte)PTR_ltavd_up_00567ee0[2] * 2 + 0x26) = 0x7fff;
  }
  else {
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = (undefined2)(0x40000000 / iVar2);
    }
    *(undefined2 *)(puVar4 + (ulong)(byte)PTR_ltavd_up_00567ee0[2] * 2 + 0x26) = uVar3;
  }
  puVar1 = PTR_ltavd_up_00567ee0 + 2;
  *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavd_up_00567ee0[3] * 2 + 0x26) = 0x7fff;
  LSendCoef('\x02',puVar1);
  return;
}

