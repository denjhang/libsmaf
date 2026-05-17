/* ATRTMIDIMgr_DelEffectParam @ 000dc6d4 44B */


/* YAMAHA::ATRTMIDIMgr_DelEffectParam(unsigned char) */

undefined4 YAMAHA::ATRTMIDIMgr_DelEffectParam(uchar param_1)

{
  if (-1 < (int)((uint)param_1 << 0x18)) {
    memset(&UNK_00164900 + *(int *)(DAT_000dc700 + 0xdc6ee) + (short)(ushort)param_1 * 0x20,0,0x20);
    return 0;
  }
  return 0xffffffff;
}

