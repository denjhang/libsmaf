/* LSendDbex @ 00248514 396B */


/* YAMAHA::LSendDbex(unsigned char) */

undefined8 YAMAHA::LSendDbex(uchar param_1)

{
  if (*PTR_lgsendoff_00567b48 == '\0') {
    switch(param_1) {
    case '\n':
      _MaDevDrv_SendDspProgram(100,PTR_gabProgDBEX_SFX1_00567aa0 + 0x1e6,6);
      _MaDevDrv_SendDspProgram(0xc6,PTR_gabProgDBEX_SFX0_00567708 + 0x1e0,6);
      return 0;
    case '\v':
      _MaDevDrv_SendDspProgram(0x5e,PTR_gabProgDBEX_SFX1_00567aa0 + 0x1c2,6);
      _MaDevDrv_SendDspProgram(0xc0,PTR_gabProgDBEX_SFX0_00567708 + 0x1bc,6);
      return 0;
    case '\f':
      _MaDevDrv_SendDspProgram(0x5f,PTR_gabProgDBEX_SFX1_00567aa0 + 0x1c8,6);
      _MaDevDrv_SendDspProgram(0xc1,PTR_gabProgDBEX_SFX0_00567708 + 0x1c2,6);
      return 0;
    case '\r':
      _MaDevDrv_SendDspProgram(0x4b,PTR_gabProgDBEX_SFX1_00567aa0 + 0x150,6);
      _MaDevDrv_SendDspProgram(0xad,PTR_gabProgDBEX_SFX0_00567708 + 0x14a,6);
      return 0;
    case '\x0e':
      MaDevDrv_SetDspRamAddress(0x76,0x76);
      _MaDevDrv_SendDspProgram(0x76,PTR_gabProgDBEX_SFX0_00567708,6);
      MaDevDrv_SetDspRamAddress(0,0);
      return 0;
    }
  }
  return 0;
}

