/* MaSndDrv_SetSeVoice @ 00191a6c 456B */


/* YAMAHA::MaSndDrv_SetSeVoice(_MACNV_SEQ_INFO*) */

undefined8 YAMAHA::MaSndDrv_SetSeVoice(_MACNV_SEQ_INFO *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  
  uVar9 = *(uint *)param_1;
  uVar7 = (ulong)(uVar9 >> 8) & 0xff;
  uVar6 = uVar9 & 0xff;
  if (uVar7 < 2) {
    lVar5 = DAT_0059a428 + (ulong)(byte)(&DAT_0048aa70)[uVar7 * 4 + (ulong)(byte)uVar9] * 0x430;
    uVar9 = *(uint *)(lVar5 + 8);
    if (uVar9 + 0x20 < 0x400) {
      lVar10 = 0;
      do {
        MaCmd_SetDrum(uVar6,0xf,(uint)lVar10,uVar9 | 0x8000);
        lVar1 = lVar10 + 1;
        lVar2 = lVar10 + 2;
        lVar3 = lVar10 + 3;
        lVar4 = lVar10 + 4;
        MaCmd_SetVoice(uVar6,*(uint *)(lVar5 + 8),(uint)(ushort)(&DAT_0048ace0)[lVar10],
                       (uint)(ushort)(&DAT_0048ad20)[lVar10],0);
        uVar9 = *(int *)(lVar5 + 8) + 1;
        *(uint *)(lVar5 + 8) = uVar9;
        MaCmd_SetDrum(uVar6,0xf,(uint)lVar1,uVar9 | 0x8000);
        MaCmd_SetVoice(uVar6,*(uint *)(lVar5 + 8),(uint)(ushort)(&DAT_0048ace0)[lVar1],
                       (uint)(ushort)(&DAT_0048ad20)[lVar1],0);
        uVar9 = *(int *)(lVar5 + 8) + 1;
        *(uint *)(lVar5 + 8) = uVar9;
        MaCmd_SetDrum(uVar6,0xf,(uint)lVar2,uVar9 | 0x8000);
        MaCmd_SetVoice(uVar6,*(uint *)(lVar5 + 8),(uint)(ushort)(&DAT_0048ace0)[lVar2],
                       (uint)(ushort)(&DAT_0048ad20)[lVar2],0);
        uVar9 = *(int *)(lVar5 + 8) + 1;
        *(uint *)(lVar5 + 8) = uVar9;
        MaCmd_SetDrum(uVar6,0xf,(uint)lVar3,uVar9 | 0x8000);
        MaCmd_SetVoice(uVar6,*(uint *)(lVar5 + 8),(uint)(ushort)(&DAT_0048ace0)[lVar3],
                       (uint)(ushort)(&DAT_0048ad20)[lVar3],0);
        uVar9 = *(int *)(lVar5 + 8) + 1;
        *(uint *)(lVar5 + 8) = uVar9;
        lVar10 = lVar4;
      } while (lVar4 != 0x20);
      uVar8 = 0;
    }
    else {
      uVar8 = 0xfffffffd;
    }
    return uVar8;
  }
  return 0xfffffffe;
}

