/* STMCONTROL_ResetStreamFifo @ 0013a014 20B */


/* ARM::STMCONTROL_ResetStreamFifo(unsigned char) */

void ARM::STMCONTROL_ResetStreamFifo(uchar param_1)

{
  CStmSynth::ResetStreamFifo(*(CStmSynth **)PTR_gpVstm_00567d68,(uint)param_1);
  return;
}

