/* MaDsp_SetDefault @ 0021bc60 572B */


/* YAMAHA::MaDsp_SetDefault() */

void YAMAHA::MaDsp_SetDefault(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
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
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  local_40 = 0;
  local_3c = 0;
  local_38 = 1000;
  local_30[0] = 0xff;
  local_30[1] = 0xff;
  uVar2 = MaDevDrv_SendDspProgram(0,PTR_gabDspm_00567f60,0x1200);
  if ((-1 < (int)uVar2) &&
     (uVar2 = MaDevDrv_SendDspCoef(0,PTR_gabDspc_00567d48,0x600), -1 < (int)uVar2)) {
    MaDsp_3DCtrl(1,0x84,0,&local_40);
    MaDsp_3DCtrl(1,0x84,1,&local_40);
    MaDsp_3DCtrl(1,0x84,2,&local_40);
    MaDsp_3DCtrl(1,0x84,3,&local_40);
    if (DAT_005e2c14 != 2) {
      puVar4 = &DAT_005e2ad2;
      uVar6 = 0x1a;
      puVar5 = &DAT_005e20d4;
      uVar3 = 0x285;
      do {
        local_27 = (undefined1)*puVar4;
        local_1f = (undefined1)puVar4[1];
        local_28 = (uchar)((ushort)*puVar4 >> 8);
        local_20 = (uchar)((ushort)puVar4[1] >> 8);
        MaDevDrv_SendDspCoef(uVar3,&local_28,2);
        MaDevDrv_SendDspCoef(uVar3 + 7,&local_20,2);
        if (DAT_005e1d84 != 0) {
          uVar1 = *puVar5;
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
          uVar1 = (uint)((int)(short)puVar4[-1] * *(int *)(PTR_lprm_00567530 + 0x20)) >> 0xd;
          local_17 = (undefined1)uVar1;
          local_18 = (uchar)(uVar1 >> 8);
          MaDevDrv_SendDspCoef(0x29b - uVar3,&local_18,2);
        }
        uVar3 = uVar3 - 1;
        puVar4 = puVar4 + 0x18;
        uVar6 = uVar6 + 2;
        puVar5 = puVar5 + 0x28;
      } while (uVar3 != 0x281);
    }
    MaDevDrv_SendDspCoef(0,local_30,2);
    uVar2 = 0;
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

