/* MaSmw_Start @ 0019fcc4 1288B */


/* YAMAHA::MaSmw_Start(unsigned int, void*) */

void YAMAHA::MaSmw_Start(uint param_1,void *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  char *pcVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  uchar local_48;
  byte local_47;
  undefined1 local_46;
  byte local_45;
  long local_8;
  
  uVar3 = param_1 & 0xff;
  uVar13 = (ulong)(param_1 >> 8) & 0xff;
  uVar12 = (uint)uVar13;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  machdep_EnterCriticalSection();
  lVar8 = DAT_0059a420;
  if (((uVar3 < 4) && (uVar12 < 9)) && ((uVar13 != 3 || (uVar3 == 0)))) {
    if ((byte)(&DAT_0048aa70)[(ulong)uVar3 + uVar13 * 4] != 0xff) {
      lVar14 = (ulong)(uint)(byte)(&DAT_0048aa70)[(ulong)uVar3 + uVar13 * 4] * 0xc0;
      lVar1 = DAT_0059a420 + lVar14;
      if ((*(int *)(DAT_0059a420 + lVar14) == 3) &&
         ((uVar12 != 1 || (-1 < *(char *)(lVar1 + 0x27))))) {
        bVar7 = (byte)param_1;
        pcVar11 = (char *)(lVar1 + 0x30);
        do {
          if ((byte)pcVar11[4] == 0) goto LAB_0019fdc8;
          uVar4 = (byte)pcVar11[4] & 3;
          *DAT_005a0050 = *DAT_005a0050 | 0x100 << (ulong)uVar4;
          MaDsp_3DCtrl(1,0xa6,uVar4,(void *)0x0);
          if (*pcVar11 != '\x01') goto LAB_0019fdc8;
          bVar5 = (&DAT_0048aa70)[(ulong)uVar3 + uVar13 * 4];
          lVar2 = DAT_0059a420 + (ulong)bVar5 * 0xc0;
          cVar6 = *(char *)(lVar2 + 0x2e);
          lVar15 = *(long *)(DAT_0059a428 + (ulong)bVar5 * 0x430 + 0x28);
          if (cVar6 == -1) goto switchD_001a02ec_caseD_5;
          *(char *)(lVar2 + 0x2f) = cVar6;
          switch(uVar13) {
          case 0:
          case 1:
            local_47 = bVar7 | 0x80;
            break;
          case 2:
          case 6:
            if (lVar15 != 0) {
              local_47 = *(char *)(lVar15 + 0x18) + 4U | 0x80;
              break;
            }
            goto switchD_001a02ec_caseD_5;
          case 3:
            local_47 = bVar7 + 8 | 0x80;
            break;
          case 4:
            local_47 = bVar7 * '\x02' + 9 | 0x80;
            break;
          default:
            goto switchD_001a02ec_caseD_5;
          case 8:
            local_47 = 0x8c;
          }
          local_48 = 0xf2;
          local_46 = 0xf9;
          if (cVar6 == '\x02') {
            local_45 = 0x80;
            if (((byte)(*(char *)(lVar2 + 0x38) - 1U) < 2) &&
               ((byte)(*(char *)(lVar2 + 0x39) - 1U) < 2)) {
              uVar9 = 0;
              bVar16 = 0x80;
              MaDsp_SfxCtrl(0,0x20180,0,(void *)0x1);
            }
            else {
              uVar9 = 0;
              bVar16 = 0x80;
            }
          }
          else {
            uVar9 = *(byte *)(lVar2 + 0x34) & 3;
            bVar16 = (byte)uVar9 | 0xc0;
            uVar9 = uVar9 + 2;
            local_45 = bVar16;
            if (((byte)(*(char *)(lVar2 + 0x38) - 1U) < 2) &&
               ((byte)(*(char *)(lVar2 + 0x39) - 1U) < 2)) {
              MaDsp_SfxCtrl(0,0x20180,uVar9,(void *)0x1);
            }
          }
          MaDevDrv_SendDirectPacket(&local_48,4);
          if (uVar12 < 2) {
            uVar9 = MaCmd_SetChOutputs(uVar3,uVar9,&local_48);
            MaDevDrv_SendDirectPacket(&local_48,uVar9);
            if (lVar15 != 0) {
              if (((*(byte *)(lVar15 + 0x18) < 4) && (*(byte *)(lVar15 + 0x10) == bVar5)) &&
                 (*(char *)(lVar15 + 0x1a) != '\x01')) {
                local_47 = *(byte *)(lVar15 + 0x18) + 4 | 0x80;
                local_48 = 0xf2;
                local_46 = 0xf9;
                local_45 = bVar16;
                MaDevDrv_SendDirectPacket(&local_48,4);
              }
              if (((*(byte *)(lVar15 + 0x2c) < 4) && (*(byte *)(lVar15 + 0x24) == bVar5)) &&
                 (*(char *)(lVar15 + 0x2e) != '\x01')) {
                local_47 = *(byte *)(lVar15 + 0x2c) + 4 | 0x80;
                local_48 = 0xf2;
                local_46 = 0xf9;
                local_45 = bVar16;
                MaDevDrv_SendDirectPacket(&local_48,4);
              }
            }
          }
          *(undefined1 *)(lVar2 + 0x2e) = 0xff;
switchD_001a02ec_caseD_5:
          MaDsp_3DCtrl(1,0xa4,uVar4,(void *)0x0);
          *pcVar11 = '\0';
LAB_0019fdc8:
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 != (char *)(lVar1 + 0x34));
        *(undefined4 *)(lVar8 + lVar14) = 4;
        if (uVar12 < 8) {
                    /* WARNING: Could not recover jumptable at 0x0019ff10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)*(short *)(&DAT_0048a778 + uVar13 * 2) * 4 + 0x19ff14))();
          return;
        }
        uVar10 = 0;
      }
      else {
        uVar10 = 0xffffffff;
      }
      goto LAB_0019fde8;
    }
  }
  uVar10 = 0xfffffffe;
LAB_0019fde8:
  machdep_LeaveCriticalSection();
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

