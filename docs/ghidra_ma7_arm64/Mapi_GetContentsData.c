/* Mapi_GetContentsData @ 0017f70c 808B */


/* YAMAHA::Mapi_GetContentsData(int, MAPI_CONTENTSINFO*) */

void YAMAHA::Mapi_GetContentsData(int param_1,MAPI_CONTENTSINFO *param_2)

{
  short sVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined2 local_38;
  MAPI_CONTENTSINFO local_36;
  MAPI_CONTENTSINFO local_35;
  long local_30;
  int local_28;
  uint local_24;
  undefined4 local_20 [2];
  long local_18;
  int local_10;
  long local_8;
  
  local_20[0] = 0;
  local_18 = 0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  local_10 = 0;
  mapimachdep_LockApi();
  if ((DAT_00577e10 == '\0') || (DAT_00577f10 != 1)) {
    mapimachdep_UnlockApi();
    uVar3 = 0xfffffff8;
    goto LAB_0017f7e4;
  }
  if ((param_1 != 1) || (param_2 == (MAPI_CONTENTSINFO *)0x0)) {
LAB_0017f918:
    mapimachdep_UnlockApi();
    uVar3 = 0xfffffffe;
    goto LAB_0017f7e4;
  }
  if (DAT_00577f08 == 0xc) {
    lVar5 = *(long *)(param_2 + 8);
    if ((lVar5 == 0) || (iVar4 = *(int *)(param_2 + 0x10), iVar4 == 0)) goto LAB_0017f918;
    sVar1 = *(short *)(param_2 + 2);
    if ((sVar1 != 0x5243) && (sVar1 != 0x5453)) {
      if (sVar1 == 0x3757) {
        iVar4 = MaSmw_XMF_GetInfo((_tagmaXMF_Info *)&DAT_0057a718,6,0,(void *)0x0);
      }
      else {
        if (sVar1 != 0x3443) {
          if ((sVar1 == 0x4256 || sVar1 == 0x444c) || (sVar1 == 0x434b)) {
            local_38 = *(undefined2 *)param_2;
            local_36 = param_2[2];
            local_35 = param_2[3];
            local_30 = lVar5;
            local_28 = iVar4;
            local_24 = MaSmw_Ctrl(0x900,10,0,&local_38);
            goto LAB_0017f7c8;
          }
          goto LAB_0017f880;
        }
        iVar4 = MaSmw_XMF_GetInfo((_tagmaXMF_Info *)&DAT_0057a718,0,0,(void *)0x0);
      }
      if (-1 < iVar4) {
        uVar6 = *(uint *)(param_2 + 0x10);
        uVar2 = (undefined1)((uint)iVar4 >> 8);
        if (uVar6 < 4) {
          if ((uVar6 == 0) || (**(undefined1 **)(param_2 + 8) = (char)iVar4, uVar6 == 1))
          goto LAB_0017f8e8;
          uVar3 = 0xffffffff;
          *(undefined1 *)(*(long *)(param_2 + 8) + 1) = uVar2;
          if (uVar6 == 2) goto LAB_0017f7dc;
        }
        else {
          uVar6 = 4;
          uVar3 = 4;
          **(undefined1 **)(param_2 + 8) = (char)iVar4;
          *(undefined1 *)(*(long *)(param_2 + 8) + 1) = uVar2;
        }
        *(char *)(*(long *)(param_2 + 8) + 2) = (char)((uint)iVar4 >> 0x10);
        local_24 = uVar3;
        if (uVar6 == 4) {
          *(char *)(*(long *)(param_2 + 8) + 3) = (char)((uint)iVar4 >> 0x18);
        }
        goto LAB_0017f7c8;
      }
LAB_0017f880:
      uVar3 = 0xffffffeb;
      goto LAB_0017f7dc;
    }
    local_20[0] = 0;
    local_18 = lVar5;
    local_10 = iVar4;
    if (sVar1 == 0x5453) {
      uVar3 = MaSmw_XMF_GetInfo((_tagmaXMF_Info *)&DAT_0057a718,1,8,local_20);
    }
    else {
      uVar3 = MaSmw_XMF_GetInfo((_tagmaXMF_Info *)&DAT_0057a718,1,9,local_20);
    }
    if ((int)uVar3 < 1) goto LAB_0017f880;
    if (*(uint *)(param_2 + 0x10) < uVar3) {
LAB_0017f8e8:
      uVar3 = 0xffffffff;
      goto LAB_0017f7dc;
    }
LAB_0017f7cc:
    if ((*(short *)(param_2 + 2) == 0x5648) && (**(char **)(param_2 + 8) == '\x10')) {
      **(char **)(param_2 + 8) = '\0';
      uVar3 = 0xffffffeb;
    }
  }
  else if (DAT_00577f08 == 1) {
    local_24 = SmafMms_Control(DAT_00577f28,0x1000a,param_2);
LAB_0017f7c8:
    uVar3 = local_24;
    if (-1 < (int)uVar3) goto LAB_0017f7cc;
  }
  else {
    local_38 = *(undefined2 *)param_2;
    local_36 = param_2[2];
    local_35 = param_2[3];
    local_30 = *(long *)(param_2 + 8);
    local_28 = *(int *)(param_2 + 0x10);
    uVar3 = MaSmw_Ctrl(0x900,10,0,&local_38);
    if (-1 < (int)uVar3) goto LAB_0017f7c8;
  }
LAB_0017f7dc:
  mapimachdep_UnlockApi();
LAB_0017f7e4:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

