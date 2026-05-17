/* MaDsp_ExtCtrl @ 000db7dc 284B */


/* YAMAHA::MaDsp_ExtCtrl(unsigned int, unsigned int, void*) */

undefined4 YAMAHA::MaDsp_ExtCtrl(uint param_1,uint param_2,void *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 1) {
    return 0xfffffffe;
  }
  if (param_3 == (void *)0x0) {
    iVar2 = *(int *)(DAT_000db8fc + 0xdb8dc);
    *(undefined4 *)(iVar2 + 0x36c) = 0;
    *(undefined4 *)(iVar2 + 0x370) = 0;
    *(undefined1 *)(iVar2 + 0x374) = 0;
    if (*(char *)(iVar2 + 9) != '\t') {
      return 0;
    }
  }
  else {
    if (param_2 < 0x24) {
      return 0xfffffffe;
    }
    if (*(char *)param_3 != 'A') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 1) != 'E') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 2) != 'C') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 3) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 9) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 8) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 4) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 5) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 6) != '\x03') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 7) != '\x14') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 0x10) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 0x11) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 0x12) != '\x02') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 0x13) != '@') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 600) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 0x259) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 0x25a) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 0x25b) != -0x40) {
      return 0xfffffffe;
    }
    if (param_2 != 0x31c) {
      return 0xfffffffe;
    }
    if (2 < *(byte *)((int)param_3 + 10)) {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 0xc) != 'D') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 0xd) != '0') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 0x254) != 'D') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 0x255) != '1') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 0xb) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 0xe) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 0xf) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 0x256) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((int)param_3 + 599) != '\0') {
      return 0xfffffffe;
    }
    iVar2 = *(int *)(DAT_000db8f8 + 0xdb8ac);
    *(int *)(iVar2 + 0x36c) = (int)param_3 + 0x14;
    *(int *)(iVar2 + 0x370) = (int)param_3 + 0x25c;
    *(undefined1 *)(iVar2 + 0x374) = *(undefined1 *)((int)param_3 + 10);
    if (*(char *)(iVar2 + 9) != '\t') {
      return 0;
    }
  }
  uVar1 = lup_calc('\x02',0xfc);
  return uVar1;
}

