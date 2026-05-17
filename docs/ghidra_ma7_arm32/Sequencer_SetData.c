/* Sequencer_SetData @ 00037f48 90B */


/* ARM::Sequencer_SetData(unsigned char, unsigned char) */

void ARM::Sequencer_SetData(uchar param_1,uchar param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = (uint)param_1;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      uVar4 = 0x400;
    }
    else {
      uVar4 = 0x80;
    }
    iVar5 = uVar1 * 0x458 + DAT_00037fa4 + 0x37f66;
    uVar3 = *(int *)(iVar5 + 0x440) + 1;
    uVar2 = uVar3;
    if (uVar4 < uVar3) {
      uVar2 = 0;
    }
    if (*(uint *)(iVar5 + 0x43c) != uVar2) {
      *(uchar *)(*(int *)(iVar5 + 0x440) + iVar5 + 0x38) = param_2;
      *(uint *)(iVar5 + 0x440) = uVar3;
      if (uVar1 == 0) {
        if (0x400 < uVar3) {
          *(undefined4 *)(iVar5 + 0x440) = 0;
        }
      }
      else if (0x80 < uVar3) {
        *(undefined4 *)(iVar5 + 0x440) = 0;
      }
    }
  }
  return;
}

