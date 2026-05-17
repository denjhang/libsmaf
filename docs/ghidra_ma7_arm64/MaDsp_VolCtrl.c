/* MaDsp_VolCtrl @ 00217bc8 152B */


/* YAMAHA::MaDsp_VolCtrl(unsigned int, void*) */

void YAMAHA::MaDsp_VolCtrl(uint param_1,void *param_2)

{
  undefined4 uVar1;
  uchar local_10 [8];
  long local_8;
  
  local_10[0] = 0xff;
  local_10[1] = 0xff;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if ((param_1 == 0) && (*(uint *)param_2 < 0x80)) {
    *(uint *)(PTR_lprm_00567530 + 0x1c) = *(uint *)param_2;
    lup_calc('\x05','\x10');
    MaDevDrv_SendDspCoef(0,local_10,2);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffe;
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

