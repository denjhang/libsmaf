/* MaDsp_Term @ 000d7954 42B */


/* YAMAHA::MaDsp_Term() */

undefined4 YAMAHA::MaDsp_Term(void)

{
  int iVar1;
  
  iVar1 = DAT_000d7980;
  MaDsp_3DEngTerm((_MASMW_P3DASNDSRCMOVE *)(DAT_000d7980 + 0xd7eec));
  MaDsp_3DEngTerm((_MASMW_P3DASNDSRCMOVE *)(iVar1 + 0xd80f0));
  MaDsp_3DEngTerm((_MASMW_P3DASNDSRCMOVE *)(iVar1 + 0xd82f4));
  MaDsp_3DEngTerm((_MASMW_P3DASNDSRCMOVE *)(iVar1 + 0xd84f8));
  return 0;
}

