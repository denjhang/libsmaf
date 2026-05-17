/* SetModulation @ 00040f48 66B */


/* ARM::CCh::SetModulation(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetModulation(CCh *this,uchar param_1,uchar param_2)

{
  int iVar1;
  CCh *pCVar2;
  uint uVar3;
  
  if (0x3f < param_1) {
    return this;
  }
  iVar1 = (uint)param_2 << 0x19;
  uVar3 = param_2 & 0x1f;
  if (iVar1 < 0) {
switchD_00040f7c_caseD_0:
  }
  else {
    switch(uVar3) {
    case 0:
    case 1:
    case 2:
    case 4:
      goto switchD_00040f7c_caseD_0;
    case 3:
      uVar3 = 2;
      break;
    case 5:
      uVar3 = 4;
      break;
    default:
      uVar3 = 8;
    }
  }
  pCVar2 = (CCh *)(uVar3 | (iVar1 >> 0x1f) * -0x80);
  *(char *)(*(int *)(DAT_00040fa4 + 0x40f64) + (uint)param_1 * 0x20 + 3) = (char)pCVar2;
  return pCVar2;
}

