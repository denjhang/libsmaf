/* Sequencer_GetStatus @ 001393fc 192B */


/* ARM::Sequencer_GetStatus(unsigned char) */

byte ARM::Sequencer_GetStatus(uchar param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  byte bVar8;
  
  if (1 < param_1) {
    return 0;
  }
  uVar3 = (uint)param_1;
  lVar6 = (long)(int)uVar3;
  uVar5 = (&DAT_00582ee0)[lVar6 * 0x116];
  uVar4 = (&DAT_00582edc)[lVar6 * 0x116];
  uVar1 = uVar5 + 1;
  uVar7 = 0x80;
  if (uVar3 == 0) {
    uVar7 = 0x400;
  }
  if (uVar7 < uVar1) {
    uVar1 = 0;
  }
  bVar8 = 2;
  if (uVar4 != uVar1) {
    bVar8 = 0;
  }
  bVar8 = bVar8 | uVar5 == uVar4;
  if ((&DAT_00582aa0)[lVar6 * 0x458] != '\x01') {
    return bVar8;
  }
  if (uVar5 < uVar4) {
    if (uVar3 != 0) {
      uVar4 = (uVar5 + 0x81) - uVar4;
      goto LAB_00139498;
    }
    uVar5 = uVar5 + 0x401;
  }
  uVar4 = uVar5 - uVar4;
LAB_00139498:
  bVar2 = 4;
  if ((uint)(&DAT_00582aa4)[lVar6 * 0x116] < uVar4) {
    bVar2 = 0;
  }
  return bVar2 | bVar8;
}

