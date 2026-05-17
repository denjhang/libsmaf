/* MaSmw_Seek @ 000830e8 4720B */


/* YAMAHA::MaSmw_Seek(unsigned int, unsigned int, _MASMW_SEEK_PARAM*) */

uint YAMAHA::MaSmw_Seek(uint param_1,uint param_2,_MASMW_SEEK_PARAM *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uchar uVar5;
  uchar *puVar6;
  _MACNV_SEEK_INFO _Var7;
  uint uVar8;
  _MACNV_SEEK_INFO *p_Var9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  code *pcVar21;
  _MACNV_SEEK_INFO *p_Var22;
  uchar uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uchar uVar27;
  undefined4 *puVar28;
  uchar uVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  bool bVar37;
  bool bVar38;
  void *local_2c [2];
  
  uVar12 = param_1 & 0xff;
  machdep_EnterCriticalSection();
  iVar13 = DAT_00083dbc;
  iVar17 = DAT_00083da4;
  uVar3 = (param_1 & 0xffff) >> 8;
  bVar38 = 7 < uVar3;
  bVar37 = uVar3 == 8;
  if (uVar3 < 9) {
    bVar38 = 2 < uVar12;
    bVar37 = uVar12 == 3;
  }
  local_2c[0] = (void *)0x0;
  if (((bVar38 && !bVar37) || (uVar12 != 0 && uVar3 == 3)) ||
     (uVar30 = (uint)*(byte *)(DAT_00083d9c + 0x8312a + uVar12 + uVar3 * 4), uVar30 == 0xff)) {
    uVar3 = 0xfffffffe;
    goto LAB_0008321c;
  }
  iVar26 = uVar30 * 0x98;
  puVar28 = (undefined4 *)(*(int *)(DAT_00083da0 + 0x83140) + iVar26);
  if (1 < *(int *)(*(int *)(DAT_00083da0 + 0x83140) + iVar26) - 2U) {
LAB_00083a74:
    uVar3 = 0xffffffff;
    goto LAB_0008321c;
  }
  iVar19 = uVar30 * 0x228;
  iVar15 = *(int *)(*(int *)(DAT_00083da0 + 0x83144) + iVar19 + 0x24);
  iVar20 = iVar15 + 8;
  if (iVar15 == 0) {
    iVar20 = 0;
  }
  switch(uVar3) {
  case 0:
    if ((param_2 == 0) && (pcVar21 = (code *)puVar28[0x1a], pcVar21 != (code *)0x0)) {
      machdep_LeaveCriticalSection();
      (*pcVar21)(3,0);
      machdep_EnterCriticalSection();
    }
    p_Var22 = (_MACNV_SEEK_INFO *)(uVar12 * 0x398 + DAT_00083dac + 0x8407e);
    iVar17 = DAT_00083db0 + 0x83254 + uVar30 * 8;
    *(undefined4 *)(*(int *)(DAT_00083db0 + 0x83250) + 4) = 0;
    *(undefined1 *)((int)puVar28 + 0x26) = 0;
    uVar30 = param_2 + puVar28[0x14];
    MaCmd_SeekInfoInit(p_Var22);
    uVar3 = (**(code **)(DAT_00083db4 + puVar28[1] * 0x28 + 0x832d8))(iVar17,uVar30,p_Var22);
    if ((int)uVar3 < 0) goto LAB_000839f8;
    bVar1 = *(byte *)(puVar28 + 0xb);
    _Var7 = (_MACNV_SEEK_INFO)(bVar1 & 1);
    if ((bVar1 & 1) == 0) {
      p_Var22[8] = _Var7;
      p_Var22[0x22] = _Var7;
      p_Var22[0x3c] = _Var7;
      p_Var22[0x56] = _Var7;
      p_Var22[0x70] = _Var7;
      p_Var22[0x8a] = _Var7;
      p_Var22[0xa4] = _Var7;
      p_Var22[0xbe] = _Var7;
      p_Var22[0xd8] = _Var7;
      p_Var22[0xf2] = _Var7;
      p_Var22[0x10c] = _Var7;
      p_Var22[0x126] = _Var7;
      p_Var22[0x140] = _Var7;
      p_Var22[0x15a] = _Var7;
      p_Var22[0x174] = _Var7;
      p_Var22[0x18e] = _Var7;
      p_Var22[0x1a8] = _Var7;
      p_Var22[0x1c2] = _Var7;
      p_Var22[0x1dc] = _Var7;
      p_Var22[0x1f6] = _Var7;
      p_Var22[0x210] = _Var7;
      p_Var22[0x22a] = _Var7;
      p_Var22[0x244] = _Var7;
      p_Var22[0x25e] = _Var7;
      p_Var22[0x278] = _Var7;
      p_Var22[0x292] = _Var7;
      p_Var22[0x2ac] = _Var7;
      p_Var22[0x2c6] = _Var7;
      p_Var22[0x2e0] = _Var7;
      p_Var22[0x2fa] = _Var7;
      p_Var22[0x314] = _Var7;
      p_Var22[0x32e] = _Var7;
      bVar1 = *(byte *)(puVar28 + 0xb);
    }
    _Var7 = (_MACNV_SEEK_INFO)(bVar1 & 2);
    if ((bVar1 & 2) == 0) {
      p_Var22[9] = _Var7;
      p_Var22[0x23] = _Var7;
      p_Var22[0x3d] = _Var7;
      p_Var22[0x57] = _Var7;
      p_Var22[0x71] = _Var7;
      p_Var22[0x8b] = _Var7;
      p_Var22[0xa5] = _Var7;
      p_Var22[0xbf] = _Var7;
      p_Var22[0xd9] = _Var7;
      p_Var22[0xf3] = _Var7;
      p_Var22[0x10d] = _Var7;
      p_Var22[0x127] = _Var7;
      p_Var22[0x141] = _Var7;
      p_Var22[0x15b] = _Var7;
      p_Var22[0x175] = _Var7;
      p_Var22[399] = _Var7;
      p_Var22[0x1a9] = _Var7;
      p_Var22[0x1c3] = _Var7;
      p_Var22[0x1dd] = _Var7;
      p_Var22[0x1f7] = _Var7;
      p_Var22[0x211] = _Var7;
      p_Var22[0x22b] = _Var7;
      p_Var22[0x245] = _Var7;
      p_Var22[0x25f] = _Var7;
      p_Var22[0x279] = _Var7;
      p_Var22[0x293] = _Var7;
      p_Var22[0x2ad] = _Var7;
      p_Var22[0x2c7] = _Var7;
      p_Var22[0x2e1] = _Var7;
      p_Var22[0x2fb] = _Var7;
      p_Var22[0x315] = _Var7;
      p_Var22[0x32f] = _Var7;
    }
    if (*(char *)(puVar28 + 0xe) == '\x01') {
      _Var7 = p_Var22[6];
      *(_MACNV_SEEK_INFO *)(*(int *)(DAT_000843c4 + 0x840c2) + iVar19 + 0x20) = _Var7;
      if (_Var7 == (_MACNV_SEEK_INFO)0xff) {
        local_2c[0] = (void *)(DAT_000843e0 + 0x844ce);
LAB_000842e6:
        iVar13 = (**(code **)(DAT_000843e4 + puVar28[1] * 0x28 + 0x84352))
                           (iVar17,0x101,_Var7,local_2c);
        if (iVar13 < 0) goto LAB_000833ae;
        uVar3 = 0x7fffffff;
      }
      else {
        if (_Var7 != (_MACNV_SEEK_INFO)0xfe) goto LAB_000842e6;
        uVar3 = 3;
        local_2c[0] = (void *)(DAT_000843c8 + 0x842ec);
      }
      if (local_2c[0] != (void *)0x0) {
        MaDsp_SfxCtrl(0,0x2011e,uVar3,local_2c[0]);
      }
    }
LAB_000833ae:
    if (*(char *)((int)puVar28 + 0x39) == '\x01') {
      _Var7 = p_Var22[7];
      *(_MACNV_SEEK_INFO *)(*(int *)(DAT_000843cc + 0x84108) + iVar19 + 0x21) = _Var7;
      if (_Var7 == (_MACNV_SEEK_INFO)0xff) {
        local_2c[0] = (void *)(DAT_000843d8 + 0x84496);
LAB_000842ae:
        iVar17 = (**(code **)(DAT_000843dc + puVar28[1] * 0x28 + 0x8431a))
                           (iVar17,0x101,_Var7,local_2c);
        if (iVar17 < 0) goto LAB_000833b8;
        uVar3 = 0x7fffffff;
      }
      else {
        if (_Var7 != (_MACNV_SEEK_INFO)0xfe) goto LAB_000842ae;
        uVar3 = 3;
        local_2c[0] = (void *)(DAT_000843d0 + 0x8434e);
      }
      if (local_2c[0] != (void *)0x0) {
        MaDsp_SfxCtrl(0,0x2013e,uVar3,local_2c[0]);
      }
    }
LAB_000833b8:
    *(undefined1 *)((int)puVar28 + 0x25) = 0;
    uVar3 = FUN_00076038(p_Var22,puVar28,0,0,uVar12);
    if ((int)uVar3 < 0) goto LAB_000839f8;
    if ((int)((uint)*(byte *)(puVar28 + 0xd) << 0x18) < 0) {
      if (*(char *)((int)puVar28 + 0x2f) == '\x02') {
        _Var7 = (_MACNV_SEEK_INFO)0x0;
      }
      else {
        _Var7 = (_MACNV_SEEK_INFO)((*(byte *)(puVar28 + 0xd) & 3) + 2);
      }
      p_Var22[0x1b] = _Var7;
      p_Var22[0x35] = _Var7;
      p_Var22[0x4f] = _Var7;
      p_Var22[0x69] = _Var7;
      p_Var22[0x83] = _Var7;
      p_Var22[0x9d] = _Var7;
      p_Var22[0xb7] = _Var7;
      p_Var22[0xd1] = _Var7;
      p_Var22[0xeb] = _Var7;
      p_Var22[0x105] = _Var7;
      p_Var22[0x11f] = _Var7;
      p_Var22[0x139] = _Var7;
      p_Var22[0x153] = _Var7;
      p_Var22[0x16d] = _Var7;
      p_Var22[0x187] = _Var7;
      p_Var22[0x1a1] = _Var7;
      p_Var22[0x1bb] = _Var7;
      p_Var22[0x1d5] = _Var7;
      p_Var22[0x1ef] = _Var7;
      p_Var22[0x209] = _Var7;
      p_Var22[0x223] = _Var7;
      p_Var22[0x23d] = _Var7;
      p_Var22[599] = _Var7;
      p_Var22[0x271] = _Var7;
      p_Var22[0x28b] = _Var7;
      p_Var22[0x2a5] = _Var7;
      p_Var22[0x2bf] = _Var7;
      p_Var22[0x2d9] = _Var7;
      p_Var22[0x2f3] = _Var7;
      p_Var22[0x30d] = _Var7;
      p_Var22[0x327] = _Var7;
      p_Var22[0x341] = _Var7;
    }
    else {
      iVar17 = 0x20;
      p_Var9 = p_Var22;
      do {
        if ((byte)p_Var9[0x1b] - 2 < 4) {
          bVar1 = *(byte *)((int)puVar28 + (byte)p_Var9[0x1b] + 0x32);
          if ((bVar1 & 0x40) == 0) {
            p_Var9[0x1b] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
          }
          else {
            p_Var9[0x1b] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
          }
        }
        if ((byte)p_Var9[0x35] - 2 < 4) {
          bVar1 = *(byte *)((int)puVar28 + (byte)p_Var9[0x35] + 0x32);
          if ((bVar1 & 0x40) == 0) {
            p_Var9[0x35] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
          }
          else {
            p_Var9[0x35] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
          }
        }
        if ((byte)p_Var9[0x4f] - 2 < 4) {
          bVar1 = *(byte *)((int)puVar28 + (byte)p_Var9[0x4f] + 0x32);
          if ((bVar1 & 0x40) == 0) {
            p_Var9[0x4f] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
          }
          else {
            p_Var9[0x4f] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
          }
        }
        if ((byte)p_Var9[0x69] - 2 < 4) {
          bVar1 = *(byte *)((int)puVar28 + (byte)p_Var9[0x69] + 0x32);
          if ((bVar1 & 0x40) == 0) {
            p_Var9[0x69] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
          }
          else {
            p_Var9[0x69] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
          }
        }
        if ((byte)p_Var9[0x83] - 2 < 4) {
          bVar1 = *(byte *)((int)puVar28 + (byte)p_Var9[0x83] + 0x32);
          if ((bVar1 & 0x40) == 0) {
            p_Var9[0x83] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
          }
          else {
            p_Var9[0x83] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
          }
        }
        if ((byte)p_Var9[0x9d] - 2 < 4) {
          bVar1 = *(byte *)((int)puVar28 + (byte)p_Var9[0x9d] + 0x32);
          if ((bVar1 & 0x40) == 0) {
            p_Var9[0x9d] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
          }
          else {
            p_Var9[0x9d] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
          }
        }
        if ((byte)p_Var9[0xb7] - 2 < 4) {
          bVar1 = *(byte *)((int)puVar28 + (byte)p_Var9[0xb7] + 0x32);
          if ((bVar1 & 0x40) == 0) {
            p_Var9[0xb7] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
          }
          else {
            p_Var9[0xb7] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
          }
        }
        if ((byte)p_Var9[0xd1] - 2 < 4) {
          bVar1 = *(byte *)((int)puVar28 + (byte)p_Var9[0xd1] + 0x32);
          if ((bVar1 & 0x40) == 0) {
            p_Var9[0xd1] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
          }
          else {
            p_Var9[0xd1] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
          }
        }
        iVar17 = iVar17 + -8;
        p_Var9 = p_Var9 + 0xd0;
      } while (iVar17 != 0);
    }
    uVar3 = MaCmd_SetSeekInfo(uVar12,-1,*(byte *)(puVar28 + 0xe) & 1,
                              *(byte *)((int)puVar28 + 0x39) & 1,p_Var22,(uchar *)puVar28[0x1b]);
    uVar3 = MaDevDrv_SendDirectPacket((uchar *)puVar28[0x1b],uVar3);
    if ((int)uVar3 < 0) goto LAB_000839f8;
    if (iVar15 != 0) {
      *(undefined1 *)(iVar15 + 1) = 0;
      *(undefined1 *)(iVar15 + 2) = 0;
      *(undefined1 *)(iVar15 + 3) = 0x41;
      *(undefined1 *)(iVar15 + 4) = 0x41;
      *(undefined1 *)(iVar20 + 9) = 0;
      *(undefined1 *)(iVar20 + 10) = 0x41;
      *(undefined1 *)(iVar20 + 0xf) = 0;
      if (*(byte *)(iVar20 + 0x10) < 4) {
        uVar3 = MaCmd_StreamOff(-1,(uint)*(byte *)(iVar20 + 0x10),(uchar *)puVar28[0x1b]);
        uVar3 = MaDevDrv_SendDirectPacket((uchar *)puVar28[0x1b],uVar3);
        if ((int)uVar3 < 0) goto LAB_000839f8;
      }
      *(undefined1 *)(iVar20 + 0x1d) = 0;
      *(undefined1 *)(iVar20 + 0x23) = 0;
      *(undefined1 *)(iVar20 + 0x1e) = 0x41;
      if (*(byte *)(iVar20 + 0x24) < 4) {
        uVar3 = MaCmd_StreamOff(-1,(uint)*(byte *)(iVar20 + 0x24),(uchar *)puVar28[0x1b]);
        uVar3 = MaDevDrv_SendDirectPacket((uchar *)puVar28[0x1b],uVar3);
        if ((int)uVar3 < 0) goto LAB_000839f8;
      }
    }
    piVar16 = (int *)(DAT_00083dd8 + 0x83aa8);
    puVar28[0x1c] = 0;
    puVar28[2] = 0;
    MaDva_Initialize((uint)*(byte *)((int)puVar28 + 0x2a));
    iVar17 = *piVar16;
    *(undefined4 *)(iVar17 + 0x7c) = 0;
    uVar3 = 0;
    if (*(uint *)(iVar17 + 0x70) == 0) {
LAB_00083abe:
      iVar20 = 0;
      uVar12 = 0;
      iVar13 = iVar17;
      do {
        if (*(char *)(iVar13 + 0xd) == '\x01') {
          iVar15 = MaCmd_SetChannelVolume
                             (0,0,uVar12,0xff,(uchar *)(*(int *)(iVar17 + 0x6c) + iVar20));
          *(undefined1 *)(iVar13 + 0xd) = 0;
          iVar20 = iVar20 + iVar15;
        }
        uVar12 = uVar12 + 1;
        iVar13 = iVar13 + 1;
      } while (uVar12 != 0x10);
      uVar12 = uVar3;
      if (iVar20 != 0) {
        uVar12 = iVar20 + uVar3;
        if (0x400 < uVar12) {
          iVar13 = -uVar3 + 0x400;
          if (iVar13 != 0) {
            uVar12 = -uVar3 + 0x3ff & 3;
            iVar20 = 1;
            *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3) = **(undefined1 **)(iVar17 + 0x6c);
            **(undefined1 **)(iVar17 + 0x6c) = (*(undefined1 **)(iVar17 + 0x6c))[iVar13];
            if (iVar13 != 1) {
              if (uVar12 != 0) {
                if (uVar12 != 1) {
                  if (uVar12 != 2) {
                    iVar20 = 2;
                    *(undefined1 *)(*(int *)(iVar17 + 0x78) + 1 + uVar3) =
                         *(undefined1 *)(*(int *)(iVar17 + 0x6c) + 1);
                    *(undefined1 *)(*(int *)(iVar17 + 0x6c) + 1) =
                         *(undefined1 *)(*(int *)(iVar17 + 0x6c) + 1 + iVar13);
                  }
                  *(undefined1 *)(*(int *)(iVar17 + 0x78) + iVar20 + uVar3) =
                       *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar20);
                  *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar20) =
                       *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar20 + iVar13);
                  iVar20 = iVar20 + 1;
                }
                *(undefined1 *)(*(int *)(iVar17 + 0x78) + iVar20 + uVar3) =
                     *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar20);
                *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar20) =
                     *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar20 + iVar13);
                iVar20 = iVar20 + 1;
                if (iVar20 == iVar13) goto LAB_00083ee0;
              }
              do {
                iVar19 = iVar20 + 1;
                iVar33 = iVar20 + 2;
                iVar15 = iVar20 + 3;
                *(undefined1 *)(*(int *)(iVar17 + 0x78) + iVar20 + uVar3) =
                     *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar20);
                *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar20) =
                     *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar20 + iVar13);
                iVar20 = iVar20 + 4;
                *(undefined1 *)(*(int *)(iVar17 + 0x78) + iVar19 + uVar3) =
                     *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar19);
                *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar19) =
                     *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar19 + iVar13);
                *(undefined1 *)(*(int *)(iVar17 + 0x78) + iVar33 + uVar3) =
                     *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar33);
                *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar33) =
                     *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar33 + iVar13);
                *(undefined1 *)(*(int *)(iVar17 + 0x78) + iVar15 + uVar3) =
                     *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar15);
                *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar15) =
                     *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar15 + iVar13);
              } while (iVar20 != iVar13);
            }
          }
LAB_00083ee0:
          *(undefined4 *)(iVar17 + 0x7c) = 0x400;
          *(uint *)(iVar17 + 0x70) = (*(int *)(iVar17 + 0x70) + -0x400) - uVar3;
          goto LAB_00083c50;
        }
        iVar13 = 1;
        uVar8 = iVar20 - 1U & 7;
        *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3) = **(undefined1 **)(iVar17 + 0x6c);
        if (iVar20 != 1) {
          if (uVar8 != 0) {
            if (uVar8 != 1) {
              if (uVar8 != 2) {
                if (uVar8 != 3) {
                  if (uVar8 != 4) {
                    if (uVar8 != 5) {
                      if (uVar8 != 6) {
                        iVar13 = 2;
                        *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3 + 1) =
                             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + 1);
                      }
                      *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3 + iVar13) =
                           *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar13);
                      iVar13 = iVar13 + 1;
                    }
                    *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3 + iVar13) =
                         *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar13);
                    iVar13 = iVar13 + 1;
                  }
                  *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3 + iVar13) =
                       *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar13);
                  iVar13 = iVar13 + 1;
                }
                *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3 + iVar13) =
                     *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar13);
                iVar13 = iVar13 + 1;
              }
              *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3 + iVar13) =
                   *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar13);
              iVar13 = iVar13 + 1;
            }
            *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3 + iVar13) =
                 *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar13);
            iVar13 = iVar13 + 1;
            if (iVar13 == iVar20) goto LAB_00084270;
          }
          do {
            iVar14 = iVar13 + 3;
            iVar10 = iVar13 + 4;
            iVar15 = iVar13 + 5;
            *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3 + iVar13) =
                 *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar13);
            *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3 + iVar13 + 1) =
                 *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar13 + 1);
            iVar19 = iVar13 + 6;
            *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3 + iVar13 + 2) =
                 *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar13 + 2);
            iVar33 = iVar13 + 7;
            iVar13 = iVar13 + 8;
            *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3 + iVar14) =
                 *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar14);
            *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3 + iVar10) =
                 *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar10);
            *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3 + iVar15) =
                 *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar15);
            *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3 + iVar19) =
                 *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar19);
            *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar3 + iVar33) =
                 *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar33);
          } while (iVar13 != iVar20);
        }
LAB_00084270:
        *(undefined4 *)(iVar17 + 0x70) = 0;
      }
      if (*(int *)(DAT_000843d4 + 0x84362) == 0) {
        uVar3 = FUN_00076814(0x400,uVar12);
      }
      else {
        uVar3 = FUN_0007820c();
      }
      if ((int)uVar3 < 0) goto LAB_0008321c;
    }
    else {
      uVar12 = 0;
      if (*(uint *)(iVar17 + 0x70) < 0x401) {
        do {
          uVar25 = uVar12 + 1;
          uVar32 = uVar12 + 3;
          uVar24 = uVar12 + 4;
          uVar18 = uVar12 + 5;
          uVar36 = uVar12 + 7;
          uVar8 = uVar12 + 6;
          uVar35 = uVar12 + 2;
          *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar12) =
               *(undefined1 *)(*(int *)(iVar17 + 0x6c) + uVar12);
          uVar12 = uVar12 + 8;
          uVar3 = *(uint *)(iVar17 + 0x70);
          if (uVar3 <= uVar25) break;
          *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar25) =
               *(undefined1 *)(*(int *)(iVar17 + 0x6c) + uVar25);
          uVar3 = *(uint *)(iVar17 + 0x70);
          if (uVar3 <= uVar35) break;
          *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar35) =
               *(undefined1 *)(*(int *)(iVar17 + 0x6c) + uVar35);
          uVar3 = *(uint *)(iVar17 + 0x70);
          if (uVar3 <= uVar32) break;
          *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar32) =
               *(undefined1 *)(*(int *)(iVar17 + 0x6c) + uVar32);
          uVar3 = *(uint *)(iVar17 + 0x70);
          if (uVar3 <= uVar24) break;
          *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar24) =
               *(undefined1 *)(*(int *)(iVar17 + 0x6c) + uVar24);
          uVar3 = *(uint *)(iVar17 + 0x70);
          if (uVar3 <= uVar18) break;
          *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar18) =
               *(undefined1 *)(*(int *)(iVar17 + 0x6c) + uVar18);
          uVar3 = *(uint *)(iVar17 + 0x70);
          if (uVar3 <= uVar8) break;
          *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar8) =
               *(undefined1 *)(*(int *)(iVar17 + 0x6c) + uVar8);
          uVar3 = *(uint *)(iVar17 + 0x70);
          if (uVar3 <= uVar36) break;
          *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar36) =
               *(undefined1 *)(*(int *)(iVar17 + 0x6c) + uVar36);
          uVar3 = *(uint *)(iVar17 + 0x70);
        } while (uVar12 < uVar3);
        *(undefined4 *)(iVar17 + 0x70) = 0;
        goto LAB_00083abe;
      }
      do {
        iVar19 = uVar12 + 1;
        iVar10 = uVar12 + 2;
        iVar14 = uVar12 + 3;
        iVar15 = uVar12 + 4;
        iVar13 = uVar12 + 5;
        iVar33 = uVar12 + 6;
        iVar20 = uVar12 + 7;
        *(undefined1 *)(*(int *)(iVar17 + 0x78) + uVar12) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + uVar12);
        *(undefined1 *)(*(int *)(iVar17 + 0x6c) + uVar12) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + uVar12 + 0x400);
        uVar12 = uVar12 + 8;
        *(undefined1 *)(*(int *)(iVar17 + 0x78) + iVar19) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar19);
        *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar19) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar19 + 0x400);
        *(undefined1 *)(*(int *)(iVar17 + 0x78) + iVar10) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar10);
        *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar10) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar10 + 0x400);
        *(undefined1 *)(*(int *)(iVar17 + 0x78) + iVar14) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar14);
        *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar14) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar14 + 0x400);
        *(undefined1 *)(*(int *)(iVar17 + 0x78) + iVar15) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar15);
        *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar15) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar15 + 0x400);
        *(undefined1 *)(*(int *)(iVar17 + 0x78) + iVar13) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar13);
        *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar13) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar13 + 0x400);
        *(undefined1 *)(*(int *)(iVar17 + 0x78) + iVar33) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar33);
        *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar33) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar33 + 0x400);
        *(undefined1 *)(*(int *)(iVar17 + 0x78) + iVar20) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar20);
        *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar20) =
             *(undefined1 *)(*(int *)(iVar17 + 0x6c) + iVar20 + 0x400);
      } while (uVar12 != 0x400);
      *(undefined4 *)(iVar17 + 0x7c) = 0x400;
      *(int *)(iVar17 + 0x70) = *(int *)(iVar17 + 0x70) + -0x400;
    }
LAB_00083c50:
    MaDevDrv_WriteIntermediateReg(1,'P');
    MaDevDrv_WriteIntermediateReg(1,'\0');
    MaDevDrv_WriteIntermediateReg(0xb,'\x10');
    uVar3 = MaDevDrv_SendDelayedPacket((uchar *)puVar28[0x1e],puVar28[0x1f]);
    if ((int)uVar3 < 0) {
LAB_000839f8:
      machdep_LeaveCriticalSection();
      return uVar3;
    }
    uVar3 = FUN_00079d84();
    if ((int)uVar3 < 0) goto LAB_000838f6;
    puVar28[0x13] = uVar30;
    if ((int)((uint)*(byte *)(puVar28 + 10) << 0x1f) < 0) {
      if (uVar30 < (uint)puVar28[0x15]) {
        uVar4 = __udivsi3(puVar28[0x15] - uVar30,puVar28[0x11]);
        uVar5 = (uchar)((uint)uVar4 >> 0x18);
        uVar29 = (uchar)((uint)uVar4 >> 0x10);
        uVar27 = (uchar)((uint)uVar4 >> 8);
        uVar23 = (uchar)uVar4;
      }
      else {
        uVar27 = '\0';
        uVar29 = '\0';
        uVar5 = '\0';
        uVar23 = '\x01';
      }
      MaDevDrv_WriteIntermediateReg(0xc,uVar5);
      MaDevDrv_WriteIntermediateReg(0xd,uVar29);
      MaDevDrv_WriteIntermediateReg(0xe,uVar27);
      MaDevDrv_WriteIntermediateReg(0xf,uVar23);
    }
    goto LAB_000838f0;
  case 1:
    uVar8 = (uint)*(byte *)((int)puVar28 + 0x27);
    if (-1 < (int)(uVar8 << 0x18)) {
      iVar17 = 0;
      piVar16 = (int *)(DAT_00083db8 + 0x8354e);
      iVar15 = DAT_00083db8 + 0x8355a;
      iVar33 = DAT_00083dbc + 0x83568;
      uVar24 = 0;
      puVar6 = (uchar *)(DAT_00083dc4 + 0x8385c);
      p_Var22 = (_MACNV_SEEK_INFO *)((int)&DAT_000843b4 + DAT_00083dc0);
      uVar3 = 0xffffffff;
      iVar20 = DAT_00083dcc;
      do {
        DAT_00083dcc = iVar20;
        if ((int)(uVar8 << 0x1f) < 0) {
          uVar3 = (uint)*(byte *)(DAT_00083dc8 + uVar24 + 0x835d6);
          iVar14 = iVar15 + uVar3 * 8;
          iVar10 = *piVar16 + uVar3 * 0x98;
          *(undefined1 *)(iVar10 + 0x26) = 0;
          param_2 = param_2 + *(int *)(iVar10 + 0x50);
          MaCmd_SeekInfoInit(p_Var22);
          uVar3 = (**(code **)(iVar20 + *(int *)(iVar10 + 4) * 0x28 + 0x8363a))
                            (iVar14,param_2,p_Var22);
          if ((int)uVar3 < 0) goto LAB_000839f8;
          bVar1 = *(byte *)(iVar10 + 0x2c);
          bVar11 = bVar1 & 1;
          if ((bVar1 & 1) == 0) {
            iVar20 = DAT_00083dd0 + 0x84468 + iVar17;
            *(byte *)(iVar20 + 8) = bVar11;
            *(byte *)(iVar20 + 0x22) = bVar11;
            *(byte *)(iVar20 + 0x3c) = bVar11;
            *(byte *)(iVar20 + 0x56) = bVar11;
            *(byte *)(iVar20 + 0x70) = bVar11;
            *(byte *)(iVar20 + 0x8a) = bVar11;
            *(byte *)(iVar20 + 0xa4) = bVar11;
            *(byte *)(iVar20 + 0xbe) = bVar11;
            *(byte *)(iVar20 + 0xd8) = bVar11;
            *(byte *)(iVar20 + 0xf2) = bVar11;
            *(byte *)(iVar20 + 0x10c) = bVar11;
            *(byte *)(iVar20 + 0x126) = bVar11;
            *(byte *)(iVar20 + 0x140) = bVar11;
            *(byte *)(iVar20 + 0x15a) = bVar11;
            *(byte *)(iVar20 + 0x174) = bVar11;
            *(byte *)(iVar20 + 0x18e) = bVar11;
            *(byte *)(iVar20 + 0x1a8) = bVar11;
            *(byte *)(iVar20 + 0x1c2) = bVar11;
            *(byte *)(iVar20 + 0x1dc) = bVar11;
            *(byte *)(iVar20 + 0x1f6) = bVar11;
            *(byte *)(iVar20 + 0x210) = bVar11;
            *(byte *)(iVar20 + 0x22a) = bVar11;
            *(byte *)(iVar20 + 0x244) = bVar11;
            *(byte *)(iVar20 + 0x25e) = bVar11;
            *(byte *)(iVar20 + 0x278) = bVar11;
            *(byte *)(iVar20 + 0x292) = bVar11;
            *(byte *)(iVar20 + 0x2ac) = bVar11;
            *(byte *)(iVar20 + 0x2c6) = bVar11;
            *(byte *)(iVar20 + 0x2e0) = bVar11;
            *(byte *)(iVar20 + 0x2fa) = bVar11;
            *(byte *)(iVar20 + 0x314) = bVar11;
            *(byte *)(iVar20 + 0x32e) = bVar11;
            bVar1 = *(byte *)(iVar10 + 0x2c);
          }
          bVar11 = bVar1 & 2;
          if ((bVar1 & 2) == 0) {
            iVar20 = DAT_00083dd4 + 0x836c6;
            iVar34 = iVar20 + iVar17;
            iVar31 = DAT_00083dd4 + 0x84502 + iVar17;
            *(byte *)(iVar34 + 0xe45) = bVar11;
            *(byte *)(iVar34 + 0xe5f) = bVar11;
            *(byte *)(iVar34 + 0xe79) = bVar11;
            *(byte *)(iVar34 + 0xe93) = bVar11;
            *(byte *)(iVar34 + 0xead) = bVar11;
            *(byte *)(iVar34 + 0xec7) = bVar11;
            *(byte *)(iVar34 + 0xee1) = bVar11;
            *(byte *)(iVar34 + 0xefb) = bVar11;
            *(byte *)(iVar34 + 0xf15) = bVar11;
            *(byte *)(iVar34 + 0xf2f) = bVar11;
            *(byte *)(iVar34 + 0xf49) = bVar11;
            *(byte *)(iVar34 + 0xf63) = bVar11;
            *(byte *)(iVar34 + 0xf7d) = bVar11;
            *(byte *)(iVar34 + 0xf97) = bVar11;
            *(byte *)(iVar34 + 0xfb1) = bVar11;
            *(byte *)(iVar34 + 0xfcb) = bVar11;
            *(byte *)(iVar34 + 0xfe5) = bVar11;
            *(byte *)(iVar34 + 0xfff) = bVar11;
            *(byte *)(iVar31 + 0x1dd) = bVar11;
            *(byte *)(iVar31 + 0x1f7) = bVar11;
            *(byte *)(iVar31 + 0x211) = bVar11;
            *(byte *)(iVar31 + 0x22b) = bVar11;
            *(byte *)(iVar20 + iVar17 + 0x1081) = bVar11;
            *(byte *)(iVar31 + 0x25f) = bVar11;
            *(byte *)(iVar31 + 0x279) = bVar11;
            *(byte *)(iVar31 + 0x293) = bVar11;
            *(byte *)(iVar31 + 0x2ad) = bVar11;
            *(byte *)(iVar31 + 0x2c7) = bVar11;
            *(byte *)(iVar31 + 0x2e1) = bVar11;
            *(byte *)(iVar31 + 0x2fb) = bVar11;
            *(byte *)(iVar31 + 0x315) = bVar11;
            *(byte *)(iVar31 + 0x32f) = bVar11;
          }
          iVar20 = DAT_000843b4;
          if (*(char *)(iVar10 + 0x38) == '\x01') {
            iVar31 = *(int *)(DAT_000843b4 + 0x83f54) + iVar19;
            cVar2 = *(char *)(DAT_000843b8 + iVar17 + 0x84d96);
            if (*(char *)(iVar31 + 0x20) != cVar2) {
              *(char *)(iVar31 + 0x20) = cVar2;
              if (cVar2 == -1) {
                local_2c[0] = (void *)(DAT_000843f0 + 0x8456a);
LAB_00083f84:
                uVar3 = 3;
              }
              else {
                if (cVar2 == -2) {
                  local_2c[0] = (void *)(DAT_000843bc + 0x8418c);
                  goto LAB_00083f84;
                }
                iVar20 = (**(code **)(DAT_000843e8 + *(int *)(iVar10 + 4) * 0x28 + 0x84380))
                                   (iVar20 + 0x83f5c + uVar30 * 8,0x101,cVar2,local_2c);
                if (iVar20 < 0) goto LAB_00083760;
                uVar3 = 0x7fffffff;
              }
              if (local_2c[0] != (void *)0x0) {
                MaDsp_SfxCtrl(0,0x2011e,uVar3,local_2c[0]);
              }
            }
          }
LAB_00083760:
          if (*(char *)(iVar10 + 0x39) == '\x01') {
            iVar20 = *(int *)(iVar13 + 0x83560) + iVar19;
            cVar2 = *(char *)(DAT_000843ac + iVar17 + 0x84d43);
            if (*(char *)(iVar20 + 0x21) != cVar2) {
              *(char *)(iVar20 + 0x21) = cVar2;
              if (cVar2 == -1) {
                local_2c[0] = (void *)(DAT_000843f4 + 0x84576);
LAB_00083f2c:
                uVar3 = 3;
              }
              else {
                if (cVar2 == -2) {
                  local_2c[0] = (void *)(DAT_000843b0 + 0x84154);
                  goto LAB_00083f2c;
                }
                iVar20 = (**(code **)((int)&DAT_000843b4 +
                                     DAT_000843ec + *(int *)(iVar10 + 4) * 0x28 + 2))
                                   (uVar30 * 8 + iVar33,0x101,cVar2,local_2c);
                if (iVar20 < 0) goto LAB_0008376a;
                uVar3 = 0x7fffffff;
              }
              if (local_2c[0] != (void *)0x0) {
                MaDsp_SfxCtrl(0,0x2013e,uVar3,local_2c[0]);
              }
            }
          }
LAB_0008376a:
          _Var7 = (_MACNV_SEEK_INFO)0x0;
          *(undefined1 *)(iVar10 + 0x25) = 0;
          uVar3 = FUN_00076038(p_Var22,iVar10,0,1,uVar12);
          if ((int)uVar3 < 0) goto LAB_000839f8;
          if ((int)((uint)*(byte *)(iVar10 + 0x34) << 0x18) < 0) {
            if (*(char *)(iVar10 + 0x2f) != '\x02') {
              _Var7 = (_MACNV_SEEK_INFO)((*(byte *)(iVar10 + 0x34) & 3) + 2);
            }
            p_Var22[0x1b] = _Var7;
            p_Var22[0x35] = _Var7;
            p_Var22[0x4f] = _Var7;
            p_Var22[0x69] = _Var7;
            p_Var22[0x83] = _Var7;
            p_Var22[0x9d] = _Var7;
            p_Var22[0xb7] = _Var7;
            p_Var22[0xd1] = _Var7;
            p_Var22[0xeb] = _Var7;
            p_Var22[0x105] = _Var7;
            p_Var22[0x11f] = _Var7;
            p_Var22[0x139] = _Var7;
            p_Var22[0x153] = _Var7;
            p_Var22[0x16d] = _Var7;
            p_Var22[0x187] = _Var7;
            p_Var22[0x1a1] = _Var7;
            p_Var22[0x1bb] = _Var7;
            p_Var22[0x1d5] = _Var7;
            p_Var22[0x1ef] = _Var7;
            p_Var22[0x209] = _Var7;
            p_Var22[0x223] = _Var7;
            p_Var22[0x23d] = _Var7;
            p_Var22[599] = _Var7;
            p_Var22[0x271] = _Var7;
            p_Var22[0x28b] = _Var7;
            p_Var22[0x2a5] = _Var7;
            p_Var22[0x2bf] = _Var7;
            p_Var22[0x2d9] = _Var7;
            p_Var22[0x2f3] = _Var7;
            p_Var22[0x30d] = _Var7;
            p_Var22[0x327] = _Var7;
            p_Var22[0x341] = _Var7;
          }
          else {
            iVar20 = 0x20;
            p_Var9 = p_Var22;
            do {
              if ((byte)p_Var9[0x1b] - 2 < 4) {
                bVar1 = *(byte *)((uint)(byte)p_Var9[0x1b] + iVar10 + 0x32);
                if ((bVar1 & 0x40) == 0) {
                  p_Var9[0x1b] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
                }
                else {
                  p_Var9[0x1b] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
                }
              }
              if ((byte)p_Var9[0x35] - 2 < 4) {
                bVar1 = *(byte *)((uint)(byte)p_Var9[0x35] + iVar10 + 0x32);
                if ((bVar1 & 0x40) == 0) {
                  p_Var9[0x35] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
                }
                else {
                  p_Var9[0x35] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
                }
              }
              if ((byte)p_Var9[0x4f] - 2 < 4) {
                bVar1 = *(byte *)((uint)(byte)p_Var9[0x4f] + iVar10 + 0x32);
                if ((bVar1 & 0x40) == 0) {
                  p_Var9[0x4f] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
                }
                else {
                  p_Var9[0x4f] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
                }
              }
              if ((byte)p_Var9[0x69] - 2 < 4) {
                bVar1 = *(byte *)((uint)(byte)p_Var9[0x69] + iVar10 + 0x32);
                if ((bVar1 & 0x40) == 0) {
                  p_Var9[0x69] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
                }
                else {
                  p_Var9[0x69] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
                }
              }
              if ((byte)p_Var9[0x83] - 2 < 4) {
                bVar1 = *(byte *)((uint)(byte)p_Var9[0x83] + iVar10 + 0x32);
                if ((bVar1 & 0x40) == 0) {
                  p_Var9[0x83] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
                }
                else {
                  p_Var9[0x83] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
                }
              }
              if ((byte)p_Var9[0x9d] - 2 < 4) {
                bVar1 = *(byte *)((uint)(byte)p_Var9[0x9d] + iVar10 + 0x32);
                if ((bVar1 & 0x40) == 0) {
                  p_Var9[0x9d] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
                }
                else {
                  p_Var9[0x9d] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
                }
              }
              if ((byte)p_Var9[0xb7] - 2 < 4) {
                bVar1 = *(byte *)((uint)(byte)p_Var9[0xb7] + iVar10 + 0x32);
                if ((bVar1 & 0x40) == 0) {
                  p_Var9[0xb7] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
                }
                else {
                  p_Var9[0xb7] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
                }
              }
              if ((byte)p_Var9[0xd1] - 2 < 4) {
                bVar1 = *(byte *)((uint)(byte)p_Var9[0xd1] + iVar10 + 0x32);
                if ((bVar1 & 0x40) == 0) {
                  p_Var9[0xd1] = (_MACNV_SEEK_INFO)(bVar1 & 0x40);
                }
                else {
                  p_Var9[0xd1] = (_MACNV_SEEK_INFO)((bVar1 & 3) + 2);
                }
              }
              iVar20 = iVar20 + -8;
              p_Var9 = p_Var9 + 0xd0;
            } while (iVar20 != 0);
          }
          if (*(int *)(iVar10 + 4) == 6) {
            MaDevDrv_SendDirectPacket(puVar6,0x40);
          }
          uVar3 = MaCmd_SetSeekInfo(uVar24,-1,*(byte *)(iVar10 + 0x38) & 1,
                                    *(byte *)(iVar10 + 0x39) & 1,p_Var22,*(uchar **)(iVar10 + 0x6c))
          ;
          uVar3 = MaDevDrv_SendDirectPacket(*(uchar **)(iVar10 + 0x6c),uVar3);
          if ((int)uVar3 < 0) goto LAB_0008321c;
          pcVar21 = *(code **)(DAT_000843c0 + *(int *)(iVar10 + 4) * 0x28 + 0x840ea);
          if (pcVar21 != (code *)0x0) {
            uVar3 = (*pcVar21)(iVar14,iVar10 + 0x84);
            *(int *)(iVar10 + 0x88) = *(int *)(iVar10 + 0x88) + 1;
            uVar3 = uVar3 & (int)uVar3 >> 0x1f;
          }
          *(uint *)(iVar10 + 0x4c) = param_2;
        }
        uVar24 = uVar24 + 1;
        p_Var22 = p_Var22 + 0x398;
        puVar6 = puVar6 + 0x40;
        iVar17 = iVar17 + 0x398;
        if (uVar24 == 4) goto LAB_000838f0;
        uVar8 = (int)(uint)*(byte *)((int)puVar28 + 0x27) >> (uVar24 & 0xff);
        iVar20 = DAT_00083dcc;
      } while( true );
    }
    goto LAB_00083a74;
  case 2:
  case 6:
    if (iVar20 == 0) goto LAB_00083a74;
    uVar3 = MaSrm_Seek((uint)*(byte *)(iVar20 + 0x10),param_2);
LAB_000838f0:
    if (uVar3 != 0) {
LAB_000838f6:
      machdep_LeaveCriticalSection();
      return uVar3;
    }
    puVar28 = (undefined4 *)(*(int *)(DAT_00083ddc + 0x83b5e) + iVar26);
    break;
  case 3:
    piVar16 = (int *)(DAT_00083da4 + 0x831a6);
    iVar13 = DAT_00083da8 + 0x831ac;
    iVar20 = DAT_00083da4 + 0x831b2 + uVar30 * 8;
    *(undefined1 *)((int)puVar28 + 0x26) = 0;
    uVar3 = (**(code **)(iVar13 + puVar28[1] * 0x28 + 0x58))(iVar20,puVar28[0x14] + param_2,0);
    if (((int)uVar3 < 0) ||
       (uVar3 = (**(code **)(iVar13 + puVar28[1] * 0x28 + 0x5c))(iVar20,puVar28 + 0x21),
       (int)uVar3 < 0)) goto LAB_000839f8;
    pcVar21 = *(code **)(iVar13 + (uint)*(byte *)(*(int *)(iVar17 + 0x831aa) + iVar19 + 0x1d) * 0x14
                        + 8);
    (*pcVar21)(3,0,0);
    (*pcVar21)(6,0,0xc);
    puVar28 = (undefined4 *)(*piVar16 + iVar26);
  }
  uVar3 = 0;
  *puVar28 = 3;
LAB_0008321c:
  machdep_LeaveCriticalSection();
  return uVar3;
}

