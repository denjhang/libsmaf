/* MaDsp_3DPosProc @ 0021c208 544B */


/* YAMAHA::MaDsp_3DPosProc() */

void YAMAHA::MaDsp_3DPosProc(void)

{
  uint uVar1;
  uint uVar2;
  _MASMW_P3DASNDSRCMOVE *p_Var3;
  _MASMW_P3DACALCRESULT *p_Var4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  _MASMW_P3DASNDSRCCTRL *p_Var8;
  uchar local_30 [8];
  uchar local_28;
  undefined1 local_27;
  uchar local_20;
  undefined1 local_1f;
  uchar local_18;
  undefined1 local_17;
  uchar local_10 [3];
  undefined1 local_d;
  long local_8;
  
  uVar7 = 0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  p_Var8 = (_MASMW_P3DASNDSRCCTRL *)&DAT_005e2040;
  p_Var3 = (_MASMW_P3DASNDSRCMOVE *)&DAT_005e22c0;
  local_30[0] = 0xff;
  p_Var4 = (_MASMW_P3DACALCRESULT *)&DAT_005e2ad0;
  local_30[1] = 0xff;
  uVar6 = 0x1a;
  uVar5 = 0;
  do {
    if (*(int *)(p_Var3 + 0xf4) == 1) {
LAB_0021c290:
      *(undefined4 *)(p_Var3 + 0xf4) = 0;
      uVar7 = uVar7 | 1 << (ulong)(uVar5 & 0x1f);
    }
    else {
      uVar2 = MaDsp_3DEngProc(p_Var8,p_Var3,p_Var4);
      if ((uVar2 & 3) != 0) {
        local_27 = (undefined1)*(undefined2 *)(p_Var4 + 2);
        local_1f = (undefined1)*(undefined2 *)(p_Var4 + 4);
        local_28 = (uchar)((ushort)*(undefined2 *)(p_Var4 + 2) >> 8);
        local_20 = (uchar)((ushort)*(undefined2 *)(p_Var4 + 4) >> 8);
        MaDevDrv_SendDspCoef(0x285 - uVar5,&local_28,2);
        MaDevDrv_SendDspCoef(0x28c - uVar5,&local_20,2);
        if (DAT_005e1d84 != 0) {
          uVar1 = *(uint *)(p_Var8 + 0x94);
          if (uVar1 < 0x7fff) {
            local_10[2] = (uchar)(uVar1 >> 10);
            local_d = (undefined1)(uVar1 >> 2);
          }
          else {
            local_d = 0;
            local_10[2] = 0x20;
          }
          local_10[0] = '\0';
          local_10[1] = 0;
          MaDevDrv_SendDspCoef(uVar6,local_10,4);
          uVar1 = (uint)((int)*(short *)p_Var4 * *(int *)(PTR_lprm_00567530 + 0x20)) >> 0xd;
          local_17 = (undefined1)uVar1;
          local_18 = (uchar)(uVar1 >> 8);
          MaDevDrv_SendDspCoef(uVar5 + 0x16,&local_18,2);
        }
      }
      if (((uVar2 >> 2 & 1) != 0) && (*(uint *)(p_Var8 + 4) != 0xff)) {
        MaSndDrv_SetDoppler(*(uint *)(p_Var8 + 4),*(uint *)(p_Var4 + 8));
      }
      if (*(int *)(p_Var3 + 0xf4) == 1) goto LAB_0021c290;
    }
    uVar5 = uVar5 + 1;
    p_Var8 = p_Var8 + 0xa0;
    p_Var3 = p_Var3 + 0x204;
    p_Var4 = p_Var4 + 0x30;
    uVar6 = uVar6 + 2;
    if (uVar5 == 4) {
      MaDevDrv_SendDspCoef(0,local_30,2);
      if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar7);
      }
      return;
    }
  } while( true );
}

