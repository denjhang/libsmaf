/* MaSound_Control @ 0018b144 936B */


/* YAMAHA::MaSound_Control(int, int, unsigned char, void*, void*) */

void YAMAHA::MaSound_Control(int param_1,int param_2,uchar param_3,void *param_4,void *param_5)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint local_24;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined8 local_18;
  undefined4 local_10;
  uint local_c;
  long local_8;
  
  local_24 = 0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (DAT_0057c414 != -2) goto switchD_0018b24c_caseD_3;
  if (param_1 == 1) {
    lVar6 = 0;
LAB_0018b1c8:
    if ((uint)param_2 < 2) {
      if ((byte)(&DAT_0057c43c)[lVar6 * 0x38 + (long)param_2] == 0) {
switchD_0018b24c_caseD_3:
        uVar5 = 0xffffffff;
      }
      else {
        switch(param_3) {
        case '\x04':
        case '\x05':
        case '\x06':
        case '\x0f':
        case '\x10':
        case ' ':
        case '-':
          break;
        default:
          if (param_4 == (void *)0x0) goto LAB_0018b198;
        }
        uVar4 = *(uint *)(&DAT_0048a420 + ((long)param_2 + lVar6 * 2) * 4);
        switch(param_3) {
        case '\0':
          uVar5 = MaSmw_Ctrl(uVar4,0x2c,(uint)*(byte *)param_4,(void *)0x0);
          break;
        case '\x01':
          uVar5 = 0xfffffffe;
          if ((*(byte *)param_4 - 0x46 & 0xff) < 0x3d) {
            uVar5 = MaSmw_Ctrl(uVar4,0x29,(uint)*(byte *)param_4,(void *)0x0);
          }
          break;
        case '\x02':
          uVar5 = MaSmw_Ctrl(uVar4,0x30,(int)*(char *)param_4,(void *)0x0);
          break;
        default:
          goto switchD_0018b24c_caseD_3;
        case '\x04':
          uVar3 = MaSmw_Ctrl(uVar4,0x2b,0,&local_24);
          uVar4 = local_24;
          if (uVar3 != 0) {
            uVar4 = uVar3;
          }
          uVar5 = (ulong)uVar4;
          break;
        case '\x05':
          MaSmw_Ctrl(uVar4,5,0,&local_24);
          uVar5 = (ulong)local_24;
          break;
        case '\x06':
          uVar5 = (ulong)(uint)(byte)(&DAT_0057c43c)[lVar6 * 0x38 + (long)param_2];
          break;
        case '\n':
          local_20 = *(undefined2 *)param_4;
          local_1e = *(undefined1 *)((long)param_4 + 2);
          local_1d = *(undefined1 *)((long)param_4 + 3);
          local_18 = *(undefined8 *)((long)param_4 + 8);
          local_10 = *(undefined4 *)((long)param_4 + 0x10);
          uVar4 = MaSmw_Ctrl(uVar4,10,0,&local_20);
          if (uVar4 != 0) {
            local_c = uVar4;
          }
          uVar5 = (ulong)local_c;
          break;
        case '\v':
          uVar5 = MaSmw_Ctrl(uVar4,0xb,0,param_4);
          break;
        case '\r':
          local_24 = *(uint *)param_4;
          uVar5 = MaSmw_Ctrl(uVar4,0x35,local_24,(void *)0x0);
          break;
        case '\x0e':
          uVar5 = MaSmw_Ctrl(uVar4,0x2e,(uint)*(byte *)param_4,(void *)0x0);
          break;
        case '\x1b':
          bVar2 = *(byte *)param_4;
          uVar5 = MaSmw_Ctrl(uVar4,0x34,(uint)bVar2,(void *)0x0);
          if ((int)uVar5 == 0) {
            (&DAT_0057c438)[lVar6 * 0xe] = (uint)bVar2;
          }
          break;
        case '\x1f':
          uVar5 = MaSmw_Ctrl(uVar4,0x21,(uint)*(byte *)param_4,(void *)0x0);
          break;
        case ' ':
          uVar5 = MaSmw_Ctrl(uVar4,0x51,0,&local_24);
          if (((int)uVar5 == 0) && (uVar5 = (ulong)local_24, 0xf < local_24)) {
            uVar5 = 0xffffffff;
          }
          break;
        case '(':
          uVar5 = 0xfffffffe;
          if (((*(int *)param_4 - 1U < 6) && (uVar4 = *(uint *)((long)param_4 + 4), uVar4 < 2)) &&
             (iVar1 = *(int *)((long)param_4 + 8), iVar1 - 4000U < 0xabe1)) {
            uVar5 = 0;
            (&DAT_0057c440)[lVar6 * 0xe] = *(int *)param_4;
            (&DAT_0057c444)[lVar6 * 0xe] = uVar4;
            (&DAT_0057c448)[lVar6 * 0xe] = iVar1;
          }
          break;
        case ',':
          uVar5 = MaSmw_Ctrl(uVar4,0x71,0,param_4);
          break;
        case '-':
          uVar5 = MaSmw_Ctrl(uVar4,0x79,0,(void *)0x0);
          break;
        case '/':
          local_24 = *(uint *)param_4;
          uVar5 = MaSmw_Ctrl(uVar4,0x27,local_24,(void *)0x0);
          break;
        case '2':
          local_24 = *(uint *)param_4;
          uVar5 = MaSmw_Ctrl(uVar4,0x68,local_24,(void *)0x0);
          break;
        case '3':
          uVar5 = MaSmw_Ctrl(uVar4,0x69,0,param_4);
        }
      }
      goto LAB_0018b19c;
    }
  }
  else {
    lVar6 = 1;
    if (param_1 == 0xd) goto LAB_0018b1c8;
  }
LAB_0018b198:
  uVar5 = 0xfffffffe;
LAB_0018b19c:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

