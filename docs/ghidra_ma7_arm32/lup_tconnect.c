/* lup_tconnect @ 000fbff8 1176B */


/* YAMAHA::lup_tconnect(unsigned char) */

void YAMAHA::lup_tconnect(uchar param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined2 uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uchar local_20;
  undefined1 local_1f;
  uchar local_1e;
  undefined1 local_1d;
  
  iVar3 = DAT_000fc4ac + 0xfc004;
  if (param_1 == '\x03') {
    iVar2 = *(int *)(iVar3 + DAT_000fc4b4);
    uVar10 = (uint)*(ushort *)(iVar2 + 0x34a);
LAB_000fc104:
    uVar11 = (uint)*(ushort *)(iVar2 + 0x34c);
    if (uVar11 == 0xff) {
      sVar7 = (short)((uVar10 * 0x7fff) / 0x7f);
      if (*(char *)(iVar2 + 0x24) == '\x02') {
        sVar7 = (short)((*(int *)(iVar2 + 0x20) *
                         ((uint)(*(int *)(iVar2 + 0x1c) * (int)sVar7) / 0x7f) & 0x7fffffff) >> 0xf);
      }
      else if (*(char *)(iVar2 + 0x24) == '\x01') {
        sVar7 = (short)((*(int *)(iVar2 + 0x20) * (int)sVar7 & 0x7fffffffU) >> 0xf);
      }
      local_1f = (undefined1)sVar7;
      local_20 = (uchar)((ushort)sVar7 >> 8);
      local_1e = local_20;
      local_1d = local_1f;
    }
    else {
      if (uVar11 == 0) {
        iVar9 = 0x7f;
        uVar11 = 1;
        *(undefined2 *)(iVar2 + 0x34c) = 1;
      }
      else if (uVar11 < 0x80) {
        iVar9 = 0x80 - uVar11;
      }
      else {
        uVar11 = 0x7f;
        iVar9 = 1;
        *(undefined2 *)(iVar2 + 0x34c) = 0x7f;
      }
      iVar5 = *(int *)(iVar3 + DAT_000fc4b8);
      iVar3 = (int)(uVar10 * (int)*(short *)(iVar5 + iVar9 * 2)) / 0x7f;
      if (*(char *)(iVar2 + 0x24) == '\x02') {
        uVar8 = *(int *)(iVar2 + 0x20) * ((uint)(*(int *)(iVar2 + 0x1c) * (int)(short)iVar3) / 0x7f)
                >> 0xf;
        local_1f = (undefined1)uVar8;
        local_20 = (uchar)(uVar8 >> 8);
        uVar6 = (undefined2)
                ((*(int *)(iVar2 + 0x20) *
                  ((uint)(*(int *)(iVar2 + 0x1c) *
                         (int)(short)((int)(uVar10 * (int)*(short *)(iVar5 + uVar11 * 2)) / 0x7f)) /
                  0x7f) & 0x7fffffff) >> 0xf);
      }
      else if (*(char *)(iVar2 + 0x24) == '\x01') {
        uVar8 = (uint)(*(int *)(iVar2 + 0x20) * (int)(short)iVar3) >> 0xf;
        local_1f = (undefined1)uVar8;
        local_20 = (uchar)(uVar8 >> 8);
        uVar6 = (undefined2)
                ((*(int *)(iVar2 + 0x20) *
                  (int)(short)((int)(uVar10 * (int)*(short *)(iVar5 + uVar11 * 2)) / 0x7f) &
                 0x7fffffffU) >> 0xf);
      }
      else {
        local_20 = (uchar)((uint)iVar3 >> 8);
        local_1f = (undefined1)iVar3;
        uVar6 = (undefined2)((int)(uVar10 * (int)*(short *)(iVar5 + uVar11 * 2)) / 0x7f);
      }
      local_1d = (undefined1)uVar6;
      local_1e = (uchar)((ushort)uVar6 >> 8);
    }
    MaDevDrv_SendDspCoef(0xd2,&local_20,2);
    MaDevDrv_SendDspCoef(0xd4,&local_1e,2);
    return;
  }
  if (3 < param_1) {
    if (param_1 == '\x05') {
      uVar10 = (uint)*(ushort *)(*(int *)(iVar3 + DAT_000fc4b4) + 0x18);
      if (uVar10 < 6) {
        local_20 = '\x7f';
        local_1f = 0xff;
        if (uVar10 < 6) {
                    /* WARNING: Could not recover jumptable at 0x000fc2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((int)&switchD_000fc2ec::switchdataD_000fc2f0 +
                    (&switchD_000fc2ec::switchdataD_000fc2f0)[uVar10]))();
          return;
        }
      }
      else {
        *(undefined2 *)(*(int *)(iVar3 + DAT_000fc4b4) + 0x18) = 5;
        local_20 = '\x7f';
        local_1f = 0xff;
        MaDevDrv_ClearDspCoef(0xe3,0xe5);
        MaDevDrv_ClearDspCoef(0xeb,0xeb);
        MaDevDrv_ClearDspCoef(0xed,0xed);
        MaDevDrv_SendDspCoef(0xe9,&local_20,2);
      }
    }
    else {
      if (param_1 < 5) {
        iVar3 = *(int *)(iVar3 + DAT_000fc4b4);
        uVar10 = (uint)((ulonglong)
                        ((longlong)(int)((uint)*(ushort *)(iVar3 + 0x34e) * 0x4000) * 0x81020409) >>
                       0x20);
        uVar6 = (undefined2)((uVar10 & 0x3fffff) >> 6);
        sVar7 = (short)((uVar10 << 10) >> 0x10);
        if (*(char *)(iVar3 + 0x24) == '\x02') {
          uVar6 = (undefined2)
                  ((*(int *)(iVar3 + 0x20) * ((uint)(*(int *)(iVar3 + 0x1c) * (int)sVar7) / 0x7f) &
                   0x7fffffff) >> 0xf);
        }
        else if (*(char *)(iVar3 + 0x24) == '\x01') {
          uVar6 = (undefined2)((*(int *)(iVar3 + 0x20) * (int)sVar7 & 0x7fffffffU) >> 0xf);
        }
        local_1f = (undefined1)uVar6;
        local_20 = (uchar)((ushort)uVar6 >> 8);
        MaDevDrv_SendDspCoef(0x74,&local_20,2);
        MaDevDrv_SendDspCoef(0x75,&local_20,2);
        return;
      }
      if (param_1 == '\x10') {
        lchk_cho_type();
        lup_tconnect('\x02');
        lup_tconnect('\x04');
        return;
      }
      if (param_1 == 0xff) {
        puVar4 = *(undefined1 **)(iVar3 + DAT_000fc4b0);
        *puVar4 = 1;
        lup_tconnect('\0');
        lup_tconnect('\x02');
        lup_tconnect('\x05');
        *puVar4 = 0;
      }
    }
    return;
  }
  if (param_1 == '\x01') {
    iVar2 = *(int *)(iVar3 + DAT_000fc4b4);
    uVar1 = *(ushort *)(iVar2 + 0x348);
    uVar10 = (uint)*(ushort *)(iVar2 + 0x346);
  }
  else {
    if (1 < param_1) {
      iVar2 = *(int *)(iVar3 + DAT_000fc4b4);
      uVar10 = (uint)*(ushort *)(iVar2 + 0x34a);
      if (0x7f < uVar10) {
        uVar10 = 0x7f;
        *(undefined2 *)(iVar2 + 0x34a) = 0x7f;
      }
      goto LAB_000fc104;
    }
    iVar2 = *(int *)(iVar3 + DAT_000fc4b4);
    uVar10 = (uint)*(ushort *)(iVar2 + 0x346);
    uVar1 = *(ushort *)(iVar2 + 0x348);
    if (0x7f < uVar10) {
      uVar10 = 0x7f;
      *(undefined2 *)(iVar2 + 0x346) = 0x7f;
    }
  }
  uVar11 = (uint)uVar1;
  if (uVar11 == 0) {
    iVar9 = 0x7f;
    uVar11 = 1;
    *(undefined2 *)(iVar2 + 0x348) = 1;
  }
  else if (uVar11 < 0x80) {
    iVar9 = 0x80 - uVar11;
  }
  else {
    uVar11 = 0x7f;
    iVar9 = 1;
    *(undefined2 *)(iVar2 + 0x348) = 0x7f;
  }
  iVar2 = (int)(uVar10 * (int)*(short *)(*(int *)(iVar3 + DAT_000fc4b8) + iVar9 * 2)) / 0x7f;
  local_1f = (undefined1)iVar2;
  iVar3 = (int)(uVar10 * (int)*(short *)(*(int *)(iVar3 + DAT_000fc4b8) + uVar11 * 2)) / 0x7f;
  local_20 = (uchar)((uint)iVar2 >> 8);
  local_1d = (undefined1)iVar3;
  local_1e = (uchar)((uint)iVar3 >> 8);
  MaDevDrv_SendDspCoef(0xd1,&local_20,2);
  MaDevDrv_SendDspCoef(0xd3,&local_1e,2);
  return;
}

