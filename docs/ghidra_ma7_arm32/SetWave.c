/* SetWave @ 00043114 282B */


/* ARM::CCsmSynth::SetWave(unsigned int, short*) */

void __thiscall ARM::CCsmSynth::SetWave(CCsmSynth *this,uint param_1,short *param_2)

{
  CCsmSynth *pCVar1;
  CCsmSynth *pCVar2;
  short *psVar3;
  int iVar4;
  
  if (param_2 != (short *)0x0) {
    if (param_1 == 0x17) {
      this = this + 0x800;
    }
    else if (param_1 == 0x1f) {
      this = this + 0x1000;
    }
    else if (param_1 != 0xf) {
      return;
    }
    pCVar1 = this;
    psVar3 = param_2 + 2;
    do {
      pCVar2 = pCVar1 + 0x10;
      iVar4 = (int)psVar3[-1] + psVar3[-2] * 0x100;
      if (0x7fff < iVar4) {
        iVar4 = 0x10000 - iVar4;
      }
      *(short *)pCVar1 = (short)iVar4;
      iVar4 = (int)psVar3[1] + *psVar3 * 0x100;
      if (0x7fff < iVar4) {
        iVar4 = 0x10000 - iVar4;
      }
      *(short *)(pCVar1 + 2) = (short)iVar4;
      iVar4 = (int)psVar3[3] + psVar3[2] * 0x100;
      if (0x7fff < iVar4) {
        iVar4 = 0x10000 - iVar4;
      }
      *(short *)(pCVar1 + 4) = (short)iVar4;
      iVar4 = (int)psVar3[5] + psVar3[4] * 0x100;
      if (0x7fff < iVar4) {
        iVar4 = 0x10000 - iVar4;
      }
      *(short *)(pCVar1 + 6) = (short)iVar4;
      iVar4 = (int)psVar3[7] + psVar3[6] * 0x100;
      if (0x7fff < iVar4) {
        iVar4 = 0x10000 - iVar4;
      }
      *(short *)(pCVar1 + 8) = (short)iVar4;
      iVar4 = (int)psVar3[9] + psVar3[8] * 0x100;
      if (0x7fff < iVar4) {
        iVar4 = 0x10000 - iVar4;
      }
      *(short *)(pCVar1 + 10) = (short)iVar4;
      iVar4 = (int)psVar3[0xb] + psVar3[10] * 0x100;
      if (0x7fff < iVar4) {
        iVar4 = 0x10000 - iVar4;
      }
      *(short *)(pCVar1 + 0xc) = (short)iVar4;
      iVar4 = (int)psVar3[0xd] + psVar3[0xc] * 0x100;
      if (0x7fff < iVar4) {
        iVar4 = 0x10000 - iVar4;
      }
      *(short *)(pCVar1 + 0xe) = (short)iVar4;
      pCVar1 = pCVar2;
      psVar3 = psVar3 + 0x10;
    } while (pCVar2 != this + 0x800);
  }
  return;
}

