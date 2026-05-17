/* LSendDbex @ 000fbec8 220B */


/* YAMAHA::LSendDbex(unsigned char) */

undefined4 YAMAHA::LSendDbex(uchar param_1)

{
  int iVar1;
  
  iVar1 = DAT_000fbfac + 0xfbed2;
  if (**(char **)(iVar1 + DAT_000fbfb0) == '\0') {
    switch(param_1) {
    case '\n':
      _MaDevDrv_SendDspProgram(100,(uchar *)(*(int *)(iVar1 + DAT_000fbfb4) + 0x1e6),6);
      _MaDevDrv_SendDspProgram(0xc6,(uchar *)(*(int *)(iVar1 + DAT_000fbfb8) + 0x1e0),6);
      break;
    case '\v':
      _MaDevDrv_SendDspProgram(0x5e,(uchar *)(*(int *)(iVar1 + DAT_000fbfb4) + 0x1c2),6);
      _MaDevDrv_SendDspProgram(0xc0,(uchar *)(*(int *)(iVar1 + DAT_000fbfb8) + 0x1bc),6);
      return 0;
    case '\f':
      _MaDevDrv_SendDspProgram(0x5f,(uchar *)(*(int *)(iVar1 + DAT_000fbfb4) + 0x1c8),6);
      _MaDevDrv_SendDspProgram(0xc1,(uchar *)(*(int *)(iVar1 + DAT_000fbfb8) + 0x1c2),6);
      return 0;
    case '\r':
      _MaDevDrv_SendDspProgram(0x4b,(uchar *)(*(int *)(iVar1 + DAT_000fbfb4) + 0x150),6);
      _MaDevDrv_SendDspProgram(0xad,(uchar *)(*(int *)(iVar1 + DAT_000fbfb8) + 0x14a),6);
      return 0;
    case '\x0e':
      MaDevDrv_SetDspRamAddress(0x76,0x76);
      _MaDevDrv_SendDspProgram(0x76,*(uchar **)(iVar1 + DAT_000fbfb8),6);
      MaDevDrv_SetDspRamAddress(0,0);
      return 0;
    }
  }
  return 0;
}

