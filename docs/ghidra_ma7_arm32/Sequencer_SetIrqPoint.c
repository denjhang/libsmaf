/* Sequencer_SetIrqPoint @ 00037ff4 40B */


/* ARM::Sequencer_SetIrqPoint(unsigned char, unsigned int) */

void ARM::Sequencer_SetIrqPoint(uchar param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (uint)param_1;
  if (1 < uVar1) {
    return;
  }
  iVar3 = uVar1 * 0x458 + DAT_0003801c + 0x38004;
  if (uVar1 == 0) {
    iVar2 = param_2 << 7;
  }
  else {
    iVar2 = param_2 << 4;
  }
  if (*(int *)(iVar3 + 4) != iVar2) {
    *(int *)(iVar3 + 4) = iVar2;
  }
  return;
}

