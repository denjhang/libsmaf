/* lset_rsm_combg @ 0024e8a0 308B */


/* YAMAHA::lset_rsm_combg(unsigned short, short, unsigned short, unsigned char const*) */

void YAMAHA::lset_rsm_combg(ushort param_1,short param_2,ushort param_3,uchar *param_4)

{
  undefined2 uVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  uint uVar7;
  char cVar8;
  
  puVar5 = PTR_ltb_g_00567f38;
  puVar4 = PTR_lprm_00567530;
  iVar3 = (int)param_2;
  cVar8 = '\0';
  if (0x37 < (byte)PTR_ltb_rsm_code_00567360[param_3]) {
    cVar8 = PTR_ltb_rsm_code_00567360[param_3] - 0x38;
  }
  uVar7 = (uint)param_1;
  if (iVar3 < 0) {
    if (uVar7 == 0) {
      cVar6 = *PTR_ltb_rvtc_00567378;
    }
    else {
      cVar6 = (char)((int)(iVar3 * ((uint)(byte)PTR_ltb_rvtc_00567378[(int)uVar7] -
                                   (uint)(byte)PTR_ltb_rvtc_00567378[(int)(uVar7 - 1)])) / 10) +
              PTR_ltb_rvtc_00567378[(int)uVar7];
    }
  }
  else {
    cVar6 = (char)((int)(iVar3 * ((uint)(byte)PTR_ltb_rvtc_00567378[(int)(uVar7 + 1)] -
                                 (uint)(byte)PTR_ltb_rvtc_00567378[(int)uVar7])) / 10) +
            PTR_ltb_rvtc_00567378[(int)uVar7];
  }
  lVar2 = (ulong)(byte)(cVar8 + cVar6) * 4;
  *(undefined2 *)(PTR_lprm_00567530 + (ulong)*param_4 * 2 + 0x26) =
       *(undefined2 *)(PTR_ltb_g_00567f38 + lVar2 + 2);
  if ((byte)(cVar8 + cVar6) < 0xcb) {
    uVar1 = *(undefined2 *)(puVar5 + lVar2);
    *(undefined2 *)(puVar4 + (ulong)param_4[1] * 2 + 0x26) = uVar1;
    *(undefined2 *)(puVar4 + (ulong)param_4[2] * 2 + 0x26) = uVar1;
    return;
  }
  *(undefined2 *)(puVar4 + (ulong)param_4[1] * 2 + 0x26) = 0x3fc0;
  *(undefined2 *)(puVar4 + (ulong)param_4[2] * 2 + 0x26) = 0x3fc0;
  return;
}

