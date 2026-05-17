/* Sequencer_Control @ 0003805c 136B */


/* ARM::Sequencer_Control(unsigned char, unsigned char, unsigned char, long long) */

void ARM::Sequencer_Control(uchar param_1,uchar param_2,uchar param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = (uint)param_1;
  if (uVar3 < 2) {
    iVar5 = uVar3 * 0x458;
    iVar6 = DAT_000380e4 + 0x3807a;
    iVar4 = iVar6 + iVar5;
    if ((int)((uint)param_3 << 0x1f) < 0) {
      *(undefined4 *)(iVar4 + 0x28) = 0;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      *(undefined4 *)(iVar4 + 0x30) = 0;
      *(undefined4 *)(iVar4 + 0x34) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
    }
    if ((param_2 & 1) == 0) {
      *(byte *)(iVar6 + iVar5) = param_2 & 1;
      bVar2 = VIRTUALREGISTER_GetRegC(0x26);
      bVar1 = 2;
      if (uVar3 != 0) {
        bVar1 = 1;
      }
      VIRTUALREGISTER_SetRegC(0x26,bVar2 & bVar1);
      return;
    }
    if (*(char *)(iVar6 + iVar5) == '\0') {
      *(undefined1 *)(iVar6 + iVar5) = 1;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0xc) * 0x43d;
      *(longlong *)(iVar4 + 0x10) = param_4 * 1000000;
      return;
    }
  }
  return;
}

