/* MaSrm_DataProc @ 0008baa8 996B */


/* YAMAHA::MaSrm_DataProc(unsigned int) */

void YAMAHA::MaSrm_DataProc(uint param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  uVar8 = param_1 & 3;
  iVar10 = *(int *)(DAT_0008be8c + 0x8bab2) + uVar8 * 0x70;
  if (*(int *)(iVar10 + 4) != 0) {
    if ((*(uint *)(iVar10 + 0x14) == 0) || (*(uchar **)(iVar10 + 0x34) == (uchar *)0x0)) {
      MaDevDrv_ResetIrqCtrl((uchar)(1 << uVar8),'\0');
      *(undefined4 *)(iVar10 + 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x34) = 0;
      return;
    }
    bVar2 = *(byte *)(iVar10 + 0x3a);
    uVar7 = bVar2 & 0x10;
    if ((bVar2 & 0x40) == 0) {
      uVar5 = 4;
      uVar9 = 0x200;
    }
    else {
      uVar5 = 8;
      uVar9 = 0x400;
    }
    if ((bVar2 & 0x10) != 0) {
      uVar7 = FUN_00089adc(uVar8,uVar9,uVar5);
      if (uVar7 < uVar9) {
        MaDevDrv_ResetIrqCtrl((uchar)(1 << uVar8),'\0');
        *(uint *)(iVar10 + 0x2c) = uVar9 + uVar7;
        *(undefined4 *)(iVar10 + 0x14) = 0;
        *(undefined4 *)(iVar10 + 0x34) = 0;
      }
      else {
        *(uint *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) - uVar7;
        *(uint *)(iVar10 + 0x34) = *(int *)(iVar10 + 0x34) + uVar7;
      }
      *(uint *)(iVar10 + 0x28) = *(int *)(iVar10 + 0x28) + uVar7;
      return;
    }
    if (uVar9 < *(uint *)(iVar10 + 0x14)) {
      MaDevDrv_SendStreamData(uVar8,*(uchar **)(iVar10 + 0x34),uVar9);
      *(uint *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) - uVar9;
      *(uint *)(iVar10 + 0x34) = *(int *)(iVar10 + 0x34) + uVar9;
      *(uint *)(iVar10 + 0x28) = *(int *)(iVar10 + 0x28) + uVar9;
      return;
    }
    MaDevDrv_ResetIrqCtrl((uchar)(1 << uVar8),(uchar)uVar7);
    MaDevDrv_SendStreamData(uVar8,*(uchar **)(iVar10 + 0x34),*(uint *)(iVar10 + 0x14));
    iVar4 = *(int *)(iVar10 + 0x14);
    *(uint *)(iVar10 + 0x34) = uVar7;
    *(uint *)(iVar10 + 0x14) = uVar7;
    *(uint *)(iVar10 + 0x2c) = uVar9 + iVar4;
    *(int *)(iVar10 + 0x28) = iVar4 + *(int *)(iVar10 + 0x28);
    return;
  }
  uVar7 = *(uint *)(iVar10 + 0xc);
  if ((*(char *)(iVar10 + 0x6c) == '\x01') && (uVar7 == *(uint *)(iVar10 + 0x68))) {
    MaDevDrv_ResetIrqCtrl('\x01' << uVar8,'\0');
    *(undefined4 *)(iVar10 + 0x14) = 0;
    return;
  }
  if ((*(byte *)(iVar10 + 0x3a) & 0x40) == 0) {
    uVar9 = 0x200;
  }
  else {
    uVar9 = 0x400;
  }
  if (*(char *)(iVar10 + 0x6c) == '\0') {
    iVar4 = *(int *)(iVar10 + 0x30);
    uVar6 = *(int *)(iVar10 + 0x10) - uVar7;
    if (uVar6 <= uVar9) {
      MaDevDrv_SendStreamData(uVar8,(uchar *)(iVar4 + uVar7),uVar6);
      uVar7 = (*(int *)(iVar10 + 0xc) - *(int *)(iVar10 + 0x10)) + uVar9;
      MaDevDrv_SendStreamData(uVar8,*(uchar **)(iVar10 + 0x30),uVar7);
      *(uint *)(iVar10 + 0xc) = uVar7;
      *(uint *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x10) - uVar7;
LAB_0008bbac:
      bVar2 = *(byte *)(iVar10 + 0x3e);
      *(uint *)(iVar10 + 0x28) = uVar9 + *(int *)(iVar10 + 0x28);
      *(undefined1 *)(iVar10 + 0x3e) = 0;
      if (*(char *)(iVar10 + 0x4c) != '\0') {
        uVar8 = *(uint *)(iVar10 + 0xc);
        if (*(uint *)(iVar10 + 0x48) < uVar8) {
          *(undefined1 *)(iVar10 + 0x3e) = 1;
        }
        if (*(char *)(iVar10 + 0x54) != '\0') {
          if (*(uint *)(iVar10 + 0x50) < uVar8) {
            *(undefined1 *)(iVar10 + 0x3e) = 2;
          }
          if (*(char *)(iVar10 + 0x5c) != '\0') {
            if (*(uint *)(iVar10 + 0x58) < uVar8) {
              *(undefined1 *)(iVar10 + 0x3e) = 3;
            }
            if ((*(char *)(iVar10 + 100) != '\0') && (*(uint *)(iVar10 + 0x60) < uVar8)) {
              *(undefined1 *)(iVar10 + 0x3e) = 4;
            }
          }
        }
      }
      if (bVar2 < 4) {
        if ((*(char *)(iVar10 + 0x3e) == '\0') &&
           (*(char *)(iVar10 + (uint)bVar2 * 8 + 0x4c) != '\x01')) {
          return;
        }
      }
      else if (*(char *)(iVar10 + 0x3e) == '\0') {
        return;
      }
      goto LAB_0008bd04;
    }
LAB_0008bc54:
    MaDevDrv_SendStreamData(uVar8,(uchar *)(iVar4 + uVar7),uVar9);
    *(uint *)(iVar10 + 0xc) = *(int *)(iVar10 + 0xc) + uVar9;
    *(uint *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) - uVar9;
    uVar6 = uVar9;
  }
  else {
    *(undefined1 *)(iVar10 + 0x6c) = 1;
    if (*(uint *)(iVar10 + 0x68) <= uVar7) {
      iVar4 = *(int *)(iVar10 + 0x30);
      uVar6 = *(int *)(iVar10 + 0x10) - uVar7;
      if (uVar6 <= uVar9) {
        MaDevDrv_SendStreamData(uVar8,(uchar *)(iVar4 + uVar7),uVar6);
        uVar7 = (*(int *)(iVar10 + 0xc) - *(int *)(iVar10 + 0x10)) + uVar9;
        if (uVar7 < *(uint *)(iVar10 + 0x68)) {
          uVar9 = uVar7 + uVar6;
          MaDevDrv_SendStreamData(uVar8,*(uchar **)(iVar10 + 0x30),uVar7);
          *(uint *)(iVar10 + 0xc) = uVar7;
          *(uint *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x10) - uVar7;
        }
        else {
          MaDevDrv_SendStreamData(uVar8,*(uchar **)(iVar10 + 0x30),*(uint *)(iVar10 + 0x68));
          iVar4 = *(int *)(iVar10 + 0x68);
          *(undefined4 *)(iVar10 + 0x14) = 0;
          *(int *)(iVar10 + 0xc) = iVar4;
          *(uint *)(iVar10 + 0x2c) = uVar7 + iVar4;
          uVar9 = iVar4 + uVar6;
          MaDevDrv_ResetIrqCtrl((uchar)(1 << uVar8),'\0');
        }
        goto LAB_0008bbac;
      }
      goto LAB_0008bc54;
    }
    uVar6 = *(uint *)(iVar10 + 0x68) - uVar7;
    iVar4 = *(int *)(iVar10 + 0x30);
    if (uVar9 < uVar6) goto LAB_0008bc54;
    MaDevDrv_SendStreamData(uVar8,(uchar *)(iVar4 + uVar7),uVar6);
    *(uint *)(iVar10 + 0x2c) = uVar9;
    *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iVar10 + 0x68);
    *(undefined4 *)(iVar10 + 0x14) = 0;
    MaDevDrv_ResetIrqCtrl((uchar)(1 << uVar8),'\0');
  }
  bVar2 = *(byte *)(iVar10 + 0x3e);
  uVar8 = (uint)bVar2;
  *(uint *)(iVar10 + 0x28) = uVar6 + *(int *)(iVar10 + 0x28);
  if ((3 < uVar8) || (iVar4 = iVar10 + uVar8 * 8, *(char *)(iVar4 + 0x4c) == '\0')) {
    return;
  }
  uVar7 = *(uint *)(iVar10 + 0xc);
  bVar1 = *(uint *)(iVar4 + 0x48) < uVar7;
  cVar3 = (char)(uVar8 + 1);
  if (bVar1) {
    *(char *)(iVar10 + 0x3e) = cVar3;
  }
  if ((uVar8 + 1 != 4) && (*(char *)(iVar10 + (uVar8 + 10) * 8 + 4) != '\0')) {
    bVar11 = *(uint *)(iVar10 + (uVar8 + 10) * 8) < uVar7;
    if (bVar11) {
      *(char *)(iVar10 + 0x3e) = cVar3 + '\x01';
    }
    bVar1 = bVar11 || bVar1;
    if ((uVar8 != 2) && (*(char *)(iVar10 + (uVar8 + 0xb) * 8 + 4) != '\0')) {
      bVar11 = *(uint *)(iVar10 + (uVar8 + 0xb) * 8) < uVar7;
      if (bVar11) {
        *(byte *)(iVar10 + 0x3e) = bVar2 + 3;
      }
      bVar1 = bVar11 || bVar1;
      if (((uVar8 == 0) && (*(char *)(iVar10 + 100) != '\0')) && (*(uint *)(iVar10 + 0x60) < uVar7))
      {
        *(undefined1 *)(iVar10 + 0x3e) = 4;
        goto LAB_0008bd04;
      }
    }
  }
  if (!bVar1) {
    return;
  }
LAB_0008bd04:
  MaSmw_ReceiveMsg(6,(uint)*(byte *)(iVar10 + 0x38),5,0);
  return;
}

