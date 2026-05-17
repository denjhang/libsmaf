/* LSendAdrs @ 00247684 204B */


/* YAMAHA::LSendAdrs(unsigned char, unsigned char const*) */

void YAMAHA::LSendAdrs(uchar param_1,uchar *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  if (((&DAT_00536090)[*param_2] == '\v') &&
     ((puVar7 = PTR_gabProgReverb_00567fe0, PTR_lprm_00567530[8] == '\0' ||
      (puVar7 = PTR_gabProg3DRev_005673f0, PTR_lprm_00567530[8] == '\x02')))) {
    lVar8 = 0;
    if (param_1 != 0) {
      do {
        pbVar2 = param_2 + lVar8;
        lVar8 = lVar8 + 1;
        uVar1 = (uint)lVar8 & 0xff;
        uVar4 = *(ushort *)(PTR_lprm_00567530 + (long)(int)(uint)*pbVar2 * 2 + 0x266);
        bVar3 = PTR_ltarr_send_00567e20[*pbVar2];
        lVar5 = (ulong)((uint)bVar3 * 3) * 2;
        lVar6 = (ulong)bVar3 * 6 + 2;
        puVar7[lVar5] = puVar7[lVar5] & 0xfe | (byte)(uVar4 >> 0xc) & 1;
        puVar7[(ulong)bVar3 * 6 + 1] = (char)(uVar4 >> 4);
        puVar7[lVar6] = puVar7[lVar6] & 0xf | (byte)((uVar4 & 0xf) << 4);
      } while (uVar1 <= param_1 && param_1 != uVar1);
    }
  }
  return;
}

