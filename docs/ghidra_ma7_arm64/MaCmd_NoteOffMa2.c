/* MaCmd_NoteOffMa2 @ 00234a10 408B */


/* YAMAHA::MaCmd_NoteOffMa2(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

void YAMAHA::MaCmd_NoteOffMa2(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  _MASNDVOICE a_Stack_10 [8];
  long local_8;
  
  uVar1 = param_3 & 0xf;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  iVar3 = MaCmd_GetVoiceInfo(param_1,uVar1,param_4 & 0x7f,a_Stack_10);
  if (iVar3 < 0) {
    uVar4 = MaCmd_Nop(param_2,0,param_5);
  }
  else {
    lVar6 = (ulong)uVar1 * 0x1e + (ulong)param_1 * 0x65d0;
    (&DAT_0074a412)[lVar6] = 0;
    if (param_2 < 0) {
      *param_5 = 0x80;
      uVar4 = 4;
      uVar7 = 3;
      uVar5 = 2;
      param_5[1] = (&DAT_0074a413)[lVar6] | 0x80;
    }
    else {
      if (param_2 < 0x80) {
        uVar4 = 6;
        uVar7 = 5;
        uVar5 = 4;
        uVar8 = 2;
        uVar9 = 1;
        uVar10 = 0;
        uVar11 = 3;
      }
      else {
        lVar6 = 0;
        do {
          iVar3 = (int)lVar6;
          bVar2 = (byte)param_2;
          param_2 = param_2 >> 7;
          param_5[lVar6] = bVar2 & 0x7f;
          if (1 < iVar3 + 1U) break;
          lVar6 = 1;
        } while (0x7f < param_2);
        uVar11 = (ulong)(iVar3 + 4);
        uVar9 = (ulong)(iVar3 + 2);
        uVar8 = (ulong)(iVar3 + 3);
        uVar5 = (ulong)(iVar3 + 5);
        uVar7 = (ulong)(iVar3 + 6);
        uVar10 = (ulong)(iVar3 + 1U);
        uVar4 = (ulong)(iVar3 + 7);
      }
      param_5[uVar10] = (byte)param_2 | 0x80;
      param_5[uVar9] = 0x80;
      param_5[uVar8] = (&DAT_0074a413)[(ulong)uVar1 * 0x1e + (ulong)param_1 * 0x65d0] | 0x80;
      param_5[uVar11] = 0x80;
    }
    param_5[uVar5] = 0x8a;
    param_5[uVar7] = 0x80;
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

