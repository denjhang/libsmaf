/* MaSndDrv_SetDoppler @ 00192de0 132B */


/* YAMAHA::MaSndDrv_SetDoppler(unsigned int, unsigned int) */

void YAMAHA::MaSndDrv_SetDoppler(uint param_1,uint param_2)

{
  uchar local_10;
  byte local_f;
  undefined1 local_e;
  byte local_d;
  byte local_c;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 < 0xd) {
    local_f = (byte)param_1 | 0x80;
    local_d = (byte)(param_2 >> 7) & 0x1f;
    local_c = (byte)param_2 | 0x80;
    local_10 = 0xf2;
    local_e = 0xf7;
    MaDevDrv_SendDirectPacket(&local_10,5);
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

