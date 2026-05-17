/* SetModulation @ 00144eb4 112B */


/* ARM::CCh::SetModulation(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetModulation(CCh *this,uchar param_1,uchar param_2)

{
  int iVar1;
  CCh *pCVar2;
  byte bVar3;
  
  if (0x3f < param_1) {
    return this;
  }
  pCVar2 = (CCh *)((ulong)(param_2 >> 6) & 1);
  iVar1 = (int)pCVar2;
  if (iVar1 == 0) {
    bVar3 = 8;
    switch(param_2 & 0x1f) {
    case 0:
    case 1:
    case 2:
    case 4:
      goto switchD_00144f10_caseD_0;
    case 3:
      bVar3 = 2;
      break;
    case 5:
      bVar3 = 4;
    }
  }
  else {
switchD_00144f10_caseD_0:
    bVar3 = param_2 & 0x1f;
  }
  PTR_gChCi_00567290[(ulong)param_1 * 0x20 + 3] = bVar3 | (byte)(iVar1 << 7);
  return pCVar2;
}

