/* STMCONTROL_SetStreamInt @ 000387ac 44B */


/* ARM::STMCONTROL_SetStreamInt(unsigned char, unsigned char, unsigned char) */

void ARM::STMCONTROL_SetStreamInt(uchar param_1,uchar param_2,uchar param_3)

{
  CStmSynth *this;
  uint *puVar1;
  
  puVar1 = *(uint **)(DAT_000387e0 + 0x387c8);
  this = (CStmSynth *)**(undefined4 **)(DAT_000387d8 + 0x387be);
  **(uint **)(DAT_000387dc + 0x387c2) = (uint)param_2;
  *puVar1 = (uint)param_3;
  CStmSynth::SetStreamInt(this,(uint)param_1,(uint)param_2,(uint)param_3);
  return;
}

