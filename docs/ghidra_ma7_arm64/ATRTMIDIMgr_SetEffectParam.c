/* ATRTMIDIMgr_SetEffectParam @ 0021d468 820B */


/* YAMAHA::ATRTMIDIMgr_SetEffectParam(_MASMW_SETEFFECTPARAM*) */

undefined8 YAMAHA::ATRTMIDIMgr_SetEffectParam(_MASMW_SETEFFECTPARAM *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_gsAtRtmMgrInfo_00567da0;
  if (((char)*param_1 < '\0') || (0x20 < *(uint *)(param_1 + 0x10))) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    PTR_gsAtRtmMgrInfo_00567da0[((long)(int)(uint)(byte)*param_1 + 0xb285) * 0x20] =
         **(undefined1 **)(param_1 + 8);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650a1] = *(undefined1 *)(*(long *)(param_1 + 8) + 1);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650a2] = *(undefined1 *)(*(long *)(param_1 + 8) + 2);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650a3] = *(undefined1 *)(*(long *)(param_1 + 8) + 3);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650a4] = *(undefined1 *)(*(long *)(param_1 + 8) + 4);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650a5] = *(undefined1 *)(*(long *)(param_1 + 8) + 5);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650a6] = *(undefined1 *)(*(long *)(param_1 + 8) + 6);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650a7] = *(undefined1 *)(*(long *)(param_1 + 8) + 7);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650a8] = *(undefined1 *)(*(long *)(param_1 + 8) + 8);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650a9] = *(undefined1 *)(*(long *)(param_1 + 8) + 9);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650aa] = *(undefined1 *)(*(long *)(param_1 + 8) + 10);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650ab] = *(undefined1 *)(*(long *)(param_1 + 8) + 0xb);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650ac] = *(undefined1 *)(*(long *)(param_1 + 8) + 0xc);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650ad] = *(undefined1 *)(*(long *)(param_1 + 8) + 0xd);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650ae] = *(undefined1 *)(*(long *)(param_1 + 8) + 0xe);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650af] = *(undefined1 *)(*(long *)(param_1 + 8) + 0xf);
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650b0] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x10)
    ;
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650b1] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x11)
    ;
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650b2] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x12)
    ;
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650b3] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x13)
    ;
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650b4] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x14)
    ;
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650b5] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x15)
    ;
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650b6] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x16)
    ;
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650b7] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x17)
    ;
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650b8] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x18)
    ;
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650b9] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x19)
    ;
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650ba] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x1a)
    ;
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650bb] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x1b)
    ;
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650bc] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x1c)
    ;
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650bd] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x1d)
    ;
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650be] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x1e)
    ;
    puVar1[(ulong)(byte)*param_1 * 0x20 + 0x1650bf] = *(undefined1 *)(*(long *)(param_1 + 8) + 0x1f)
    ;
  }
  return uVar2;
}

