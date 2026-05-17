/* MaResMgr_GetNumFree3D @ 0023187c 64B */


/* YAMAHA::MaResMgr_GetNumFree3D() */

char YAMAHA::MaResMgr_GetNumFree3D(void)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_00748f10 + 0x1425) == '\0';
  if (*(char *)(DAT_00748f10 + 0x1426) == '\0') {
    cVar1 = cVar1 + '\x01';
  }
  if (*(char *)(DAT_00748f10 + 0x1427) == '\0') {
    cVar1 = cVar1 + '\x01';
  }
  if (*(char *)(DAT_00748f10 + 0x1428) == '\0') {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

