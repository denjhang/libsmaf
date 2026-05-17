/* lset_apf @ 0024e9d4 436B */


/* YAMAHA::lset_apf(unsigned short, unsigned short, unsigned short, unsigned char, unsigned char
   const*, unsigned char const*, unsigned char) */

void YAMAHA::lset_apf(ushort param_1,ushort param_2,ushort param_3,uchar param_4,uchar *param_5,
                     uchar *param_6,uchar param_7)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  undefined *puVar5;
  short sVar6;
  short *psVar7;
  ulong uVar8;
  uchar uVar9;
  ulong uVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  undefined2 uVar14;
  short sVar15;
  
  if (3 < param_1) {
    param_1 = 3;
  }
  uVar8 = (ulong)param_4;
  uVar13 = (uint)(byte)PTR_ltb_apfden_005677a8[param_1];
  if (param_7 != '\0') {
    psVar7 = (short *)(PTR_ltb_apf_00567ae8 + (ulong)param_3 * 0x10 + 2);
    uVar9 = '\0';
    do {
      if ((uVar9 == '\x03') && (param_2 == 0)) {
        uVar10 = (ulong)param_6[1];
        if ((byte)PTR_lprm_00567530[uVar10 + 0x226] < 2) {
          iVar12 = (int)((ulong)(ushort)psVar7[-3] * 0x7ae1 >> 0x10);
        }
        else {
          uVar2 = psVar7[-3];
LAB_0024ea5c:
          iVar12 = (int)(((ulong)uVar2 * 0x7ae1) / 0x30000);
        }
      }
      else {
        uVar10 = (ulong)param_6[1];
        if (1 < (byte)PTR_lprm_00567530[uVar10 + 0x226]) {
          uVar2 = psVar7[-1];
          goto LAB_0024ea5c;
        }
        iVar12 = (int)((ulong)(ushort)psVar7[-1] * 0x7ae1 >> 0x10);
      }
      sVar15 = (short)iVar12;
      if (iVar12 == 0) {
        sVar15 = 1;
      }
      uVar1 = uVar13 & 1;
      sVar11 = (short)uVar1;
      sVar6 = *psVar7;
      *(short *)(PTR_lprm_00567530 + uVar10 * 2 + 0x266) =
           sVar15 + *(short *)(PTR_lprm_00567530 + (ulong)*param_6 * 2 + 0x266);
      puVar5 = PTR_lprm_00567530;
      if ((uVar13 & 1) == 0) {
        sVar15 = 0x2000;
        sVar6 = sVar11;
      }
      else {
        iVar3 = (int)sVar6;
        sVar11 = 0x7fff - sVar6;
        iVar12 = iVar3 + 3;
        if (-1 < iVar3) {
          iVar12 = iVar3;
        }
        sVar4 = (short)(iVar12 >> 2);
        sVar15 = -sVar4;
        uVar1 = (uint)(short)(sVar4 + 0x2000);
      }
      uVar14 = (undefined2)uVar1;
      if ((uVar8 & 1) != 0) {
        sVar15 = sVar15 << 1;
        uVar14 = (undefined2)(uVar1 << 1);
      }
      uVar9 = uVar9 + '\x01';
      uVar13 = uVar13 >> 1;
      psVar7 = psVar7 + 2;
      uVar8 = uVar8 >> 1;
      *(short *)(PTR_lprm_00567530 + (ulong)*param_5 * 2 + 0x26) = sVar15;
      *(undefined2 *)(puVar5 + (ulong)param_5[1] * 2 + 0x26) = uVar14;
      *(short *)(puVar5 + (ulong)param_5[2] * 2 + 0x26) = sVar11;
      *(short *)(puVar5 + (ulong)param_5[3] * 2 + 0x26) = sVar6;
      param_5 = param_5 + 4;
      param_6 = param_6 + 2;
    } while (uVar9 != param_7);
  }
  return;
}

