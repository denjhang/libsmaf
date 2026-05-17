/* GetEgMode @ 00053140 18B */


/* ARM::CLpf::GetEgMode() */

undefined4 __thiscall ARM::CLpf::GetEgMode(CLpf *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == *(int *)(DAT_00053154 + 0x53148)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}

