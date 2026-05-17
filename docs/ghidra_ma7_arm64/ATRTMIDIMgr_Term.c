/* ATRTMIDIMgr_Term @ 0021e610 964B */


/* YAMAHA::ATRTMIDIMgr_Term() */

undefined8 YAMAHA::ATRTMIDIMgr_Term(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  puVar4 = (undefined8 *)(PTR_gsAtRtmMgrInfo_00567da0 + 8);
  puVar1 = (undefined8 *)(PTR_gsAtRtmMgrInfo_00567da0 + 0x808);
  do {
    if ((void *)*puVar4 != (void *)0x0) {
      free((void *)*puVar4);
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
    }
    if ((void *)puVar4[2] != (void *)0x0) {
      free((void *)puVar4[2]);
      puVar4[2] = 0;
      *(undefined4 *)(puVar4 + 3) = 0;
    }
    if ((void *)puVar4[4] != (void *)0x0) {
      free((void *)puVar4[4]);
      puVar4[4] = 0;
      *(undefined4 *)(puVar4 + 5) = 0;
    }
    if ((void *)puVar4[6] != (void *)0x0) {
      free((void *)puVar4[6]);
      puVar4[6] = 0;
      *(undefined4 *)(puVar4 + 7) = 0;
    }
    if ((void *)puVar4[8] != (void *)0x0) {
      free((void *)puVar4[8]);
      puVar4[8] = 0;
      *(undefined4 *)(puVar4 + 9) = 0;
    }
    if ((void *)puVar4[10] != (void *)0x0) {
      free((void *)puVar4[10]);
      puVar4[10] = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
    }
    if ((void *)puVar4[0xc] != (void *)0x0) {
      free((void *)puVar4[0xc]);
      puVar4[0xc] = 0;
      *(undefined4 *)(puVar4 + 0xd) = 0;
    }
    if ((void *)puVar4[0xe] != (void *)0x0) {
      free((void *)puVar4[0xe]);
      puVar4[0xe] = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
    }
    if ((void *)puVar4[0x10] != (void *)0x0) {
      free((void *)puVar4[0x10]);
      puVar4[0x10] = 0;
      *(undefined4 *)(puVar4 + 0x11) = 0;
    }
    if ((void *)puVar4[0x12] != (void *)0x0) {
      free((void *)puVar4[0x12]);
      puVar4[0x12] = 0;
      *(undefined4 *)(puVar4 + 0x13) = 0;
    }
    if ((void *)puVar4[0x14] != (void *)0x0) {
      free((void *)puVar4[0x14]);
      puVar4[0x14] = 0;
      *(undefined4 *)(puVar4 + 0x15) = 0;
    }
    if ((void *)puVar4[0x16] != (void *)0x0) {
      free((void *)puVar4[0x16]);
      puVar4[0x16] = 0;
      *(undefined4 *)(puVar4 + 0x17) = 0;
    }
    if ((void *)puVar4[0x18] != (void *)0x0) {
      free((void *)puVar4[0x18]);
      puVar4[0x18] = 0;
      *(undefined4 *)(puVar4 + 0x19) = 0;
    }
    if ((void *)puVar4[0x1a] != (void *)0x0) {
      free((void *)puVar4[0x1a]);
      puVar4[0x1a] = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 0;
    }
    if ((void *)puVar4[0x1c] != (void *)0x0) {
      free((void *)puVar4[0x1c]);
      puVar4[0x1c] = 0;
      *(undefined4 *)(puVar4 + 0x1d) = 0;
    }
    if ((void *)puVar4[0x1e] != (void *)0x0) {
      free((void *)puVar4[0x1e]);
      puVar4[0x1e] = 0;
      *(undefined4 *)(puVar4 + 0x1f) = 0;
    }
    puVar2 = PTR_gsAtRtmMgrInfo_00567da0;
    puVar4 = puVar4 + 0x20;
  } while (puVar4 != puVar1);
  puVar4 = (undefined8 *)(PTR_gsAtRtmMgrInfo_00567da0 + 0x808);
  pvVar3 = (void *)*puVar4;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
    *puVar4 = 0;
    *(undefined4 *)(puVar2 + 0x810) = 0;
  }
  pvVar3 = *(void **)(puVar2 + 0x818);
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
    *(undefined8 *)(puVar2 + 0x818) = 0;
    *(undefined4 *)(puVar2 + 0x820) = 0;
  }
  pvVar3 = *(void **)(puVar2 + 0x828);
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
    *(undefined8 *)(puVar2 + 0x828) = 0;
    *(undefined4 *)(puVar2 + 0x830) = 0;
  }
  puVar2 = PTR_gsAtRtmMgrInfo_00567da0;
  if (*(void **)(PTR_gsAtRtmMgrInfo_00567da0 + 0x165090) != (void *)0x0) {
    free(*(void **)(PTR_gsAtRtmMgrInfo_00567da0 + 0x165090));
    *(undefined8 *)(puVar2 + 0x165090) = 0;
    *(undefined4 *)(puVar2 + 0x165098) = 0;
  }
  puVar2 = PTR_gsAtRtmMgrInfo_00567da0;
  puVar4 = (undefined8 *)(PTR_gsAtRtmMgrInfo_00567da0 + 0x164c90);
  puVar1 = (undefined8 *)(PTR_gsAtRtmMgrInfo_00567da0 + 0x165090);
  uVar5 = (ulong)((long)puVar1 + (-0x10 - (long)puVar4)) >> 4 & 7;
  if ((void *)*puVar4 != (void *)0x0) {
    free((void *)*puVar4);
    *puVar4 = 0;
    *(undefined4 *)(puVar2 + 0x164c98) = 0;
  }
  puVar4 = (undefined8 *)(puVar2 + 0x164ca0);
  if (puVar4 != puVar1) {
    if (uVar5 != 0) {
      if (uVar5 != 1) {
        if (uVar5 != 2) {
          if (uVar5 != 3) {
            if (uVar5 != 4) {
              if (uVar5 != 5) {
                if (uVar5 != 6) {
                  if ((void *)*puVar4 != (void *)0x0) {
                    free((void *)*puVar4);
                    *puVar4 = 0;
                    *(undefined4 *)(puVar2 + 0x164ca8) = 0;
                  }
                  puVar4 = (undefined8 *)(puVar2 + 0x164cb0);
                }
                if ((void *)*puVar4 != (void *)0x0) {
                  free((void *)*puVar4);
                  *puVar4 = 0;
                  *(undefined4 *)(puVar4 + 1) = 0;
                }
                puVar4 = puVar4 + 2;
              }
              if ((void *)*puVar4 != (void *)0x0) {
                free((void *)*puVar4);
                *puVar4 = 0;
                *(undefined4 *)(puVar4 + 1) = 0;
              }
              puVar4 = puVar4 + 2;
            }
            if ((void *)*puVar4 != (void *)0x0) {
              free((void *)*puVar4);
              *puVar4 = 0;
              *(undefined4 *)(puVar4 + 1) = 0;
            }
            puVar4 = puVar4 + 2;
          }
          if ((void *)*puVar4 != (void *)0x0) {
            free((void *)*puVar4);
            *puVar4 = 0;
            *(undefined4 *)(puVar4 + 1) = 0;
          }
          puVar4 = puVar4 + 2;
        }
        if ((void *)*puVar4 != (void *)0x0) {
          free((void *)*puVar4);
          *puVar4 = 0;
          *(undefined4 *)(puVar4 + 1) = 0;
        }
        puVar4 = puVar4 + 2;
      }
      if ((void *)*puVar4 != (void *)0x0) {
        free((void *)*puVar4);
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
      }
      puVar4 = puVar4 + 2;
      if (puVar4 == puVar1) {
        return 0;
      }
    }
    do {
      if ((void *)*puVar4 != (void *)0x0) {
        free((void *)*puVar4);
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
      }
      if ((void *)puVar4[2] != (void *)0x0) {
        free((void *)puVar4[2]);
        puVar4[2] = 0;
        *(undefined4 *)(puVar4 + 3) = 0;
      }
      if ((void *)puVar4[4] != (void *)0x0) {
        free((void *)puVar4[4]);
        puVar4[4] = 0;
        *(undefined4 *)(puVar4 + 5) = 0;
      }
      if ((void *)puVar4[6] != (void *)0x0) {
        free((void *)puVar4[6]);
        puVar4[6] = 0;
        *(undefined4 *)(puVar4 + 7) = 0;
      }
      if ((void *)puVar4[8] != (void *)0x0) {
        free((void *)puVar4[8]);
        puVar4[8] = 0;
        *(undefined4 *)(puVar4 + 9) = 0;
      }
      if ((void *)puVar4[10] != (void *)0x0) {
        free((void *)puVar4[10]);
        puVar4[10] = 0;
        *(undefined4 *)(puVar4 + 0xb) = 0;
      }
      if ((void *)puVar4[0xc] != (void *)0x0) {
        free((void *)puVar4[0xc]);
        puVar4[0xc] = 0;
        *(undefined4 *)(puVar4 + 0xd) = 0;
      }
      if ((void *)puVar4[0xe] != (void *)0x0) {
        free((void *)puVar4[0xe]);
        puVar4[0xe] = 0;
        *(undefined4 *)(puVar4 + 0xf) = 0;
      }
      puVar4 = puVar4 + 0x10;
    } while (puVar4 != puVar1);
  }
  return 0;
}

