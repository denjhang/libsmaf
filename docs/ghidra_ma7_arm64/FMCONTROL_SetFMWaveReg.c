/* FMCONTROL_SetFMWaveReg @ 00146c64 376B */


/* ARM::FMCONTROL_SetFMWaveReg(unsigned char, unsigned char) */

void ARM::FMCONTROL_SetFMWaveReg(uchar param_1,uchar param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  CFmSynth *this;
  byte local_10 [8];
  long local_8;
  
  local_10[0] = 0xf;
  local_10[1] = 0x17;
  local_10[2] = 0x1f;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (0x28 < param_1) {
    switch(param_1 - 0x29) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 6:
    case 7:
      if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
        VIRTUALREGISTER_SetRegC((ushort)param_1,param_2 & 0x7f);
        return;
      }
      goto LAB_00146dd8;
    case 2:
    case 5:
    case 8:
      uVar2 = (ushort)param_1;
      VIRTUALREGISTER_SetRegC(uVar2,param_2 & 0x7f);
      uVar3 = VIRTUALREGISTER_GetRegC(uVar2 - 2);
      uVar4 = VIRTUALREGISTER_GetRegC(uVar2 - 1);
      uVar5 = VIRTUALREGISTER_GetRegC(uVar2);
      uVar3 = (uVar4 & 0xff) << 8 | (uVar3 & 0xff) << 0xf | (uVar5 & 0xff) << 1;
      if (uVar3 - 0x10000 < 0x3800) {
        this = *(CFmSynth **)PTR_gpVfm_00567348;
        bVar1 = local_10[(int)(param_1 - 0x29) / 3];
        puVar6 = (uchar *)VIRTUALMEMORY_GetMemoryPointer(uVar3);
        if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
          CFmSynth::SetWave(this,(uint)bVar1,puVar6);
          return;
        }
        goto LAB_00146dd8;
      }
    }
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
LAB_00146dd8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

