/* LSendCoef @ 002473c0 260B */


/* YAMAHA::LSendCoef(unsigned char, unsigned char const*) */

undefined8 YAMAHA::LSendCoef(uchar param_1,uchar *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  
  if (*PTR_lgsendoff_00567b48 != '\0') {
    return 0;
  }
  if (param_1 == 0) {
    iVar12 = 0x1fffe;
    uVar13 = 0xfffe0004;
    uVar10 = 0xffff;
  }
  else {
    lVar14 = 0;
    uVar10 = 0xffff;
    uVar13 = 0;
    do {
      puVar9 = PTR_gabSfxCoef_00567998;
      puVar8 = PTR_lprm_00567530;
      bVar5 = param_2[lVar14];
      lVar2 = lVar14 + 1;
      lVar14 = lVar14 + 2;
      uVar7 = (ushort)bVar5;
      uVar6 = *(undefined2 *)(PTR_lprm_00567530 + (long)(int)(uint)bVar5 * 2 + 0x26);
      uVar3 = (uint)uVar7;
      if (uVar10 <= uVar7) {
        uVar3 = uVar10;
      }
      PTR_gabSfxCoef_00567998[(int)((uint)bVar5 * 2)] = (char)((ushort)uVar6 >> 8);
      uVar4 = (uint)uVar7;
      if (uVar7 <= uVar13) {
        uVar4 = uVar13;
      }
      puVar9[(int)((uint)bVar5 * 2 + 1)] = (char)uVar6;
      uVar1 = (uint)lVar2 & 0xff;
      uVar10 = uVar3;
      uVar13 = uVar4;
      if (param_1 < uVar1 || param_1 == uVar1) break;
      bVar5 = param_2[lVar2];
      uVar6 = *(undefined2 *)(puVar8 + (long)(int)(uint)bVar5 * 2 + 0x26);
      uVar13 = (uint)bVar5;
      uVar10 = uVar13;
      if (uVar3 <= uVar13) {
        uVar10 = uVar3;
      }
      puVar9[(int)((uint)bVar5 * 2)] = (char)((ushort)uVar6 >> 8);
      puVar9[(int)((uint)bVar5 * 2 + 1)] = (char)uVar6;
      if (uVar13 <= uVar4) {
        uVar13 = uVar4;
      }
    } while (((uint)lVar14 & 0xff) < (uint)param_1);
    iVar12 = uVar10 << 1;
    uVar13 = ((uVar13 - uVar10) + 1) * 2;
  }
  uVar11 = _MaDevDrv_SendDspCoef(uVar10,PTR_gabSfxCoef_00567998 + iVar12,uVar13);
  return uVar11;
}

