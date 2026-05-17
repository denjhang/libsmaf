/* DllMain @ 00035990 408B */


undefined4 DllMain(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  my_event_t *pmVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar2 = DAT_00035b30;
  iVar1 = DAT_00035b2c;
  if (param_2 != 0) {
    if (param_2 == 1) {
      *(undefined1 *)(DAT_00035b28 + 0x359a8) = 0xff;
      pmVar3 = (my_event_t *)GetProcessHeap();
      uVar4 = HeapAlloc(pmVar3,0,0x1000);
      puVar5 = *(undefined4 **)(iVar1 + 0x359b8);
      *puVar5 = uVar4;
      pmVar3 = (my_event_t *)GetProcessHeap();
      uVar4 = HeapAlloc(pmVar3,0,0x1000);
      puVar5[1] = uVar4;
      pmVar3 = (my_event_t *)GetProcessHeap();
      uVar4 = HeapAlloc(pmVar3,0,0x1000);
      puVar5[2] = uVar4;
      pmVar3 = (my_event_t *)GetProcessHeap();
      uVar4 = HeapAlloc(pmVar3,0,0x1000);
      puVar5[3] = uVar4;
      pmVar3 = (my_event_t *)GetProcessHeap();
      uVar4 = HeapAlloc(pmVar3,0,0x1000);
      puVar5[4] = uVar4;
      pmVar3 = (my_event_t *)GetProcessHeap();
      uVar4 = HeapAlloc(pmVar3,0,0x1000);
      puVar5[5] = uVar4;
      pmVar3 = (my_event_t *)GetProcessHeap();
      uVar4 = HeapAlloc(pmVar3,0,0x1000);
      puVar5[6] = uVar4;
      pmVar3 = (my_event_t *)GetProcessHeap();
      uVar4 = HeapAlloc(pmVar3,0,0x1000);
      puVar5[7] = uVar4;
      pmVar3 = (my_event_t *)GetProcessHeap();
      uVar4 = HeapAlloc(pmVar3,0,0x1000);
      puVar5[8] = uVar4;
      pmVar3 = (my_event_t *)GetProcessHeap();
      uVar4 = HeapAlloc(pmVar3,0,0x1000);
      puVar5[9] = uVar4;
      pmVar3 = (my_event_t *)GetProcessHeap();
      uVar4 = HeapAlloc(pmVar3,0,0x1000);
      puVar5[10] = uVar4;
      pmVar3 = (my_event_t *)GetProcessHeap();
      uVar4 = HeapAlloc(pmVar3,0,0x1000);
      puVar5[0xb] = uVar4;
      pmVar3 = (my_event_t *)GetProcessHeap();
      uVar4 = HeapAlloc(pmVar3,0,0x1000);
      puVar5[0xc] = uVar4;
    }
    return 1;
  }
  Hw_Terminate();
  pmVar3 = (my_event_t *)GetProcessHeap();
  puVar5 = *(undefined4 **)(iVar2 + 0x35a8e);
  HeapFree(pmVar3,0,(void *)*puVar5);
  pmVar3 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar3,0,(void *)puVar5[1]);
  pmVar3 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar3,0,(void *)puVar5[2]);
  pmVar3 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar3,0,(void *)puVar5[3]);
  pmVar3 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar3,0,(void *)puVar5[4]);
  pmVar3 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar3,0,(void *)puVar5[5]);
  pmVar3 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar3,0,(void *)puVar5[6]);
  pmVar3 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar3,0,(void *)puVar5[7]);
  pmVar3 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar3,0,(void *)puVar5[8]);
  pmVar3 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar3,0,(void *)puVar5[9]);
  pmVar3 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar3,0,(void *)puVar5[10]);
  pmVar3 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar3,0,(void *)puVar5[0xb]);
  pmVar3 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar3,0,(void *)puVar5[0xc]);
  return 1;
}

