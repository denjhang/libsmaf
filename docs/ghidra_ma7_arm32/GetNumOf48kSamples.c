/* GetNumOf48kSamples @ 000495f4 34B */


/* ARM::CSrc::GetNumOf48kSamples(unsigned int) */

void __thiscall ARM::CSrc::GetNumOf48kSamples(CSrc *this,uint param_1)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(this + 8);
  iVar2 = *(int *)(this + 0xc) * param_1 + *(int *)(this + 0x28);
  __aeabi_uidivmod(iVar2,uVar1);
  *(undefined4 *)(this + 0x28) = extraout_r1;
  __udivsi3(iVar2,uVar1);
  return;
}

