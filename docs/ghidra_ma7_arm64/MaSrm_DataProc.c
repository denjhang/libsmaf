/* MaSrm_DataProc @ 001aa064 1708B */


/* YAMAHA::MaSrm_DataProc(unsigned int) */

void YAMAHA::MaSrm_DataProc(uint param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  uchar *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  
  uVar2 = param_1 & 3;
  uVar7 = (ulong)uVar2;
  lVar1 = DAT_005dd9b8 + uVar7 * 0x78;
  if (*(int *)(lVar1 + 4) != 0) {
    uVar9 = *(uint *)(lVar1 + 0x14);
    if ((uVar9 == 0) || (puVar8 = *(uchar **)(lVar1 + 0x38), puVar8 == (uchar *)0x0)) {
      MaDevDrv_ResetIrqCtrl((uchar)(1 << (ulong)uVar2),'\0');
      *(undefined4 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      return;
    }
    bVar4 = *(byte *)(lVar1 + 0x42);
    if ((bVar4 >> 6 & 1) == 0) {
      lVar12 = 0x200;
      iVar14 = 4;
      uVar15 = 0x200;
    }
    else {
      lVar12 = 0x400;
      iVar14 = 8;
      uVar15 = 0x400;
    }
    if ((bVar4 & 0x10) == 0) {
      if (uVar9 <= uVar15) {
        MaDevDrv_ResetIrqCtrl((uchar)(1 << uVar7),(uchar)(bVar4 & 0x10));
        MaDevDrv_SendStreamData(uVar2,*(uchar **)(lVar1 + 0x38),*(uint *)(lVar1 + 0x14));
        *(undefined8 *)(lVar1 + 0x38) = 0;
        iVar14 = *(int *)(lVar1 + 0x14);
        *(uint *)(lVar1 + 0x14) = bVar4 & 0x10;
        *(uint *)(lVar1 + 0x2c) = uVar15 + iVar14;
        *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + iVar14;
        return;
      }
      MaDevDrv_SendStreamData(uVar2,puVar8,uVar15);
      *(uint *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) - uVar15;
      *(long *)(lVar1 + 0x38) = *(long *)(lVar1 + 0x38) + lVar12;
      *(uint *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + uVar15;
      return;
    }
    uVar10 = *(uint *)(lVar1 + 0xc);
    iVar3 = *(int *)(lVar1 + 8);
    uVar5 = iVar3 - iVar14;
    if (uVar10 == 0) {
      uVar10 = 0;
      uVar13 = uVar15;
    }
    else {
      if (uVar15 <= uVar10) {
        MaDevDrv_SendStreamData(uVar2,puVar8,uVar15);
        *(uint *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) - uVar15;
        uVar10 = uVar15;
        goto LAB_001aa5b0;
      }
      MaDevDrv_SendStreamData(uVar2,puVar8,uVar10);
      uVar10 = *(uint *)(lVar1 + 0xc);
      *(undefined4 *)(lVar1 + 0xc) = 0;
      if (uVar15 - uVar10 == 0) goto LAB_001aa5b0;
      uVar9 = *(uint *)(lVar1 + 0x14);
      uVar13 = uVar15 - uVar10;
    }
    uVar11 = uVar10 + iVar14;
    if (uVar11 < uVar9) {
      if (uVar5 <= uVar13) {
        uVar10 = uVar11 + uVar5;
        if (uVar10 < uVar9) {
          do {
            uVar7 = (ulong)uVar11;
            uVar11 = uVar11 + uVar5 + iVar14;
            MaDevDrv_SendStreamData(uVar2,(uchar *)(*(long *)(lVar1 + 0x38) + uVar7),uVar5);
            uVar13 = uVar13 - uVar5;
            if ((uVar13 == 0) || (uVar9 = *(uint *)(lVar1 + 0x14), uVar9 <= uVar11))
            goto LAB_001aa5b0;
            uVar10 = uVar10 + iVar3;
          } while ((uVar5 <= uVar13) && (uVar10 < uVar9));
        }
      }
      if (uVar13 < uVar9 - uVar11) {
        MaDevDrv_SendStreamData(uVar2,(uchar *)(*(long *)(lVar1 + 0x38) + (ulong)uVar11),uVar13);
        uVar9 = *(int *)(lVar1 + 0x14) - uVar11;
        iVar14 = uVar5 - uVar13;
        if (uVar9 < uVar5) {
          iVar14 = uVar9 - uVar13;
        }
        *(int *)(lVar1 + 0xc) = iVar14;
        uVar10 = uVar13 + uVar11;
      }
      else {
        MaDevDrv_SendStreamData
                  (uVar2,(uchar *)(*(long *)(lVar1 + 0x38) + (ulong)uVar11),uVar9 - uVar11);
        *(undefined4 *)(lVar1 + 0xc) = 0;
        uVar10 = *(uint *)(lVar1 + 0x14);
      }
    }
LAB_001aa5b0:
    if (uVar10 < uVar15) {
      MaDevDrv_ResetIrqCtrl((uchar)(1 << (ulong)uVar2),'\0');
      *(undefined4 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(uint *)(lVar1 + 0x2c) = uVar10 + uVar15;
    }
    else {
      *(ulong *)(lVar1 + 0x38) = *(long *)(lVar1 + 0x38) + (ulong)uVar10;
      *(uint *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) - uVar10;
    }
    *(uint *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + uVar10;
    return;
  }
  if (*(char *)(lVar1 + 0x74) == '\x01') {
    uVar9 = *(uint *)(lVar1 + 0xc);
    uVar10 = *(uint *)(lVar1 + 0x70);
    if (uVar9 == uVar10) {
      MaDevDrv_ResetIrqCtrl('\x01' << uVar7,'\0');
      *(undefined4 *)(lVar1 + 0x14) = 0;
      return;
    }
    if ((*(byte *)(lVar1 + 0x42) >> 6 & 1) != 0) {
LAB_001aa2f4:
      uVar15 = 0x400;
      goto joined_r0x001aa2f8;
    }
    uVar15 = 0x200;
LAB_001aa158:
    *(undefined1 *)(lVar1 + 0x74) = 1;
    if (uVar10 <= uVar9) {
      uVar10 = *(int *)(lVar1 + 0x10) - uVar9;
      if (uVar10 <= uVar15) {
        MaDevDrv_SendStreamData(uVar2,(uchar *)(*(long *)(lVar1 + 0x30) + (ulong)uVar9),uVar10);
        uVar9 = (*(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 0x10)) + uVar15;
        if (uVar9 < *(uint *)(lVar1 + 0x70)) {
          uVar15 = uVar9 + uVar10;
          MaDevDrv_SendStreamData(uVar2,*(uchar **)(lVar1 + 0x30),uVar9);
          *(uint *)(lVar1 + 0xc) = uVar9;
          *(uint *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x10) - uVar9;
        }
        else {
          MaDevDrv_SendStreamData(uVar2,*(uchar **)(lVar1 + 0x30),*(uint *)(lVar1 + 0x70));
          *(undefined4 *)(lVar1 + 0x14) = 0;
          iVar14 = *(int *)(lVar1 + 0x70);
          *(int *)(lVar1 + 0xc) = iVar14;
          *(uint *)(lVar1 + 0x2c) = uVar9 + iVar14;
          uVar15 = uVar10 + iVar14;
          MaDevDrv_ResetIrqCtrl((uchar)(1 << (ulong)uVar2),'\0');
        }
LAB_001aa34c:
        bVar4 = *(byte *)(lVar1 + 0x46);
        *(uint *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + uVar15;
        *(undefined1 *)(lVar1 + 0x46) = 0;
        if (*(char *)(lVar1 + 0x54) == '\0') {
          if (3 < bVar4) goto LAB_001aa4cc;
        }
        else {
          uVar2 = *(uint *)(lVar1 + 0xc);
          if (*(uint *)(lVar1 + 0x50) < uVar2) {
            *(undefined1 *)(lVar1 + 0x46) = 1;
          }
          if (*(char *)(lVar1 + 0x5c) != '\0') {
            if (*(uint *)(lVar1 + 0x58) < uVar2) {
              *(undefined1 *)(lVar1 + 0x46) = 2;
            }
            if (*(char *)(lVar1 + 100) != '\0') {
              if (*(uint *)(lVar1 + 0x60) < uVar2) {
                *(undefined1 *)(lVar1 + 0x46) = 3;
              }
              if ((*(char *)(lVar1 + 0x6c) != '\0') && (*(uint *)(lVar1 + 0x68) < uVar2)) {
                *(undefined1 *)(lVar1 + 0x46) = 4;
              }
            }
          }
          if (3 < bVar4) {
LAB_001aa4cc:
            if (*(char *)(lVar1 + 0x46) == '\0') {
              return;
            }
            goto LAB_001aa270;
          }
          if (*(char *)(lVar1 + 0x46) != '\0') goto LAB_001aa270;
        }
        if (*(char *)(lVar1 + (ulong)bVar4 * 8 + 0x54) != '\x01') {
          return;
        }
        goto LAB_001aa270;
      }
      goto LAB_001aa178;
    }
    uVar10 = uVar10 - uVar9;
    if (uVar15 < uVar10) goto LAB_001aa178;
    MaDevDrv_SendStreamData(uVar2,(uchar *)(*(long *)(lVar1 + 0x30) + (ulong)uVar9),uVar10);
    *(uint *)(lVar1 + 0x2c) = uVar15;
    *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(lVar1 + 0x70);
    *(undefined4 *)(lVar1 + 0x14) = 0;
    MaDevDrv_ResetIrqCtrl((uchar)(1 << (ulong)uVar2),'\0');
  }
  else {
    if ((*(byte *)(lVar1 + 0x42) >> 6 & 1) != 0) {
      uVar9 = *(uint *)(lVar1 + 0xc);
      goto LAB_001aa2f4;
    }
    uVar9 = *(uint *)(lVar1 + 0xc);
    uVar15 = 0x200;
joined_r0x001aa2f8:
    if (*(char *)(lVar1 + 0x74) != '\0') {
      uVar10 = *(uint *)(lVar1 + 0x70);
      goto LAB_001aa158;
    }
    uVar10 = *(int *)(lVar1 + 0x10) - uVar9;
    if (uVar10 <= uVar15) {
      MaDevDrv_SendStreamData(uVar2,(uchar *)(*(long *)(lVar1 + 0x30) + (ulong)uVar9),uVar10);
      uVar9 = (*(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 0x10)) + uVar15;
      MaDevDrv_SendStreamData(uVar2,*(uchar **)(lVar1 + 0x30),uVar9);
      *(uint *)(lVar1 + 0xc) = uVar9;
      *(uint *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x10) - uVar9;
      goto LAB_001aa34c;
    }
LAB_001aa178:
    MaDevDrv_SendStreamData(uVar2,(uchar *)(*(long *)(lVar1 + 0x30) + (ulong)uVar9),uVar15);
    *(uint *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + uVar15;
    *(uint *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) - uVar15;
    uVar10 = uVar15;
  }
  bVar4 = *(byte *)(lVar1 + 0x46);
  *(uint *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + uVar10;
  if (3 < bVar4) {
    return;
  }
  lVar12 = lVar1 + (ulong)bVar4 * 8;
  if (*(char *)(lVar12 + 0x54) == '\0') {
    return;
  }
  uVar2 = *(uint *)(lVar1 + 0xc);
  uVar9 = *(uint *)(lVar12 + 0x50);
  if (uVar9 < uVar2) {
    *(byte *)(lVar1 + 0x46) = bVar4 + 1;
  }
  uVar15 = bVar4 + 1;
  bVar6 = uVar9 < uVar2;
  if ((uVar15 != 4) && (lVar12 = ((ulong)uVar15 + 10) * 8, *(char *)(lVar1 + lVar12 + 4) != '\0')) {
    uVar9 = *(uint *)(lVar1 + lVar12);
    if (uVar9 < uVar2) {
      *(byte *)(lVar1 + 0x46) = bVar4 + 2;
    }
    bVar6 = uVar9 < uVar2 || bVar6;
    uVar9 = bVar4 + 2;
    if ((uVar9 != 4) && (lVar12 = ((ulong)uVar9 + 10) * 8, *(char *)(lVar1 + lVar12 + 4) != '\0')) {
      uVar9 = *(uint *)(lVar1 + lVar12);
      if (uVar9 < uVar2) {
        *(byte *)(lVar1 + 0x46) = bVar4 + 3;
      }
      bVar6 = uVar9 < uVar2 || bVar6;
      if (((bVar4 == 0) && (*(char *)(lVar1 + 0x6c) != '\0')) && (*(uint *)(lVar1 + 0x68) < uVar2))
      {
        *(undefined1 *)(lVar1 + 0x46) = 4;
        goto LAB_001aa270;
      }
    }
  }
  if (!bVar6) {
    return;
  }
LAB_001aa270:
  MaSmw_ReceiveMsg(6,(uint)*(byte *)(lVar1 + 0x40),5,0);
  return;
}

