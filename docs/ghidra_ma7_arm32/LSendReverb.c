/* LSendReverb @ 000fbca8 518B */


/* YAMAHA::LSendReverb() */

int YAMAHA::LSendReverb(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uchar local_28 [12];
  
  iVar6 = DAT_000fbeb0 + 0xfbcb6;
  iVar7 = *(int *)(iVar6 + DAT_000fbeb4);
  if (*(char *)(iVar7 + 8) == '\0') {
    if (**(char **)(iVar6 + DAT_000fbeb8) != '\0') {
      return 0;
    }
    iVar5 = *(int *)(iVar6 + DAT_000fbec0);
    pbVar9 = (byte *)(iVar5 + 2);
    bVar4 = *(byte *)(iVar5 + 5);
    bVar2 = *(byte *)(iVar5 + 4);
    bVar3 = *(byte *)(iVar5 + 3);
    iVar8 = iVar7 + (*(byte *)(iVar5 + 2) + 0x10) * 2;
    *(undefined2 *)(iVar7 + (uint)*(byte *)(iVar5 + 7) * 2 + 0x26) = 0;
    *(undefined2 *)(iVar7 + (uint)bVar4 * 2 + 0x26) = 0;
    *(undefined2 *)(iVar7 + (uint)bVar2 * 2 + 0x26) = 0;
    *(undefined2 *)(iVar7 + (uint)bVar3 * 2 + 0x26) = 0;
    *(undefined2 *)(iVar8 + 6) = 0;
    LSendCoef('\x03',pbVar9);
    LSendCoef('\x01',(uchar *)(iVar5 + 5));
    LSendCoef('\x01',(uchar *)(iVar5 + 7));
    iVar5 = MaDevDrv_ClearDspDelayRam(0xffff0000);
    if ((iVar5 < 0) || (iVar5 = MaDevDrv_SetDspRamAddress(0x76,0xcc), iVar5 < 0)) {
      cVar1 = *(char *)(iVar7 + 8);
    }
    else {
      _MaDevDrv_SendDspProgram(0x76,*(uchar **)(iVar6 + DAT_000fbec4),0x20a);
      iVar5 = MaDevDrv_SetDspRamAddress(0,0);
      cVar1 = *(char *)(iVar7 + 8);
    }
    if (cVar1 == '\x02') {
      local_28[0] = '\x7f';
      local_28[1] = 0xff;
      _MaDevDrv_SendDspCoef(0x286,local_28,2);
      _MaDevDrv_SendDspCoef(0x28d,local_28,2);
      return iVar5;
    }
    *(short *)(iVar8 + 6) = (short)*(undefined4 *)(iVar7 + 0x20);
LAB_000fbdf6:
    LSendCoef('\x01',pbVar9);
    lup_tconnect('\x04');
    lup_tconnect('\0');
    return iVar5;
  }
  if ((*(char *)(iVar7 + 8) != '\x02') || (**(char **)(iVar6 + DAT_000fbeb8) != '\0')) {
    return 0;
  }
  MaDevDrv_ClearDspCoef(0x286,0x286);
  MaDevDrv_ClearDspCoef(0x28d,0x28d);
  iVar5 = MaDevDrv_ClearDspDelayRam(0xffff0000);
  if (iVar5 < 0) {
    cVar1 = *(char *)(iVar7 + 8);
  }
  else {
    iVar5 = MaDevDrv_SetDspRamAddress(0x76,0xcc);
    if (iVar5 < 0) {
      if (*(char *)(iVar7 + 8) == '\x02') {
        local_28[1] = 0xff;
        local_28[0] = '\x7f';
        _MaDevDrv_SendDspCoef(0x286,local_28,2);
        _MaDevDrv_SendDspCoef(0x28d,local_28,2);
        return iVar5;
      }
      pbVar9 = (byte *)(*(int *)(iVar6 + DAT_000fbec0) + 2);
      *(short *)(iVar7 + (uint)*pbVar9 * 2 + 0x26) = (short)*(undefined4 *)(iVar7 + 0x20);
      goto LAB_000fbdf6;
    }
    _MaDevDrv_SendDspProgram(0x76,*(uchar **)(iVar6 + DAT_000fbebc),0x20a);
    iVar5 = MaDevDrv_SetDspRamAddress(0,0);
    cVar1 = *(char *)(iVar7 + 8);
  }
  if (cVar1 == '\x02') {
    local_28[0] = '\x7f';
    local_28[1] = 0xff;
    _MaDevDrv_SendDspCoef(0x286,local_28,2);
    _MaDevDrv_SendDspCoef(0x28d,local_28,2);
  }
  else {
    pbVar9 = (byte *)(*(int *)(iVar6 + DAT_000fbec0) + 2);
    *(short *)(iVar7 + (uint)*pbVar9 * 2 + 0x26) = (short)*(undefined4 *)(iVar7 + 0x20);
    LSendCoef('\x01',pbVar9);
    lup_tconnect('\x04');
    lup_tconnect('\0');
  }
  return iVar5;
}

