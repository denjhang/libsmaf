/* MaHvDrvCN_Initialize @ 000e3958 484B */


/* YAMAHA::MaHvDrvCN_Initialize(unsigned int) */

undefined4 YAMAHA::MaHvDrvCN_Initialize(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar2 = DAT_000e3b44;
  iVar1 = DAT_000e3b40;
  iVar3 = DAT_000e3b3c;
  piVar5 = (int *)(DAT_000e3b3c + 0xe3966);
  if (*piVar5 == 0) {
    if (param_1 == 0x14) {
      *(undefined4 *)(DAT_000e3b3c + 0xe396e) = 0x14;
      *(undefined2 *)(iVar3 + 0xe447a) = 0x14;
      *(undefined2 *)(iVar3 + 0xe4488) = 0x14;
      *(int *)(iVar3 + 0xe4476) = iVar1 + 0xe4042;
      *(undefined4 *)(iVar3 + 0xe397e) = 1;
      *(undefined4 *)(iVar3 + 0xe4482) = 0x3e964;
      *(undefined1 *)(iVar3 + 0xe43ae) = 1;
      *(undefined1 *)(iVar3 + 0xe43af) = 1;
      *(undefined1 *)(iVar3 + 0xe45cd) = 1;
      *(undefined2 *)(iVar3 + 0xe444e) = 200;
      *(undefined2 *)(iVar3 + 0xe4456) = 0x4b0;
      *(undefined4 *)(iVar3 + 0xe447e) = 8;
      *(undefined2 *)(iVar3 + 0xe4486) = 0x12fd;
      *(undefined4 *)(iVar3 + 0xe448a) = 0x7c;
      *(undefined4 *)(iVar3 + 0xe3972) = 0;
      *(undefined4 *)(iVar3 + 0xe3976) = 0;
      *(undefined4 *)(iVar3 + 0xe397a) = 0;
      *(undefined4 *)(iVar3 + 0xe3982) = 0;
      *(undefined4 *)(iVar3 + 0xe3986) = 0;
      *(undefined4 *)(iVar3 + 0xe398a) = 0;
      *(undefined2 *)(iVar3 + 0xe398e) = 0;
      *(undefined1 *)(iVar3 + 0xe3990) = 0;
      *(undefined1 *)(iVar3 + 0xe3991) = 0;
      *(undefined1 *)(iVar3 + 0xe3d9a) = 0;
      *(undefined1 *)(iVar3 + 0xe41a6) = 0;
      *(undefined4 *)(iVar3 + 0xe43b2) = 0;
      *(undefined1 *)(iVar3 + 0xe43ba) = 0;
      *(undefined1 *)(iVar3 + 0xe443e) = 0;
      *(undefined1 *)(iVar3 + 0xe443f) = 0;
      *(undefined4 *)(iVar3 + 0xe4452) = 0;
      *(undefined2 *)(iVar3 + 0xe45ca) = 0;
      *(undefined1 *)(iVar3 + 0xe45cc) = 0;
      *(undefined4 *)(iVar3 + 0xe448e) = 0x1f0e;
      *(undefined2 *)(iVar3 + 0xe445e) = 0x14;
      *(undefined2 *)(iVar3 + 0xe446c) = 0x14;
      *(int *)(iVar3 + 0xe445a) = iVar1 + 0xe4042;
      *(undefined4 *)(iVar3 + 0xe4466) = 0x3e964;
      *(int *)(iVar3 + 0xe44fa) = iVar2 + 0xe40b0;
      *(undefined4 *)(iVar3 + 0xe4462) = 8;
      *(undefined4 *)(iVar3 + 0xe446e) = 0x7c;
      *(undefined4 *)(iVar3 + 0xe4472) = 0x1f0e;
      *piVar5 = 1;
      *(int *)(iVar3 + 0xe44f6) = iVar2 + 0xe4082;
      *(int *)(iVar3 + 0xe44fe) = iVar2 + 0xe40de;
      *(int *)(iVar3 + 0xe4502) = iVar2 + 0xe410c;
      *(int *)(iVar3 + 0xe4506) = iVar2 + 0xe413a;
      *(int *)(iVar3 + 0xe450a) = (int)&USHORT_000e4168 + iVar2;
      *(int *)(iVar3 + 0xe450e) = iVar2 + 0xe4196;
      *(undefined4 *)(iVar3 + 0xe4492) = 0;
      *(undefined2 *)(iVar3 + 0xe44a4) = 0;
      *(undefined4 *)(iVar3 + 0xe449a) = 0;
      *(undefined4 *)(iVar3 + 0xe44a6) = 0;
      *(undefined4 *)(iVar3 + 0xe44aa) = 0;
      *(undefined4 *)(iVar3 + 0xe449e) = 0;
      *(undefined2 *)(iVar3 + 0xe4496) = 0;
      *(undefined2 *)(iVar3 + 0xe44a2) = 0;
      *(undefined4 *)(iVar3 + 0xe44be) = 0;
      *(undefined2 *)(iVar3 + 0xe44b8) = 0;
      *(undefined2 *)(iVar3 + 0xe44b6) = 0;
      *(undefined2 *)(iVar3 + 0xe44b4) = 0;
      *(undefined2 *)(iVar3 + 0xe44b2) = 0;
      *(undefined2 *)(iVar3 + 0xe44ba) = 0;
      *(undefined4 *)(iVar3 + 0xe396a) = 0;
      *(int *)(iVar3 + 0xe4512) = iVar2 + 0xe41c4;
      *(undefined2 *)(iVar3 + 0xe446a) = 0xf53;
      *(int *)(iVar3 + 0xe4516) = iVar2 + 0xe41f2;
      *(int *)(iVar3 + 0xe4522) = iVar2 + 0xe427c;
      *(int *)(iVar3 + 0xe44ae) = iVar3 + 0xe445a;
      *(int *)(iVar3 + 0xe4532) = iVar2 + 0xe4334;
      *(int *)(iVar3 + 0xe451a) = iVar2 + 0xe4220;
      *(int *)(iVar3 + 0xe451e) = iVar2 + 0xe424e;
      *(int *)(iVar3 + 0xe4526) = iVar2 + 0xe42aa;
      *(int *)(iVar3 + 0xe452a) = iVar2 + 0xe42d8;
      *(int *)(iVar3 + 0xe452e) = iVar2 + 0xe4306;
      memset((void *)(iVar3 + 0xe4536),0,0x40);
      *(undefined1 *)(iVar3 + 0xe4576) = 0;
      iVar3 = FUN_000e30f0(0);
      if (iVar3 < 0) {
        *piVar5 = 0;
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0xfffffffe;
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

