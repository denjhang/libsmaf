/* Sequencer_SetData @ 00139500 132B */


/* ARM::Sequencer_SetData(unsigned char, unsigned char) */

void ARM::Sequencer_SetData(uchar param_1,uchar param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  if (param_1 < 2) {
    uVar4 = (uint)param_1;
    lVar5 = (long)(int)uVar4;
    uVar6 = 0x80;
    if (uVar4 == 0) {
      uVar6 = 0x400;
    }
    uVar3 = (&DAT_00582ee0)[lVar5 * 0x116];
    uVar1 = uVar3 + 1;
    uVar2 = uVar1;
    if (uVar6 < uVar1) {
      uVar2 = 0;
    }
    if ((&DAT_00582edc)[lVar5 * 0x116] != uVar2) {
      (&DAT_00582ee0)[lVar5 * 0x116] = uVar1;
      (&DAT_00582ad8)[lVar5 * 0x458 + (ulong)uVar3] = param_2;
      if (uVar4 == 0) {
        if (0x400 < uVar1) {
          DAT_00582ee0 = 0;
          return;
        }
      }
      else if (0x80 < uVar1) {
        (&DAT_00582ee0)[lVar5 * 0x116] = 0;
        return;
      }
    }
  }
  return;
}

