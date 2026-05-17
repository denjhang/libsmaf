/* lset_adj_gain @ 00248dbc 396B */


/* YAMAHA::lset_adj_gain(unsigned int) */

void YAMAHA::lset_adj_gain(uint param_1)

{
  undefined *puVar1;
  uchar local_10;
  undefined1 local_f;
  uchar local_e;
  undefined1 local_d;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  lchk_cho_type();
  local_10 = (uchar)(param_1 >> 10);
  local_f = (undefined1)(param_1 >> 2);
  local_e = local_10;
  local_d = local_f;
  MaDevDrv_SendDspCoef(0xea,&local_10,2);
  MaDevDrv_SendDspCoef(0xec,&local_10,2);
  MaDevDrv_SendDspCoef(0x108,&local_10,4);
  MaDevDrv_SendDspCoef(0xda,&local_10,2);
  MaDevDrv_SendDspCoef(0xdd,&local_10,4);
  MaDevDrv_SendDspCoef(0xe8,&local_10,2);
  puVar1 = PTR_lprm_00567530;
  *(uint *)(PTR_lprm_00567530 + 0x20) = param_1 >> 2;
  MaDevDrv_SendDspCoef(0x73,&local_10,2);
  if ((puVar1[0x24] == '\0') && (puVar1[0x25] != '\x01')) {
    MaDevDrv_SendDspCoef(10,&local_10,4);
  }
  else {
    local_10 = '\x7f';
    local_f = 0xff;
    local_e = '\x7f';
    local_d = 0xff;
    MaDevDrv_SendDspCoef(10,&local_10,4);
    if ((PTR_lprm_00567530[0x25] == '\x01') && (PTR_lprm_00567530[9] == '\b')) {
      lup_dbex('\0');
      lup_dbex('\x03');
      lup_dbex('\x06');
      lup_dbex('\t');
    }
  }
  lup_tconnect('\x02');
  lup_tconnect('\x04');
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

