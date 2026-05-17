/* MaSrm_SetNotifyPosition @ 0008b750 352B */


/* YAMAHA::MaSrm_SetNotifyPosition(unsigned int, _MASMW_AUDIO_NOTIFYPOSITION*) */

undefined4 YAMAHA::MaSrm_SetNotifyPosition(uint param_1,_MASMW_AUDIO_NOTIFYPOSITION *param_2)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r4;
  uint uVar3;
  uint unaff_r5;
  uint unaff_r6;
  int iVar4;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (4 < *(uint *)param_2) {
    return 0xfffffffe;
  }
  iVar4 = *(int *)(DAT_0008b8b0 + 0x8b76c) + (param_1 & 3) * 0x70;
  *(undefined1 *)(iVar4 + 0x4c) = 0;
  *(undefined1 *)(iVar4 + 0x54) = 0;
  *(undefined1 *)(iVar4 + 0x5c) = 0;
  *(undefined1 *)(iVar4 + 100) = 0;
  uVar3 = *(uint *)(param_2 + 4);
  local_1c = *(uint *)(param_2 + 8);
  local_18 = *(uint *)(param_2 + 0xc);
  local_14 = *(uint *)(param_2 + 0x10);
  uVar2 = *(uint *)param_2;
  if (uVar2 != 0) {
    uVar1 = *(uint *)(iVar4 + 0x10);
    if (uVar1 < uVar3) {
      return 0xfffffffe;
    }
    if (1 < uVar2) {
      if (uVar1 < local_1c) {
        return 0xfffffffe;
      }
      if (2 < uVar2) {
        if (uVar1 < local_18) {
          return 0xfffffffe;
        }
        if ((3 < uVar2) && (uVar1 < local_14)) {
          return 0xfffffffe;
        }
      }
      uVar1 = uVar3;
      if (local_1c < uVar3) {
        uVar1 = local_1c;
        local_1c = uVar3;
      }
      uVar3 = uVar1;
      if (2 < uVar2) {
        if (local_18 < uVar1) {
          uVar3 = local_18;
          local_18 = uVar1;
        }
        if (3 < uVar2) {
          uVar1 = uVar3;
          if (local_14 < uVar3) {
            uVar1 = local_14;
            local_14 = uVar3;
          }
          uVar3 = uVar1;
          if ((4 < uVar2) && (unaff_r4 < uVar1)) {
            uVar3 = unaff_r4;
            unaff_r4 = uVar1;
          }
        }
      }
    }
    uVar2 = local_18;
    *(uint *)(iVar4 + 0x48) = uVar3;
    *(undefined1 *)(iVar4 + 0x4c) = 1;
    uVar3 = *(uint *)param_2;
    if (1 < uVar3) {
      if (2 < uVar3) {
        if (local_18 < local_1c) {
          local_18 = local_1c;
          local_1c = uVar2;
        }
        if (3 < uVar3) {
          uVar2 = local_1c;
          if (local_14 < local_1c) {
            uVar2 = local_14;
            local_14 = local_1c;
          }
          local_1c = uVar2;
          if (4 < uVar3) {
            uVar1 = uVar2;
            if (unaff_r4 < uVar2) {
              uVar1 = unaff_r4;
              unaff_r4 = uVar2;
            }
            local_1c = uVar1;
            if ((5 < uVar3) && (unaff_r5 < uVar1)) {
              local_1c = unaff_r5;
              unaff_r5 = uVar1;
            }
          }
        }
      }
      uVar3 = local_14;
      *(uint *)(iVar4 + 0x50) = local_1c;
      *(undefined1 *)(iVar4 + 0x54) = 1;
      uVar2 = *(uint *)param_2;
      if (2 < uVar2) {
        if (3 < uVar2) {
          if (local_14 < local_18) {
            local_14 = local_18;
            local_18 = uVar3;
          }
          if (4 < uVar2) {
            if (unaff_r4 <= local_18) {
              local_18 = unaff_r4;
            }
            if (5 < uVar2) {
              if (unaff_r5 <= local_18) {
                local_18 = unaff_r5;
              }
              if ((6 < uVar2) && (unaff_r6 <= local_18)) {
                local_18 = unaff_r6;
              }
            }
          }
        }
        *(uint *)(iVar4 + 0x58) = local_18;
        *(undefined1 *)(iVar4 + 0x5c) = 1;
        if (3 < *(uint *)param_2) {
          *(undefined1 *)(iVar4 + 100) = 1;
          *(uint *)(iVar4 + 0x60) = local_14;
        }
      }
    }
  }
  *(undefined1 *)(iVar4 + 0x3e) = 0;
  return 0;
}

