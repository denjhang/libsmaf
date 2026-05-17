/* CalcEgSlot_RELEASE @ 00140538 64B */


/* ARM::CWtSynth::CalcEgSlot_RELEASE(ARM::_tagWTSLOTINFO*) */

void ARM::CWtSynth::CalcEgSlot_RELEASE(_tagWTSLOTINFO *param_1)

{
  int iVar1;
  
  if (param_1[0x80fb] == (_tagWTSLOTINFO)0x0) {
    iVar1 = (int)((ulong)*(uint *)(param_1 + 0x80f4) * (ulong)*(uint *)(param_1 + 0x80ec) >> 0x1e);
  }
  else {
    iVar1 = (int)((ulong)*(uint *)(param_1 + 0x80f4) * (ulong)*(uint *)(param_1 + 33000) >> 0x1e);
  }
  *(int *)(param_1 + 0x80f4) = iVar1;
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x80c0) = 0;
  }
  return;
}

