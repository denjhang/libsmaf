/* oscSlot_Noise @ 0003d444 54B */


/* ARM::CWtSynth::oscSlot_Noise(ARM::_tagWTSLOTINFO*) */

int ARM::CWtSynth::oscSlot_Noise(_tagWTSLOTINFO *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  if (*(code **)(param_1 + 0x80a4) != (code *)0x0) {
    (**(code **)(param_1 + 0x80a4))();
    iVar3 = *(int *)(param_1 + 0x80dc);
    if (iVar3 != 0) {
      uVar1 = *(ushort *)(param_1 + 0x80d6);
      iVar2 = CWnoise::Generate();
      return iVar2 * ((int)((uint)uVar1 * iVar3) >> 0xf) >> 0xf;
    }
  }
  return 0;
}

