/* MaSound_Load @ 0018ac94 456B */


/* YAMAHA::MaSound_Load(int, unsigned char*, unsigned int, unsigned char, int (*)(unsigned char),
   void*) */

void YAMAHA::MaSound_Load
               (int param_1,uchar *param_2,uint param_3,uchar param_4,_func_int_uchar *param_5,
               void *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  uint local_20 [2];
  uchar *local_18;
  uint local_10;
  long local_8;
  
  local_20[0] = 0;
  local_20[1] = 0;
  local_18 = (uchar *)0x0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  local_10 = 0;
  if (param_1 != 1) {
    if (param_1 == 0xd) {
      lVar3 = 1;
      goto LAB_0018ace0;
    }
LAB_0018ad70:
    uVar2 = 0xfffffffe;
    goto LAB_0018ad74;
  }
  lVar3 = 0;
  local_20[1] = 5;
LAB_0018ace0:
  if (((long)(ulong)DAT_0057c410 >> ((ulong)(uint)param_1 & 0x3f) & 1U) == 0) {
LAB_0018add4:
    uVar2 = 0xffffffff;
    goto LAB_0018ad74;
  }
  if (3 < param_4) goto LAB_0018ad70;
  if ((param_4 < 2) && ((&DAT_0057c43d)[lVar3 * 0x38] != '\0')) goto LAB_0018add4;
  uVar4 = (uint)param_4;
  local_18 = param_2;
  local_10 = param_3;
  if (param_4 == '\x01') {
    uVar1 = (&DAT_0048a424)[lVar3 * 2];
LAB_0018adf4:
    uVar2 = MaSmw_Check(uVar1,(_MASMW_CHECK_PARAM *)local_20);
    if ((int)uVar2 < 0) goto LAB_0018ad74;
    uVar2 = 1;
    (&PTR_FUN_0057c418)[lVar3 * 7] = param_5;
    (&DAT_0057c420)[lVar3 * 7] = param_2;
    (&DAT_0057c42c)[lVar3 * 0xe] = uVar4;
    (&DAT_0057c428)[lVar3 * 0xe] = param_3;
    (&DAT_0057c430)[lVar3 * 7] = param_6;
  }
  else {
    if (param_4 == '\0') {
      local_20[0] = 2;
      uVar1 = (&DAT_0048a424)[lVar3 * 2];
      goto LAB_0018adf4;
    }
    if (uVar4 == 2) {
      uVar1 = *(uint *)(&DAT_0048a420 + lVar3 * 8);
    }
    else {
      uVar1 = *(uint *)(&DAT_0048a420 + lVar3 * 8);
    }
    local_20[0] = (uint)(uVar4 != 2);
    uVar2 = MaSmw_Check(uVar1,(_MASMW_CHECK_PARAM *)local_20);
    if ((int)uVar2 < 0) goto LAB_0018ad74;
    uVar2 = 0;
  }
  (&DAT_0057c43c)[lVar3 * 0x38 + (long)(int)uVar2] = 1;
LAB_0018ad74:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

