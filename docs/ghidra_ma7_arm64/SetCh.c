/* SetCh @ 00141b5c 40B */


/* ARM::CWtSynth::SetCh(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CWtSynth::SetCh(CWtSynth *this,uint param_1,uint param_2,uint param_3)

{
  if (param_1 < 0x20) {
    this[(ulong)param_1 * 0x8188 + 0x810e] = (CWtSynth)((byte)param_2 & 0x3f);
    this[(ulong)param_1 * 0x8188 + 0x810f] = SUB41(param_3,0);
  }
  return;
}

