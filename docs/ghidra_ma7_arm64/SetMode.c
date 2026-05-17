/* SetMode @ 0014c57c 64B */


/* ARM::CDinSynth::SetMode(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CDinSynth::SetMode(CDinSynth *this,uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (1 < param_1) {
    return;
  }
  iVar1 = *(int *)(&DAT_00331dd0 + (ulong)(param_3 & 0xf) * 4);
  *(int *)(this + (ulong)param_1 * 0xe8 + 0x14) = iVar1;
  uVar2 = 0;
  if (*(uint *)(this + 0x1dc) != 0) {
    uVar2 = (uint)(iVar1 << 0x10) / *(uint *)(this + 0x1dc);
  }
  *(uint *)(this + (ulong)param_1 * 0xe8 + 0x84) = uVar2;
  return;
}

