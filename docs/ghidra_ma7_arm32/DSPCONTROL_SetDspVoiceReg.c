/* DSPCONTROL_SetDspVoiceReg @ 000413b8 882B */


/* ARM::DSPCONTROL_SetDspVoiceReg(unsigned char, unsigned char) */

void ARM::DSPCONTROL_SetDspVoiceReg(uchar param_1,uchar param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  CDsp *this;
  uchar uVar12;
  int iVar13;
  undefined4 *puVar14;
  
  iVar8 = DAT_000417d8;
  uVar10 = (uint)param_2;
  iVar13 = DAT_000417d4 + 0x413cc;
  switch(param_1) {
  case ',':
  case '-':
  case '.':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '@':
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'G':
  case 'H':
    break;
  case '/':
    VIRTUALREGISTER_SetRegM('\0','/',param_2);
    VIRTUALREGISTER_SetRegM('\0','?','\x02');
    VIRTUALREGISTER_GetRegM('\0',',');
    VIRTUALREGISTER_GetRegM('\0','-');
    VIRTUALREGISTER_GetRegM('\0','.');
    iVar8 = VIRTUALREGISTER_GetRegM('\0','0');
    if (iVar8 << 0x19 < 0) {
      CDsp::ClrDspRAM(**(uint **)(iVar13 + DAT_000417d8));
    }
    param_1 = '?';
    param_2 = 0;
    break;
  case '0':
    VIRTUALREGISTER_SetRegM('\0','0',param_2 & 0xc1);
    CDsp::SetDspID((CDsp *)**(undefined4 **)(iVar13 + DAT_000417d8),(uint)(param_2 >> 7),
                   (uVar10 & 0x7f) >> 6,uVar10 & 1);
    return;
  case '1':
    param_2 = param_2 & 3;
    param_1 = '1';
    break;
  case '2':
    VIRTUALREGISTER_SetRegM('\0','2',param_2);
    uVar11 = VIRTUALREGISTER_GetRegM('\0','1');
    this = (CDsp *)**(undefined4 **)(iVar13 + DAT_000417d8);
    uVar10 = uVar10 | (uVar11 & 3) << 8;
    goto LAB_00041578;
  case '8':
    VIRTUALREGISTER_SetRegM('\0','8',param_2);
    uVar11 = VIRTUALREGISTER_GetRegM('\0','0');
    if ((uVar11 & 1) == 0) {
      iVar8 = VIRTUALREGISTER_GetRegM('\0','7');
      uVar10 = uVar10 | iVar8 << 8;
      uVar11 = 0;
    }
    else {
      iVar8 = VIRTUALREGISTER_GetRegM('\0','3');
      uVar11 = VIRTUALREGISTER_GetRegM('\0','4');
      uVar11 = iVar8 << 8 | uVar11;
      iVar8 = VIRTUALREGISTER_GetRegM('\0','5');
      iVar9 = VIRTUALREGISTER_GetRegM('\0','6');
      iVar2 = VIRTUALREGISTER_GetRegM('\0','7');
      uVar10 = VIRTUALREGISTER_GetRegM('\0','8');
      uVar10 = uVar10 | iVar8 << 0x18 | iVar9 << 0x10 | iVar2 << 8;
    }
    CDsp::SetDspData((CDsp *)**(undefined4 **)(iVar13 + DAT_000417d8),uVar11,uVar10);
    return;
  default:
    goto switchD_000413d0_caseD_39;
  case ':':
    param_2 = param_2 & 0x3f;
    param_1 = ':';
    break;
  case ';':
    VIRTUALREGISTER_SetRegM('\0',';',param_2 & 1);
    uVar10 = VIRTUALREGISTER_GetRegM('\0',':');
    uVar11 = VIRTUALREGISTER_GetRegM('\0',':');
    uVar1 = VIRTUALREGISTER_GetRegM('\0',';');
    CDsp::SetAreaSize((CDsp *)**(undefined4 **)(iVar13 + DAT_000417d8),(uVar10 & 0x3f) >> 2,
                      uVar11 & 3,uVar1 & 1);
    return;
  case '<':
    param_2 = param_2 & 0x83;
    param_1 = '<';
    break;
  case '=':
    uVar12 = '=';
    goto LAB_0004160e;
  case '>':
    param_2 = param_2 & 7;
    param_1 = '>';
    break;
  case 'I':
    VIRTUALREGISTER_SetRegM('\0','I',param_2);
    uVar10 = VIRTUALREGISTER_GetRegM('\0','>');
    iVar8 = VIRTUALREGISTER_GetRegM('\0','@');
    uVar11 = VIRTUALREGISTER_GetRegM('\0','A');
    iVar9 = VIRTUALREGISTER_GetRegM('\0','B');
    uVar1 = VIRTUALREGISTER_GetRegM('\0','C');
    iVar2 = VIRTUALREGISTER_GetRegM('\0','D');
    uVar3 = VIRTUALREGISTER_GetRegM('\0','E');
    iVar4 = VIRTUALREGISTER_GetRegM('\0','F');
    uVar5 = VIRTUALREGISTER_GetRegM('\0','G');
    iVar6 = VIRTUALREGISTER_GetRegM('\0','H');
    uVar7 = VIRTUALREGISTER_GetRegM('\0','I');
    CDsp::SetEq((CDsp *)**(undefined4 **)(iVar13 + DAT_000417d8),uVar10 & 3,iVar8 << 8 | uVar11,
                iVar9 << 8 | uVar1,iVar2 << 8 | uVar3,iVar4 << 8 | uVar5,iVar6 << 8 | uVar7);
    return;
  case 'J':
    VIRTUALREGISTER_SetRegM('\0','J',param_2 & 1);
    uVar10 = VIRTUALREGISTER_GetRegM('\0','J');
    CDsp::SetSwap((CDsp *)**(undefined4 **)(iVar13 + DAT_000417d8),uVar10 & 1);
    return;
  case 'K':
    param_2 = param_2 & 3;
    param_1 = 'K';
    break;
  case 'L':
    uVar12 = 'L';
LAB_0004160e:
    VIRTUALREGISTER_SetRegM('\0',uVar12,param_2);
    iVar8 = VIRTUALREGISTER_GetRegM('\0','<');
    uVar10 = VIRTUALREGISTER_GetRegM('\0','=');
    uVar11 = (iVar8 << 8 | uVar10) & 0x3ff;
    iVar8 = VIRTUALREGISTER_GetRegM('\0','K');
    uVar10 = VIRTUALREGISTER_GetRegM('\0','L');
    uVar10 = (iVar8 << 8 | uVar10) & 0x3ff;
    if (uVar11 <= uVar10) {
      CDsp::SetRewriteWindow((CDsp *)**(undefined4 **)(iVar13 + DAT_000417d8),uVar11,uVar10);
      return;
    }
switchD_000413d0_caseD_39:
    return;
  case '|':
    uVar11 = VIRTUALREGISTER_GetRegC(0x7b);
    this = (CDsp *)**(undefined4 **)(iVar13 + iVar8);
    uVar10 = uVar10 & 0x7f | (uVar11 & 7) << 7;
    goto LAB_00041578;
  case '\x7f':
    iVar8 = VIRTUALREGISTER_GetRegC(0x7d);
    iVar9 = VIRTUALREGISTER_GetRegC(0x7e);
    puVar14 = *(undefined4 **)(iVar13 + DAT_000417d8);
    CDsp::SetDspData((CDsp *)*puVar14,0,uVar10 | (iVar8 << 0xe | iVar9 << 7) & 0xffffU);
    uVar10 = VIRTUALREGISTER_GetRegC(0x7b);
    uVar11 = VIRTUALREGISTER_GetRegC(0x7c);
    this = (CDsp *)*puVar14;
    uVar10 = (uVar11 & 0x7f | (uVar10 & 7) << 7) + 1;
LAB_00041578:
    CDsp::SetDspAdr(this,uVar10);
    return;
  }
  VIRTUALREGISTER_SetRegM('\0',param_1,param_2);
  return;
}

