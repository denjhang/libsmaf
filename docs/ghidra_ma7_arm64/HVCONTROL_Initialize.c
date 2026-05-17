/* HVCONTROL_Initialize @ 00146ddc 108B */


/* ARM::HVCONTROL_Initialize(unsigned int, ARM::CCh*) */

undefined8 ARM::HVCONTROL_Initialize(uint param_1,CCh *param_2)

{
  undefined *puVar1;
  CCsmSynth *this;
  undefined8 uVar2;
  
  if (param_2 == (CCh *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    this = operator_new(0x1a08);
    CCsmSynth::CCsmSynth(this,param_1,param_2);
    puVar1 = PTR_gHVprm_00567ee8;
    uVar2 = 0;
    *(CCsmSynth **)PTR_gpVHV_00567ec0 = this;
    *(undefined8 *)puVar1 = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)(puVar1 + 0x20) = 0;
  }
  return uVar2;
}

