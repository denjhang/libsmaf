/* MaMidCnv_GetResInfo @ 000a99b4 34B */


/* YAMAHA::MaMidCnv_GetResInfo(_MACNV_SEQ_INFO*) */

char * YAMAHA::MaMidCnv_GetResInfo(_MACNV_SEQ_INFO *param_1)

{
  char *pcVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (*(char **)(param_1 + 4) != (char *)0x0)) {
    pcVar1 = "9CStmSynth10oscSlot_8BEPNS_14_tagSTSLOTINFOEPNS_13_tagSTEREOOUTE";
    if (**(char **)(param_1 + 4) != '\x01') {
      pcVar1 = (char *)0xffffffff;
    }
    return pcVar1;
  }
  return (char *)0xfffffffe;
}

