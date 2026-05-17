/* Sequencer_Generate @ 00139770 1728B */


/* ARM::Sequencer_Generate(long) */

void ARM::Sequencer_Generate(long param_1)

{
  char cVar1;
  uchar uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  char *pcVar17;
  char cVar18;
  char local_10 [8];
  long local_8;
  
  pcVar17 = &DAT_00582aa0;
  lVar16 = 0;
  cVar18 = '\x01';
  puVar12 = &DAT_00582edc;
  uVar13 = 0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  uVar14 = 0;
  do {
    cVar1 = *pcVar17;
    iVar15 = (int)lVar16;
    local_10[lVar16] = '\0';
    if (cVar1 != '\0') {
      lVar8 = *(long *)(pcVar17 + 0x10);
      *(long *)(pcVar17 + 0x10) = param_1 * 1000000;
      if (puVar12[1] != *puVar12) {
        lVar9 = *(long *)(pcVar17 + 0x18);
        if (lVar9 == 0) {
          lVar11 = *(long *)(pcVar17 + 0x30);
        }
        else {
          lVar11 = 0;
          if (lVar9 != 0) {
            lVar11 = ((param_1 * 1000000 - lVar8) * 0x10000) / lVar9;
          }
          lVar11 = lVar11 + *(long *)(pcVar17 + 0x30);
          *(long *)(pcVar17 + 0x30) = lVar11;
        }
        *(long *)(pcVar17 + 0x28) = lVar11 >> 0x10;
        if ((*(uint *)(pcVar17 + 8) != 0) && ((long)(ulong)*(uint *)(pcVar17 + 8) <= lVar11 >> 0x10)
           ) {
          uVar14 = uVar14 | 2 << (ulong)(uVar13 & 0x1f);
          bVar3 = VIRTUALREGISTER_GetRegM('\0','\x14');
          if (lVar16 == 0) {
            bVar4 = bVar3 & 1;
            if ((bVar3 & 1) == 0) {
              bVar3 = VIRTUALREGISTER_GetRegM(bVar4,'\v');
              VIRTUALREGISTER_SetRegM(bVar4,'\v',bVar3 & 0xfe);
              Sequencer_Control(bVar4,bVar4,bVar4,0);
            }
          }
          else if ((bVar3 & 2) == 0) {
            bVar3 = VIRTUALREGISTER_GetRegM('\0','\v');
            VIRTUALREGISTER_SetRegM('\0','\v',bVar3 & 0xfd);
            Sequencer_Control('\x01','\0','\0',0);
          }
        }
        uVar7 = puVar12[1];
        uVar6 = (ulong)*puVar12;
LAB_0013983c:
        uVar5 = (uint)uVar6;
joined_r0x00139840:
        uVar10 = uVar5;
        if (uVar5 == uVar7) {
LAB_00139934:
          uVar5 = uVar10 - uVar5;
LAB_0013986c:
          if (uVar5 <= *(uint *)(pcVar17 + 4)) goto LAB_001398ec;
          goto LAB_00139878;
        }
        if ((local_10[lVar16] != '\0') || (*pcVar17 == '\0')) {
          uVar10 = uVar7;
          if (uVar5 <= uVar7) goto LAB_00139934;
          if (lVar16 != 0) {
            uVar5 = (uVar7 + 0x81) - uVar5;
            goto LAB_0013986c;
          }
          if (*(uint *)(pcVar17 + 4) < (uVar7 + 0x401) - uVar5) goto LAB_001398d0;
          goto LAB_001398ec;
        }
        switch(puVar12[2]) {
        case 0:
          goto switchD_00139948_caseD_0;
        case 1:
          uVar5 = uVar5 + 1;
          bVar3 = (&DAT_00582aa0)[uVar6 + (long)iVar15 * 0x458 + 0x38];
          if (lVar16 == 0) {
            if (uVar5 < 0x401) {
LAB_00139ccc:
              *puVar12 = uVar5;
            }
            else {
              *puVar12 = 0;
            }
          }
          else {
            if (uVar5 < 0x81) goto LAB_00139ccc;
            *puVar12 = 0;
          }
          puVar12[3] = puVar12[3] | (bVar3 & 0x7f) << 7;
          uVar6 = (ulong)*puVar12;
          if ((char)bVar3 < '\0') {
            puVar12[2] = 3;
          }
          else {
            puVar12[2] = 2;
          }
          goto LAB_0013983c;
        case 2:
          uVar5 = uVar5 + 1;
          bVar3 = (&DAT_00582aa0)[uVar6 + (long)iVar15 * 0x458 + 0x38];
          if (lVar16 == 0) {
            if (uVar5 < 0x401) {
LAB_00139d04:
              *puVar12 = uVar5;
            }
            else {
              *puVar12 = 0;
            }
          }
          else {
            if (uVar5 < 0x81) goto LAB_00139d04;
            *puVar12 = 0;
          }
          uVar6 = (ulong)*puVar12;
          puVar12[2] = 3;
          puVar12[3] = puVar12[3] | (bVar3 & 0x7f) << 0xe;
          goto LAB_0013983c;
        case 3:
          if (*(long *)(pcVar17 + 0x28) < (long)((ulong)puVar12[3] + *(long *)(pcVar17 + 0x20))) {
            local_10[lVar16] = '\x01';
          }
          else {
            *(ulong *)(pcVar17 + 0x20) = (ulong)puVar12[3] + *(long *)(pcVar17 + 0x20);
            uVar5 = uVar5 + 1;
            bVar3 = (&DAT_00582aa0)[uVar6 + (long)iVar15 * 0x458 + 0x38];
            if (lVar16 == 0) {
              if (uVar5 < 0x401) goto LAB_00139dc0;
              *puVar12 = 0;
            }
            else if (uVar5 < 0x81) {
LAB_00139dc0:
              *puVar12 = uVar5;
            }
            else {
              *puVar12 = 0;
            }
            puVar12[4] = bVar3 & 0x7f;
            uVar7 = puVar12[1];
            if ((char)bVar3 < '\0') {
              uVar6 = (ulong)*puVar12;
              puVar12[2] = 8;
            }
            else {
              uVar6 = (ulong)*puVar12;
              puVar12[2] = 4;
            }
          }
          goto LAB_0013983c;
        case 4:
          uVar5 = uVar5 + 1;
          bVar3 = (&DAT_00582aa0)[uVar6 + (long)iVar15 * 0x458 + 0x38];
          if (lVar16 == 0) {
            if (uVar5 < 0x401) {
LAB_00139cec:
              *puVar12 = uVar5;
            }
            else {
              *puVar12 = 0;
            }
          }
          else {
            if (uVar5 < 0x81) goto LAB_00139cec;
            *puVar12 = 0;
          }
          uVar6 = (ulong)*puVar12;
          puVar12[4] = puVar12[4] | (bVar3 & 0x7f) << 7;
          if ((char)bVar3 < '\0') {
            puVar12[2] = 8;
          }
          else {
            puVar12[2] = 5;
          }
          goto LAB_0013983c;
        case 5:
          uVar5 = uVar5 + 1;
          bVar3 = (&DAT_00582aa0)[uVar6 + (long)iVar15 * 0x458 + 0x38];
          if (lVar16 == 0) {
            if (uVar5 < 0x401) {
LAB_00139ce4:
              *puVar12 = uVar5;
            }
            else {
              *puVar12 = 0;
            }
          }
          else {
            if (uVar5 < 0x81) goto LAB_00139ce4;
            *puVar12 = 0;
          }
          uVar6 = (ulong)*puVar12;
          puVar12[2] = 6;
          puVar12[4] = ((bVar3 & 0x7f) << 0xe | puVar12[4]) & 0x1ffff;
          goto LAB_0013983c;
        case 6:
          uVar5 = uVar5 + 1;
          bVar3 = (&DAT_00582aa0)[uVar6 + (long)iVar15 * 0x458 + 0x38];
          if (lVar16 == 0) {
            if (uVar5 < 0x401) {
LAB_00139cf4:
              *puVar12 = uVar5;
            }
            else {
              *puVar12 = 0;
            }
          }
          else {
            if (uVar5 < 0x81) goto LAB_00139cf4;
            *puVar12 = 0;
          }
          puVar12[5] = bVar3 & 0x7f;
          if (-1 < (char)bVar3) {
            uVar6 = (ulong)*puVar12;
            puVar12[2] = 7;
            goto LAB_0013983c;
          }
          if ((bVar3 & 0x7f) == 0) {
            puVar12[2] = bVar3 & 0x7f;
            uVar6 = (ulong)*puVar12;
            goto LAB_0013983c;
          }
          break;
        case 7:
          uVar5 = uVar5 + 1;
          bVar3 = (&DAT_00582aa0)[uVar6 + (long)iVar15 * 0x458 + 0x38];
          if (lVar16 == 0) {
            if (uVar5 < 0x401) {
LAB_00139cdc:
              *puVar12 = uVar5;
            }
            else {
              *puVar12 = 0;
            }
          }
          else {
            if (uVar5 < 0x81) goto LAB_00139cdc;
            *puVar12 = 0;
          }
          uVar5 = (bVar3 & 0x7f) << 7 | puVar12[5];
          puVar12[5] = uVar5;
          if (uVar5 == 0) {
            puVar12[2] = 0;
            uVar6 = (ulong)*puVar12;
            goto LAB_0013983c;
          }
          break;
        case 8:
          uVar5 = uVar5 + 1;
          uVar2 = (&DAT_00582aa0)[uVar6 + (long)iVar15 * 0x458 + 0x38];
          if (lVar16 == 0) {
            if (uVar5 < 0x401) {
LAB_00139cd4:
              *puVar12 = uVar5;
            }
            else {
              *puVar12 = 0;
            }
          }
          else {
            if (uVar5 < 0x81) goto LAB_00139cd4;
            *puVar12 = 0;
          }
          SetCtrlReg((uchar)puVar12[4],uVar2,'\0');
          puVar12[4] = puVar12[4] + 1;
          if (-1 < (char)uVar2) goto LAB_00139ac0;
          puVar12[2] = 0;
          uVar7 = puVar12[1];
          uVar6 = (ulong)*puVar12;
          goto LAB_0013983c;
        case 9:
          uVar5 = uVar5 + 1;
          uVar2 = (&DAT_00582aa0)[uVar6 + (long)iVar15 * 0x458 + 0x38];
          if (lVar16 == 0) {
            if (uVar5 < 0x401) {
LAB_00139cfc:
              *puVar12 = uVar5;
            }
            else {
              *puVar12 = 0;
            }
          }
          else {
            if (uVar5 < 0x81) goto LAB_00139cfc;
            *puVar12 = 0;
          }
          VIRTUALMEMORY_SetMemoryData(puVar12[4],uVar2);
          uVar7 = puVar12[5];
          puVar12[5] = uVar7 - 1;
          puVar12[4] = puVar12[4] + 1;
          if (uVar7 - 1 == 0) {
            puVar12[2] = 0;
          }
LAB_00139ac0:
          uVar7 = puVar12[1];
          uVar6 = (ulong)*puVar12;
          goto LAB_0013983c;
        default:
          goto switchD_00139948_default;
        }
        uVar6 = (ulong)*puVar12;
        puVar12[2] = 9;
        goto LAB_0013983c;
      }
LAB_001398ec:
      uVar14 = uVar14 | 1 << (ulong)(uVar13 & 0x1f);
    }
LAB_00139878:
    if (cVar18 == '\x02') {
      if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar14);
    }
LAB_001398d0:
    cVar18 = cVar18 + '\x01';
    lVar16 = lVar16 + 1;
    pcVar17 = pcVar17 + 0x458;
    puVar12 = puVar12 + 0x116;
    uVar13 = uVar13 + 8;
  } while( true );
switchD_00139948_default:
  puVar12[2] = 0;
  goto joined_r0x00139840;
switchD_00139948_caseD_0:
  uVar5 = uVar5 + 1;
  bVar3 = (&DAT_00582aa0)[uVar6 + (long)iVar15 * 0x458 + 0x38];
  if (lVar16 == 0) {
    if (0x400 < uVar5) {
      *puVar12 = 0;
      goto LAB_00139a08;
    }
  }
  else if (0x80 < uVar5) {
    *puVar12 = 0;
    goto LAB_00139a08;
  }
  *puVar12 = uVar5;
LAB_00139a08:
  puVar12[3] = bVar3 & 0x7f;
  if ((char)bVar3 < '\0') {
    uVar6 = (ulong)*puVar12;
    puVar12[2] = 3;
  }
  else {
    uVar6 = (ulong)*puVar12;
    puVar12[2] = 1;
  }
  goto LAB_0013983c;
}

