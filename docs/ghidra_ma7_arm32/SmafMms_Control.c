/* SmafMms_Control @ 00090624 534B */


/* YAMAHA::SmafMms_Control(int, unsigned int, void*) */

int YAMAHA::SmafMms_Control(int param_1,uint param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  uchar uVar3;
  void **ppvVar4;
  undefined1 uVar5;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  void *local_18 [2];
  
  iVar1 = PreMms_Control(param_1,param_2,param_3);
  if (iVar1 != -0x65) {
    return iVar1;
  }
  uVar2 = param_1 & 0xf;
  local_28[0] = 0;
  local_20[0] = 0;
  local_18[0] = (void *)0x0;
  if (1 < uVar2) {
    return -1;
  }
  if (param_2 == 0x10100005) {
    ppvVar4 = (void **)0x0;
    uVar3 = '\x05';
  }
  else {
    uVar5 = SUB41(param_3,0);
    if (param_2 < 0x10100006) {
      if (param_2 == 0x100100) {
        return *(int *)(DAT_00090840 + uVar2 * 4 + 0x90808);
      }
      if (param_2 < 0x100101) {
        ppvVar4 = param_3;
        if (param_2 == 0x1000b) {
          uVar3 = '\v';
        }
        else if (param_2 < 0x1000c) {
          if (param_2 != 0x1000a) {
            return -1;
          }
          uVar3 = '\n';
        }
        else if (param_2 == 0x10020) {
          uVar3 = ' ';
          ppvVar4 = (void **)0x0;
        }
        else {
          if (param_2 != 0x100006) {
            return -1;
          }
          uVar3 = '\x06';
          ppvVar4 = (void **)0x0;
        }
      }
      else if (param_2 == 0x10010002) {
        local_28[0] = uVar5;
        if (param_3 == (void *)0x0) {
          local_28[0] = 0;
        }
        uVar3 = '\x02';
        ppvVar4 = (void **)local_28;
      }
      else if (param_2 < 0x10010003) {
        if (param_2 != 0x10010000) {
          return -1;
        }
        if (param_3 == (void *)0x0) {
          uVar5 = 0;
        }
        uVar3 = '\0';
        ppvVar4 = (void **)local_20;
        local_20[0] = uVar5;
      }
      else if (param_2 == 0x1001001f) {
        if (param_3 == (void *)0x0) {
          uVar5 = 0;
        }
        uVar3 = '\x1f';
        ppvVar4 = (void **)local_20;
        local_20[0] = uVar5;
      }
      else {
        if (param_2 != 0x10100004) {
          return -1;
        }
        ppvVar4 = (void **)0x0;
        uVar3 = '\x04';
      }
    }
    else {
      if (param_2 == 0x10100600) {
LAB_0009076c:
        *(undefined2 *)param_3 = 0;
        *(undefined2 *)((int)param_3 + 2) = 0;
        return 0;
      }
      if (param_2 < 0x10100601) {
        if (param_2 == 0x10100300) {
          *(undefined2 *)param_3 = 0;
          *(undefined2 *)((int)param_3 + 2) = 0;
          *(undefined2 *)((int)param_3 + 4) = 0;
          *(undefined2 *)((int)param_3 + 6) = 0;
          *(undefined2 *)((int)param_3 + 8) = 0;
          *(undefined2 *)((int)param_3 + 10) = 0;
          return 0;
        }
        if (param_2 < 0x10100301) {
          if (param_2 == 0x10100200) {
            return 0;
          }
        }
        else if ((param_2 == 0x10100400) || (param_2 == 0x10100500)) {
          return 0;
        }
        return -1;
      }
      if (param_2 == 0x10110001) {
        local_20[0] = uVar5;
        if (param_3 == (void *)0x0) {
          local_20[0] = 0;
        }
        uVar3 = '\x01';
        ppvVar4 = (void **)local_20;
      }
      else {
        if (param_2 < 0x10110002) {
          if (param_2 != 0x10100700) {
            if (param_2 != 0x10100800) {
              return -1;
            }
            return 0;
          }
          goto LAB_0009076c;
        }
        if (param_2 == 0x1011000d) {
          uVar3 = '\r';
          ppvVar4 = local_18;
          local_18[0] = param_3;
        }
        else {
          if (param_2 != 0x1011001b) {
            return -1;
          }
          if ((param_3 == (void *)0x0) || (0x100 < (int)param_3 + 1U)) {
            return -2;
          }
          if (param_3 == (void *)0xffffffff) {
            uVar5 = 0;
          }
          uVar3 = '\x1b';
          ppvVar4 = (void **)local_20;
          local_20[0] = uVar5;
        }
      }
    }
  }
  iVar1 = MaSound_Control(*(int *)(DAT_0009083c + 0x9072e),uVar2,uVar3,ppvVar4,(void *)0x0);
  return iVar1;
}

