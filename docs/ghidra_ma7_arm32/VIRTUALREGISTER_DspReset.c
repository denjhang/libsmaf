/* VIRTUALREGISTER_DspReset @ 00039570 164B */


/* ARM::VIRTUALREGISTER_DspReset() */

void ARM::VIRTUALREGISTER_DspReset(void)

{
  uchar uVar1;
  
  uVar1 = ',';
  do {
    VIRTUALREGISTER_SetRegM('\0',uVar1,'\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\x01','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\x02','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\x03','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\x04','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\x05','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\x06','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\a','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\b','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\t','\0');
    VIRTUALREGISTER_SetRegM('\0',uVar1 + '\n','\0');
    uVar1 = uVar1 + '\v';
  } while (uVar1 != 'M');
  return;
}

