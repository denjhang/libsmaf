/* MaSndDrv_DelVoice @ 00191c34 436B */


/* YAMAHA::MaSndDrv_DelVoice(_MACNV_SEQ_INFO*, unsigned int, unsigned int, unsigned int) */

undefined8
YAMAHA::MaSndDrv_DelVoice(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = DAT_0059a428;
  if (param_2 < 0x80) {
    if ((param_2 < 0x10) && (param_3 < 0x80)) {
      uVar1 = *(uint *)param_1;
      uVar6 = (ulong)(uVar1 >> 8) & 0xff;
      if (uVar6 < 2) {
        uVar7 = 1;
        lVar8 = (ulong)(byte)(&DAT_0048aa70)[uVar6 * 4 + (ulong)(byte)uVar1] * 0x430;
        uVar4 = MaCmd_GetMelody(uVar1 & 0xff,param_2,param_3);
        lVar9 = lVar3 + lVar8;
        if ((uVar4 >> 0xf & 1) != 0) {
          iVar2 = *(int *)(lVar9 + 4);
          uVar7 = (ulong)(uVar4 & 0xffff7fff) + 1;
          *(uint *)(lVar3 + lVar8) = *(int *)(lVar3 + lVar8) - param_4;
          *(uint *)(lVar9 + 4) = iVar2 + param_4;
        }
        MaCmd_SetMelody(uVar1 & 0xff,param_2,param_3,0);
LAB_00191d9c:
        if (uVar7 == *(uint *)(lVar9 + 8)) {
          *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) - 1;
        }
        return 0;
      }
    }
  }
  else {
    uVar1 = param_2 - 0x80;
    if ((uVar1 < 0x10) && (param_3 < 0x80)) {
      uVar4 = *(uint *)param_1;
      uVar6 = (ulong)(uVar4 >> 8) & 0xff;
      if (uVar6 < 2) {
        uVar7 = 1;
        lVar8 = (ulong)(byte)(&DAT_0048aa70)[uVar6 * 4 + (ulong)(byte)uVar4] * 0x430;
        uVar5 = MaCmd_GetDrum(uVar4 & 0xff,uVar1,param_3);
        lVar9 = lVar3 + lVar8;
        if ((uVar5 >> 0xf & 1) != 0) {
          iVar2 = *(int *)(lVar9 + 4);
          uVar7 = (ulong)(uVar5 & 0xffff7fff) + 1;
          *(uint *)(lVar3 + lVar8) = *(int *)(lVar3 + lVar8) - param_4;
          *(uint *)(lVar9 + 4) = iVar2 + param_4;
        }
        MaCmd_SetDrum(uVar4 & 0xff,uVar1,param_3,0);
        goto LAB_00191d9c;
      }
    }
  }
  return 0xfffffffe;
}

