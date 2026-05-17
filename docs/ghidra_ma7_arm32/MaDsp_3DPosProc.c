/* MaDsp_3DPosProc @ 000db900 152B */


/* YAMAHA::MaDsp_3DPosProc() */

uint YAMAHA::MaDsp_3DPosProc(void)

{
  uint uVar1;
  _MASMW_P3DASNDSRCMOVE *p_Var2;
  uint uVar3;
  _MASMW_P3DASNDSRCCTRL *p_Var4;
  _MASMW_P3DACALCRESULT *p_Var5;
  uint uVar6;
  undefined2 local_2c [4];
  
  uVar6 = 0;
  local_2c[0] = *(undefined2 *)(DAT_000db998 + 0xdb90a);
  uVar3 = 0;
  p_Var4 = (_MASMW_P3DASNDSRCCTRL *)(DAT_000db99c + 0xdbc26);
  p_Var2 = (_MASMW_P3DASNDSRCMOVE *)(DAT_000db99c + 0xdbea6);
  p_Var5 = (_MASMW_P3DACALCRESULT *)(DAT_000db99c + 0xdc6b6);
  do {
    if (*(int *)(p_Var2 + 0xf4) == 1) {
LAB_000db93a:
      *(undefined4 *)(p_Var2 + 0xf4) = 0;
      uVar6 = uVar6 | 1 << (uVar3 & 0xff);
    }
    else {
      uVar1 = MaDsp_3DEngProc(p_Var4,p_Var2,p_Var5);
      if ((uVar1 & 3) != 0) {
        FUN_000d75a4(uVar3);
      }
      if (((uVar1 & 4) != 0) && (*(uint *)(p_Var4 + 4) != 0xff)) {
        MaSndDrv_SetDoppler(*(uint *)(p_Var4 + 4),*(uint *)(p_Var5 + 8));
      }
      if (*(int *)(p_Var2 + 0xf4) == 1) goto LAB_000db93a;
    }
    uVar3 = uVar3 + 1;
    p_Var4 = p_Var4 + 0xa0;
    p_Var2 = p_Var2 + 0x204;
    p_Var5 = p_Var5 + 0x30;
    if (uVar3 == 4) {
      MaDevDrv_SendDspCoef(0,(uchar *)local_2c,2);
      return uVar6;
    }
  } while( true );
}

