/* GetEgMode @ 0015a940 28B */


/* ARM::CLpf::GetEgMode() */

undefined4 __thiscall ARM::CLpf::GetEgMode(CLpf *this)

{
  undefined4 uVar1;
  
  uVar1 = 7;
  if (*(undefined **)(this + 8) == PTR_CalcEg_DEAD_00567f08) {
    uVar1 = 0;
  }
  return uVar1;
}

