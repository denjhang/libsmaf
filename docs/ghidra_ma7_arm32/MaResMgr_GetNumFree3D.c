/* MaResMgr_GetNumFree3D @ 000ea41c 62B */


/* YAMAHA::MaResMgr_GetNumFree3D() */

int YAMAHA::MaResMgr_GetNumFree3D(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_000ea45c + 0xea422);
  iVar2 = 1 - (uint)*(byte *)(iVar1 + 0x1425);
  if (1 < *(byte *)(iVar1 + 0x1425)) {
    iVar2 = 0;
  }
  if (*(char *)(iVar1 + 0x1426) == '\0') {
    iVar2 = iVar2 + 1;
  }
  if (*(char *)(iVar1 + 0x1427) == '\0') {
    iVar2 = iVar2 + 1;
  }
  if (*(char *)(iVar1 + 0x1428) == '\0') {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

