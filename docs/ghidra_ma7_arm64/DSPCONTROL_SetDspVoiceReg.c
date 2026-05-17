/* DSPCONTROL_SetDspVoiceReg @ 00145624 1416B */


/* ARM::DSPCONTROL_SetDspVoiceReg(unsigned char, unsigned char) */

void ARM::DSPCONTROL_SetDspVoiceReg(uchar param_1,uchar param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  CDsp *this;
  uchar uVar13;
  
  if (0x53 < param_1 - 0x2c) {
    return;
  }
  uVar11 = (uint)param_2;
  switch((uint)param_1) {
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
    break;
  case 0x2f:
    VIRTUALREGISTER_SetRegM('\0','/',param_2);
    VIRTUALREGISTER_SetRegM('\0','?','\x02');
    VIRTUALREGISTER_GetRegM('\0',',');
    VIRTUALREGISTER_GetRegM('\0','-');
    VIRTUALREGISTER_GetRegM('\0','.');
    uVar11 = VIRTUALREGISTER_GetRegM('\0','0');
    if ((uVar11 >> 6 & 1) != 0) {
      CDsp::ClrDspRAM((uint)*(undefined8 *)PTR_gpVDsp_00567e80);
    }
    param_1 = '?';
    param_2 = 0;
    break;
  case 0x30:
    VIRTUALREGISTER_SetRegM('\0','0',param_2 & 0xc1);
    CDsp::SetDspID(*(CDsp **)PTR_gpVDsp_00567e80,(uint)(param_2 >> 7),param_2 >> 6 & 1,uVar11 & 1);
    return;
  case 0x31:
    param_1 = '1';
    param_2 = param_2 & 3;
    break;
  case 0x32:
    VIRTUALREGISTER_SetRegM('\0','2',param_2);
    uVar12 = VIRTUALREGISTER_GetRegM('\0','1');
    uVar11 = (uVar12 & 3) << 8 | uVar11;
    this = *(CDsp **)PTR_gpVDsp_00567e80;
    goto LAB_00145964;
  case 0x38:
    VIRTUALREGISTER_SetRegM('\0','8',param_2);
    uVar12 = VIRTUALREGISTER_GetRegM('\0','0');
    uVar11 = uVar12 & 1;
    if ((uVar12 & 1) == 0) {
      VIRTUALREGISTER_GetRegM((uchar)uVar11,'7');
    }
    else {
      uVar11 = VIRTUALREGISTER_GetRegM('\0','3');
      uVar12 = VIRTUALREGISTER_GetRegM('\0','4');
      uVar11 = (uVar11 & 0xff) << 8 | uVar12 & 0xff;
      VIRTUALREGISTER_GetRegM('\0','5');
      VIRTUALREGISTER_GetRegM('\0','6');
      VIRTUALREGISTER_GetRegM('\0','7');
      VIRTUALREGISTER_GetRegM('\0','8');
    }
    CDsp::SetDspData((uint)*(undefined8 *)PTR_gpVDsp_00567e80,uVar11);
    return;
  default:
    goto switchD_00145670_caseD_39;
  case 0x3a:
    param_1 = ':';
    param_2 = param_2 & 0x3f;
    break;
  case 0x3b:
    VIRTUALREGISTER_SetRegM('\0',';',param_2 & 1);
    uVar11 = VIRTUALREGISTER_GetRegM('\0',':');
    uVar12 = VIRTUALREGISTER_GetRegM('\0',':');
    uVar10 = VIRTUALREGISTER_GetRegM('\0',';');
    CDsp::SetAreaSize(*(CDsp **)PTR_gpVDsp_00567e80,uVar11 >> 2 & 0xf,uVar12 & 3,uVar10 & 1);
    return;
  case 0x3c:
    param_1 = '<';
    param_2 = param_2 & 0x83;
    break;
  case 0x3d:
    uVar13 = '=';
    goto LAB_001457f8;
  case 0x3e:
    param_1 = '>';
    param_2 = param_2 & 7;
    break;
  case 0x49:
    VIRTUALREGISTER_SetRegM('\0','I',param_2);
    uVar11 = VIRTUALREGISTER_GetRegM('\0','>');
    uVar12 = VIRTUALREGISTER_GetRegM('\0','@');
    uVar10 = VIRTUALREGISTER_GetRegM('\0','A');
    uVar2 = VIRTUALREGISTER_GetRegM('\0','B');
    uVar3 = VIRTUALREGISTER_GetRegM('\0','C');
    uVar4 = VIRTUALREGISTER_GetRegM('\0','D');
    uVar5 = VIRTUALREGISTER_GetRegM('\0','E');
    uVar6 = VIRTUALREGISTER_GetRegM('\0','F');
    uVar7 = VIRTUALREGISTER_GetRegM('\0','G');
    uVar8 = VIRTUALREGISTER_GetRegM('\0','H');
    uVar9 = VIRTUALREGISTER_GetRegM('\0','I');
    CDsp::SetEq(*(CDsp **)PTR_gpVDsp_00567e80,uVar11 & 3,(uVar12 & 0xff) << 8 | uVar10 & 0xff,
                (uVar2 & 0xff) << 8 | uVar3 & 0xff,(uVar4 & 0xff) << 8 | uVar5 & 0xff,
                (uVar6 & 0xff) << 8 | uVar7 & 0xff,(uVar8 & 0xff) << 8 | uVar9 & 0xff);
    return;
  case 0x4a:
    VIRTUALREGISTER_SetRegM('\0','J',param_2 & 1);
    uVar11 = VIRTUALREGISTER_GetRegM('\0','J');
    CDsp::SetSwap(*(CDsp **)PTR_gpVDsp_00567e80,uVar11 & 1);
    return;
  case 0x4b:
    param_1 = 'K';
    param_2 = param_2 & 3;
    break;
  case 0x4c:
    uVar13 = 'L';
LAB_001457f8:
    VIRTUALREGISTER_SetRegM('\0',uVar13,param_2);
    uVar11 = VIRTUALREGISTER_GetRegM('\0','<');
    uVar12 = VIRTUALREGISTER_GetRegM('\0','=');
    uVar11 = (uVar11 & 3) << 8 | uVar12 & 0xff;
    uVar12 = VIRTUALREGISTER_GetRegM('\0','K');
    uVar10 = VIRTUALREGISTER_GetRegM('\0','L');
    uVar12 = (uVar12 & 3) << 8 | uVar10 & 0xff;
    if (uVar11 <= uVar12) {
      CDsp::SetRewriteWindow(*(CDsp **)PTR_gpVDsp_00567e80,uVar11,uVar12);
      return;
    }
switchD_00145670_caseD_39:
    return;
  case 0x7c:
    uVar12 = VIRTUALREGISTER_GetRegC(0x7b);
    uVar11 = (uVar12 & 7) << 7 | uVar11 & 0x7f;
    this = *(CDsp **)PTR_gpVDsp_00567e80;
    goto LAB_00145964;
  case 0x7f:
    VIRTUALREGISTER_GetRegC(0x7d);
    VIRTUALREGISTER_GetRegC(0x7e);
    puVar1 = PTR_gpVDsp_00567e80;
    CDsp::SetDspData((uint)*(undefined8 *)PTR_gpVDsp_00567e80,0);
    uVar11 = VIRTUALREGISTER_GetRegC(0x7b);
    uVar12 = VIRTUALREGISTER_GetRegC(0x7c);
    this = *(CDsp **)puVar1;
    uVar11 = (uVar12 & 0x7f | (uVar11 & 7) << 7) + 1;
LAB_00145964:
    CDsp::SetDspAdr(this,uVar11);
    return;
  }
  VIRTUALREGISTER_SetRegM('\0',param_1,param_2);
  return;
}

