/* MaSndDrv_SetVoice @ 0007b2b0 1116B */


/* YAMAHA::MaSndDrv_SetVoice(_MACNV_SEQ_INFO*, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned char*, unsigned int) */

int YAMAHA::MaSndDrv_SetVoice
              (_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
              uint param_6,uint param_7,uint param_8,uchar *param_9,uint param_10)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  uint local_2c;
  
  uVar5 = (*(uint *)param_1 & 0xffff) >> 8;
  uVar4 = *(uint *)param_1 & 0xff;
  if (1 < uVar5) {
    return -2;
  }
  uVar3 = 1 - (int)param_9;
  if ((uchar *)0x1 < param_9) {
    uVar3 = 0;
  }
  if (0x7f < param_3) {
    uVar3 = uVar3 | 1;
  }
  if (uVar3 != 0) {
    return -2;
  }
  if (param_10 < 0xe) {
    return -2;
  }
  iVar7 = *(int *)(DAT_0007b710 + 0x7b306);
  iVar6 = (uint)*(byte *)(DAT_0007b70c + 0x7b2fe + uVar4 + uVar5 * 4) * 0x228;
  iVar10 = iVar7 + iVar6;
  if (param_2 < 0x80) {
    if (0xf < param_2) {
      return -2;
    }
    uVar5 = MaCmd_GetMelody(uVar4,param_2,param_3);
    if ((param_4 & 2) == 0) goto LAB_0007b322;
    local_2c = uVar5 & 0x8000;
    if (local_2c == 0) {
      if (0x1f < *(uint *)(iVar10 + 0xc)) {
        return -3;
      }
    }
    else if ((uVar5 & 0x4000) == 0) {
      return -3;
    }
    bVar12 = 0x7e < param_8;
    bVar11 = param_8 == 0x7f;
    if (param_8 < 0x80) {
      bVar12 = param_8 <= param_7;
      bVar11 = param_7 == param_8;
    }
    if (bVar12 && !bVar11) {
      return -2;
    }
  }
  else {
    if (0xf < param_2 - 0x80) {
      return -2;
    }
    uVar5 = MaCmd_GetDrum(uVar4,param_2 - 0x80,param_3);
LAB_0007b322:
    local_2c = uVar5 & 0x8000;
    if (local_2c != 0) {
      return -3;
    }
  }
  uVar3 = *(uint *)(iVar7 + iVar6);
  if ((*(uint *)(iVar10 + 4) < param_10) || (0x3ff < *(uint *)(iVar10 + 8))) {
    return -3;
  }
  if ((param_4 & 1) != 0) {
    if (param_6 - 0x1d < 99 || 0xff < param_6) {
      return -2;
    }
    uVar1 = MaCmd_GetWtWave(uVar4,param_6);
    if (uVar1 == 0) {
      return -1;
    }
    param_9[8] = (uchar)(uVar1 >> 9);
    param_9[9] = (uchar)(uVar1 >> 1);
  }
  iVar2 = MaDevDrv_SendDirectRamData(uVar3,param_9,param_10);
  if (iVar2 < 0) {
    return iVar2;
  }
  if (param_2 < 0x80) {
    if ((param_4 & 2) == 0) {
      MaCmd_SetMelody(uVar4,param_2,param_3,*(uint *)(iVar10 + 8) | 0x8000);
    }
    else {
      uVar5 = uVar5 & 0xffff3fff;
      if (local_2c == 0) {
        MaCmd_SetMelody(uVar4,param_2,param_3,*(uint *)(iVar10 + 0xc) | 0xc000);
        uVar5 = *(uint *)(iVar10 + 0xc) & 0xffff3fff;
        *(uint *)(iVar10 + 0xc) = *(uint *)(iVar10 + 0xc) + 1;
        uVar1 = 0;
        do {
          MaCmd_SetMulti(uVar4,uVar5,uVar1,0);
          MaCmd_SetMulti(uVar4,uVar5,uVar1 + 1,0);
          MaCmd_SetMulti(uVar4,uVar5,uVar1 + 2,0);
          MaCmd_SetMulti(uVar4,uVar5,uVar1 + 3,0);
          MaCmd_SetMulti(uVar4,uVar5,uVar1 + 4,0);
          MaCmd_SetMulti(uVar4,uVar5,uVar1 + 5,0);
          MaCmd_SetMulti(uVar4,uVar5,uVar1 + 6,0);
          MaCmd_SetMulti(uVar4,uVar5,uVar1 + 7,0);
          MaCmd_SetMulti(uVar4,uVar5,uVar1 + 8,0);
          MaCmd_SetMulti(uVar4,uVar5,uVar1 + 9,0);
          MaCmd_SetMulti(uVar4,uVar5,uVar1 + 10,0);
          MaCmd_SetMulti(uVar4,uVar5,uVar1 + 0xb,0);
          MaCmd_SetMulti(uVar4,uVar5,uVar1 + 0xc,0);
          MaCmd_SetMulti(uVar4,uVar5,uVar1 + 0xd,0);
          MaCmd_SetMulti(uVar4,uVar5,uVar1 + 0xe,0);
          uVar8 = uVar1 + 0xf;
          uVar1 = uVar1 + 0x10;
          MaCmd_SetMulti(uVar4,uVar5,uVar8,0);
        } while (uVar1 != 0x80);
      }
      if (param_7 <= param_8) {
        uVar8 = param_7 + 1;
        uVar1 = param_8 - param_7 & 7;
        MaCmd_SetMulti(uVar4,uVar5,param_7,*(uint *)(iVar10 + 8) | 0x8000);
        if (uVar8 <= param_8) {
          uVar9 = uVar8;
          if (uVar1 != 0) {
            if (uVar1 != 1) {
              if (uVar1 != 2) {
                if (uVar1 != 3) {
                  if (uVar1 != 4) {
                    if (uVar1 != 5) {
                      if (uVar1 != 6) {
                        uVar9 = param_7 + 2;
                        MaCmd_SetMulti(uVar4,uVar5,uVar8,*(uint *)(iVar10 + 8) | 0x8000);
                      }
                      uVar8 = uVar9 + 1;
                      MaCmd_SetMulti(uVar4,uVar5,uVar9,*(uint *)(iVar10 + 8) | 0x8000);
                    }
                    uVar9 = uVar8 + 1;
                    MaCmd_SetMulti(uVar4,uVar5,uVar8,*(uint *)(iVar10 + 8) | 0x8000);
                  }
                  uVar8 = uVar9 + 1;
                  MaCmd_SetMulti(uVar4,uVar5,uVar9,*(uint *)(iVar10 + 8) | 0x8000);
                }
                uVar9 = uVar8 + 1;
                MaCmd_SetMulti(uVar4,uVar5,uVar8,*(uint *)(iVar10 + 8) | 0x8000);
              }
              uVar8 = uVar9 + 1;
              MaCmd_SetMulti(uVar4,uVar5,uVar9,*(uint *)(iVar10 + 8) | 0x8000);
            }
            uVar9 = uVar8 + 1;
            MaCmd_SetMulti(uVar4,uVar5,uVar8,*(uint *)(iVar10 + 8) | 0x8000);
            if (param_8 < uVar9) goto LAB_0007b54a;
          }
          do {
            MaCmd_SetMulti(uVar4,uVar5,uVar9,*(uint *)(iVar10 + 8) | 0x8000);
            MaCmd_SetMulti(uVar4,uVar5,uVar9 + 1,*(uint *)(iVar10 + 8) | 0x8000);
            MaCmd_SetMulti(uVar4,uVar5,uVar9 + 2,*(uint *)(iVar10 + 8) | 0x8000);
            MaCmd_SetMulti(uVar4,uVar5,uVar9 + 3,*(uint *)(iVar10 + 8) | 0x8000);
            MaCmd_SetMulti(uVar4,uVar5,uVar9 + 4,*(uint *)(iVar10 + 8) | 0x8000);
            MaCmd_SetMulti(uVar4,uVar5,uVar9 + 5,*(uint *)(iVar10 + 8) | 0x8000);
            MaCmd_SetMulti(uVar4,uVar5,uVar9 + 6,*(uint *)(iVar10 + 8) | 0x8000);
            uVar1 = uVar9 + 8;
            MaCmd_SetMulti(uVar4,uVar5,uVar9 + 7,*(uint *)(iVar10 + 8) | 0x8000);
            uVar9 = uVar1;
          } while (uVar1 <= param_8);
        }
      }
    }
  }
  else {
    MaCmd_SetDrum(uVar4,param_2 - 0x80,param_3,*(uint *)(iVar10 + 8) | 0x8000);
  }
LAB_0007b54a:
  MaCmd_SetVoice(uVar4,*(uint *)(iVar10 + 8),uVar3,param_5,param_4 & 1);
  *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
  uVar4 = param_10 + 1 & 0xfffffffe;
  *(uint *)(iVar7 + iVar6) = *(int *)(iVar7 + iVar6) + uVar4;
  *(uint *)(iVar10 + 4) = *(int *)(iVar10 + 4) - uVar4;
  return 0;
}

