/* STMCONTROL_ResetStreamFifo @ 0003882c 14B */


/* ARM::STMCONTROL_ResetStreamFifo(unsigned char) */

void ARM::STMCONTROL_ResetStreamFifo(uchar param_1)

{
  CStmSynth::ResetStreamFifo((CStmSynth *)**(undefined4 **)(DAT_0003883c + 0x38834),(uint)param_1);
  return;
}

