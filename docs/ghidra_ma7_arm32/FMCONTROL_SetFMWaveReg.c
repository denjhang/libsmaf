/* FMCONTROL_SetFMWaveReg @ 00042424 172B */


/* ARM::FMCONTROL_SetFMWaveReg(unsigned char, unsigned char) */

void ARM::FMCONTROL_SetFMWaveReg(uchar param_1,uchar param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  CFmSynth *this;
  uint uVar6;
  uint uVar7;
  undefined2 local_14;
  undefined1 local_12;
  
  local_14 = *(undefined2 *)(DAT_000424d0 + 0x4242e);
  local_12 = *(undefined1 *)(DAT_000424d0 + 0x42430);
  if ((0x28 < param_1) && (uVar6 = param_1 - 0x29, uVar6 < 9)) {
    uVar7 = 1 << (uVar6 & 0xff);
    if ((uVar7 & 0x124) == 0) {
      if ((uVar7 & 0xdb) != 0) {
        VIRTUALREGISTER_SetRegC((ushort)param_1,param_2 & 0x7f);
        return;
      }
    }
    else {
      VIRTUALREGISTER_SetRegC((ushort)param_1,param_2 & 0x7f);
      iVar2 = VIRTUALREGISTER_GetRegC(param_1 - 2);
      iVar3 = VIRTUALREGISTER_GetRegC(param_1 - 1);
      iVar4 = VIRTUALREGISTER_GetRegC((ushort)param_1);
      uVar7 = iVar2 << 0xf | iVar3 << 8 | iVar4 << 1;
      if (uVar7 - 0x10000 < 0x3800) {
        this = (CFmSynth *)**(undefined4 **)(DAT_000424d4 + 0x424ae);
        bVar1 = *(byte *)((int)&local_14 + (int)uVar6 / 3);
        puVar5 = (uchar *)VIRTUALMEMORY_GetMemoryPointer(uVar7);
        CFmSynth::SetWave(this,(uint)bVar1,puVar5);
        return;
      }
    }
  }
  return;
}

