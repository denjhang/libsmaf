/* MaSrm_SetLastData @ 001a993c 228B */


/* YAMAHA::MaSrm_SetLastData(unsigned int, _MASMW_LAST*) */

undefined8 YAMAHA::MaSrm_SetLastData(uint param_1,_MASMW_LAST *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 & 3;
  if (*(uint *)param_2 == 0) {
    lVar4 = DAT_005dd9b8 + (ulong)uVar1 * 0x78;
    *(undefined1 *)(lVar4 + 0x74) = 0;
LAB_001a996c:
    iVar2 = *(int *)(lVar4 + 0x4c);
joined_r0x001a99e8:
    uVar5 = 0;
    if (iVar2 == 2) {
      MaDevDrv_SetIrqCtrl((uchar)(1 << (ulong)uVar1),'\0');
      return 0;
    }
  }
  else {
    if (*(uint *)param_2 < 3) {
      uVar3 = *(uint *)(param_2 + 4);
      lVar4 = DAT_005dd9b8 + (ulong)uVar1 * 0x78;
      if (uVar3 <= *(uint *)(lVar4 + 0x10)) {
        *(uint *)(lVar4 + 0x70) = uVar3;
        if ((*(char *)(lVar4 + 0x74) != '\0') && (uVar3 == *(uint *)(lVar4 + 0xc))) {
          *(undefined1 *)(lVar4 + 0x74) = 2;
          goto LAB_001a996c;
        }
        iVar2 = *(int *)(lVar4 + 0x4c);
        *(undefined1 *)(lVar4 + 0x74) = 1;
        goto joined_r0x001a99e8;
      }
    }
    uVar5 = 0xfffffffe;
  }
  return uVar5;
}

