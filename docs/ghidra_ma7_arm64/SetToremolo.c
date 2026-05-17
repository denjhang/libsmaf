/* SetToremolo @ 00144de4 164B */


/* ARM::CCh::SetToremolo(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetToremolo(CCh *this,uchar param_1,uchar param_2)

{
  uint uVar1;
  uint uVar2;
  CCh *pCVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_1;
  if (param_1 < 0x40) {
    uVar2 = param_2 >> 4 & 7;
    uVar1 = uVar2 - 2;
    pCVar3 = (CCh *)(ulong)uVar1;
    if (uVar1 < 6) {
      this = (CCh *)((long)(char)pCVar3[0x320050] * 4 + 0x144e34);
      switch(pCVar3) {
      default:
        PTR_gChCi_00567290[uVar4 * 0x20 + 5] = 2;
        break;
      case (CCh *)0x2:
      case (CCh *)0x3:
        PTR_gChCi_00567290[uVar4 * 0x20 + 5] = 3;
        break;
      case (CCh *)0x4:
      case (CCh *)0x5:
        PTR_gChCi_00567290[uVar4 * 0x20 + 5] = 4;
      }
    }
    else {
      PTR_gChCi_00567290[uVar4 * 0x20 + 5] = (char)uVar2;
      this = pCVar3;
    }
  }
  return this;
}

