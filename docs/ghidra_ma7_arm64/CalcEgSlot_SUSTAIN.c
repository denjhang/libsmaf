/* CalcEgSlot_SUSTAIN @ 00140514 36B */


/* ARM::CWtSynth::CalcEgSlot_SUSTAIN(ARM::_tagWTSLOTINFO*) */

void ARM::CWtSynth::CalcEgSlot_SUSTAIN(_tagWTSLOTINFO *param_1)

{
  int iVar1;
  
  iVar1 = (int)((long)((ulong)*(uint *)(param_1 + 0x80f4) * (ulong)*(uint *)(param_1 + 33000)) >>
               0x1e);
  *(int *)(param_1 + 0x80f4) = iVar1;
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x80c0) = 0;
  }
  return;
}

