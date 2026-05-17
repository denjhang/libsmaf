/* MaDsp_ExtCtrl @ 0021c070 408B */


/* YAMAHA::MaDsp_ExtCtrl(unsigned int, unsigned int, void*) */

undefined8 YAMAHA::MaDsp_ExtCtrl(uint param_1,uint param_2,void *param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_lprm_00567530;
  if (param_1 != 1) {
    return 0xfffffffe;
  }
  if (param_3 == (void *)0x0) {
    cVar1 = PTR_lprm_00567530[9];
    *(undefined8 *)(PTR_lprm_00567530 + 0x370) = 0;
    *(undefined8 *)(puVar2 + 0x378) = 0;
    puVar2[0x380] = 0;
  }
  else {
    if (param_2 < 0x24) {
      return 0xfffffffe;
    }
    if (*(char *)param_3 != 'A') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 1) != 'E') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 2) != 'C') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 3) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 9) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 8) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 4) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 5) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 6) != '\x03') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 7) != '\x14') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 0x10) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 0x11) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 0x12) != '\x02') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 0x13) != '@') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 600) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 0x259) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 0x25a) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 0x25b) != -0x40) {
      return 0xfffffffe;
    }
    if (param_2 != 0x31c) {
      return 0xfffffffe;
    }
    if (2 < *(byte *)((long)param_3 + 10)) {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 0xc) != 'D') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 0xd) != '0') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 0x254) != 'D') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 0x255) != '1') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 0xb) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 0xe) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 0xf) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 0x256) != '\0') {
      return 0xfffffffe;
    }
    if (*(char *)((long)param_3 + 599) != '\0') {
      return 0xfffffffe;
    }
    *(long *)(PTR_lprm_00567530 + 0x370) = (long)param_3 + 0x14;
    *(long *)(puVar2 + 0x378) = (long)param_3 + 0x25c;
    cVar1 = puVar2[9];
    puVar2[0x380] = *(undefined1 *)((long)param_3 + 10);
  }
  if (cVar1 == '\t') {
    uVar3 = lup_calc('\x02',0xfc);
    return uVar3;
  }
  return 0;
}

