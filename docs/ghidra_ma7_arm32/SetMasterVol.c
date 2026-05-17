/* SetMasterVol @ 00053894 10B */


/* ARM::CDsp1::SetMasterVol(int, int) */

void __thiscall ARM::CDsp1::SetMasterVol(CDsp1 *this,int param_1,int param_2)

{
  *(int *)(this + 0xc0) = param_1;
  *(int *)(this + 0xc4) = param_2;
  return;
}

