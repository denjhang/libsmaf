/* DSPCONTROL_Terminate @ 001455c4 64B */


/* ARM::DSPCONTROL_Terminate() */

void ARM::DSPCONTROL_Terminate(void)

{
  undefined *puVar1;
  CDsp *this;
  
  puVar1 = PTR_gpVDsp_00567e80;
  this = *(CDsp **)PTR_gpVDsp_00567e80;
  if (this != (CDsp *)0x0) {
    CDsp::~CDsp(this);
    operator_delete(this);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}

