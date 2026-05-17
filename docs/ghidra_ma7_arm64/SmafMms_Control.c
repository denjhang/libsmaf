/* SmafMms_Control @ 001b10fc 928B */


/* YAMAHA::SmafMms_Control(int, unsigned int, void*) */

void YAMAHA::SmafMms_Control(int param_1,uint param_2,void *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  uchar uVar4;
  undefined4 uVar5;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  uVar3 = PreMms_Control(param_1,param_2,param_3);
  if ((int)uVar3 != -0x65) goto LAB_001b1134;
  uVar1 = param_1 & 0xf;
  local_e = 0;
  local_d = 0;
  local_c = 0;
  if (1 < uVar1) goto LAB_001b11fc;
  if (param_2 == 0x10100005) {
    param_3 = (undefined4 *)0x0;
    uVar4 = '\x05';
  }
  else {
    uVar5 = SUB84(param_3,0);
    uVar2 = SUB81(param_3,0);
    if (param_2 < 0x10100006) {
      if (param_2 == 0x100100) {
        uVar3 = (ulong)(uint)(&DAT_005ddbb8)[(int)uVar1];
        goto LAB_001b1134;
      }
      if (param_2 < 0x100101) {
        if (param_2 == 0x1000b) {
          uVar4 = '\v';
        }
        else if (param_2 < 0x1000c) {
          uVar4 = '\n';
          if (param_2 != 0x1000a) {
            uVar3 = 0xffffffff;
            goto LAB_001b1134;
          }
        }
        else if (param_2 == 0x10020) {
          param_3 = (undefined4 *)0x0;
          uVar4 = ' ';
        }
        else {
          param_3 = (undefined4 *)0x0;
          uVar4 = '\x06';
          if (param_2 != 0x100006) goto LAB_001b11fc;
        }
      }
      else if (param_2 == 0x10010002) {
        if (param_3 == (void *)0x0) {
          uVar2 = 0;
        }
        uVar4 = '\x02';
        param_3 = &local_e;
        local_e = uVar2;
      }
      else if (param_2 < 0x10010003) {
        if (param_2 != 0x10010000) goto LAB_001b11fc;
        if (param_3 == (void *)0x0) {
          uVar2 = 0;
        }
        uVar4 = '\0';
        param_3 = &local_d;
        local_d = uVar2;
      }
      else if (param_2 == 0x1001001f) {
        if (param_3 == (void *)0x0) {
          uVar2 = 0;
        }
        uVar4 = '\x1f';
        param_3 = &local_d;
        local_d = uVar2;
      }
      else {
        param_3 = (undefined4 *)0x0;
        uVar4 = '\x04';
        if (param_2 != 0x10100004) goto LAB_001b11fc;
      }
    }
    else {
      if (param_2 == 0x10100600) {
LAB_001b1348:
        *(undefined2 *)param_3 = 0;
        uVar3 = 0;
        *(undefined2 *)((long)param_3 + 2) = 0;
        goto LAB_001b1134;
      }
      if (param_2 < 0x10100601) {
        if (param_2 == 0x10100300) {
          *(undefined2 *)param_3 = 0;
          uVar3 = 0;
          *(undefined2 *)((long)param_3 + 2) = 0;
          *(undefined2 *)((long)param_3 + 4) = 0;
          *(undefined2 *)((long)param_3 + 6) = 0;
          *(undefined2 *)((long)param_3 + 8) = 0;
          *(undefined2 *)((long)param_3 + 10) = 0;
          goto LAB_001b1134;
        }
        if (param_2 < 0x10100301) {
          if (param_2 == 0x10100200) {
            uVar3 = 0;
            goto LAB_001b1134;
          }
        }
        else if ((param_2 == 0x10100400) || (param_2 == 0x10100500)) {
          uVar3 = 0;
          goto LAB_001b1134;
        }
LAB_001b11fc:
        uVar3 = 0xffffffff;
        goto LAB_001b1134;
      }
      if (param_2 == 0x10110001) {
        if (param_3 == (void *)0x0) {
          uVar2 = 0;
        }
        uVar4 = '\x01';
        param_3 = &local_d;
        local_d = uVar2;
      }
      else {
        if (param_2 < 0x10110002) {
          if (param_2 == 0x10100700) goto LAB_001b1348;
          if (param_2 == 0x10100800) {
            uVar3 = 0;
            goto LAB_001b1134;
          }
          goto LAB_001b11fc;
        }
        if (param_2 == 0x1011000d) {
          uVar4 = '\r';
          if (param_3 == (void *)0x0) {
            uVar5 = 0;
          }
          param_3 = &local_c;
          local_c = uVar5;
        }
        else {
          if (param_2 != 0x1011001b) goto LAB_001b11fc;
          if (param_3 == (void *)0x0) {
            uVar3 = 0xfffffffe;
            goto LAB_001b1134;
          }
          uVar3 = 0xfffffffe;
          if (0x100 < (long)param_3 + 1U) goto LAB_001b1134;
          if (param_3 == (void *)0xffffffffffffffff) {
            uVar2 = 0;
          }
          uVar4 = '\x1b';
          param_3 = &local_d;
          local_d = uVar2;
        }
      }
    }
  }
  uVar3 = MaSound_Control(DAT_005ddba0,uVar1,uVar4,param_3,(void *)0x0);
LAB_001b1134:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

