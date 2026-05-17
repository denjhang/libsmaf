/* LSendDspCoef @ 002474c4 448B */


/* YAMAHA::LSendDspCoef(unsigned int, unsigned int) */

undefined8 YAMAHA::LSendDspCoef(uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  
  puVar7 = PTR_gabSfxCoef_00567998;
  puVar5 = PTR_lprm_00567530;
  if ((param_2 < param_1 || 0x2ff < param_2) || (0x2ff < param_1)) {
    return 0xfffffffe;
  }
  if (*PTR_lgsendoff_00567b48 != '\0') {
    return 0;
  }
  uVar4 = param_1 * 2;
  uVar9 = param_1 + 1;
  uVar2 = *(undefined2 *)(PTR_lprm_00567530 + (ulong)param_1 * 2 + 0x26);
  uVar1 = param_2 - param_1 & 3;
  uVar8 = uVar4 + 2;
  PTR_gabSfxCoef_00567998[uVar4] = (char)((ushort)uVar2 >> 8);
  puVar7[uVar4 + 1] = (char)uVar2;
  if (uVar9 <= param_2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) {
        if (uVar1 != 2) {
          uVar2 = *(undefined2 *)(puVar5 + (ulong)uVar9 * 2 + 0x26);
          uVar9 = param_1 + 2;
          puVar7[uVar8] = (char)((ushort)uVar2 >> 8);
          puVar7[uVar4 + 3] = (char)uVar2;
          uVar8 = uVar4 + 4;
        }
        puVar5 = PTR_gabSfxCoef_00567998;
        uVar2 = *(undefined2 *)(PTR_lprm_00567530 + (ulong)uVar9 * 2 + 0x26);
        uVar9 = uVar9 + 1;
        PTR_gabSfxCoef_00567998[uVar8] = (char)((ushort)uVar2 >> 8);
        puVar5[uVar8 + 1] = (char)uVar2;
        uVar8 = uVar8 + 2;
      }
      puVar7 = PTR_gabSfxCoef_00567998;
      uVar2 = *(undefined2 *)(PTR_lprm_00567530 + (ulong)uVar9 * 2 + 0x26);
      uVar9 = uVar9 + 1;
      PTR_gabSfxCoef_00567998[uVar8] = (char)((ushort)uVar2 >> 8);
      puVar7[uVar8 + 1] = (char)uVar2;
      uVar8 = uVar8 + 2;
      if (param_2 < uVar9) goto LAB_00247660;
    }
    do {
      puVar7 = PTR_gabSfxCoef_00567998;
      puVar5 = PTR_lprm_00567530;
      uVar2 = *(undefined2 *)(PTR_lprm_00567530 + (ulong)uVar9 * 2 + 0x26);
      uVar3 = *(undefined2 *)(PTR_lprm_00567530 + (ulong)(uVar9 + 1) * 2 + 0x26);
      PTR_gabSfxCoef_00567998[uVar8] = (char)((ushort)uVar2 >> 8);
      puVar7[uVar8 + 1] = (char)uVar2;
      uVar2 = *(undefined2 *)(puVar5 + (ulong)(uVar9 + 2) * 2 + 0x26);
      puVar7[uVar8 + 2] = (char)((ushort)uVar3 >> 8);
      puVar7[uVar8 + 3] = (char)uVar3;
      uVar3 = *(undefined2 *)(puVar5 + (ulong)(uVar9 + 3) * 2 + 0x26);
      puVar7[uVar8 + 4] = (char)((ushort)uVar2 >> 8);
      puVar7[uVar8 + 5] = (char)uVar2;
      uVar9 = uVar9 + 4;
      puVar7[uVar8 + 6] = (char)((ushort)uVar3 >> 8);
      puVar7[uVar8 + 7] = (char)uVar3;
      uVar8 = uVar8 + 8;
    } while (uVar9 <= param_2);
  }
LAB_00247660:
  uVar6 = _MaDevDrv_SendDspCoef(param_1,puVar7 + uVar4,((param_2 - param_1) + 1) * 2);
  return uVar6;
}

