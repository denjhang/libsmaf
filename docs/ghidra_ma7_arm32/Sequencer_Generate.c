/* Sequencer_Generate @ 000380e8 1368B */


/* ARM::Sequencer_Generate(long long) */

uint __thiscall ARM::Sequencer_Generate(ARM *this,longlong param_1)

{
  char cVar1;
  byte bVar2;
  uchar uVar3;
  int iVar4;
  int in_r1;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint local_48;
  uint local_3c;
  char local_2c [8];
  
  pcVar9 = (char *)(DAT_00038654 + 0x3810a);
  uVar13 = 0;
  uVar14 = 0;
  local_3c = 0;
  iVar4 = in_r1 * 1000000 + (int)(ZEXT48(this) * 1000000 >> 0x20);
  local_48 = (uint)(ZEXT48(this) * 1000000);
  do {
    cVar1 = *pcVar9;
    local_2c[uVar13] = '\0';
    if (cVar1 != '\0') {
      uVar10 = *(uint *)(pcVar9 + 0x440);
      uVar11 = *(uint *)(pcVar9 + 0x43c);
      uVar6 = *(uint *)(pcVar9 + 0x10);
      iVar8 = *(int *)(pcVar9 + 0x14);
      *(uint *)(pcVar9 + 0x10) = local_48;
      *(int *)(pcVar9 + 0x14) = iVar4;
      if (uVar10 != uVar11) {
        if (*(int *)(pcVar9 + 0x18) == 0 && *(int *)(pcVar9 + 0x1c) == 0) {
          lVar15 = *(longlong *)(pcVar9 + 0x30);
        }
        else {
          uVar7 = local_48 - uVar6;
          lVar15 = __aeabi_ldivmod(uVar7 * 0x10000,
                                   ((iVar4 - iVar8) - (uint)(local_48 < uVar6)) * 0x10000 |
                                   uVar7 >> 0x10);
          lVar15 = lVar15 + *(longlong *)(pcVar9 + 0x30);
          *(longlong *)(pcVar9 + 0x30) = lVar15;
        }
        lVar15 = lVar15 >> 0x10;
        *(longlong *)(pcVar9 + 0x28) = lVar15;
        if ((*(uint *)(pcVar9 + 8) != 0) &&
           ((int)(uint)((uint)lVar15 < *(uint *)(pcVar9 + 8)) <= (int)((ulonglong)lVar15 >> 0x20)))
        {
          local_3c = local_3c | 2 << (uVar14 & 0xff);
          uVar11 = VIRTUALREGISTER_GetRegM('\0','\x14');
          if ((uVar13 & 0xff) == 0) {
            if (-1 < (int)(uVar11 << 0x1f)) {
              uVar3 = (uchar)uVar13;
              bVar2 = VIRTUALREGISTER_GetRegM(uVar3,'\v');
              VIRTUALREGISTER_SetRegM(uVar3,'\v',bVar2 & 0xfe);
              Sequencer_Control(uVar3,uVar3,uVar3,0);
            }
          }
          else if ((uVar11 & 2) == 0) {
            bVar2 = VIRTUALREGISTER_GetRegM('\0','\v');
            VIRTUALREGISTER_SetRegM('\0','\v',bVar2 & 0xfd);
            Sequencer_Control('\x01','\0','\0',0);
            uVar10 = *(uint *)(pcVar9 + 0x440);
            uVar11 = *(uint *)(pcVar9 + 0x43c);
            goto LAB_00038182;
          }
          uVar10 = *(uint *)(pcVar9 + 0x440);
          uVar11 = *(uint *)(pcVar9 + 0x43c);
        }
LAB_00038182:
        uVar6 = uVar13 & 0xff;
LAB_00038184:
        uVar7 = uVar11;
        if (uVar11 != uVar10) {
LAB_00038188:
          if ((local_2c[uVar13] != '\0') || (*pcVar9 == '\0')) {
            uVar7 = uVar10;
            if (uVar11 <= uVar10) goto LAB_0003825e;
            if (uVar6 == 0) {
              uVar7 = uVar10 + 0x401;
              goto LAB_0003825e;
            }
            uVar11 = (uVar10 + 0x81) - uVar11;
            goto LAB_000381c6;
          }
          switch(*(undefined4 *)(pcVar9 + 0x444)) {
          case 0:
            uVar7 = uVar11 + 1;
            bVar2 = pcVar9[uVar11 + 0x38];
            if (uVar6 == 0) {
              if (uVar7 < 0x401) {
LAB_00038480:
                *(uint *)(pcVar9 + 0x43c) = uVar7;
              }
              else {
                pcVar9[0x43c] = '\0';
                pcVar9[0x43d] = '\0';
                pcVar9[0x43e] = '\0';
                pcVar9[0x43f] = '\0';
              }
            }
            else {
              if (uVar7 < 0x81) goto LAB_00038480;
              pcVar9[0x43c] = '\0';
              pcVar9[0x43d] = '\0';
              pcVar9[0x43e] = '\0';
              pcVar9[0x43f] = '\0';
            }
            *(uint *)(pcVar9 + 0x448) = bVar2 & 0x7f;
            if (-1 < (int)((uint)bVar2 << 0x18)) {
              uVar11 = *(uint *)(pcVar9 + 0x43c);
              pcVar9[0x444] = '\x01';
              pcVar9[0x445] = '\0';
              pcVar9[0x446] = '\0';
              pcVar9[0x447] = '\0';
              goto LAB_00038184;
            }
            break;
          case 1:
            uVar7 = uVar11 + 1;
            bVar2 = pcVar9[uVar11 + 0x38];
            if (uVar6 == 0) {
              if (uVar7 < 0x401) goto LAB_0003848c;
              pcVar9[0x43c] = '\0';
              pcVar9[0x43d] = '\0';
              pcVar9[0x43e] = '\0';
              pcVar9[0x43f] = '\0';
            }
            else {
              if (0x80 < uVar7) {
                uVar7 = 0;
              }
LAB_0003848c:
              *(uint *)(pcVar9 + 0x43c) = uVar7;
            }
            *(uint *)(pcVar9 + 0x448) = *(uint *)(pcVar9 + 0x448) | (bVar2 & 0x7f) << 7;
            if (-1 < (int)((uint)bVar2 << 0x18)) {
              pcVar9[0x444] = '\x02';
              pcVar9[0x445] = '\0';
              pcVar9[0x446] = '\0';
              pcVar9[0x447] = '\0';
              uVar11 = *(uint *)(pcVar9 + 0x43c);
              goto LAB_00038184;
            }
            break;
          case 2:
            uVar7 = uVar11 + 1;
            bVar2 = pcVar9[uVar11 + 0x38];
            *(uint *)(pcVar9 + 0x43c) = uVar7;
            uVar11 = uVar7;
            if (uVar6 == 0) {
              if (0x400 < uVar7) {
                pcVar9[0x43c] = '\0';
                pcVar9[0x43d] = '\0';
                pcVar9[0x43e] = '\0';
                pcVar9[0x43f] = '\0';
                uVar11 = uVar6;
              }
            }
            else if (0x80 < uVar7) {
              pcVar9[0x43c] = '\0';
              pcVar9[0x43d] = '\0';
              pcVar9[0x43e] = '\0';
              pcVar9[0x43f] = '\0';
              uVar11 = 0;
            }
            pcVar9[0x444] = '\x03';
            pcVar9[0x445] = '\0';
            pcVar9[0x446] = '\0';
            pcVar9[0x447] = '\0';
            *(uint *)(pcVar9 + 0x448) = *(uint *)(pcVar9 + 0x448) | (bVar2 & 0x7f) << 0xe;
            goto LAB_00038184;
          case 3:
            uVar5 = *(uint *)(pcVar9 + 0x20) + *(uint *)(pcVar9 + 0x448);
            iVar8 = *(int *)(pcVar9 + 0x24) +
                    (uint)CARRY4(*(uint *)(pcVar9 + 0x20),*(uint *)(pcVar9 + 0x448));
            iVar12 = *(int *)(pcVar9 + 0x2c);
            if ((int)((iVar12 - iVar8) - (uint)(*(uint *)(pcVar9 + 0x28) < uVar5)) < 0 !=
                (SBORROW4(iVar12,iVar8) !=
                SBORROW4(iVar12 - iVar8,(uint)(*(uint *)(pcVar9 + 0x28) < uVar5))))
            goto code_r0x0003824e;
            *(uint *)(pcVar9 + 0x20) = uVar5;
            *(int *)(pcVar9 + 0x24) = iVar8;
            uVar7 = uVar11 + 1;
            bVar2 = pcVar9[uVar11 + 0x38];
            if (uVar6 == 0) {
              if (uVar7 < 0x401) goto LAB_000385e0;
              pcVar9[0x43c] = '\0';
              pcVar9[0x43d] = '\0';
              pcVar9[0x43e] = '\0';
              pcVar9[0x43f] = '\0';
            }
            else if (uVar7 < 0x81) {
LAB_000385e0:
              *(uint *)(pcVar9 + 0x43c) = uVar7;
            }
            else {
              pcVar9[0x43c] = '\0';
              pcVar9[0x43d] = '\0';
              pcVar9[0x43e] = '\0';
              pcVar9[0x43f] = '\0';
            }
            *(uint *)(pcVar9 + 0x44c) = bVar2 & 0x7f;
            if ((int)((uint)bVar2 << 0x18) < 0) {
              pcVar9[0x444] = '\b';
              pcVar9[0x445] = '\0';
              pcVar9[0x446] = '\0';
              pcVar9[0x447] = '\0';
            }
            else {
              pcVar9[0x444] = '\x04';
              pcVar9[0x445] = '\0';
              pcVar9[0x446] = '\0';
              pcVar9[0x447] = '\0';
            }
            uVar11 = *(uint *)(pcVar9 + 0x43c);
            goto LAB_00038184;
          case 4:
            uVar7 = uVar11 + 1;
            bVar2 = pcVar9[uVar11 + 0x38];
            if (uVar6 == 0) {
              if (uVar7 < 0x401) {
LAB_000384c4:
                *(uint *)(pcVar9 + 0x43c) = uVar7;
              }
              else {
                pcVar9[0x43c] = '\0';
                pcVar9[0x43d] = '\0';
                pcVar9[0x43e] = '\0';
                pcVar9[0x43f] = '\0';
              }
            }
            else {
              if (uVar7 < 0x81) goto LAB_000384c4;
              pcVar9[0x43c] = '\0';
              pcVar9[0x43d] = '\0';
              pcVar9[0x43e] = '\0';
              pcVar9[0x43f] = '\0';
            }
            uVar11 = *(uint *)(pcVar9 + 0x43c);
            *(uint *)(pcVar9 + 0x44c) = *(uint *)(pcVar9 + 0x44c) | (bVar2 & 0x7f) << 7;
            if ((int)((uint)bVar2 << 0x18) < 0) {
              pcVar9[0x444] = '\b';
              pcVar9[0x445] = '\0';
              pcVar9[0x446] = '\0';
              pcVar9[0x447] = '\0';
            }
            else {
              pcVar9[0x444] = '\x05';
              pcVar9[0x445] = '\0';
              pcVar9[0x446] = '\0';
              pcVar9[0x447] = '\0';
            }
            goto LAB_00038184;
          case 5:
            uVar7 = uVar11 + 1;
            bVar2 = pcVar9[uVar11 + 0x38];
            *(uint *)(pcVar9 + 0x43c) = uVar7;
            uVar11 = uVar7;
            if (uVar6 == 0) {
              if (0x400 < uVar7) {
                pcVar9[0x43c] = '\0';
                pcVar9[0x43d] = '\0';
                pcVar9[0x43e] = '\0';
                pcVar9[0x43f] = '\0';
                uVar11 = uVar6;
              }
            }
            else if (0x80 < uVar7) {
              uVar11 = 0;
              pcVar9[0x43c] = '\0';
              pcVar9[0x43d] = '\0';
              pcVar9[0x43e] = '\0';
              pcVar9[0x43f] = '\0';
            }
            pcVar9[0x444] = '\x06';
            pcVar9[0x445] = '\0';
            pcVar9[0x446] = '\0';
            pcVar9[0x447] = '\0';
            *(uint *)(pcVar9 + 0x44c) =
                 (*(uint *)(pcVar9 + 0x44c) | (bVar2 & 0x7f) << 0xe) & 0x1ffff;
            goto LAB_00038184;
          case 6:
            uVar7 = uVar11 + 1;
            bVar2 = pcVar9[uVar11 + 0x38];
            uVar11 = (uint)bVar2;
            if (uVar6 == 0) {
              if (uVar7 < 0x401) goto LAB_000384dc;
              pcVar9[0x43c] = '\0';
              pcVar9[0x43d] = '\0';
              pcVar9[0x43e] = '\0';
              pcVar9[0x43f] = '\0';
              *(uint *)(pcVar9 + 0x450) = uVar11 & 0x7f;
            }
            else {
              if (0x80 < uVar7) {
                uVar7 = 0;
              }
LAB_000384dc:
              *(uint *)(pcVar9 + 0x43c) = uVar7;
              *(uint *)(pcVar9 + 0x450) = uVar11 & 0x7f;
            }
            if ((int)(uVar11 << 0x18) < 0) {
              uVar11 = uVar11 & 0x7f;
              if ((bVar2 & 0x7f) != 0) {
                uVar11 = 9;
              }
              *(uint *)(pcVar9 + 0x444) = uVar11;
              uVar11 = *(uint *)(pcVar9 + 0x43c);
            }
            else {
              uVar11 = *(uint *)(pcVar9 + 0x43c);
              pcVar9[0x444] = '\a';
              pcVar9[0x445] = '\0';
              pcVar9[0x446] = '\0';
              pcVar9[0x447] = '\0';
            }
            goto LAB_00038184;
          case 7:
            uVar7 = uVar11 + 1;
            bVar2 = pcVar9[uVar11 + 0x38];
            if (uVar6 == 0) {
              if (uVar7 < 0x401) {
LAB_0003850c:
                *(uint *)(pcVar9 + 0x43c) = uVar7;
              }
              else {
                pcVar9[0x43c] = '\0';
                pcVar9[0x43d] = '\0';
                pcVar9[0x43e] = '\0';
                pcVar9[0x43f] = '\0';
              }
            }
            else {
              if (uVar7 < 0x81) goto LAB_0003850c;
              pcVar9[0x43c] = '\0';
              pcVar9[0x43d] = '\0';
              pcVar9[0x43e] = '\0';
              pcVar9[0x43f] = '\0';
            }
            uVar11 = *(uint *)(pcVar9 + 0x450) | (bVar2 & 0x7f) << 7;
            *(uint *)(pcVar9 + 0x450) = uVar11;
            if (uVar11 == 0) {
              pcVar9[0x444] = '\0';
              pcVar9[0x445] = '\0';
              pcVar9[0x446] = '\0';
              pcVar9[0x447] = '\0';
              uVar11 = *(uint *)(pcVar9 + 0x43c);
            }
            else {
              pcVar9[0x444] = '\t';
              pcVar9[0x445] = '\0';
              pcVar9[0x446] = '\0';
              pcVar9[0x447] = '\0';
              uVar11 = *(uint *)(pcVar9 + 0x43c);
            }
            goto LAB_00038184;
          case 8:
            uVar10 = uVar11 + 1;
            bVar2 = pcVar9[uVar11 + 0x38];
            if (uVar6 == 0) {
              if (uVar10 < 0x401) {
LAB_00038520:
                *(uint *)(pcVar9 + 0x43c) = uVar10;
              }
              else {
                pcVar9[0x43c] = '\0';
                pcVar9[0x43d] = '\0';
                pcVar9[0x43e] = '\0';
                pcVar9[0x43f] = '\0';
              }
            }
            else {
              if (uVar10 < 0x81) goto LAB_00038520;
              pcVar9[0x43c] = '\0';
              pcVar9[0x43d] = '\0';
              pcVar9[0x43e] = '\0';
              pcVar9[0x43f] = '\0';
            }
            SetCtrlReg(pcVar9[0x44c],bVar2,'\0');
            *(int *)(pcVar9 + 0x44c) = *(int *)(pcVar9 + 0x44c) + 1;
            if (-1 < (int)((uint)bVar2 << 0x18)) goto LAB_000382e2;
            uVar10 = *(uint *)(pcVar9 + 0x440);
            pcVar9[0x444] = '\0';
            pcVar9[0x445] = '\0';
            pcVar9[0x446] = '\0';
            pcVar9[0x447] = '\0';
            uVar11 = *(uint *)(pcVar9 + 0x43c);
            goto LAB_00038184;
          case 9:
            uVar10 = uVar11 + 1;
            uVar3 = pcVar9[uVar11 + 0x38];
            if (uVar6 == 0) {
              if (uVar10 < 0x401) goto LAB_0003827e;
              pcVar9[0x43c] = '\0';
              pcVar9[0x43d] = '\0';
              pcVar9[0x43e] = '\0';
              pcVar9[0x43f] = '\0';
            }
            else if (uVar10 < 0x81) {
LAB_0003827e:
              *(uint *)(pcVar9 + 0x43c) = uVar10;
            }
            else {
              pcVar9[0x43c] = '\0';
              pcVar9[0x43d] = '\0';
              pcVar9[0x43e] = '\0';
              pcVar9[0x43f] = '\0';
            }
            VIRTUALMEMORY_SetMemoryData(*(uint *)(pcVar9 + 0x44c),uVar3);
            iVar8 = *(int *)(pcVar9 + 0x450);
            *(int *)(pcVar9 + 0x450) = iVar8 + -1;
            *(int *)(pcVar9 + 0x44c) = *(int *)(pcVar9 + 0x44c) + 1;
            if (iVar8 + -1 == 0) {
              pcVar9[0x444] = '\0';
              pcVar9[0x445] = '\0';
              pcVar9[0x446] = '\0';
              pcVar9[0x447] = '\0';
            }
LAB_000382e2:
            uVar10 = *(uint *)(pcVar9 + 0x440);
            uVar11 = *(uint *)(pcVar9 + 0x43c);
            goto LAB_00038184;
          default:
            goto switchD_0003819c_default;
          }
          pcVar9[0x444] = '\x03';
          pcVar9[0x445] = '\0';
          pcVar9[0x446] = '\0';
          pcVar9[0x447] = '\0';
          uVar11 = *(uint *)(pcVar9 + 0x43c);
          goto LAB_00038184;
        }
LAB_0003825e:
        uVar11 = uVar7 - uVar11;
LAB_000381c6:
        if (*(uint *)(pcVar9 + 4) < uVar11) goto LAB_000381da;
      }
      local_3c = local_3c | 1 << (uVar14 & 0xff);
    }
LAB_000381da:
    uVar13 = uVar13 + 1;
    pcVar9 = pcVar9 + 0x458;
    uVar14 = uVar14 + 8;
    if (uVar13 == 2) {
      return local_3c;
    }
  } while( true );
switchD_0003819c_default:
  pcVar9[0x444] = '\0';
  pcVar9[0x445] = '\0';
  pcVar9[0x446] = '\0';
  pcVar9[0x447] = '\0';
  goto LAB_00038184;
code_r0x0003824e:
  local_2c[uVar13] = '\x01';
  if (uVar11 == uVar10) goto LAB_0003825e;
  goto LAB_00038188;
}

