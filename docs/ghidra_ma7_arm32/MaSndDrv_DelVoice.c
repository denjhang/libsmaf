/* MaSndDrv_DelVoice @ 0007b850 254B */


/* YAMAHA::MaSndDrv_DelVoice(_MACNV_SEQ_INFO*, unsigned int, unsigned int, unsigned int) */

undefined4
YAMAHA::MaSndDrv_DelVoice(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  uint local_2c;
  
  if (param_2 < 0x80) {
    bVar8 = 0x7e < param_3;
    bVar7 = param_3 == 0x7f;
    if (param_3 < 0x80) {
      bVar8 = 0xe < param_2;
      bVar7 = param_2 == 0xf;
    }
    if (bVar8 && !bVar7) {
      return 0xfffffffe;
    }
  }
  else {
    if (0xf < param_2 - 0x80) {
      return 0xfffffffe;
    }
    if (0x7f < param_3) {
      return 0xfffffffe;
    }
  }
  uVar1 = (*(uint *)param_1 & 0xffff) >> 8;
  uVar2 = *(uint *)param_1 & 0xff;
  if (1 < uVar1) {
    return 0xfffffffe;
  }
  iVar5 = *(int *)(DAT_0007b954 + 0x7b88e);
  iVar4 = (uint)*(byte *)(DAT_0007b950 + 0x7b886 + uVar2 + uVar1 * 4) * 0x228;
  iVar3 = iVar5 + iVar4;
  if (param_2 < 0x80) {
    local_2c = MaCmd_GetMelody(uVar2,param_2,param_3);
    if ((local_2c & 0x8000) == 0) {
      iVar6 = 1;
      local_2c = 0;
    }
    else {
      local_2c = local_2c & 0xffff7fff;
      iVar6 = local_2c + 1;
      *(uint *)(iVar5 + iVar4) = *(int *)(iVar5 + iVar4) - param_4;
      *(uint *)(iVar3 + 4) = *(int *)(iVar3 + 4) + param_4;
    }
    MaCmd_SetMelody(uVar2,param_2,param_3,0);
  }
  else {
    local_2c = MaCmd_GetDrum(uVar2,param_2 - 0x80,param_3);
    if ((local_2c & 0x8000) == 0) {
      iVar6 = 1;
      local_2c = 0;
    }
    else {
      local_2c = local_2c & 0xffff7fff;
      iVar6 = local_2c + 1;
      *(uint *)(iVar5 + iVar4) = *(int *)(iVar5 + iVar4) - param_4;
      *(uint *)(iVar3 + 4) = *(int *)(iVar3 + 4) + param_4;
    }
    MaCmd_SetDrum(uVar2,param_2 - 0x80,param_3,0);
  }
  if (*(int *)(iVar3 + 8) == iVar6) {
    *(uint *)(iVar3 + 8) = local_2c;
  }
  return 0;
}

