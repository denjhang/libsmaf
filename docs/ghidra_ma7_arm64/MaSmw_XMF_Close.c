/* MaSmw_XMF_Close @ 001abc40 108B */


/* YAMAHA::MaSmw_XMF_Close(YAMAHA::_tagmaXMF_Info*) */

undefined8 YAMAHA::MaSmw_XMF_Close(_tagmaXMF_Info *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (_tagmaXMF_Info *)0x0) {
    uVar1 = 0xfffffffe;
  }
  else if (*(int *)param_1 == 1) {
    uVar1 = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

