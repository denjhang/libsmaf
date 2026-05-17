/* HVCONTROL_SetWave @ 00042aa0 150B */


/* ARM::HVCONTROL_SetWave(unsigned char, unsigned char) */

void ARM::HVCONTROL_SetWave(uchar param_1,uchar param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  CCsmSynth *this;
  undefined2 local_14;
  undefined1 local_12;
  
  uVar2 = (uint)param_1;
  local_14 = *(undefined2 *)(DAT_00042b38 + 0x42aa8);
  local_12 = *(undefined1 *)(DAT_00042b38 + 0x42aaa);
  if (0x28 < uVar2) {
    if ((uVar2 - 0x2b < 7) && ((1 << (uVar2 - 0x2b & 0xff) & 0x49U) != 0)) {
      iVar3 = VIRTUALREGISTER_GetRegC(param_1 - 2);
      iVar4 = VIRTUALREGISTER_GetRegC(param_1 - 1);
      iVar5 = VIRTUALREGISTER_GetRegC((ushort)param_1);
      uVar6 = iVar3 << 0xf | iVar4 << 8 | iVar5 << 1;
      if (uVar6 - 0x10000 < 0x3800) {
        this = (CCsmSynth *)**(undefined4 **)(DAT_00042b3c + 0x42b16);
        bVar1 = *(byte *)((int)&local_14 + (int)(uVar2 - 0x29) / 3);
        psVar7 = (short *)VIRTUALMEMORY_GetMemoryPointer(uVar6);
        CCsmSynth::SetWave(this,(uint)bVar1,psVar7);
        return;
      }
    }
  }
  return;
}

