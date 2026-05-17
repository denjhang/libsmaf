/* MaSndDrv_SetVoice @ 00191464 1544B */


/* YAMAHA::MaSndDrv_SetVoice(_MACNV_SEQ_INFO*, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned char*, unsigned int) */

undefined8
YAMAHA::MaSndDrv_SetVoice
          (_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
          ,uint param_7,uint param_8,uchar *param_9,uint param_10)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  
  lVar6 = DAT_0059a428;
  uVar14 = *(uint *)param_1;
  uVar9 = (ulong)(uVar14 >> 8) & 0xff;
  uVar2 = uVar14 & 0xff;
  if (1 < uVar9) {
    return 0xfffffffe;
  }
  if (0x7f < param_3 || param_9 == (uchar *)0x0) {
    return 0xfffffffe;
  }
  if (param_10 < 0xe) {
    return 0xfffffffe;
  }
  lVar13 = (ulong)(byte)(&DAT_0048aa70)[uVar9 * 4 + (ulong)(byte)uVar14] * 0x430;
  lVar1 = DAT_0059a428 + lVar13;
  if (param_2 < 0x80) {
    if (0xf < param_2) {
      return 0xfffffffe;
    }
    uVar7 = MaCmd_GetMelody(uVar2,param_2,param_3);
    uVar14 = uVar7 & 0x8000;
    if ((param_4 >> 1 & 1) == 0) goto LAB_0019153c;
    if ((uVar7 >> 0xf & 1) == 0) {
      if (0x1f < *(uint *)(lVar1 + 0xc)) {
        return 0xfffffffd;
      }
    }
    else if ((uVar7 >> 0xe & 1) == 0) {
      return 0xfffffffd;
    }
    if (param_8 < param_7) {
      return 0xfffffffe;
    }
    if (0x7f < param_8) {
      return 0xfffffffe;
    }
  }
  else {
    if (0xf < param_2 - 0x80) {
      return 0xfffffffe;
    }
    uVar7 = MaCmd_GetDrum(uVar2,param_2 - 0x80,param_3);
    uVar14 = uVar7 & 0x8000;
LAB_0019153c:
    if ((uVar7 >> 0xf & 1) != 0) {
      return 0xfffffffd;
    }
  }
  uVar4 = *(uint *)(lVar6 + lVar13);
  if ((*(uint *)(lVar1 + 4) < param_10) || (0x3ff < *(uint *)(lVar1 + 8))) {
    return 0xfffffffd;
  }
  if ((param_4 & 1) != 0) {
    if ((param_6 - 0x1d < 99) || (0xff < param_6)) {
      return 0xfffffffe;
    }
    uVar8 = MaCmd_GetWtWave(uVar2,param_6);
    if (uVar8 == 0) {
      return 0xffffffff;
    }
    param_9[8] = (uchar)(uVar8 >> 9);
    param_9[9] = (uchar)(uVar8 >> 1);
  }
  uVar10 = MaDevDrv_SendDirectRamData(uVar4,param_9,param_10);
  if ((int)uVar10 < 0) {
    return uVar10;
  }
  if (param_2 < 0x80) {
    if ((param_4 >> 1 & 1) == 0) {
      MaCmd_SetMelody(uVar2,param_2,param_3,*(uint *)(lVar1 + 8) | 0x8000);
    }
    else {
      uVar7 = uVar7 & 0xffff3fff;
      if (uVar14 == 0) {
        MaCmd_SetMelody(uVar2,param_2,param_3,*(uint *)(lVar1 + 0xc) | 0xc000);
        uVar7 = *(uint *)(lVar1 + 0xc) & 0xffff3fff;
        *(uint *)(lVar1 + 0xc) = *(uint *)(lVar1 + 0xc) + 1;
        uVar14 = 0;
        do {
          MaCmd_SetMulti(uVar2,uVar7,uVar14,0);
          MaCmd_SetMulti(uVar2,uVar7,uVar14 + 1,0);
          MaCmd_SetMulti(uVar2,uVar7,uVar14 + 2,0);
          MaCmd_SetMulti(uVar2,uVar7,uVar14 + 3,0);
          MaCmd_SetMulti(uVar2,uVar7,uVar14 + 4,0);
          MaCmd_SetMulti(uVar2,uVar7,uVar14 + 5,0);
          MaCmd_SetMulti(uVar2,uVar7,uVar14 + 6,0);
          MaCmd_SetMulti(uVar2,uVar7,uVar14 + 7,0);
          MaCmd_SetMulti(uVar2,uVar7,uVar14 + 8,0);
          MaCmd_SetMulti(uVar2,uVar7,uVar14 + 9,0);
          MaCmd_SetMulti(uVar2,uVar7,uVar14 + 10,0);
          MaCmd_SetMulti(uVar2,uVar7,uVar14 + 0xb,0);
          MaCmd_SetMulti(uVar2,uVar7,uVar14 + 0xc,0);
          MaCmd_SetMulti(uVar2,uVar7,uVar14 + 0xd,0);
          MaCmd_SetMulti(uVar2,uVar7,uVar14 + 0xe,0);
          uVar8 = uVar14 + 0xf;
          uVar14 = uVar14 + 0x10;
          MaCmd_SetMulti(uVar2,uVar7,uVar8,0);
        } while (uVar14 != 0x80);
      }
      if (param_7 <= param_8) {
        uVar14 = param_7 + 1;
        uVar8 = param_8 - param_7 & 7;
        MaCmd_SetMulti(uVar2,uVar7,param_7,*(uint *)(lVar1 + 8) | 0x8000);
        if (uVar14 <= param_8) {
          if (uVar8 != 0) {
            uVar12 = uVar14;
            if (uVar8 != 1) {
              if (uVar8 != 2) {
                if (uVar8 != 3) {
                  if (uVar8 != 4) {
                    if (uVar8 != 5) {
                      uVar11 = uVar14;
                      if (uVar8 != 6) {
                        uVar11 = param_7 + 2;
                        MaCmd_SetMulti(uVar2,uVar7,uVar14,*(uint *)(lVar1 + 8) | 0x8000);
                      }
                      uVar12 = uVar11 + 1;
                      MaCmd_SetMulti(uVar2,uVar7,uVar11,*(uint *)(lVar1 + 8) | 0x8000);
                    }
                    uVar14 = uVar12 + 1;
                    MaCmd_SetMulti(uVar2,uVar7,uVar12,*(uint *)(lVar1 + 8) | 0x8000);
                  }
                  uVar12 = uVar14 + 1;
                  MaCmd_SetMulti(uVar2,uVar7,uVar14,*(uint *)(lVar1 + 8) | 0x8000);
                }
                uVar14 = uVar12 + 1;
                MaCmd_SetMulti(uVar2,uVar7,uVar12,*(uint *)(lVar1 + 8) | 0x8000);
              }
              uVar12 = uVar14 + 1;
              MaCmd_SetMulti(uVar2,uVar7,uVar14,*(uint *)(lVar1 + 8) | 0x8000);
            }
            uVar14 = uVar12 + 1;
            MaCmd_SetMulti(uVar2,uVar7,uVar12,*(uint *)(lVar1 + 8) | 0x8000);
            if (param_8 < uVar14) goto LAB_001917d4;
          }
          do {
            MaCmd_SetMulti(uVar2,uVar7,uVar14,*(uint *)(lVar1 + 8) | 0x8000);
            MaCmd_SetMulti(uVar2,uVar7,uVar14 + 1,*(uint *)(lVar1 + 8) | 0x8000);
            MaCmd_SetMulti(uVar2,uVar7,uVar14 + 2,*(uint *)(lVar1 + 8) | 0x8000);
            MaCmd_SetMulti(uVar2,uVar7,uVar14 + 3,*(uint *)(lVar1 + 8) | 0x8000);
            MaCmd_SetMulti(uVar2,uVar7,uVar14 + 4,*(uint *)(lVar1 + 8) | 0x8000);
            MaCmd_SetMulti(uVar2,uVar7,uVar14 + 5,*(uint *)(lVar1 + 8) | 0x8000);
            MaCmd_SetMulti(uVar2,uVar7,uVar14 + 6,*(uint *)(lVar1 + 8) | 0x8000);
            uVar8 = uVar14 + 7;
            uVar14 = uVar14 + 8;
            MaCmd_SetMulti(uVar2,uVar7,uVar8,*(uint *)(lVar1 + 8) | 0x8000);
          } while (uVar14 <= param_8);
        }
      }
    }
  }
  else {
    MaCmd_SetDrum(uVar2,param_2 - 0x80,param_3,*(uint *)(lVar1 + 8) | 0x8000);
  }
LAB_001917d4:
  MaCmd_SetVoice(uVar2,*(uint *)(lVar1 + 8),uVar4,param_5,param_4 & 1);
  iVar5 = *(int *)(lVar6 + lVar13);
  iVar3 = *(int *)(lVar1 + 4);
  uVar2 = param_10 + 1 & 0xfffffffe;
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  *(uint *)(lVar6 + lVar13) = iVar5 + uVar2;
  *(uint *)(lVar1 + 4) = iVar3 - uVar2;
  return 0;
}

