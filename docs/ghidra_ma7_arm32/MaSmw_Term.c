/* MaSmw_Term @ 000885f0 218B */


/* YAMAHA::MaSmw_Term() */

uint YAMAHA::MaSmw_Term(void)

{
  uint *puVar1;
  uint uVar2;
  
  machdep_EnterCriticalSection();
  puVar1 = *(uint **)(DAT_000886cc + 0x885fc);
  if (((((((*puVar1 < 2) && (puVar1[0x26] < 2)) && (puVar1[0x4c] < 2)) &&
        (((puVar1[0x72] < 2 && (puVar1[0x98] < 2)) &&
         ((puVar1[0xbe] < 2 && ((puVar1[0xe4] < 2 && (puVar1[0x10a] < 2)))))))) &&
       ((puVar1[0x130] < 2 && (((puVar1[0x156] < 2 && (puVar1[0x17c] < 2)) && (puVar1[0x1a2] < 2))))
       )) && (((puVar1[0x1c8] < 2 && (puVar1[0x1ee] < 2)) &&
              (((puVar1[0x214] < 2 && ((puVar1[0x23a] < 2 && (puVar1[0x260] < 2)))) &&
               (puVar1[0x286] < 2)))))) &&
     ((((puVar1[0x2ac] < 2 && (puVar1[0x2d2] < 2)) && (puVar1[0x2f8] < 2)) && (puVar1[0x31e] < 2))))
  {
    MaDva_End();
    uVar2 = MaDevDrv_Terminate();
    machdep_LeaveCriticalSection();
    return uVar2 & (int)uVar2 >> 0x1f;
  }
  machdep_LeaveCriticalSection();
  return 0xffffffff;
}

