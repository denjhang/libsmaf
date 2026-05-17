/* IntThread @ 0012ca9c 116B */


/* CM7_EmuSmw7App::IntThread(void*) */

undefined8 CM7_EmuSmw7App::IntThread(void *param_1)

{
  int iVar1;
  
  do {
    iVar1 = WaitForSingleObject(*(my_event_t **)((long)param_1 + 0x10),0x14);
    while (iVar1 != 0x6e) {
      ResetEvent(*(my_event_t **)((long)param_1 + 0x10));
      CBInfo_Procedure();
      iVar1 = WaitForSingleObject(*(my_event_t **)((long)param_1 + 0x10),0x14);
    }
    iVar1 = WaitForSingleObject(*(my_event_t **)((long)param_1 + 8),0);
  } while (iVar1 == 0x6e);
  AfxEndThread(0,'\0');
  return 0;
}

