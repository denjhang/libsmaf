/* Sequencer_SetMS @ 00037fa8 70B */


/* ARM::Sequencer_SetMS(unsigned char, unsigned int) */

void ARM::Sequencer_SetMS(uchar param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 < 2) {
    iVar1 = (uint)param_1 * 0x458;
    iVar2 = DAT_00037ff0 + 0x37fc2;
    iVar3 = iVar2 + iVar1;
    if (*(uint *)(iVar3 + 0xc) != param_2) {
      *(uint *)(iVar3 + 0xc) = param_2;
      if (*(char *)(iVar2 + iVar1) == '\x01') {
        *(undefined4 *)(iVar3 + 0x1c) = 0;
        *(uint *)(iVar3 + 0x18) = param_2 * 0x43d;
      }
      return;
    }
  }
  return;
}

