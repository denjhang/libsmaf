/* MaDsp_3DEngProc4Doppler @ 00116628 2444B */


/* YAMAHA::MaDsp_3DEngProc4Doppler(_MASMW_P3DASNDSRCCTRL*, _MASMW_P3DASNDSRCMOVE*,
   _MASMW_P3DACALCRESULT*) */

undefined8
YAMAHA::MaDsp_3DEngProc4Doppler
          (_MASMW_P3DASNDSRCCTRL *param_1,_MASMW_P3DASNDSRCMOVE *param_2,
          _MASMW_P3DACALCRESULT *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  Elf32_Sym *pEVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  char cVar14;
  
  uVar8 = *(uint *)param_1;
  pEVar6 = (Elf32_Sym *)param_2;
  if (((uVar8 & 6) == 0) &&
     (((*(int *)(param_2 + 0x10) != 0 || ((uVar8 & 0x6800) == 0)) &&
      (pEVar6 = __DT_SYMTAB + 0xec, (uVar8 & 0x11008) == 0)))) {
    if (*(int *)(param_3 + 8) == 0x400) {
      return 0x1100800000000;
    }
LAB_00116664:
    *(undefined4 *)(param_3 + 8) = 0x400;
    return CONCAT44(pEVar6,4);
  }
  if (1 < *(uint *)(param_1 + 0x60)) goto LAB_00116664;
  uVar1 = *(uint *)(param_2 + 0xe0);
  uVar10 = *(uint *)(param_2 + 0xe4);
  uVar9 = *(uint *)(param_2 + 0xe8);
  uVar8 = 0;
  if (uVar1 != 0) {
    if ((uVar1 & 0x80000000) == 0x80000000) {
      if ((uVar1 & 0xffffc000) != 0xffffc000) {
        if (-1 < (int)(uVar1 << 1)) goto LAB_00116e8c;
        if (-1 < (int)(uVar1 << 2)) goto LAB_00116e98;
        if (-1 < (int)(uVar1 << 3)) goto LAB_00116e92;
        if (-1 < (int)(uVar1 << 4)) goto LAB_00116e9e;
        if (-1 < (int)(uVar1 << 5)) goto LAB_00116eea;
        if (-1 < (int)(uVar1 << 6)) goto LAB_00116ef6;
        if (-1 < (int)(uVar1 << 7)) goto LAB_00116ef0;
        if (-1 < (int)(uVar1 << 8)) goto LAB_00116f34;
        if (-1 < (int)(uVar1 << 9)) goto LAB_00116f2c;
        if (-1 < (int)(uVar1 << 10)) goto LAB_00116fa4;
        if (-1 < (int)(uVar1 << 0xb)) goto LAB_00116f9c;
        if (-1 < (int)(uVar1 << 0xc)) goto LAB_00116f74;
        if (-1 < (int)(uVar1 << 0xd)) goto LAB_00116f6c;
        if (-1 < (int)(uVar1 << 0xe)) goto LAB_00116f64;
        if (-1 < (int)(uVar1 << 0xf)) goto LAB_00117018;
        if (-1 < (int)(uVar1 << 0x10)) goto LAB_00117002;
        if (-1 < (int)(uVar1 << 0x11)) goto LAB_00116d72;
      }
LAB_001166fe:
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      if ((uVar1 & 0xffffc000) != 0) {
        if ((int)(uVar1 << 1) < 0) {
LAB_00116e8c:
          uVar8 = 0x11;
        }
        else if ((int)(uVar1 << 2) < 0) {
LAB_00116e98:
          uVar8 = 0x10;
        }
        else if ((int)(uVar1 << 3) < 0) {
LAB_00116e92:
          uVar8 = 0xf;
        }
        else if ((int)(uVar1 << 4) < 0) {
LAB_00116e9e:
          uVar8 = 0xe;
        }
        else if ((int)(uVar1 << 5) < 0) {
LAB_00116eea:
          uVar8 = 0xd;
        }
        else if ((int)(uVar1 << 6) < 0) {
LAB_00116ef6:
          uVar8 = 0xc;
        }
        else if ((int)(uVar1 << 7) < 0) {
LAB_00116ef0:
          uVar8 = 0xb;
        }
        else if ((int)(uVar1 << 8) < 0) {
LAB_00116f34:
          uVar8 = 10;
        }
        else if ((int)(uVar1 << 9) < 0) {
LAB_00116f2c:
          uVar8 = 9;
        }
        else if ((int)(uVar1 << 10) < 0) {
LAB_00116fa4:
          uVar8 = 8;
        }
        else if ((int)(uVar1 << 0xb) < 0) {
LAB_00116f9c:
          uVar8 = 7;
        }
        else if ((int)(uVar1 << 0xc) < 0) {
LAB_00116f74:
          uVar8 = 6;
        }
        else if ((int)(uVar1 << 0xd) < 0) {
LAB_00116f6c:
          uVar8 = 5;
        }
        else if ((int)(uVar1 << 0xe) < 0) {
LAB_00116f64:
          uVar8 = 4;
        }
        else if ((int)(uVar1 << 0xf) < 0) {
LAB_00117018:
          uVar8 = 3;
        }
        else if ((int)(uVar1 << 0x10) < 0) {
LAB_00117002:
          uVar8 = 2;
        }
        else {
          if (-1 < (int)(uVar1 << 0x11)) goto LAB_001166fe;
LAB_00116d72:
          uVar8 = 1;
        }
      }
    }
  }
  uVar11 = 0;
  if (uVar10 != 0) {
    if ((uVar10 & 0x80000000) == 0x80000000) {
      if ((uVar10 & 0xffffc000) != 0xffffc000) {
        if (-1 < (int)(uVar10 << 1)) goto LAB_00116e62;
        if (-1 < (int)(uVar10 << 2)) goto LAB_00116e80;
        if (-1 < (int)(uVar10 << 3)) goto LAB_00116e7a;
        if (-1 < (int)(uVar10 << 4)) goto LAB_00116e86;
        if (-1 < (int)(uVar10 << 5)) goto LAB_00116f02;
        if (-1 < (int)(uVar10 << 6)) goto LAB_00116f0e;
        if (-1 < (int)(uVar10 << 7)) goto LAB_00116f08;
        if (-1 < (int)(uVar10 << 8)) goto LAB_00116f42;
        if (-1 < (int)(uVar10 << 9)) goto LAB_00116f3c;
        if (-1 < (int)(uVar10 << 10)) goto LAB_00116fb4;
        if (-1 < (int)(uVar10 << 0xb)) goto LAB_00116fac;
        if (-1 < (int)(uVar10 << 0xc)) goto LAB_00116fcc;
        if (-1 < (int)(uVar10 << 0xd)) goto LAB_00116fc4;
        if (-1 < (int)(uVar10 << 0xe)) goto LAB_00116fbc;
        if (-1 < (int)(uVar10 << 0xf)) goto LAB_00117010;
        if (-1 < (int)(uVar10 << 0x10)) goto LAB_00117028;
        if (-1 < (int)(uVar10 << 0x11)) goto LAB_00116cf6;
      }
LAB_00116784:
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      if ((uVar10 & 0xffffc000) != 0) {
        if ((int)(uVar10 << 1) < 0) {
LAB_00116e62:
          uVar11 = 0x11;
        }
        else if ((int)(uVar10 << 2) < 0) {
LAB_00116e80:
          uVar11 = 0x10;
        }
        else if ((int)(uVar10 << 3) < 0) {
LAB_00116e7a:
          uVar11 = 0xf;
        }
        else if ((int)(uVar10 << 4) < 0) {
LAB_00116e86:
          uVar11 = 0xe;
        }
        else if ((int)(uVar10 << 5) < 0) {
LAB_00116f02:
          uVar11 = 0xd;
        }
        else if ((int)(uVar10 << 6) < 0) {
LAB_00116f0e:
          uVar11 = 0xc;
        }
        else if ((int)(uVar10 << 7) < 0) {
LAB_00116f08:
          uVar11 = 0xb;
        }
        else if ((int)(uVar10 << 8) < 0) {
LAB_00116f42:
          uVar11 = 10;
        }
        else if ((int)(uVar10 << 9) < 0) {
LAB_00116f3c:
          uVar11 = 9;
        }
        else if ((int)(uVar10 << 10) < 0) {
LAB_00116fb4:
          uVar11 = 8;
        }
        else if ((int)(uVar10 << 0xb) < 0) {
LAB_00116fac:
          uVar11 = 7;
        }
        else if ((int)(uVar10 << 0xc) < 0) {
LAB_00116fcc:
          uVar11 = 6;
        }
        else if ((int)(uVar10 << 0xd) < 0) {
LAB_00116fc4:
          uVar11 = 5;
        }
        else if ((int)(uVar10 << 0xe) < 0) {
LAB_00116fbc:
          uVar11 = 4;
        }
        else if ((int)(uVar10 << 0xf) < 0) {
LAB_00117010:
          uVar11 = 3;
        }
        else if ((int)(uVar10 << 0x10) < 0) {
LAB_00117028:
          uVar11 = 2;
        }
        else {
          if (-1 < (int)(uVar10 << 0x11)) goto LAB_00116784;
LAB_00116cf6:
          uVar11 = 1;
        }
      }
    }
  }
  uVar13 = 0;
  if (uVar9 != 0) {
    if ((uVar9 & 0x80000000) == 0x80000000) {
      if ((uVar9 & 0xffffc000) != 0xffffc000) {
        if (-1 < (int)(uVar9 << 1)) goto LAB_00116eb4;
        if (-1 < (int)(uVar9 << 2)) goto LAB_00116ec0;
        if (-1 < (int)(uVar9 << 3)) goto LAB_00116eba;
        if (-1 < (int)(uVar9 << 4)) goto LAB_00116ec6;
        if (-1 < (int)(uVar9 << 5)) goto LAB_00116ed8;
        if (-1 < (int)(uVar9 << 6)) goto LAB_00116ee4;
        if (-1 < (int)(uVar9 << 7)) goto LAB_00116ede;
        if (-1 < (int)(uVar9 << 8)) goto LAB_00116f52;
        if (-1 < (int)(uVar9 << 9)) goto LAB_00116f4c;
        if (-1 < (int)(uVar9 << 10)) goto LAB_00116f5e;
        if (-1 < (int)(uVar9 << 0xb)) goto LAB_00116f58;
        if (-1 < (int)(uVar9 << 0xc)) goto LAB_00116f88;
        if (-1 < (int)(uVar9 << 0xd)) goto LAB_00116f82;
        if (-1 < (int)(uVar9 << 0xe)) goto LAB_00116f7c;
        if (-1 < (int)(uVar9 << 0xf)) goto LAB_00117020;
        if (-1 < (int)(uVar9 << 0x10)) goto LAB_00116ffc;
        if (-1 < (int)(uVar9 << 0x11)) goto LAB_00116e48;
      }
LAB_0011680a:
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      if ((uVar9 & 0xffffc000) != 0) {
        if ((int)(uVar9 << 1) < 0) {
LAB_00116eb4:
          uVar13 = 0x11;
        }
        else if ((int)(uVar9 << 2) < 0) {
LAB_00116ec0:
          uVar13 = 0x10;
        }
        else if ((int)(uVar9 << 3) < 0) {
LAB_00116eba:
          uVar13 = 0xf;
        }
        else if ((int)(uVar9 << 4) < 0) {
LAB_00116ec6:
          uVar13 = 0xe;
        }
        else if ((int)(uVar9 << 5) < 0) {
LAB_00116ed8:
          uVar13 = 0xd;
        }
        else if ((int)(uVar9 << 6) < 0) {
LAB_00116ee4:
          uVar13 = 0xc;
        }
        else if ((int)(uVar9 << 7) < 0) {
LAB_00116ede:
          uVar13 = 0xb;
        }
        else if ((int)(uVar9 << 8) < 0) {
LAB_00116f52:
          uVar13 = 10;
        }
        else if ((int)(uVar9 << 9) < 0) {
LAB_00116f4c:
          uVar13 = 9;
        }
        else if ((int)(uVar9 << 10) < 0) {
LAB_00116f5e:
          uVar13 = 8;
        }
        else if ((int)(uVar9 << 0xb) < 0) {
LAB_00116f58:
          uVar13 = 7;
        }
        else if ((int)(uVar9 << 0xc) < 0) {
LAB_00116f88:
          uVar13 = 6;
        }
        else if ((int)(uVar9 << 0xd) < 0) {
LAB_00116f82:
          uVar13 = 5;
        }
        else if ((int)(uVar9 << 0xe) < 0) {
LAB_00116f7c:
          uVar13 = 4;
        }
        else if ((int)(uVar9 << 0xf) < 0) {
LAB_00117020:
          uVar13 = 3;
        }
        else if ((int)(uVar9 << 0x10) < 0) {
LAB_00116ffc:
          uVar13 = 2;
        }
        else {
          if (-1 < (int)(uVar9 << 0x11)) goto LAB_0011680a;
LAB_00116e48:
          uVar13 = 1;
        }
      }
    }
  }
  if (uVar11 < uVar8) {
    uVar11 = uVar8;
  }
  if (uVar11 < uVar13) {
    uVar11 = uVar13;
  }
  switch(uVar11) {
  case 0:
    iVar12 = 1;
    break;
  case 1:
    iVar12 = 2;
    break;
  case 2:
    iVar12 = 4;
    break;
  case 3:
    iVar12 = 8;
    break;
  case 4:
    iVar12 = 0x10;
    break;
  case 5:
    iVar12 = 0x20;
    break;
  case 6:
    iVar12 = 0x40;
    break;
  case 7:
    iVar12 = 0x80;
    break;
  case 8:
    iVar12 = 0x100;
    break;
  case 9:
    iVar12 = 0x200;
    break;
  case 10:
    iVar12 = 0x400;
    break;
  case 0xb:
    iVar12 = 0x800;
    break;
  case 0xc:
    iVar12 = 0x1000;
    break;
  case 0xd:
    iVar12 = 0x2000;
    break;
  case 0xe:
    iVar12 = 0x4000;
    break;
  case 0xf:
    iVar12 = 0x8000;
    break;
  case 0x10:
    iVar12 = 0x10000;
    break;
  case 0x11:
    iVar12 = 0x20000;
    break;
  case 0x12:
    iVar12 = 0x40000;
    break;
  case 0x13:
    iVar12 = 0x80000;
    break;
  case 0x14:
    iVar12 = 0x100000;
    break;
  case 0x15:
    iVar12 = 0x200000;
    break;
  case 0x16:
    iVar12 = 0x400000;
    break;
  case 0x17:
    iVar12 = 0x800000;
    break;
  case 0x18:
    iVar12 = 0x1000000;
    break;
  case 0x19:
    iVar12 = 0x2000000;
    break;
  case 0x1a:
    iVar12 = 0x4000000;
    break;
  case 0x1b:
    iVar12 = 0x8000000;
    break;
  case 0x1c:
    iVar12 = 0x10000000;
    break;
  case 0x1d:
    iVar12 = 0x20000000;
    break;
  default:
    iVar12 = 0x40000000;
  }
  iVar2 = __divsi3(uVar1,iVar12);
  iVar7 = *(int *)(param_3 + 0x18);
  iVar3 = __divsi3(uVar10,iVar12,iVar7 * iVar2 * -0x7ffefffd);
  iVar3 = *(int *)(param_3 + 0x1c) * iVar3;
  iVar4 = __divsi3(uVar9,iVar12,*(int *)(param_3 + 0x1c),iVar3 * -0x7ffefffd);
  uVar8 = *(int *)(param_3 + 0x20) * iVar4 * -0x7ffefffd;
  uVar1 = iVar12 * ((*(int *)(param_3 + 0x20) * iVar4) / 0x7fff +
                   iVar3 / 0x7fff + (iVar7 * iVar2) / 0x7fff);
  if (uVar1 == 0) {
switchD_0011694e_caseD_0:
    iVar12 = 1;
  }
  else {
    uVar8 = uVar1 & 0xffff8000;
    if ((uVar1 & 0x80000000) == 0x80000000) {
      if (uVar8 != 0xffff8000) {
        if (-1 < (int)(uVar1 * 2)) goto LAB_00116ea8;
        if (-1 < (int)(uVar1 * 4)) goto LAB_00116ea4;
        uVar8 = uVar1 * 8;
        if (-1 < (int)uVar8) goto LAB_00116eb0;
        if (-1 < (int)(uVar1 * 0x10)) goto LAB_00116eac;
        if (-1 < (int)(uVar1 * 0x20)) goto LAB_00116ed0;
        if (-1 < (int)(uVar1 * 0x40)) goto LAB_00116ecc;
        if (-1 < (int)(uVar1 * 0x80)) goto LAB_00116ed4;
        uVar8 = uVar1 * 0x100;
        if (-1 < (int)uVar8) goto LAB_00116f48;
        if (-1 < (int)(uVar1 * 0x200)) goto LAB_00116f92;
        if (-1 < (int)(uVar1 * 0x400)) goto LAB_00116f8e;
        if (-1 < (int)(uVar1 * 0x800)) goto LAB_00116fe0;
        if (-1 < (int)(uVar1 * 0x1000)) goto LAB_00116fdc;
        uVar8 = uVar1 * 0x2000;
        if (-1 < (int)uVar8) goto LAB_00116fd8;
        if (-1 < (int)(uVar1 * 0x4000)) goto LAB_00116fd4;
        if (-1 < (int)(uVar1 * 0x8000)) goto LAB_00117030;
        if ((int)(uVar1 * 0x10000) < 0) goto LAB_00116946;
LAB_00116de0:
        uVar5 = 1;
        goto LAB_00116948;
      }
      goto switchD_0011694e_caseD_0;
    }
    if (uVar8 == 0) goto switchD_0011694e_caseD_0;
    if ((int)(uVar1 * 2) < 0) {
LAB_00116ea8:
      uVar5 = 0x10;
    }
    else if ((int)(uVar1 * 4) < 0) {
LAB_00116ea4:
      uVar5 = 0xf;
    }
    else if ((int)(uVar1 * 8) < 0) {
LAB_00116eb0:
      uVar5 = 0xe;
    }
    else {
      uVar8 = uVar1 * 0x10;
      if ((int)uVar8 < 0) {
LAB_00116eac:
        uVar5 = 0xd;
      }
      else if ((int)(uVar1 * 0x20) < 0) {
LAB_00116ed0:
        uVar5 = 0xc;
      }
      else if ((int)(uVar1 * 0x40) < 0) {
LAB_00116ecc:
        uVar5 = 0xb;
      }
      else if ((int)(uVar1 * 0x80) < 0) {
LAB_00116ed4:
        uVar5 = 10;
      }
      else if ((int)(uVar1 * 0x100) < 0) {
LAB_00116f48:
        uVar5 = 9;
      }
      else {
        uVar8 = uVar1 * 0x200;
        if ((int)uVar8 < 0) {
LAB_00116f92:
          uVar5 = 8;
        }
        else if ((int)(uVar1 * 0x400) < 0) {
LAB_00116f8e:
          uVar5 = 7;
        }
        else if ((int)(uVar1 * 0x800) < 0) {
LAB_00116fe0:
          uVar5 = 6;
        }
        else if ((int)(uVar1 * 0x1000) < 0) {
LAB_00116fdc:
          uVar5 = 5;
        }
        else if ((int)(uVar1 * 0x2000) < 0) {
LAB_00116fd8:
          uVar5 = 4;
        }
        else {
          uVar8 = uVar1 * 0x4000;
          if ((int)uVar8 < 0) {
LAB_00116fd4:
            uVar5 = 3;
          }
          else if ((int)(uVar1 * 0x8000) < 0) {
LAB_00117030:
            uVar5 = 2;
          }
          else {
            if ((int)(uVar1 * 0x10000) < 0) goto LAB_00116de0;
LAB_00116946:
            uVar5 = 0;
          }
        }
      }
    }
LAB_00116948:
    switch(uVar5) {
    case 0:
      goto switchD_0011694e_caseD_0;
    case 1:
      iVar12 = 2;
      break;
    case 2:
      iVar12 = 4;
      break;
    case 3:
      iVar12 = 8;
      break;
    case 4:
      iVar12 = 0x10;
      break;
    case 5:
      iVar12 = 0x20;
      break;
    case 6:
      iVar12 = 0x40;
      break;
    case 7:
      iVar12 = 0x80;
      break;
    case 8:
      iVar12 = 0x100;
      break;
    case 9:
      iVar12 = 0x200;
      break;
    case 10:
      iVar12 = 0x400;
      break;
    case 0xb:
      iVar12 = 0x800;
      break;
    case 0xc:
      iVar12 = 0x1000;
      break;
    case 0xd:
      iVar12 = 0x2000;
      break;
    case 0xe:
      iVar12 = 0x4000;
      break;
    case 0xf:
      iVar12 = 0x8000;
      break;
    case 0x10:
      iVar12 = 0x10000;
      break;
    default:
      iVar12 = 0x40000000;
    }
  }
  uVar9 = *(uint *)(param_2 + 4);
  if (uVar9 == 0) {
    *(undefined4 *)(param_3 + 8) = 0x400;
    goto LAB_00116b42;
  }
  uVar8 = uVar9 & 0xffff8000;
  if ((uVar9 & 0x80000000) == 0x80000000) {
    cVar14 = 0xffff7fff < uVar8;
    if (uVar8 != 0xffff8000) {
      if (-1 < (int)(uVar9 << 1)) goto LAB_00116e5c;
      if (-1 < (int)(uVar9 << 2)) goto LAB_00116e74;
      if (-1 < (int)(uVar9 << 3)) goto LAB_00116e6e;
      if (-1 < (int)(uVar9 << 4)) goto LAB_00116e68;
      if (-1 < (int)(uVar9 << 5)) goto LAB_00116efc;
      if (-1 < (int)(uVar9 << 6)) goto LAB_00116f1a;
      if (-1 < (int)(uVar9 << 7)) goto LAB_00116f14;
      if (-1 < (int)(uVar9 << 8)) goto LAB_00116f26;
      if (-1 < (int)(uVar9 << 9)) goto LAB_00116f20;
      if (-1 < (int)(uVar9 << 10)) goto LAB_00116ff6;
      if (-1 < (int)(uVar9 << 0xb)) goto LAB_00116ff0;
      if (-1 < (int)(uVar9 << 0xc)) goto LAB_00116fea;
      if (-1 < (int)(uVar9 << 0xd)) goto LAB_00116fe4;
      if (-1 < (int)(uVar9 << 0xe)) goto LAB_00116f96;
      if (-1 < (int)(uVar9 << 0xf)) goto LAB_0011700a;
      if ((int)(uVar9 << 0x10) < 0) goto LAB_00116aae;
LAB_00116c7e:
      iVar2 = 1;
      goto LAB_00116ab2;
    }
switchD_00116abc_default:
    iVar2 = 1;
  }
  else {
    cVar14 = true;
    if (uVar8 == 0) goto switchD_00116abc_default;
    if ((int)(uVar9 << 1) < 0) {
LAB_00116e5c:
      iVar2 = 0x10;
    }
    else if ((int)(uVar9 << 2) < 0) {
LAB_00116e74:
      iVar2 = 0xf;
    }
    else if ((int)(uVar9 << 3) < 0) {
LAB_00116e6e:
      iVar2 = 0xe;
    }
    else if ((int)(uVar9 << 4) < 0) {
LAB_00116e68:
      iVar2 = 0xd;
    }
    else if ((int)(uVar9 << 5) < 0) {
LAB_00116efc:
      iVar2 = 0xc;
    }
    else if ((int)(uVar9 << 6) < 0) {
LAB_00116f1a:
      iVar2 = 0xb;
    }
    else if ((int)(uVar9 << 7) < 0) {
LAB_00116f14:
      iVar2 = 10;
    }
    else if ((int)(uVar9 << 8) < 0) {
LAB_00116f26:
      iVar2 = 9;
    }
    else if ((int)(uVar9 << 9) < 0) {
LAB_00116f20:
      iVar2 = 8;
    }
    else if ((int)(uVar9 << 10) < 0) {
LAB_00116ff6:
      iVar2 = 7;
    }
    else if ((int)(uVar9 << 0xb) < 0) {
LAB_00116ff0:
      iVar2 = 6;
    }
    else if ((int)(uVar9 << 0xc) < 0) {
LAB_00116fea:
      iVar2 = 5;
    }
    else if ((int)(uVar9 << 0xd) < 0) {
LAB_00116fe4:
      iVar2 = 4;
    }
    else if ((int)(uVar9 << 0xe) < 0) {
LAB_00116f96:
      iVar2 = 3;
    }
    else if ((int)(uVar9 << 0xf) < 0) {
LAB_0011700a:
      iVar2 = 2;
    }
    else {
      if ((int)(uVar9 << 0x10) < 0) goto LAB_00116c7e;
LAB_00116aae:
      iVar2 = 0;
    }
LAB_00116ab2:
    cVar14 = 0xe < iVar2 - 1U;
    switch(iVar2 - 1U) {
    case 0:
      iVar2 = 2;
      break;
    case 1:
      iVar2 = 4;
      break;
    case 2:
      iVar2 = 8;
      break;
    case 3:
      iVar2 = 0x10;
      break;
    case 4:
      iVar2 = 0x20;
      break;
    case 5:
      iVar2 = 0x40;
      break;
    case 6:
      iVar2 = 0x80;
      break;
    case 7:
      iVar2 = 0x100;
      break;
    case 8:
      iVar2 = 0x200;
      break;
    case 9:
      iVar2 = 0x400;
      break;
    case 10:
      iVar2 = 0x800;
      break;
    case 0xb:
      iVar2 = 0x1000;
      break;
    case 0xc:
      iVar2 = 0x2000;
      break;
    case 0xd:
      iVar2 = 0x4000;
      break;
    case 0xe:
      iVar2 = 0x8000;
      break;
    case 0xf:
      iVar2 = 0x10000;
      break;
    default:
      goto switchD_00116abc_default;
    }
  }
  iVar3 = __udivsi3();
  iVar4 = __divsi3(uVar1,iVar12);
  uVar1 = iVar4 * iVar3;
  uVar8 = uVar1 + 0xffff & (int)uVar1 >> 0x20;
  if (cVar14 == '\0') {
    uVar8 = uVar1;
  }
  uVar8 = 0x400 - (iVar2 * iVar12 * ((int)uVar8 >> 0x10)) / 0x14e;
  if ((int)uVar8 < 0x801) {
    if ((int)uVar8 < 1) {
      *(undefined4 *)(param_3 + 8) = 1;
    }
    else {
      *(uint *)(param_3 + 8) = uVar8;
    }
  }
  else {
    *(undefined4 *)(param_3 + 8) = 0x800;
  }
LAB_00116b42:
  return CONCAT44(uVar8,4);
}

