/* IntThread @ 00030f74 52B */


/* CM7_EmuSmw7App::IntThread(void*) */

undefined4 CM7_EmuSmw7App::IntThread(void *param_1)

{
  int iVar1;
  
  do {
    while (iVar1 = WaitForSingleObject(*(my_event_t **)((int)param_1 + 8),0x14), iVar1 != 0x6e) {
      ResetEvent(*(my_event_t **)((int)param_1 + 8));
      CBInfo_Procedure();
    }
    iVar1 = WaitForSingleObject(*(my_event_t **)((int)param_1 + 4),0);
  } while (iVar1 == 0x6e);
  AfxEndThread(0,'\0');
  return 0;
}

