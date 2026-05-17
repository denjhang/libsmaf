/* lchk_prm @ 000f9bec 358B */


/* YAMAHA::lchk_prm(unsigned int, unsigned int) */

void YAMAHA::lchk_prm(uint param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  
  iVar1 = DAT_000f9d5c + 0xf9bf4;
  switch(param_1) {
  case 0:
    iVar3 = *(int *)(iVar1 + DAT_000f9d60);
    iVar1 = iVar3 + (param_2 + 0x180) * 2;
    if (*(ushort *)(iVar1 + 6) < 0x3b) {
      if (*(ushort *)(iVar1 + 6) < 0x1c) {
        *(undefined2 *)(iVar1 + 6) = 0x1c;
      }
    }
    else {
      *(undefined2 *)(iVar1 + 6) = 0x3a;
    }
    break;
  case 1:
    iVar3 = *(int *)(iVar1 + DAT_000f9d60);
    iVar1 = iVar3 + (param_2 + 0x180) * 2;
    if (*(ushort *)(iVar1 + 6) < 0x29) {
      if (*(ushort *)(iVar1 + 6) < 8) {
        *(undefined2 *)(iVar1 + 6) = 8;
      }
    }
    else {
      *(undefined2 *)(iVar1 + 6) = 0x28;
    }
    break;
  case 2:
    iVar3 = *(int *)(iVar1 + DAT_000f9d60);
    iVar1 = iVar3 + (param_2 + 0x180) * 2;
    if (*(ushort *)(iVar1 + 6) < 0x37) {
      if (*(ushort *)(iVar1 + 6) < 0x1c) {
        *(undefined2 *)(iVar1 + 6) = 0x1c;
      }
    }
    else {
      *(undefined2 *)(iVar1 + 6) = 0x36;
    }
    iVar1 = iVar3 + (param_2 + 0x181) * 2;
    if (*(ushort *)(iVar1 + 6) < 0x4d) {
      if (*(ushort *)(iVar1 + 6) < 0x34) {
        *(undefined2 *)(iVar1 + 6) = 0x34;
      }
    }
    else {
      *(undefined2 *)(iVar1 + 6) = 0x4c;
    }
    iVar3 = iVar3 + (param_2 + 0x182) * 2;
    if (*(ushort *)(iVar3 + 6) < 0x79) {
      if (9 < *(ushort *)(iVar3 + 6)) {
        return;
      }
      *(undefined2 *)(iVar3 + 6) = 10;
      return;
    }
    *(undefined2 *)(iVar3 + 6) = 0x78;
    return;
  case 3:
    iVar3 = param_2 + 0x170;
    goto LAB_000f9cf6;
  case 4:
    iVar1 = *(int *)(iVar1 + DAT_000f9d60) + (param_2 + 0x170) * 2;
    if (*(ushort *)(iVar1 + 6) < 0x22) {
      *(undefined2 *)(iVar1 + 6) = 0x22;
      return;
    }
    if (*(ushort *)(iVar1 + 6) < 0x3d) {
      return;
    }
    goto LAB_000f9c82;
  case 5:
    iVar3 = param_2 + 0x180;
LAB_000f9cf6:
    iVar1 = *(int *)(iVar1 + DAT_000f9d60) + iVar3 * 2;
    if (0x34 < *(ushort *)(iVar1 + 6)) {
      *(undefined2 *)(iVar1 + 6) = 0x34;
    }
    return;
  case 6:
    iVar1 = *(int *)(iVar1 + DAT_000f9d60);
    iVar3 = iVar1 + (param_2 + 0x180) * 2;
    uVar2 = *(ushort *)(iVar3 + 6);
    if (uVar2 < 0x22) {
      *(undefined2 *)(iVar3 + 6) = 0x22;
      return;
    }
    goto LAB_000f9c7a;
  case 7:
  case 8:
    iVar1 = *(int *)(iVar1 + DAT_000f9d60);
    uVar2 = *(ushort *)(iVar1 + (param_2 + 0x180) * 2 + 6);
    if (uVar2 < 0x14) {
      *(undefined2 *)(iVar1 + (param_2 + 0x180) * 2 + 6) = 0x14;
      return;
    }
LAB_000f9c7a:
    if (0x3c < uVar2) {
      iVar1 = iVar1 + (param_2 + 0x180) * 2;
LAB_000f9c82:
      *(undefined2 *)(iVar1 + 6) = 0x3c;
      return;
    }
  default:
    goto switchD_000f9bf6_default;
  }
  iVar3 = iVar3 + (param_2 + 0x181) * 2;
  if (*(ushort *)(iVar3 + 6) < 0x4d) {
    if (*(ushort *)(iVar3 + 6) < 0x34) {
      *(undefined2 *)(iVar3 + 6) = 0x34;
    }
    return;
  }
  *(undefined2 *)(iVar3 + 6) = 0x4c;
switchD_000f9bf6_default:
  return;
}

