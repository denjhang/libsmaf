/* CBInfo_FreeCallback @ 00033814 652B */


/* CBInfo_FreeCallback(unsigned int) */

void CBInfo_FreeCallback(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_00033aa0;
  EnterCriticalSection((critical_section *)(DAT_00033aa0 + 0x3381e));
  if ((*(uint *)(iVar1 + 0x33996) == param_1) && (*(int *)(iVar1 + 0x3399a) != 0)) {
    iVar1 = iVar1 + 0x33996;
  }
  else if ((*(uint *)(DAT_00033aa4 + 0x339b6) == param_1) && (*(int *)(DAT_00033aa4 + 0x339ba) != 0)
          ) {
    iVar1 = DAT_00033aa4 + 0x339b6;
  }
  else if ((*(uint *)(DAT_00033aa8 + 0x339d2) == param_1) && (*(int *)(DAT_00033aa8 + 0x339d6) != 0)
          ) {
    iVar1 = DAT_00033aa8 + 0x339d2;
  }
  else if ((*(uint *)(DAT_00033aac + 0x339ee) == param_1) && (*(int *)(DAT_00033aac + 0x339f2) != 0)
          ) {
    iVar1 = DAT_00033aac + 0x339ee;
  }
  else if ((*(uint *)(DAT_00033ab0 + 0x33a08) == param_1) && (*(int *)(DAT_00033ab0 + 0x33a0c) != 0)
          ) {
    iVar1 = DAT_00033ab0 + 0x33a08;
  }
  else if ((*(uint *)(DAT_00033ab4 + 0x33a24) == param_1) && (*(int *)(DAT_00033ab4 + 0x33a28) != 0)
          ) {
    iVar1 = DAT_00033ab4 + 0x33a24;
  }
  else if ((*(uint *)(DAT_00033ab8 + 0x33a40) == param_1) && (*(int *)(DAT_00033ab8 + 0x33a44) != 0)
          ) {
    iVar1 = DAT_00033ab8 + 0x33a40;
  }
  else if ((*(uint *)(DAT_00033abc + 0x33a5a) == param_1) && (*(int *)(DAT_00033abc + 0x33a5e) != 0)
          ) {
    iVar1 = DAT_00033abc + 0x33a5a;
  }
  else if ((*(uint *)(DAT_00033ac0 + 0x33a76) == param_1) && (*(int *)(DAT_00033ac0 + 0x33a7a) != 0)
          ) {
    iVar1 = DAT_00033ac0 + 0x33a76;
  }
  else if ((*(uint *)(DAT_00033ac4 + 0x33a92) == param_1) && (*(int *)(DAT_00033ac4 + 0x33a96) != 0)
          ) {
    iVar1 = DAT_00033ac4 + 0x33a92;
  }
  else if ((*(uint *)((int)&DAT_00033aac + DAT_00033ac8 + 2) == param_1) &&
          (*(int *)((int)&DAT_00033ab0 + DAT_00033ac8 + 2) != 0)) {
    iVar1 = DAT_00033ac8 + 0x33aae;
  }
  else if ((*(uint *)((int)&DAT_00033ac8 + DAT_00033acc) == param_1) &&
          (*(int *)((int)&DAT_00033acc + DAT_00033acc) != 0)) {
    iVar1 = (int)&DAT_00033ac8 + DAT_00033acc;
  }
  else if ((*(uint *)((int)&DAT_00033ae4 + DAT_00033ad0) == param_1) &&
          (*(int *)((int)&DAT_00033ae8 + DAT_00033ad0) != 0)) {
    iVar1 = (int)&DAT_00033ae4 + DAT_00033ad0;
  }
  else if ((*(uint *)(DAT_00033ad4 + 0x33b00) == param_1) && (*(int *)(DAT_00033ad4 + 0x33b04) != 0)
          ) {
    iVar1 = DAT_00033ad4 + 0x33b00;
  }
  else if ((*(uint *)(DAT_00033ad8 + 0x33b1a) == param_1) && (*(int *)(DAT_00033ad8 + 0x33b1e) != 0)
          ) {
    iVar1 = DAT_00033ad8 + 0x33b1a;
  }
  else if ((*(uint *)(DAT_00033adc + 0x33b36) == param_1) && (*(int *)(DAT_00033adc + 0x33b3a) != 0)
          ) {
    iVar1 = DAT_00033adc + 0x33b36;
  }
  else if ((*(uint *)(DAT_00033ae0 + 0x33b52) == param_1) && (*(int *)(DAT_00033ae0 + 0x33b56) != 0)
          ) {
    iVar1 = DAT_00033ae0 + 0x33b52;
  }
  else if ((*(uint *)(DAT_00033ae4 + 0x33b6c) == param_1) && (*(int *)(DAT_00033ae4 + 0x33b70) != 0)
          ) {
    iVar1 = DAT_00033ae4 + 0x33b6c;
  }
  else if ((*(uint *)(DAT_00033ae8 + 0x33b88) == param_1) && (*(int *)(DAT_00033ae8 + 0x33b8c) != 0)
          ) {
    iVar1 = DAT_00033ae8 + 0x33b88;
  }
  else if ((*(uint *)(DAT_00033aec + 0x33ba4) != param_1) ||
          (iVar1 = DAT_00033aec + 0x33ba4, *(int *)(DAT_00033aec + 0x33ba8) == 0))
  goto LAB_00033950;
  *(undefined4 *)(iVar1 + 4) = 0;
LAB_00033950:
  LeaveCriticalSection((critical_section *)(DAT_00033af0 + 0x3395a));
  return;
}

