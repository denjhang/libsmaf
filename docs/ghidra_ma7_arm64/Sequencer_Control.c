/* Sequencer_Control @ 00139684 236B */


/* ARM::Sequencer_Control(unsigned char, unsigned char, unsigned char, long) */

void ARM::Sequencer_Control(uchar param_1,uchar param_2,uchar param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  
  if (param_1 < 2) {
    uVar5 = (uint)param_1;
    if ((param_3 & 1) != 0) {
      lVar4 = (long)(int)uVar5;
      (&DAT_00582ac8)[lVar4 * 0x8b] = 0;
      (&DAT_00582ad0)[lVar4 * 0x8b] = 0;
      (&DAT_00582ac0)[lVar4 * 0x8b] = 0;
    }
    if ((param_2 & 1) == 0) {
      (&DAT_00582aa0)[(long)(int)uVar5 * 0x458] = param_2 & 1;
      bVar2 = VIRTUALREGISTER_GetRegC(0x26);
      bVar3 = bVar2 & 1;
      if (uVar5 == 0) {
        bVar3 = bVar2 & 2;
      }
      VIRTUALREGISTER_SetRegC(0x26,bVar3);
      return;
    }
    lVar4 = (long)(int)uVar5;
    if ((&DAT_00582aa0)[lVar4 * 0x458] == '\0') {
      iVar1 = (&DAT_00582aac)[lVar4 * 0x116];
      (&DAT_00582aa0)[lVar4 * 0x458] = 1;
      (&DAT_00582ab8)[lVar4 * 0x8b] = (ulong)(uint)(iVar1 * 0x43d);
      (&DAT_00582ab0)[lVar4 * 0x8b] = param_4 * 1000000;
      return;
    }
  }
  return;
}

