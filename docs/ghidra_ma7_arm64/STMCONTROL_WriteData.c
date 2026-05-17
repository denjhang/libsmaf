/* STMCONTROL_WriteData @ 00139fb0 100B */


/* ARM::STMCONTROL_WriteData(unsigned char, unsigned char) */

void ARM::STMCONTROL_WriteData(uchar param_1,uchar param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)VIRTUALREGISTER_GetStreamInfoPointer(param_1);
  if (((param_1 & 0xfffffffd) == 1) && ((*pbVar1 >> 6 & 1) != 0)) {
    return;
  }
  CStmSynth::WriteData(*(CStmSynth **)PTR_gpVstm_00567d68,(uint)param_1,param_2);
  return;
}

