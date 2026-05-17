/* GetStreamPG @ 0013e50c 36B */


/* ARM::CStmSynth::GetStreamPG(unsigned int) */

undefined4 __thiscall ARM::CStmSynth::GetStreamPG(CStmSynth *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)(this + (ulong)param_1 * 0x918 + 0xe4);
  }
  return uVar1;
}

