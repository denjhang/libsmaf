/* STMCONTROL_WriteData @ 000387f8 46B */


/* ARM::STMCONTROL_WriteData(unsigned char, unsigned char) */

void ARM::STMCONTROL_WriteData(uchar param_1,uchar param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)VIRTUALREGISTER_GetStreamInfoPointer(param_1);
  if (((param_1 & 0xfd) == 1) && ((int)((uint)*pbVar1 << 0x19) < 0)) {
    return;
  }
  CStmSynth::WriteData((CStmSynth *)**(undefined4 **)(DAT_00038828 + 0x3881a),(uint)param_1,param_2)
  ;
  return;
}

