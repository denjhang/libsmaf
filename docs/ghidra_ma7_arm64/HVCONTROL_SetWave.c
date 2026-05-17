/* HVCONTROL_SetWave @ 00147518 308B */


/* ARM::HVCONTROL_SetWave(unsigned char, unsigned char) */

void ARM::HVCONTROL_SetWave(uchar param_1,uchar param_2)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  CCsmSynth *this;
  byte local_10 [8];
  long local_8;
  
  local_10[0] = 0xf;
  local_10[1] = 0x17;
  local_10[2] = 0x1f;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if ((0x28 < param_1) && (((iVar2 = param_1 - 0x29, iVar2 == 5 || (iVar2 == 8)) || (iVar2 == 2))))
  {
    uVar3 = (ushort)param_1;
    uVar4 = VIRTUALREGISTER_GetRegC(uVar3 - 2);
    uVar5 = VIRTUALREGISTER_GetRegC(uVar3 - 1);
    uVar6 = VIRTUALREGISTER_GetRegC(uVar3);
    uVar4 = (uVar5 & 0xff) << 8 | (uVar4 & 0xff) << 0xf | (uVar6 & 0xff) << 1;
    if (uVar4 - 0x10000 < 0x3800) {
      this = *(CCsmSynth **)PTR_gpVHV_00567ec0;
      bVar1 = local_10[iVar2 / 3];
      psVar7 = (short *)VIRTUALMEMORY_GetMemoryPointer(uVar4);
      if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
        CCsmSynth::SetWave(this,(uint)bVar1,psVar7);
        return;
      }
      goto LAB_00147648;
    }
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
LAB_00147648:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

