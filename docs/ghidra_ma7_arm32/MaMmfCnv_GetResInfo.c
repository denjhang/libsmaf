/* MaMmfCnv_GetResInfo @ 000b5c34 716B */


/* YAMAHA::MaMmfCnv_GetResInfo(_MACNV_SEQ_INFO*) */

uint YAMAHA::MaMmfCnv_GetResInfo(_MACNV_SEQ_INFO *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) || (iVar3 = *(int *)(param_1 + 4), iVar3 == 0)) {
    return 0xfffffffe;
  }
  if (*(char *)(iVar3 + 8) != '\x02') {
    return 0xffffffff;
  }
  iVar2 = iVar3 + 0x2190;
  if (*(char *)(iVar3 + 0x1c74) == '\x01') {
    uVar4 = 4;
  }
  else {
    uVar4 = (uint)(*(char *)(iVar3 + 0x1c74) == '\x02');
  }
  iVar5 = *(int *)(iVar3 + 0xc2c);
  if (*(char *)(iVar3 + 0x1c76) != '\x10') {
    uVar4 = uVar4 | 0x40;
  }
  if (iVar5 == 2) {
    uVar4 = uVar4 | 0x1000000;
  }
  else if (iVar5 == 3) {
    uVar4 = uVar4 | 0x2000000;
  }
  else if (iVar5 == 5) {
    uVar4 = uVar4 | 0x4000000;
    MaSndDrv_SetAlCh(param_1,(uint)*(byte *)(iVar3 + 0x1c75));
  }
  else if (iVar5 == 7) {
    if ((*(int *)(iVar3 + 0x1c9c) == 0) && (*(int *)(iVar3 + 0x1ca8) == 0)) {
      uVar4 = uVar4 | 0x100;
    }
    else {
      uVar4 = uVar4 | 0x6100;
    }
    cVar1 = '\0';
    puVar6 = (undefined1 *)(iVar3 + 0x1c77);
    do {
      puVar6 = puVar6 + 1;
      switch(*puVar6) {
      case 2:
        uVar4 = uVar4 | 0x200;
        break;
      case 3:
        uVar4 = uVar4 | 0x400;
        break;
      case 4:
        uVar4 = uVar4 | 0x800;
        break;
      case 5:
        uVar4 = uVar4 | 0x1000;
      }
      cVar1 = cVar1 + '\x01';
    } while (cVar1 != ' ');
  }
  if (((*(byte *)(iVar3 + 0x21a3) & 7) == 0) && ((*(byte *)(iVar3 + 0x21c3) & 7) == 0)) {
    iVar5 = 0x40;
    do {
      if ((((((*(byte *)(iVar2 + iVar5 + 0x13) & 7) != 0) ||
            ((*(byte *)(iVar2 + iVar5 + 0x20 + 0x13) & 7) != 0)) ||
           ((*(byte *)(iVar2 + iVar5 + 0x20 + 0x33) & 7) != 0)) ||
          ((((*(byte *)(iVar2 + iVar5 + 0x73) & 7) != 0 ||
            ((*(byte *)(iVar2 + iVar5 + 0x93) & 7) != 0)) ||
           (((*(byte *)(iVar2 + iVar5 + 0xb3) & 7) != 0 ||
            (((*(byte *)(iVar2 + iVar5 + 0xd3) & 7) != 0 ||
             ((*(byte *)(iVar2 + iVar5 + 0xf3) & 7) != 0)))))))) ||
         (((*(byte *)(iVar2 + iVar5 + 0x113) & 7) != 0 ||
          ((*(byte *)(iVar5 + iVar2 + 0x133) & 7) != 0)))) goto LAB_000b5e8c;
      iVar5 = iVar5 + 0x140;
    } while (iVar5 != 0x400);
  }
  else {
LAB_000b5e8c:
    uVar4 = uVar4 | 0x8000;
  }
  if ((((((*(char *)(iVar3 + 0x21a4) != '\x01') && (*(char *)(iVar3 + 0x21c4) != '\x01')) &&
        (*(char *)(iVar3 + 0x21e4) != '\x01')) &&
       ((*(char *)(iVar3 + 0x2204) != '\x01' && (*(char *)(iVar3 + 0x2224) != '\x01')))) &&
      ((((*(char *)(iVar3 + 0x2244) != '\x01' &&
         ((*(char *)(iVar3 + 0x2264) != '\x01' && (*(char *)(iVar3 + 0x2284) != '\x01')))) &&
        (*(char *)(iVar3 + 0x22a4) != '\x01')) &&
       ((((*(char *)(iVar3 + 0x22c4) != '\x01' && (*(char *)(iVar3 + 0x22e4) != '\x01')) &&
         (*(char *)(iVar3 + 0x2304) != '\x01')) &&
        ((*(char *)(iVar3 + 0x2324) != '\x01' && (*(char *)(iVar3 + 0x2344) != '\x01')))))))) &&
     ((((*(char *)(iVar3 + 0x2364) != '\x01' &&
        ((*(char *)(iVar3 + 0x2384) != '\x01' && (*(char *)(iVar3 + 0x23a4) != '\x01')))) &&
       ((*(char *)(iVar3 + 0x23c4) != '\x01' &&
        (((*(char *)(iVar3 + 0x23e4) != '\x01' && (*(char *)(iVar3 + 0x2404) != '\x01')) &&
         (*(char *)(iVar3 + 0x2424) != '\x01')))))) &&
      (((((*(char *)(iVar3 + 0x2444) != '\x01' && (*(char *)(iVar3 + 0x2464) != '\x01')) &&
         ((*(char *)(iVar3 + 0x2484) != '\x01' &&
          ((*(char *)(iVar3 + 0x24a4) != '\x01' && (*(char *)(iVar3 + 0x24c4) != '\x01')))))) &&
        (*(char *)(iVar3 + 0x24e4) != '\x01')) &&
       ((((*(char *)(iVar3 + 0x2504) != '\x01' && (*(char *)(iVar3 + 0x2524) != '\x01')) &&
         (*(char *)(iVar3 + 0x2544) != '\x01')) &&
        ((*(char *)(iVar3 + 0x2564) != '\x01' && (*(char *)(iVar3 + 0x2584) != '\x01')))))))))) {
    return uVar4;
  }
  return uVar4 | 0x10000;
}

