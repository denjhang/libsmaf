/* SetResonance @ 0015a678 56B */


/* ARM::CLpf::SetResonance(unsigned int) */

void __thiscall ARM::CLpf::SetResonance(CLpf *this,uint param_1)

{
  int iVar1;
  
  iVar1 = (param_1 - 0x20) + *(int *)(this + 0x88);
  *(uint *)(this + 0x54) = param_1 - 0x20;
  if (0x1f < iVar1) {
    iVar1 = 0x1f;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(PTR_sdQTbl_00567650 + (long)iVar1 * 4);
  return;
}

