/* MaAudCnv_Ctrl @ 001b4ff4 260B */


/* YAMAHA::MaAudCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

void YAMAHA::MaAudCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined1 local_19;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
     (lVar2 = *(long *)(param_1 + 8), param_4 != (void *)0x0)) {
    if (lVar2 != 0) {
      if (param_2 == 5) {
        uVar1 = 0;
        *(undefined4 *)param_4 = *(undefined4 *)(lVar2 + 0x4c);
      }
      else if (param_2 == 10) {
        local_38 = *(undefined8 *)(lVar2 + 0x18);
        local_30 = *(undefined4 *)(lVar2 + 0x20);
        local_28 = *(undefined8 *)(lVar2 + 0x28);
        local_1c = *(undefined2 *)param_4;
        local_1a = *(undefined1 *)((long)param_4 + 2);
        local_19 = *(undefined1 *)((long)param_4 + 3);
        local_18 = *(undefined8 *)((long)param_4 + 8);
        local_10 = *(undefined4 *)((long)param_4 + 0x10);
        local_20 = *(undefined4 *)(lVar2 + 0x30);
        uVar1 = malib_GetContentsData((_MALIBGETCINFO *)&local_38);
        uVar3 = (uint)(lVar2 == 0);
        if ((int)uVar1 < 1) {
          *(uint *)((long)param_4 + 0x14) = uVar3;
        }
        else {
          *(int *)((long)param_4 + 0x14) = (int)uVar1;
          uVar1 = (ulong)uVar3;
        }
      }
      else {
        uVar1 = 0xffffffff;
      }
      goto LAB_001b503c;
    }
  }
  uVar1 = 0xfffffffe;
LAB_001b503c:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

