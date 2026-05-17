/* Hw_Initialize @ 00138f40 1016B */


/* WARNING: Type propagation algorithm not settling */

undefined8 Hw_Initialize(uint param_1,char param_2,long param_3)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  CCh *this;
  ulong uVar4;
  char cVar5;
  uchar uVar6;
  
  if (((param_2 == '\0') && (param_3 != 0)) &&
     (((param_1 == 0x2b11 || (((param_1 == 16000 || (param_1 == 0x5622)) || (param_1 == 24000)))) ||
      ((param_1 == 32000 || param_1 == 0xac44 || (param_1 == 48000)))))) {
    if (DAT_00568030 == -1) {
      InitializeCriticalSection((critical_section *)&DAT_00582978);
      EnterCriticalSection((critical_section *)&DAT_00582978);
      this = operator_new(8);
      ARM::CCh::CCh(this,param_1);
      puVar1 = PTR_gpCh_00567b40;
      *(CCh **)PTR_gpCh_00567b40 = this;
      ARM::CCh::Initialize((uint)this);
      iVar3 = ARM::FMCONTROL_Initialize(param_1,*(CCh **)puVar1);
      if (((-1 < iVar3) && (iVar3 = ARM::WTCONTROL_Initialize(param_1,*(CCh **)puVar1), -1 < iVar3))
         && ((iVar3 = ARM::STMCONTROL_Initialize(param_1,*(CCh **)puVar1), -1 < iVar3 &&
             ((((iVar3 = ARM::HVCONTROL_Initialize(param_1,*(CCh **)puVar1), -1 < iVar3 &&
                (iVar3 = ARM::DTMFCONTROL_Initialize(param_1), -1 < iVar3)) &&
               (iVar3 = ARM::DSPCONTROL_Initialize(param_1), -1 < iVar3)) &&
              (iVar3 = ARM::DINCONTROL_Initialize(param_1), -1 < iVar3)))))) {
        DAT_00568030 = 0;
        uVar6 = 'd';
        cVar5 = 'e';
        DAT_00582971 = 0;
        DAT_005829a8 = (param_1 + 999) / 1000;
        DAT_00568034 = param_1;
        DAT_005829e8 = param_3;
        ARM::Sequencer_Initialize();
        ARM::Timer_Initialize();
        ARM::SIrqFifo_Initialize();
        ARM::VIRTUALMEMORY_Initialize();
        ARM::VIRTUALREGISTER_Initialize();
        FUN_001367e0();
        bVar2 = DAT_00582971 & 8;
        if (bVar2 != 0) goto joined_r0x0013929c;
        do {
          if (5 < (byte)(cVar5 + 0x9bU)) {
            if ((byte)(cVar5 + 0x95U) < 0x17) {
              if (uVar6 == 0x80) goto LAB_00139114;
            }
            else if (4 < (byte)(cVar5 + 0x7eU)) {
              if (uVar6 == 0x87) {
                uVar4 = FUN_001315cc(0xffffff87);
                if ((uVar4 & 0x70) != 0) {
                  DAT_005829c8 = DAT_00568034 / 0x24;
                  DAT_005829c4 = (uint)bVar2;
                }
              }
              else if ((uVar6 == 0x8d) && (uVar4 = FUN_001315cc(0xffffff8d), (uVar4 & 0x70) != 0)) {
                DAT_005829d8 = (DAT_00568034 << 1) / 9;
                DAT_005829d4 = (uint)bVar2;
              }
              ARM::VIRTUALREGISTER_SetRegM('\0',uVar6,'\0');
              goto joined_r0x0013929c;
            }
            ARM::VIRTUALREGISTER_SetRegM(bVar2,uVar6,bVar2);
            goto joined_r0x0013929c;
          }
          if (uVar6 == 'f') {
            ARM::VIRTUALREGISTER_SetRegM(bVar2,0x80,'\v');
          }
          ARM::VIRTUALREGISTER_SetRegM('\0',uVar6,'\0');
          while( true ) {
            bVar2 = DAT_00582971 & 8;
LAB_00139114:
            cVar5 = cVar5 + '\x01';
            uVar6 = uVar6 + '\x01';
            if (bVar2 == 0) break;
joined_r0x0013929c:
            if (cVar5 == -0x72) {
              ARM::VIRTUALREGISTER_SetRegM('\0','d','\x0f');
              ARM::VIRTUALREGISTER_SetRegM('\0','e','\x03');
              ARM::VIRTUALREGISTER_SetRegM('\0','f',0xff);
              ARM::VIRTUALREGISTER_SetRegM('\0','g',0xc6);
              ARM::VIRTUALREGISTER_SetRegM('\0','h','\n');
              ARM::VIRTUALREGISTER_SetRegM('\0','i','H');
              ARM::VIRTUALREGISTER_SetRegM('\0',0x82,'\b');
              FUN_001378fc(100,0xf);
              FUN_001378fc(0x65,3);
              FUN_001378fc(0x66,0xffffffff);
              FUN_001378fc(0x67,0xffffffc6);
              FUN_001378fc(0x68,10);
              FUN_001378fc(0x69,0x48);
              FUN_001378fc(0xffffff82,8);
              LeaveCriticalSection((critical_section *)&DAT_00582978);
              return 0;
            }
          }
        } while( true );
      }
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

