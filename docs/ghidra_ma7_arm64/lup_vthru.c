/* lup_vthru @ 0024a388 196B */


/* YAMAHA::lup_vthru(unsigned char) */

void YAMAHA::lup_vthru(uchar param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  
  puVar3 = PTR_lgsendoff_00567b48;
  puVar2 = PTR_lprm_00567530;
  if (param_1 != '\t') {
    if (param_1 == 0xff) {
      *PTR_lgsendoff_00567b48 = 1;
      *(undefined2 *)(puVar2 + 0x92) = 0x2000;
      *(undefined2 *)(puVar2 + 0xa2) = 0x2000;
      *(undefined2 *)(puVar2 + 0x8c) = 0x2000;
      *(undefined2 *)(puVar2 + 0x78) = 0x2000;
      *(undefined2 *)(puVar2 + 0x88) = 0x2000;
      *(undefined2 *)(puVar2 + 0x72) = 0x2000;
      lup_vthru('\t');
      *puVar3 = 0;
    }
    return;
  }
  uVar4 = 0x4000;
  if ((*(ushort *)(PTR_lprm_00567530 + 0x358) & 1) == 0) {
    uVar4 = 0x2000;
  }
  bVar1 = *PTR_ltavm1_mix_005677b0;
  *(undefined2 *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavm1_mix_005677b0[3] * 2 + 0x26) = uVar4;
  *(undefined2 *)(puVar2 + (long)(int)(uint)bVar1 * 2 + 0x26) = uVar4;
  puVar2 = PTR_ltavm1_mix_005677b0;
  LSendCoef('\x01',PTR_ltavm1_mix_005677b0);
  LSendCoef('\x01',puVar2 + 3);
  return;
}

