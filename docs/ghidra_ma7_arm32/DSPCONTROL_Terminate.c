/* DSPCONTROL_Terminate @ 00041378 30B */


/* ARM::DSPCONTROL_Terminate() */

void ARM::DSPCONTROL_Terminate(void)

{
  undefined4 *puVar1;
  CDsp *this;
  
  puVar1 = *(undefined4 **)(DAT_00041398 + 0x41380);
  this = (CDsp *)*puVar1;
  if (this != (CDsp *)0x0) {
    CDsp::~CDsp(this);
    operator_delete(this);
    *puVar1 = 0;
  }
  return;
}

