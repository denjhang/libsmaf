/* MaSrm_GetStream @ 00089c50 152B */


/* YAMAHA::MaSrm_GetStream(unsigned int, unsigned int, unsigned int*, unsigned int*, unsigned int*)
    */

undefined4
YAMAHA::MaSrm_GetStream(uint param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  bVar8 = 0x3e < param_2;
  bVar7 = param_2 == 0x3f;
  if (param_2 < 0x40) {
    bVar8 = 2 < param_1;
    bVar7 = param_1 == 3;
  }
  if (bVar8 && !bVar7) {
    uVar3 = 0xfffffffe;
  }
  else {
    iVar6 = (param_2 + param_1 * 0x40) * 0x10;
    iVar1 = DAT_00089ce8 + 0x89c68;
    iVar5 = iVar1 + iVar6;
    if (*(int *)(iVar5 + 8) == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      *param_3 = (uint)*(byte *)(iVar5 + 0xc);
      uVar2 = ((uint)(*(int *)(iVar1 + iVar6) << 0x10) / 24000 + 1 >> 1) * 0x8003;
      if ((int)uVar2 < 0) {
        uVar2 = 0x1400;
      }
      else if (uVar2 < 0x4000001) {
        uVar2 = 1;
      }
      else {
        uVar4 = (uint)*(byte *)(DAT_00089cec + 0x89cc6 + (uVar2 + 0x8000 >> 0x1a));
        uVar2 = ((uVar2 + 0x8000 >> 0x10) >> uVar4 & 0x3ff) + uVar4 * 0x400;
        if (uVar2 == 0) {
          uVar2 = 1;
        }
      }
      *param_4 = uVar2;
      uVar3 = 0;
      *param_5 = (uint)*(byte *)(iVar5 + 0xd);
    }
  }
  return uVar3;
}

