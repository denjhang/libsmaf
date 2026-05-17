/* MaSrm_GetPos @ 001a960c 376B */


/* YAMAHA::MaSrm_GetPos(unsigned int) */

uint YAMAHA::MaSrm_GetPos(uint param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  
  lVar5 = DAT_005dd9b8;
  uVar2 = param_1 & 3;
  lVar4 = (ulong)uVar2 * 0x78;
  lVar1 = DAT_005dd9b8 + lVar4;
  if (*(int *)(lVar1 + 0x4c) == 0) {
    return 0xffffffff;
  }
  uVar6 = MaDevDrv_ReadStreamFifoStatus(uVar2);
  if ((uVar6 & 0xff) == 0) {
    uVar7 = MaDevDrv_ReadReg(0xf);
    uVar10 = 0x400;
    if (((int)(uVar7 & 0xff) >> uVar2 & 1U) != 0) goto LAB_001a9654;
  }
  else if ((uVar6 & 0xff) >> 7 == 0) {
    uVar10 = (uVar6 & 0xff) << 3;
  }
  else {
LAB_001a9654:
    uVar10 = 0;
  }
  uVar2 = uVar10 << 1;
  if ((*(byte *)(lVar1 + 0x42) & 0x40) == 0) {
    uVar2 = uVar10;
  }
  switch(*(byte *)(lVar1 + 0x42)) {
  case 0:
  case 0x10:
    uVar10 = *(uint *)(lVar5 + lVar4) >> 1;
    break;
  case 1:
  case 0x42:
  case 0x43:
    uVar10 = *(int *)(lVar5 + lVar4) << 1;
    break;
  case 2:
  case 3:
  case 0x40:
  case 0x50:
    uVar7 = *(uint *)(lVar1 + 0x28);
    uVar10 = *(uint *)(lVar5 + lVar4);
    goto joined_r0x001a9744;
  default:
    return 0xffffffff;
  case 0x41:
    uVar10 = *(int *)(lVar5 + lVar4) << 2;
  }
  uVar7 = *(uint *)(lVar1 + 0x28);
joined_r0x001a9744:
  if (uVar2 < uVar7) {
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar8 = (uVar7 - uVar2) / uVar10;
    }
    uVar9 = (ulong)((uVar7 - uVar2) - uVar8 * uVar10) * 1000;
  }
  else {
    uVar9 = 0;
    uVar8 = 0;
  }
  uVar2 = *(uint *)(lVar1 + 4);
  iVar3 = 0;
  if ((ulong)uVar10 != 0) {
    iVar3 = (int)(uVar9 / uVar10);
  }
  uVar10 = iVar3 + uVar8 * 1000 + *(int *)(lVar1 + 0x24);
  if (uVar2 != 0) {
    if (uVar2 < uVar10) {
      return uVar2;
    }
    if ((uVar6 & 0x80) != 0) {
      uVar10 = uVar2;
    }
    return uVar10;
  }
  return uVar10;
}

