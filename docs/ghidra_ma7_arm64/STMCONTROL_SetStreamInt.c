/* STMCONTROL_SetStreamInt @ 00139f60 60B */


/* ARM::STMCONTROL_SetStreamInt(unsigned char, unsigned char, unsigned char) */

void ARM::STMCONTROL_SetStreamInt(uchar param_1,uchar param_2,uchar param_3)

{
  undefined *puVar1;
  CStmSynth *this;
  
  puVar1 = PTR_gdwStmIntEnable_00567548;
  this = *(CStmSynth **)PTR_gpVstm_00567d68;
  *(uint *)PTR_gdwIrqPoint_00567158 = (uint)param_2;
  *(uint *)puVar1 = (uint)param_3;
  CStmSynth::SetStreamInt(this,(uint)param_1,(uint)param_2,(uint)param_3);
  return;
}

