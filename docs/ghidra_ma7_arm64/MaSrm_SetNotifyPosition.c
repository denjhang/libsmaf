/* MaSrm_SetNotifyPosition @ 001a9a60 676B */


/* YAMAHA::MaSrm_SetNotifyPosition(unsigned int, _MASMW_AUDIO_NOTIFYPOSITION*) */

void YAMAHA::MaSrm_SetNotifyPosition(uint param_1,_MASMW_AUDIO_NOTIFYPOSITION *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint local_10;
  uint local_c;
  uint local_8;
  
  lVar6 = *(long *)PTR___stack_chk_guard_00567868;
  if (*(uint *)param_2 < 5) {
    lVar1 = DAT_005dd9b8 + (ulong)(param_1 & 3) * 0x78;
    *(undefined1 *)(lVar1 + 0x54) = 0;
    *(undefined1 *)(lVar1 + 0x5c) = 0;
    *(undefined1 *)(lVar1 + 100) = 0;
    *(undefined1 *)(lVar1 + 0x6c) = 0;
    uVar7 = *(uint *)(param_2 + 4);
    uVar10 = (ulong)uVar7;
    uVar5 = *(uint *)(param_2 + 0xc);
    uVar12 = *(uint *)param_2;
    uVar2 = *(uint *)(param_2 + 8);
    uVar11 = *(ulong *)(param_2 + 4);
    uVar8 = *(ulong *)(param_2 + 0xc);
    if (uVar12 != 0) {
      uVar3 = *(uint *)(lVar1 + 0x10);
      if (uVar3 < uVar7) goto LAB_001a9c8c;
      if (1 < uVar12) {
        if ((uVar3 < uVar2) ||
           ((uVar12 != 2 &&
            ((uVar3 < uVar5 || ((uVar12 != 3 && (uVar3 < *(uint *)(param_2 + 0x10)))))))))
        goto LAB_001a9c8c;
        if (uVar2 < uVar7) {
          uVar11 = uVar11 << 0x20;
          uVar10 = (ulong)uVar2;
        }
        if (uVar12 != 2) {
          if (uVar5 < (uint)uVar10) {
            uVar8 = uVar8 & 0xffffffff00000000 | uVar10;
            uVar10 = (ulong)uVar5;
          }
          if (uVar12 != 3) {
            uVar7 = (uint)(uVar8 >> 0x20);
            if (uVar7 < (uint)uVar10) {
              uVar8 = uVar8 & 0xffffffff | uVar10 << 0x20;
              uVar10 = (ulong)uVar7;
            }
            if (uVar12 != 4) {
              uVar7 = (uint)uVar10;
              if (local_10 < (uint)uVar10) {
                uVar7 = local_10;
              }
              uVar10 = (ulong)uVar7;
            }
          }
        }
      }
      *(int *)(lVar1 + 0x50) = (int)uVar10;
      *(undefined1 *)(lVar1 + 0x54) = 1;
      uVar7 = *(uint *)param_2;
      if (1 < uVar7) {
        uVar10 = uVar11 >> 0x20;
        if (uVar7 != 2) {
          uVar9 = uVar8 & 0xffffffff;
          if ((uint)uVar8 < (uint)(uVar11 >> 0x20)) {
            uVar8 = uVar8 & 0xffffffff00000000 | uVar10;
            uVar10 = uVar9;
          }
          if (uVar7 != 3) {
            uVar11 = uVar8 >> 0x20;
            if ((uint)(uVar8 >> 0x20) < (uint)uVar10) {
              uVar8 = uVar8 & 0xffffffff | uVar10 << 0x20;
              uVar10 = uVar11;
            }
            if (uVar7 != 4) {
              uVar5 = (uint)uVar10;
              if (local_10 < (uint)uVar10) {
                uVar5 = local_10;
              }
              uVar10 = (ulong)uVar5;
              if (uVar7 != 5) {
                if (local_c < uVar5) {
                  uVar5 = local_c;
                }
                uVar10 = (ulong)uVar5;
              }
            }
          }
        }
        *(int *)(lVar1 + 0x58) = (int)uVar10;
        *(undefined1 *)(lVar1 + 0x5c) = 1;
        uVar7 = *(uint *)param_2;
        if (2 < uVar7) {
          uVar5 = (uint)uVar8;
          if (uVar7 != 3) {
            uVar12 = (uint)(uVar8 >> 0x20);
            if (uVar12 < uVar5) {
              uVar8 = uVar8 << 0x20;
              uVar5 = uVar12;
            }
            if (uVar7 != 4) {
              if (local_10 < uVar5) {
                uVar5 = local_10;
              }
              if (uVar7 != 5) {
                if (local_c < uVar5) {
                  uVar5 = local_c;
                }
                if ((uVar7 != 6) && (local_8 = (uint)lVar6, local_8 < uVar5)) {
                  uVar5 = local_8;
                }
              }
            }
          }
          *(uint *)(lVar1 + 0x60) = uVar5;
          *(undefined1 *)(lVar1 + 100) = 1;
          if (3 < *(uint *)param_2) {
            *(undefined1 *)(lVar1 + 0x6c) = 1;
            *(int *)(lVar1 + 0x68) = (int)(uVar8 >> 0x20);
          }
        }
      }
    }
    *(undefined1 *)(lVar1 + 0x46) = 0;
    uVar4 = 0;
  }
  else {
LAB_001a9c8c:
    uVar4 = 0xfffffffe;
  }
  if (lVar6 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

