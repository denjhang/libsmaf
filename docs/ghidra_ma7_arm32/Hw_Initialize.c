/* Hw_Initialize @ 00036d68 726B */


undefined4 Hw_Initialize(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CCh *this;
  int iVar6;
  uint uVar7;
  int iVar8;
  uchar uVar9;
  uint uVar10;
  uint uVar11;
  uchar uVar12;
  undefined4 *puVar13;
  critical_section *pcVar14;
  
  iVar6 = DAT_00037048;
  iVar1 = DAT_00037044;
  iVar8 = DAT_00037040;
  if (((param_2 != 0) || (param_3 == 0)) ||
     ((param_1 != 0x2b11 && param_1 != 16000 &&
      (((param_1 != 0x5622 && param_1 != 24000 && (param_1 != 32000 && param_1 != 0xac44)) &&
       (param_1 != 48000)))))) {
    return 0xfffffffe;
  }
  if (*(char *)(DAT_00037040 + 0x36d96) == -1) {
    pcVar14 = (critical_section *)(DAT_00037044 + 0x36da8);
    InitializeCriticalSection(pcVar14);
    EnterCriticalSection(pcVar14);
    this = operator_new(4);
    ARM::CCh::CCh(this,param_1);
    puVar13 = *(undefined4 **)(iVar6 + 0x36dc4);
    *puVar13 = this;
    if (this != (CCh *)0x0) {
      ARM::CCh::Initialize((uint)this);
      iVar6 = ARM::FMCONTROL_Initialize(param_1,(CCh *)*puVar13);
      if ((((-1 < iVar6) && (iVar6 = ARM::WTCONTROL_Initialize(param_1,(CCh *)*puVar13), -1 < iVar6)
           ) && (((iVar6 = ARM::STMCONTROL_Initialize(param_1,(CCh *)*puVar13), -1 < iVar6 &&
                  ((iVar6 = ARM::HVCONTROL_Initialize(param_1,(CCh *)*puVar13), -1 < iVar6 &&
                   (iVar6 = ARM::DTMFCONTROL_Initialize(param_1), -1 < iVar6)))) &&
                 (iVar6 = ARM::DSPCONTROL_Initialize(param_1), -1 < iVar6)))) &&
         (iVar6 = ARM::DINCONTROL_Initialize(param_1), -1 < iVar6)) {
        *(uint *)(iVar8 + 0x36d98) = param_1;
        *(int *)(iVar1 + 0x36de4) = param_3;
        *(undefined1 *)(iVar8 + 0x36d96) = 0;
        *(undefined1 *)(iVar1 + 0x36da5) = 0;
        iVar3 = DAT_00037054;
        iVar2 = DAT_00037050;
        iVar6 = DAT_0003704c;
        uVar12 = 'd';
        uVar11 = 0x65;
        *(uint *)(iVar1 + 0x36db0) = (param_1 + 999) / 1000;
        ARM::Sequencer_Initialize();
        iVar4 = DAT_00037058;
        ARM::Timer_Initialize();
        iVar5 = DAT_0003705c;
        ARM::SIrqFifo_Initialize();
        ARM::VIRTUALMEMORY_Initialize();
        ARM::VIRTUALREGISTER_Initialize();
        FUN_000360f8();
        uVar10 = *(byte *)(iVar1 + 0x36da5) & 8;
        iVar8 = DAT_00037060;
        if ((*(byte *)(iVar1 + 0x36da5) & 8) != 0) goto joined_r0x00036fa0;
        do {
          uVar9 = (uchar)uVar10;
          if (5 < uVar11 - 0x65) {
            if (uVar11 - 0x6b < 0x17) {
              if (uVar12 == 0x80) goto LAB_00036ec2;
            }
            else if (4 < (uVar11 + 0x7e & 0xff)) {
              if (uVar12 == 0x87) {
                uVar7 = ARM::VIRTUALREGISTER_GetRegM(uVar9,0x87);
                if ((uVar7 & 0x70) != 0) {
                  uVar7 = *(uint *)(iVar3 + 0x36e8c);
                  *(uint *)(iVar2 + 0x36e9e) = uVar10;
                  *(uint *)(iVar2 + 0x36ea2) = uVar7 / 0x24;
                }
              }
              else if ((uVar12 == 0x8d) &&
                      (uVar7 = ARM::VIRTUALREGISTER_GetRegM(uVar9,0x8d), (uVar7 & 0x70) != 0)) {
                iVar8 = *(int *)(iVar4 + 0x36e92);
                *(uint *)(iVar5 + 0x36eb0) = uVar10;
                *(uint *)(iVar5 + 0x36eb4) = (uint)(iVar8 << 1) / 9;
              }
              ARM::VIRTUALREGISTER_SetRegM('\0',uVar12,'\0');
              iVar8 = DAT_00037060;
              goto joined_r0x00036fa0;
            }
            ARM::VIRTUALREGISTER_SetRegM(uVar9,uVar12,uVar9);
            iVar8 = DAT_00037060;
            goto joined_r0x00036fa0;
          }
          if (uVar12 == 'f') {
            ARM::VIRTUALREGISTER_SetRegM(uVar9,0x80,'\v');
          }
          ARM::VIRTUALREGISTER_SetRegM('\0',uVar12,'\0');
          while( true ) {
            uVar10 = *(byte *)(iVar6 + 0x36e7d) & 8;
LAB_00036ec2:
            uVar12 = uVar12 + '\x01';
            uVar11 = uVar11 + 1 & 0xff;
            iVar8 = DAT_00037060;
            if (uVar10 == 0) break;
joined_r0x00036fa0:
            DAT_00037060 = iVar8;
            if (uVar11 == 0x8e) {
              ARM::VIRTUALREGISTER_SetRegM('\0','d','\x0f');
              ARM::VIRTUALREGISTER_SetRegM('\0','e','\x03');
              ARM::VIRTUALREGISTER_SetRegM('\0','f',0xff);
              ARM::VIRTUALREGISTER_SetRegM('\0','g',0xc6);
              ARM::VIRTUALREGISTER_SetRegM('\0','h','\n');
              ARM::VIRTUALREGISTER_SetRegM('\0','i','H');
              ARM::VIRTUALREGISTER_SetRegM('\0',0x82,'\b');
              FUN_00036608(100,0xf);
              FUN_00036608(0x65,3);
              FUN_00036608(0x66,0xff);
              FUN_00036608(0x67,0xc6);
              FUN_00036608(0x68,10);
              FUN_00036608(0x69,0x48);
              FUN_00036608(0x82,8);
              LeaveCriticalSection((critical_section *)(iVar8 + 0x36f2c));
              return 0;
            }
          }
        } while( true );
      }
    }
  }
  return 0xffffffff;
}

