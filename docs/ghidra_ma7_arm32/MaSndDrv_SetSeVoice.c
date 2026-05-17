/* MaSndDrv_SetSeVoice @ 0007b714 306B */


/* YAMAHA::MaSndDrv_SetSeVoice(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaSndDrv_SetSeVoice(_MACNV_SEQ_INFO *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar1 = DAT_0007b848;
  uVar3 = (*(uint *)param_1 & 0xffff) >> 8;
  uVar5 = *(uint *)param_1 & 0xff;
  if (uVar3 < 2) {
    iVar4 = (uint)*(byte *)(DAT_0007b848 + 0x7b738 + uVar5 + uVar3 * 4) * 0x228 +
            *(int *)(DAT_0007b84c + 0x7b73e);
    uVar3 = *(uint *)(iVar4 + 8);
    if (uVar3 + 0x20 < 0x400) {
      iVar6 = 0;
      uVar7 = 0;
      do {
        iVar9 = iVar1 + 0x7b988;
        iVar8 = iVar1 + 0x7b9c8;
        MaCmd_SetDrum(uVar5,0xf,uVar7,uVar3 | 0x8000);
        iVar12 = iVar6 + 4;
        iVar10 = iVar6 + 2;
        MaCmd_SetVoice(uVar5,*(uint *)(iVar4 + 8),(uint)*(ushort *)(iVar6 + iVar9),
                       (uint)*(ushort *)(iVar6 + iVar8),0);
        uVar3 = *(int *)(iVar4 + 8) + 1;
        *(uint *)(iVar4 + 8) = uVar3;
        MaCmd_SetDrum(uVar5,0xf,uVar7 + 1,uVar3 | 0x8000);
        iVar11 = iVar6 + 6;
        iVar6 = iVar6 + 8;
        MaCmd_SetVoice(uVar5,*(uint *)(iVar4 + 8),(uint)*(ushort *)(iVar9 + iVar10),
                       (uint)*(ushort *)(iVar8 + iVar10),0);
        uVar3 = *(int *)(iVar4 + 8) + 1;
        *(uint *)(iVar4 + 8) = uVar3;
        MaCmd_SetDrum(uVar5,0xf,uVar7 + 2,uVar3 | 0x8000);
        MaCmd_SetVoice(uVar5,*(uint *)(iVar4 + 8),(uint)*(ushort *)(iVar9 + iVar12),
                       (uint)*(ushort *)(iVar8 + iVar12),0);
        uVar3 = *(int *)(iVar4 + 8) + 1;
        *(uint *)(iVar4 + 8) = uVar3;
        MaCmd_SetDrum(uVar5,0xf,uVar7 + 3,uVar3 | 0x8000);
        uVar7 = uVar7 + 4;
        MaCmd_SetVoice(uVar5,*(uint *)(iVar4 + 8),(uint)*(ushort *)(iVar9 + iVar11),
                       (uint)*(ushort *)(iVar8 + iVar11),0);
        uVar3 = *(int *)(iVar4 + 8) + 1;
        *(uint *)(iVar4 + 8) = uVar3;
      } while (uVar7 != 0x20);
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffd;
    }
    return uVar2;
  }
  return 0xfffffffe;
}

