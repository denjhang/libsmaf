/* STMCONTROL_SetVolume @ 00139f28 56B */


/* ARM::STMCONTROL_SetVolume(unsigned char, unsigned int, unsigned int) */

void ARM::STMCONTROL_SetVolume(uchar param_1,uint param_2,uint param_3)

{
  if (3 < (param_1 + 0x58 & 0xff)) {
    return;
  }
  CStmSynth::SetVolume(*(CStmSynth **)PTR_gpVstm_00567d68,param_1 - 0xa8,param_2,param_3);
  return;
}

