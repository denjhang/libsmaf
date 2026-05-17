/* SetMasterVol @ 0014e31c 4B */


/* ARM::CDsp::SetMasterVol(int, int) */

void __thiscall ARM::CDsp::SetMasterVol(CDsp *this,int param_1,int param_2)

{
  *(int *)(this + 0xc4) = param_1;
  *(int *)(this + 200) = param_2;
  return;
}

