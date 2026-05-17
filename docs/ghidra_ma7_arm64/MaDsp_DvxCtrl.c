/* MaDsp_DvxCtrl @ 0021be9c 468B */


/* YAMAHA::MaDsp_DvxCtrl(unsigned char*, unsigned char*, unsigned int) */

void YAMAHA::MaDsp_DvxCtrl(uchar *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uchar local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  uchar local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (DAT_005e2c04 == 1) {
    uVar2 = MaDevDrv_ClearDspCoef(0x2fb,0x2fb);
    if ((((-1 < (int)uVar2) && (uVar2 = MaDevDrv_ClearDspCoef(0x2fe,0x2fe), -1 < (int)uVar2)) &&
        (uVar2 = MaDevDrv_SendDspCoef(0x176,param_1,0x80), -1 < (int)uVar2)) &&
       (((uVar2 = MaDevDrv_SendDspCoef(0x1b6,param_2,0x80), -1 < (int)uVar2 &&
         (uVar2 = MaDevDrv_SendDspCoef(0x1f6,param_1,0x80), -1 < (int)uVar2)) &&
        (uVar2 = MaDevDrv_SendDspCoef(0x236,param_2,0x80), -1 < (int)uVar2)))) {
      iVar3 = 0x8000 >> (param_3 & 3);
      iVar1 = 0x1000 >> (param_3 >> 2 & 3);
      DAT_005e2c08 = (undefined2)iVar1;
      if (iVar3 == 0x8000) {
        iVar3 = 0x7fff;
        DAT_005e2c0a = 0x7fff;
      }
      else {
        DAT_005e2c0a = (undefined2)iVar3;
      }
      if (DAT_005e2bbc == 0) {
        local_c = (uchar)((uint)iVar1 >> 8);
        local_b = (undefined1)iVar1;
        local_a = 0;
        local_9 = 0;
      }
      else {
        local_a = (undefined1)((uint)iVar3 >> 8);
        local_9 = (undefined1)iVar3;
        local_c = '\0';
        local_b = 0;
      }
      local_10 = local_c;
      local_f = local_b;
      local_e = local_a;
      local_d = local_9;
      uVar2 = MaDevDrv_SendDspCoef(0x277,&local_10,8);
      if (-1 < (int)uVar2) {
        local_10 = '\x7f';
        local_f = 0xff;
        uVar2 = MaDevDrv_SendDspCoef(0x2fb,&local_10,2);
        if (-1 < (int)uVar2) {
          uVar2 = MaDevDrv_SendDspCoef(0x2fe,&local_10,2);
        }
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

