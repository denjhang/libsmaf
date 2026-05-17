/* DllMain @ 001352fc 568B */


undefined8 DllMain(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  my_event_t *pmVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      DAT_00568030 = 0xff;
      pmVar2 = (my_event_t *)GetProcessHeap();
      uVar3 = HeapAlloc(pmVar2,0,0x1000);
      puVar1 = PTR_gOutBuf_005673d0;
      *(undefined8 *)PTR_gOutBuf_005673d0 = uVar3;
      pmVar2 = (my_event_t *)GetProcessHeap();
      uVar3 = HeapAlloc(pmVar2,0,0x1000);
      *(undefined8 *)(puVar1 + 8) = uVar3;
      pmVar2 = (my_event_t *)GetProcessHeap();
      uVar3 = HeapAlloc(pmVar2,0,0x1000);
      *(undefined8 *)(puVar1 + 0x10) = uVar3;
      pmVar2 = (my_event_t *)GetProcessHeap();
      uVar3 = HeapAlloc(pmVar2,0,0x1000);
      *(undefined8 *)(puVar1 + 0x18) = uVar3;
      pmVar2 = (my_event_t *)GetProcessHeap();
      uVar3 = HeapAlloc(pmVar2,0,0x1000);
      *(undefined8 *)(puVar1 + 0x20) = uVar3;
      pmVar2 = (my_event_t *)GetProcessHeap();
      uVar3 = HeapAlloc(pmVar2,0,0x1000);
      *(undefined8 *)(puVar1 + 0x28) = uVar3;
      pmVar2 = (my_event_t *)GetProcessHeap();
      uVar3 = HeapAlloc(pmVar2,0,0x1000);
      *(undefined8 *)(puVar1 + 0x30) = uVar3;
      pmVar2 = (my_event_t *)GetProcessHeap();
      uVar3 = HeapAlloc(pmVar2,0,0x1000);
      *(undefined8 *)(puVar1 + 0x38) = uVar3;
      pmVar2 = (my_event_t *)GetProcessHeap();
      uVar3 = HeapAlloc(pmVar2,0,0x1000);
      *(undefined8 *)(puVar1 + 0x40) = uVar3;
      pmVar2 = (my_event_t *)GetProcessHeap();
      uVar3 = HeapAlloc(pmVar2,0,0x1000);
      *(undefined8 *)(puVar1 + 0x48) = uVar3;
      pmVar2 = (my_event_t *)GetProcessHeap();
      uVar3 = HeapAlloc(pmVar2,0,0x1000);
      *(undefined8 *)(puVar1 + 0x50) = uVar3;
      pmVar2 = (my_event_t *)GetProcessHeap();
      uVar3 = HeapAlloc(pmVar2,0,0x1000);
      *(undefined8 *)(puVar1 + 0x58) = uVar3;
      pmVar2 = (my_event_t *)GetProcessHeap();
      uVar3 = HeapAlloc(pmVar2,0,0x1000);
      *(undefined8 *)(puVar1 + 0x60) = uVar3;
    }
    return 1;
  }
  Hw_Terminate();
  pmVar2 = (my_event_t *)GetProcessHeap();
  puVar1 = PTR_gOutBuf_005673d0;
  HeapFree(pmVar2,0,*(void **)PTR_gOutBuf_005673d0);
  pmVar2 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar2,0,*(void **)(puVar1 + 8));
  pmVar2 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar2,0,*(void **)(puVar1 + 0x10));
  pmVar2 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar2,0,*(void **)(puVar1 + 0x18));
  pmVar2 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar2,0,*(void **)(puVar1 + 0x20));
  pmVar2 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar2,0,*(void **)(puVar1 + 0x28));
  pmVar2 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar2,0,*(void **)(puVar1 + 0x30));
  pmVar2 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar2,0,*(void **)(puVar1 + 0x38));
  pmVar2 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar2,0,*(void **)(puVar1 + 0x40));
  pmVar2 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar2,0,*(void **)(puVar1 + 0x48));
  pmVar2 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar2,0,*(void **)(puVar1 + 0x50));
  pmVar2 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar2,0,*(void **)(puVar1 + 0x58));
  pmVar2 = (my_event_t *)GetProcessHeap();
  HeapFree(pmVar2,0,*(void **)(puVar1 + 0x60));
  return 1;
}

