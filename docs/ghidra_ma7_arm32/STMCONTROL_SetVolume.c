/* STMCONTROL_SetVolume @ 00038780 40B */


/* ARM::STMCONTROL_SetVolume(unsigned char, unsigned int, unsigned int) */

void ARM::STMCONTROL_SetVolume(uchar param_1,uint param_2,uint param_3)

{
  if (3 < (param_1 + 0x58 & 0xff)) {
    return;
  }
  CStmSynth::SetVolume
            ((CStmSynth *)**(undefined4 **)(DAT_000387a8 + 0x387a0),param_1 - 0xa8,param_2,param_3);
  return;
}

