/* Mapi_Dtmf_Close @ 00189120 376B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::Mapi_Dtmf_Close(int) */

int YAMAHA::Mapi_Dtmf_Close(int param_1)

{
  int iVar1;
  
  mapimachdep_LockApi();
  if (DAT_00577e10 != '\0') {
    if (param_1 != 0) {
      mapimachdep_UnlockApi();
      return -2;
    }
    if (DAT_00578764 != 0) {
      MaSmw_Stop(0x500,(void *)0x0);
      iVar1 = MaSmw_Close(0x500,(void *)0x0);
      if (-1 < iVar1) {
        iVar1 = MaSmw_Unload(0x500,(void *)0x0);
        if (-1 < iVar1) {
          _DAT_00578780 = _UNK_001892b8;
          _DAT_00578778 = _DAT_001892b0;
          _DAT_00578790 = _UNK_001892c8;
          _DAT_00578788 = _DAT_001892c0;
          _DAT_005787a0 = _UNK_001892d8;
          _DAT_00578798 = _DAT_001892d0;
          _DAT_005787b0 = _UNK_001892e8;
          _DAT_005787a8 = _DAT_001892e0;
          _DAT_005787c0 = _UNK_001892a8;
          _DAT_005787b8 = _DAT_001892a0;
          _DAT_005787d0 = _UNK_001892b8;
          _DAT_005787c8 = _DAT_001892b0;
          _DAT_005787e0 = _UNK_001892c8;
          _DAT_005787d8 = _DAT_001892c0;
          _DAT_005787f0 = _UNK_001892d8;
          _DAT_005787e8 = _DAT_001892d0;
          _DAT_00578800 = _UNK_001892e8;
          _DAT_005787f8 = _DAT_001892e0;
          _DAT_00578810 = _UNK_001892a8;
          _DAT_00578808 = _DAT_001892a0;
          _DAT_00578820 = _UNK_001892b8;
          _DAT_00578818 = _DAT_001892b0;
          _DAT_00578830 = _UNK_001892c8;
          _DAT_00578828 = _DAT_001892c0;
          _DAT_00578840 = _UNK_001892d8;
          _DAT_00578838 = _DAT_001892d0;
          _DAT_00578850 = _UNK_001892e8;
          _DAT_00578848 = _DAT_001892e0;
          _DAT_00578860 = _UNK_001892a8;
          _DAT_00578858 = _DAT_001892a0;
          _DAT_00578870 = _UNK_001892b8;
          _DAT_00578868 = _DAT_001892b0;
          _DAT_00578880 = _UNK_001892c8;
          _DAT_00578878 = _DAT_001892c0;
          _DAT_00578890 = _UNK_001892d8;
          _DAT_00578888 = _DAT_001892d0;
          _DAT_005788a0 = _UNK_001892e8;
          _DAT_00578898 = _DAT_001892e0;
          _DAT_00578770 = _UNK_001892a8;
          _DAT_00578768 = _DAT_001892a0;
          DAT_00577e36 = DAT_00577e36 + -1;
          DAT_00577eb8 = 0;
          DAT_00578764 = 0;
        }
      }
      mapimachdep_UnlockApi();
      return iVar1;
    }
  }
  mapimachdep_UnlockApi();
  return -8;
}

