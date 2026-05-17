/* SetExParamReg @ 0004128c 178B */


/* ARM::CCh::SetExParamReg(unsigned char, unsigned char, unsigned char) */

void __thiscall ARM::CCh::SetExParamReg(CCh *this,uchar param_1,uchar param_2,uchar param_3)

{
  byte *pbVar1;
  
  if (((param_1 < 0x10) && (0x72 < param_2)) &&
     (pbVar1 = (byte *)VIRTUALREGISTER_GetExParamInfoPointer(param_1), 2 < param_1 - 0xd)) {
    switch(param_2) {
    case 's':
      *pbVar1 = param_3 & 0x7d;
      SetVol2(this,param_1,param_3);
      return;
    case 't':
      pbVar1[1] = param_3 & 0x7d;
      SetPanpot2(this,param_1,param_3);
      return;
    case 'u':
      pbVar1[2] = param_3 & 0x1f;
      return;
    case 'v':
      pbVar1[3] = param_3 & 0x7f;
      SetPitchBend2((uchar)this,param_1);
      return;
    case 'w':
      pbVar1[4] = param_3 & 0x1f;
      return;
    case 'x':
      pbVar1[5] = param_3 & 0x7f;
      SetPitchBend3((uchar)this,param_1);
      return;
    case 'y':
      pbVar1[6] = param_3 & 99;
      SetLRout(this,param_1,param_3);
      return;
    }
  }
  return;
}

