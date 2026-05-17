/* MaSrm_StreamPause @ 0008a1cc 130B */


/* YAMAHA::MaSrm_StreamPause(unsigned int) */

void YAMAHA::MaSrm_StreamPause(uint param_1)

{
  uchar uVar1;
  int *piVar2;
  int iVar3;
  uchar local_24;
  byte local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  int local_1c;
  
  piVar2 = *(int **)(DAT_0008a250 + 0x8a1de);
  local_1c = *piVar2;
  uVar1 = (uchar)(1 << (param_1 & 0xff));
  MaDevDrv_ResetIrqCtrl(uVar1,'\0');
  MaDevDrv_WriteReg(0xb,uVar1);
  local_23 = (byte)param_1 | 0x80;
  local_24 = 0xdd;
  local_22 = 0xe0;
  local_1d = 0xe0;
  local_1f = 0x80;
  local_21 = 0;
  local_20 = 0;
  local_1e = 0xe4;
  MaDevDrv_SendDirectPacket(&local_24,8);
  iVar3 = *piVar2;
  *(undefined4 *)(*(int *)(DAT_0008a254 + 0x8a238) + param_1 * 0x70 + 0x44) = 1;
  if (local_1c == iVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

