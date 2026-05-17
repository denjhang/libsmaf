/* MaDsp_Term @ 002165e0 64B */


/* YAMAHA::MaDsp_Term() */

undefined8 YAMAHA::MaDsp_Term(void)

{
  MaDsp_3DEngTerm((_MASMW_P3DASNDSRCMOVE *)&DAT_005e22c0);
  MaDsp_3DEngTerm((_MASMW_P3DASNDSRCMOVE *)&DAT_005e24c4);
  MaDsp_3DEngTerm((_MASMW_P3DASNDSRCMOVE *)&DAT_005e26c8);
  MaDsp_3DEngTerm((_MASMW_P3DASNDSRCMOVE *)&DAT_005e28cc);
  return 0;
}

