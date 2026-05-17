/* GetNumOf48kSamples @ 0014e814 40B */


/* ARM::CSrc::GetNumOf48kSamples(unsigned int) */

uint __thiscall ARM::CSrc::GetNumOf48kSamples(CSrc *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(this + 0xc);
  uVar2 = *(int *)(this + 0x38) + param_1 * *(int *)(this + 0x10);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar2 / uVar1;
  }
  *(uint *)(this + 0x38) = uVar2 - uVar3 * uVar1;
  return uVar3;
}

