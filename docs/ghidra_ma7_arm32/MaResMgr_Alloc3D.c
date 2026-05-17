/* MaResMgr_Alloc3D @ 000ea394 84B */


/* YAMAHA::MaResMgr_Alloc3D(unsigned int*) */

undefined4 YAMAHA::MaResMgr_Alloc3D(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == (uint *)0x0) {
    return 0xfffffffe;
  }
  iVar1 = *(int *)(DAT_000ea3e8 + 0xea3a0);
  if (*(char *)(iVar1 + 0x1425) == '\0') {
    uVar2 = 0;
  }
  else if (*(char *)(iVar1 + 0x1426) == '\0') {
    uVar2 = 1;
  }
  else if (*(char *)(iVar1 + 0x1427) == '\0') {
    uVar2 = 2;
  }
  else {
    if (*(char *)(iVar1 + 0x1428) != '\0') {
      return 0xfffffffd;
    }
    uVar2 = 3;
  }
  *(undefined1 *)(iVar1 + uVar2 + 0x1425) = 1;
  *param_1 = uVar2;
  return 0;
}

