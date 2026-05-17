/* Sequencer_GetStatus @ 00037e98 122B */


/* ARM::Sequencer_GetStatus(unsigned char) */

uint ARM::Sequencer_GetStatus(uchar param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (uint)param_1;
  if (1 < uVar4) {
    return 0;
  }
  if (uVar4 == 0) {
    uVar6 = 0x400;
  }
  else {
    uVar6 = 0x80;
  }
  iVar1 = DAT_00037f14 + 0x37eb4 + uVar4 * 0x458;
  uVar2 = *(uint *)(iVar1 + 0x440);
  uVar3 = *(uint *)(iVar1 + 0x43c);
  uVar5 = uVar2 + 1;
  if (uVar6 < uVar5) {
    uVar5 = 0;
  }
  if (uVar3 == uVar5) {
    uVar6 = 2;
  }
  else {
    uVar6 = 0;
  }
  if (uVar2 == uVar3) {
    uVar6 = uVar6 | 1;
  }
  if (*(char *)(DAT_00037f14 + 0x37eb4 + uVar4 * 0x458) != '\x01') {
    return uVar6;
  }
  if (uVar2 < uVar3) {
    if (uVar4 != 0) {
      uVar3 = (uVar2 + 0x81) - uVar3;
      goto LAB_00037f00;
    }
    uVar2 = uVar2 + 0x401;
  }
  uVar3 = uVar2 - uVar3;
LAB_00037f00:
  if (*(uint *)(iVar1 + 4) < uVar3) {
    uVar4 = 0;
  }
  else {
    uVar4 = 4;
  }
  return uVar4 | uVar6;
}

