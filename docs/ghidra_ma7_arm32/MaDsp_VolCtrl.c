/* MaDsp_VolCtrl @ 000d85b8 66B */


/* YAMAHA::MaDsp_VolCtrl(unsigned int, void*) */

undefined4 YAMAHA::MaDsp_VolCtrl(uint param_1,void *param_2)

{
  undefined2 local_14 [4];
  
  local_14[0] = *(undefined2 *)(DAT_000d85fc + 0xd85c0);
  if ((param_1 == 0) && (*(uint *)param_2 < 0x80)) {
    *(uint *)(*(int *)(DAT_000d8600 + 0xd85dc) + 0x1c) = *(uint *)param_2;
    lup_calc('\x05','\x10');
    MaDevDrv_SendDspCoef(0,(uchar *)local_14,2);
    return 0;
  }
  return 0xfffffffe;
}

