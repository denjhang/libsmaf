/* oscSlot_Noise @ 00140578 92B */


/* ARM::CWtSynth::oscSlot_Noise(ARM::_tagWTSLOTINFO*) */

int ARM::CWtSynth::oscSlot_Noise(_tagWTSLOTINFO *param_1)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  
  if (*(code **)(param_1 + 0x80c0) != (code *)0x0) {
    (**(code **)(param_1 + 0x80c0))();
    iVar1 = *(int *)(param_1 + 0x80fc);
    if (iVar1 != 0) {
      uVar2 = *(ushort *)(param_1 + 0x80f6);
      sVar3 = CWnoise::Generate();
      return ((int)(iVar1 * (uint)uVar2) >> 0xf) * (int)sVar3 >> 0xf;
    }
  }
  return 0;
}

