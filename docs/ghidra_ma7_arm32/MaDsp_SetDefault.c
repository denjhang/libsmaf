/* MaDsp_SetDefault @ 000db5a0 224B */


/* YAMAHA::MaDsp_SetDefault() */

int YAMAHA::MaDsp_SetDefault(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar local_38;
  undefined1 local_37;
  uchar local_30;
  undefined1 local_2f;
  undefined2 local_28 [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_28[0] = *(undefined2 *)(DAT_000db680 + 0xdb5ae);
  iVar4 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 1000;
  iVar3 = MaDevDrv_SendDspProgram(0,*(uchar **)(DAT_000db684 + 0xdb5ba),0x1200);
  if ((-1 < iVar3) &&
     (iVar3 = MaDevDrv_SendDspCoef(0,*(uchar **)(DAT_000db688 + 0xdb5dc),0x600),
     iVar5 = DAT_000db68c, -1 < iVar3)) {
    MaDsp_3DCtrl(1,0x84,0,&local_24);
    iVar3 = iVar5 + 0xdb600;
    MaDsp_3DCtrl(1,0x84,1,&local_24);
    MaDsp_3DCtrl(1,0x84,2,&local_24);
    MaDsp_3DCtrl(1,0x84,3,&local_24);
    if (*(int *)(iVar5 + 0xdc4e4) != 2) {
      do {
        puVar1 = (undefined2 *)(iVar3 + 0xda4);
        puVar2 = (undefined2 *)(iVar3 + 0xda2);
        local_2f = (undefined1)*puVar1;
        iVar3 = iVar3 + 0x30;
        local_38 = (uchar)((ushort)*puVar2 >> 8);
        local_30 = (uchar)((ushort)*puVar1 >> 8);
        local_37 = (undefined1)*puVar2;
        MaDevDrv_SendDspCoef(0x285 - iVar4,&local_38,2);
        MaDevDrv_SendDspCoef(0x28c - iVar4,&local_30,2);
        iVar5 = iVar4 + 1;
        FUN_000d7500(iVar4);
        iVar4 = iVar5;
      } while (iVar5 != 4);
    }
    MaDevDrv_SendDspCoef(0,(uchar *)local_28,2);
    iVar3 = 0;
  }
  return iVar3;
}

