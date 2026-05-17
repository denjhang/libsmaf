/* STMCONTROL_GetStreamPG @ 00139f9c 20B */


/* ARM::STMCONTROL_GetStreamPG(unsigned char) */

void ARM::STMCONTROL_GetStreamPG(uchar param_1)

{
  CStmSynth::GetStreamPG(*(CStmSynth **)PTR_gpVstm_00567d68,(uint)param_1);
  return;
}

