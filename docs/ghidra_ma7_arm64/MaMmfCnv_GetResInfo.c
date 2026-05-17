/* MaMmfCnv_GetResInfo @ 001eab84 1124B */


/* YAMAHA::MaMmfCnv_GetResInfo(_MACNV_SEQ_INFO*) */

uint YAMAHA::MaMmfCnv_GetResInfo(_MACNV_SEQ_INFO *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  uint uVar5;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) || (lVar4 = *(long *)(param_1 + 8), lVar4 == 0)) {
    uVar5 = 0xfffffffe;
  }
  else if (*(char *)(lVar4 + 0xc) == '\x02') {
    if (*(char *)(lVar4 + 0x2e54) == '\x01') {
      uVar2 = 4;
    }
    else {
      uVar2 = (uint)(*(char *)(lVar4 + 0x2e54) == '\x02');
    }
    iVar1 = *(int *)(lVar4 + 0xdf8);
    uVar5 = uVar2 | 0x40;
    if (*(char *)(lVar4 + 0x2e56) == '\x10') {
      uVar5 = uVar2;
    }
    if (iVar1 == 2) {
      uVar5 = uVar5 | 0x1000000;
    }
    else if (iVar1 == 3) {
      uVar5 = uVar5 | 0x2000000;
    }
    else if (iVar1 == 5) {
      uVar5 = uVar5 | 0x4000000;
      MaSndDrv_SetAlCh(param_1,(uint)*(byte *)(lVar4 + 0x2e55));
    }
    else if (iVar1 == 7) {
      if ((*(long *)(lVar4 + 0x2e80) == 0) && (*(long *)(lVar4 + 0x2e98) == 0)) {
        uVar5 = uVar5 | 0x100;
      }
      else {
        uVar5 = uVar5 | 0x6100;
      }
      puVar3 = (undefined1 *)(lVar4 + 0x2e58);
      do {
        switch(*puVar3) {
        case 2:
          uVar5 = uVar5 | 0x200;
          break;
        case 3:
          uVar5 = uVar5 | 0x400;
          break;
        case 4:
          uVar5 = uVar5 | 0x800;
          break;
        case 5:
          uVar5 = uVar5 | 0x1000;
        }
        puVar3 = puVar3 + 1;
      } while (puVar3 != (undefined1 *)(lVar4 + 0x2e78));
    }
    if ((((((((((*(byte *)(lVar4 + 0x358b) & 7) != 0) || ((*(byte *)(lVar4 + 0x35ab) & 7) != 0)) ||
             ((*(byte *)(lVar4 + 0x35cb) & 7) != 0)) ||
            (((*(byte *)(lVar4 + 0x35eb) & 7) != 0 || ((*(byte *)(lVar4 + 0x360b) & 7) != 0)))) ||
           (((*(byte *)(lVar4 + 0x362b) & 7) != 0 ||
            (((*(byte *)(lVar4 + 0x364b) & 7) != 0 || ((*(byte *)(lVar4 + 0x366b) & 7) != 0)))))) ||
          (((*(byte *)(lVar4 + 0x368b) & 7) != 0 ||
           (((((*(byte *)(lVar4 + 0x36ab) & 7) != 0 || ((*(byte *)(lVar4 + 0x36cb) & 7) != 0)) ||
             ((*(byte *)(lVar4 + 0x36eb) & 7) != 0)) ||
            ((((*(byte *)(lVar4 + 0x370b) & 7) != 0 || ((*(byte *)(lVar4 + 0x372b) & 7) != 0)) ||
             (((*(byte *)(lVar4 + 0x374b) & 7) != 0 ||
              (((*(byte *)(lVar4 + 0x376b) & 7) != 0 || ((*(byte *)(lVar4 + 0x378b) & 7) != 0)))))))
            ))))) || ((*(byte *)(lVar4 + 0x37ab) & 7) != 0)) ||
        ((((*(byte *)(lVar4 + 0x37cb) & 7) != 0 || ((*(byte *)(lVar4 + 0x37eb) & 7) != 0)) ||
         ((*(byte *)(lVar4 + 0x380b) & 7) != 0)))) ||
       ((((*(byte *)(lVar4 + 0x382b) & 7) != 0 || ((*(byte *)(lVar4 + 0x384b) & 7) != 0)) ||
        (((((*(byte *)(lVar4 + 0x386b) & 7) != 0 ||
           (((*(byte *)(lVar4 + 0x388b) & 7) != 0 || ((*(byte *)(lVar4 + 0x38ab) & 7) != 0)))) ||
          ((*(byte *)(lVar4 + 0x38cb) & 7) != 0)) ||
         (((((*(byte *)(lVar4 + 0x38eb) & 7) != 0 || ((*(byte *)(lVar4 + 0x390b) & 7) != 0)) ||
           ((*(byte *)(lVar4 + 0x392b) & 7) != 0)) ||
          (((*(byte *)(lVar4 + 0x394b) & 7) != 0 || ((*(byte *)(lVar4 + 0x396b) & 7) != 0))))))))))
    {
      uVar5 = uVar5 | 0x8000;
    }
    if (((((*(char *)(lVar4 + 0x358c) == '\x01') || (*(char *)(lVar4 + 0x35ac) == '\x01')) ||
         ((*(char *)(lVar4 + 0x35cc) == '\x01' ||
          (((*(char *)(lVar4 + 0x35ec) == '\x01' || (*(char *)(lVar4 + 0x360c) == '\x01')) ||
           (*(char *)(lVar4 + 0x362c) == '\x01')))))) ||
        (((*(char *)(lVar4 + 0x364c) == '\x01' || (*(char *)(lVar4 + 0x366c) == '\x01')) ||
         (((*(char *)(lVar4 + 0x368c) == '\x01' ||
           (((*(char *)(lVar4 + 0x36ac) == '\x01' || (*(char *)(lVar4 + 0x36cc) == '\x01')) ||
            ((*(char *)(lVar4 + 0x36ec) == '\x01' ||
             (((*(char *)(lVar4 + 0x370c) == '\x01' || (*(char *)(lVar4 + 0x372c) == '\x01')) ||
              (*(char *)(lVar4 + 0x374c) == '\x01')))))))) ||
          (((*(char *)(lVar4 + 0x376c) == '\x01' || (*(char *)(lVar4 + 0x378c) == '\x01')) ||
           (*(char *)(lVar4 + 0x37ac) == '\x01')))))))) ||
       (((((*(char *)(lVar4 + 0x37cc) == '\x01' || (*(char *)(lVar4 + 0x37ec) == '\x01')) ||
          ((*(char *)(lVar4 + 0x380c) == '\x01' ||
           (((((*(char *)(lVar4 + 0x382c) == '\x01' || (*(char *)(lVar4 + 0x384c) == '\x01')) ||
              (*(char *)(lVar4 + 0x386c) == '\x01')) ||
             ((*(char *)(lVar4 + 0x388c) == '\x01' || (*(char *)(lVar4 + 0x38ac) == '\x01')))) ||
            (*(char *)(lVar4 + 0x38cc) == '\x01')))))) ||
         ((*(char *)(lVar4 + 0x38ec) == '\x01' || (*(char *)(lVar4 + 0x390c) == '\x01')))) ||
        ((*(char *)(lVar4 + 0x392c) == '\x01' ||
         ((*(char *)(lVar4 + 0x394c) == '\x01' || (*(char *)(lVar4 + 0x396c) == '\x01')))))))) {
      return uVar5 | 0x10000;
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

