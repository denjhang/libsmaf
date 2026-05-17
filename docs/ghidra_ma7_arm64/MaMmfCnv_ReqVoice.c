/* MaMmfCnv_ReqVoice @ 001eafe8 11872B */


/* YAMAHA::MaMmfCnv_ReqVoice(_MACNV_SEQ_INFO*) */

void YAMAHA::MaMmfCnv_ReqVoice(_MACNV_SEQ_INFO *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  byte *pbVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uchar *puVar20;
  char cVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  byte bVar26;
  byte bVar27;
  long lVar28;
  byte bVar29;
  byte bVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  long lVar33;
  char cVar34;
  uint uVar35;
  uint uVar36;
  long *plVar37;
  uint uVar38;
  undefined8 *puVar39;
  char cVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  byte bVar44;
  long lVar45;
  uint local_50;
  uint local_4c;
  byte local_48 [64];
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) || (lVar16 = *(long *)(param_1 + 8), lVar16 == 0)) {
    uVar12 = 0xfffffffe;
    goto LAB_001eb558;
  }
  if (*(char *)(lVar16 + 0xc) == '\x02') {
    *(undefined8 *)(lVar16 + 0x2eb0) = 0;
    *(undefined1 *)(lVar16 + 0x2ea8) = 0xff;
    *(undefined1 *)(lVar16 + 0x2ec0) = 0xff;
    *(undefined1 *)(lVar16 + 0x2ed8) = 0xff;
    *(undefined1 *)(lVar16 + 0x2ef0) = 0xff;
    *(undefined1 *)(lVar16 + 0x2f08) = 0xff;
    *(undefined1 *)(lVar16 + 0x2f20) = 0xff;
    *(undefined1 *)(lVar16 + 0x2f38) = 0xff;
    *(undefined1 *)(lVar16 + 0x2f50) = 0xff;
    *(undefined1 *)(lVar16 + 0x2f68) = 0xff;
    *(undefined1 *)(lVar16 + 0x2f80) = 0xff;
    *(undefined1 *)(lVar16 + 0x2f98) = 0xff;
    *(undefined4 *)(lVar16 + 0x2eb8) = 0;
    *(undefined8 *)(lVar16 + 0x2ec8) = 0;
    *(undefined4 *)(lVar16 + 0x2ed0) = 0;
    *(undefined8 *)(lVar16 + 12000) = 0;
    *(undefined4 *)(lVar16 + 0x2ee8) = 0;
    *(undefined8 *)(lVar16 + 0x2ef8) = 0;
    *(undefined4 *)(lVar16 + 0x2f00) = 0;
    *(undefined8 *)(lVar16 + 0x2f10) = 0;
    *(undefined4 *)(lVar16 + 0x2f18) = 0;
    *(undefined8 *)(lVar16 + 0x2f28) = 0;
    *(undefined4 *)(lVar16 + 0x2f30) = 0;
    *(undefined8 *)(lVar16 + 0x2f40) = 0;
    *(undefined4 *)(lVar16 + 0x2f48) = 0;
    *(undefined8 *)(lVar16 + 0x2f58) = 0;
    *(undefined4 *)(lVar16 + 0x2f60) = 0;
    *(undefined8 *)(lVar16 + 0x2f70) = 0;
    *(undefined4 *)(lVar16 + 0x2f78) = 0;
    *(undefined8 *)(lVar16 + 0x2f88) = 0;
    *(undefined4 *)(lVar16 + 0x2f90) = 0;
    *(undefined8 *)(lVar16 + 0x2fa0) = 0;
    *(undefined4 *)(lVar16 + 0x2fa8) = 0;
    *(undefined1 *)(lVar16 + 0x2fb0) = 0xff;
    *(undefined1 *)(lVar16 + 0x2fc8) = 0xff;
    *(undefined1 *)(lVar16 + 0x2fe0) = 0xff;
    *(undefined1 *)(lVar16 + 0x2ff8) = 0xff;
    *(undefined8 *)(lVar16 + 0x2fb8) = 0;
    *(undefined4 *)(lVar16 + 0x2fc0) = 0;
    *(undefined8 *)(lVar16 + 0x2fd0) = 0;
    *(undefined4 *)(lVar16 + 0x2fd8) = 0;
    *(undefined8 *)(lVar16 + 0x2fe8) = 0;
    *(undefined4 *)(lVar16 + 0x2ff0) = 0;
    *(undefined8 *)(lVar16 + 0x3000) = 0;
    *(undefined4 *)(lVar16 + 0x3008) = 0;
    *(undefined1 *)(lVar16 + 0x3010) = 0xff;
    *(undefined1 *)(lVar16 + 0x3028) = 0xff;
    *(undefined1 *)(lVar16 + 0x3040) = 0xff;
    *(undefined1 *)(lVar16 + 0x3058) = 0xff;
    *(undefined1 *)(lVar16 + 0x3070) = 0xff;
    *(undefined8 *)(lVar16 + 0x3018) = 0;
    *(undefined4 *)(lVar16 + 0x3020) = 0;
    *(undefined8 *)(lVar16 + 0x3030) = 0;
    *(undefined4 *)(lVar16 + 0x3038) = 0;
    *(undefined8 *)(lVar16 + 0x3048) = 0;
    *(undefined4 *)(lVar16 + 0x3050) = 0;
    *(undefined8 *)(lVar16 + 0x3060) = 0;
    *(undefined4 *)(lVar16 + 0x3068) = 0;
    *(undefined8 *)(lVar16 + 0x3078) = 0;
    *(undefined4 *)(lVar16 + 0x3080) = 0;
    *(undefined1 *)(lVar16 + 0x3088) = 0xff;
    *(undefined8 *)(lVar16 + 0x3090) = 0;
    *(undefined4 *)(lVar16 + 0x3098) = 0;
    *(undefined1 *)(lVar16 + 0x30a0) = 0xff;
    *(undefined8 *)(lVar16 + 0x30a8) = 0;
    *(undefined4 *)(lVar16 + 0x30b0) = 0;
    *(undefined1 *)(lVar16 + 0x30b8) = 0xff;
    *(undefined8 *)(lVar16 + 0x30c0) = 0;
    *(undefined4 *)(lVar16 + 0x30c8) = 0;
    *(undefined1 *)(lVar16 + 0x30d0) = 0xff;
    *(undefined8 *)(lVar16 + 0x30d8) = 0;
    *(undefined4 *)(lVar16 + 0x30e0) = 0;
    *(undefined1 *)(lVar16 + 0x30e8) = 0xff;
    *(undefined8 *)(lVar16 + 0x30f0) = 0;
    *(undefined4 *)(lVar16 + 0x30f8) = 0;
    *(undefined1 *)(lVar16 + 0x3100) = 0xff;
    *(undefined8 *)(lVar16 + 0x3108) = 0;
    *(undefined4 *)(lVar16 + 0x3110) = 0;
    *(undefined1 *)(lVar16 + 0x3118) = 0xff;
    *(undefined8 *)(lVar16 + 0x3120) = 0;
    *(undefined4 *)(lVar16 + 0x3128) = 0;
    *(undefined1 *)(lVar16 + 0x3130) = 0xff;
    *(undefined8 *)(lVar16 + 0x3138) = 0;
    *(undefined4 *)(lVar16 + 0x3140) = 0;
    *(undefined1 *)(lVar16 + 0x3148) = 0xff;
    *(undefined8 *)(lVar16 + 0x3150) = 0;
    *(undefined4 *)(lVar16 + 0x3158) = 0;
    *(undefined1 *)(lVar16 + 0x3160) = 0xff;
    *(undefined8 *)(lVar16 + 0x3168) = 0;
    *(undefined4 *)(lVar16 + 0x3170) = 0;
    *(undefined1 *)(lVar16 + 0x3178) = 0xff;
    *(undefined8 *)(lVar16 + 0x3180) = 0;
    *(undefined4 *)(lVar16 + 0x3188) = 0;
    *(undefined1 *)(lVar16 + 0x3190) = 0xff;
    *(undefined8 *)(lVar16 + 0x3198) = 0;
    *(undefined4 *)(lVar16 + 0x31a0) = 0;
    *(undefined1 *)(lVar16 + 0x31a8) = 0xff;
    *(undefined8 *)(lVar16 + 0x31b0) = 0;
    *(undefined4 *)(lVar16 + 0x31b8) = 0;
    *(undefined1 *)(lVar16 + 0x31c0) = 0xff;
    *(undefined8 *)(lVar16 + 0x31c8) = 0;
    *(undefined4 *)(lVar16 + 0x31d0) = 0;
    *(undefined1 *)(lVar16 + 0x31d8) = 0xff;
    *(undefined8 *)(lVar16 + 0x31e0) = 0;
    *(undefined4 *)(lVar16 + 0x31e8) = 0;
    *(undefined1 *)(lVar16 + 0x31f0) = 0xff;
    *(undefined8 *)(lVar16 + 0x31f8) = 0;
    *(undefined4 *)(lVar16 + 0x3200) = 0;
    *(undefined1 *)(lVar16 + 0x3208) = 0xff;
    *(undefined8 *)(lVar16 + 0x3210) = 0;
    *(undefined4 *)(lVar16 + 0x3218) = 0;
    *(undefined1 *)(lVar16 + 0x3220) = 0xff;
    *(undefined8 *)(lVar16 + 0x3228) = 0;
    *(undefined4 *)(lVar16 + 0x3230) = 0;
    *(undefined1 *)(lVar16 + 0x3238) = 0xff;
    *(undefined8 *)(lVar16 + 0x3240) = 0;
    *(undefined4 *)(lVar16 + 0x3248) = 0;
    *(undefined1 *)(lVar16 + 0x3250) = 0xff;
    *(undefined8 *)(lVar16 + 0x3258) = 0;
    *(undefined4 *)(lVar16 + 0x3260) = 0;
    *(undefined1 *)(lVar16 + 0x3268) = 0xff;
    *(undefined8 *)(lVar16 + 0x3270) = 0;
    *(undefined4 *)(lVar16 + 0x3278) = 0;
    *(undefined1 *)(lVar16 + 0x3280) = 0xff;
    *(undefined8 *)(lVar16 + 0x3288) = 0;
    *(undefined4 *)(lVar16 + 0x3290) = 0;
    *(undefined1 *)(lVar16 + 0x3298) = 0xff;
    *(undefined8 *)(lVar16 + 0x32a0) = 0;
    *(undefined4 *)(lVar16 + 0x32a8) = 0;
    *(undefined1 *)(lVar16 + 0x32b0) = 0xff;
    *(undefined8 *)(lVar16 + 0x32b8) = 0;
    *(undefined4 *)(lVar16 + 0x32c0) = 0;
    *(undefined1 *)(lVar16 + 13000) = 0xff;
    *(undefined8 *)(lVar16 + 0x32d0) = 0;
    *(undefined4 *)(lVar16 + 0x32d8) = 0;
    *(undefined1 *)(lVar16 + 0x32e0) = 0xff;
    *(undefined8 *)(lVar16 + 0x32e8) = 0;
    *(undefined4 *)(lVar16 + 0x32f0) = 0;
    *(undefined1 *)(lVar16 + 0x32f8) = 0xff;
    *(undefined8 *)(lVar16 + 0x3300) = 0;
    *(undefined4 *)(lVar16 + 0x3308) = 0;
    *(undefined1 *)(lVar16 + 0x3310) = 0xff;
    *(undefined8 *)(lVar16 + 0x3318) = 0;
    *(undefined4 *)(lVar16 + 0x3320) = 0;
    *(undefined1 *)(lVar16 + 0x3328) = 0xff;
    *(undefined8 *)(lVar16 + 0x3330) = 0;
    *(undefined4 *)(lVar16 + 0x3338) = 0;
    *(undefined1 *)(lVar16 + 0x3340) = 0xff;
    *(undefined8 *)(lVar16 + 0x3348) = 0;
    *(undefined4 *)(lVar16 + 0x3350) = 0;
    *(undefined1 *)(lVar16 + 0x3358) = 0xff;
    *(undefined8 *)(lVar16 + 0x3360) = 0;
    *(undefined4 *)(lVar16 + 0x3368) = 0;
    *(undefined1 *)(lVar16 + 0x3370) = 0xff;
    *(undefined8 *)(lVar16 + 0x3378) = 0;
    *(undefined4 *)(lVar16 + 0x3380) = 0;
    *(undefined1 *)(lVar16 + 0x3388) = 0xff;
    *(undefined8 *)(lVar16 + 0x3390) = 0;
    *(undefined4 *)(lVar16 + 0x3398) = 0;
    *(undefined1 *)(lVar16 + 0x33a0) = 0xff;
    *(undefined8 *)(lVar16 + 0x33a8) = 0;
    *(undefined4 *)(lVar16 + 0x33b0) = 0;
    *(undefined1 *)(lVar16 + 0x33b8) = 0xff;
    *(undefined8 *)(lVar16 + 0x33c0) = 0;
    *(undefined4 *)(lVar16 + 0x33c8) = 0;
    *(undefined1 *)(lVar16 + 0x33d0) = 0xff;
    *(undefined8 *)(lVar16 + 0x33d8) = 0;
    *(undefined4 *)(lVar16 + 0x33e0) = 0;
    *(undefined1 *)(lVar16 + 0x33e8) = 0xff;
    *(undefined8 *)(lVar16 + 0x33f0) = 0;
    *(undefined4 *)(lVar16 + 0x33f8) = 0;
    *(undefined1 *)(lVar16 + 0x3400) = 0xff;
    *(undefined8 *)(lVar16 + 0x3408) = 0;
    *(undefined4 *)(lVar16 + 0x3410) = 0;
    *(undefined1 *)(lVar16 + 0x3418) = 0xff;
    *(undefined8 *)(lVar16 + 0x3420) = 0;
    *(undefined4 *)(lVar16 + 0x3428) = 0;
    *(undefined1 *)(lVar16 + 0x3430) = 0xff;
    *(undefined8 *)(lVar16 + 0x3438) = 0;
    *(undefined4 *)(lVar16 + 0x3440) = 0;
    *(undefined1 *)(lVar16 + 0x3448) = 0xff;
    *(undefined8 *)(lVar16 + 0x3450) = 0;
    *(undefined4 *)(lVar16 + 0x3458) = 0;
    *(undefined1 *)(lVar16 + 0x3460) = 0xff;
    *(undefined8 *)(lVar16 + 0x3468) = 0;
    *(undefined4 *)(lVar16 + 0x3470) = 0;
    *(undefined1 *)(lVar16 + 0x3478) = 0xff;
    *(undefined1 *)(lVar16 + 0x347b) = 0xff;
    *(undefined1 *)(lVar16 + 0x347e) = 0xff;
    *(undefined1 *)(lVar16 + 0x3481) = 0xff;
    *(undefined1 *)(lVar16 + 0x3484) = 0xff;
    *(undefined1 *)(lVar16 + 0x3487) = 0xff;
    *(undefined1 *)(lVar16 + 0x348a) = 0xff;
    *(undefined1 *)(lVar16 + 0x348d) = 0xff;
    *(undefined1 *)(lVar16 + 0x3490) = 0xff;
    *(undefined1 *)(lVar16 + 0x3493) = 0xff;
    *(undefined1 *)(lVar16 + 0x3496) = 0xff;
    *(undefined1 *)(lVar16 + 0x3499) = 0xff;
    *(undefined1 *)(lVar16 + 0x349c) = 0xff;
    *(undefined1 *)(lVar16 + 0x349f) = 0xff;
    *(undefined1 *)(lVar16 + 0x34a2) = 0xff;
    *(undefined1 *)(lVar16 + 0x34a5) = 0xff;
    *(undefined1 *)(lVar16 + 0x34a8) = 0xff;
    *(undefined1 *)(lVar16 + 0x34ab) = 0xff;
    *(undefined1 *)(lVar16 + 0x34ae) = 0xff;
    *(undefined1 *)(lVar16 + 0x34b1) = 0xff;
    *(undefined1 *)(lVar16 + 0x34b4) = 0xff;
    *(undefined1 *)(lVar16 + 0x34b7) = 0xff;
    *(undefined1 *)(lVar16 + 0x34ba) = 0xff;
    *(undefined1 *)(lVar16 + 0x34bd) = 0xff;
    *(undefined1 *)(lVar16 + 0x34c0) = 0xff;
    *(undefined1 *)(lVar16 + 0x34c3) = 0xff;
    *(undefined1 *)(lVar16 + 0x34c6) = 0xff;
    *(undefined1 *)(lVar16 + 0x34c9) = 0xff;
    *(undefined1 *)(lVar16 + 0x34cc) = 0xff;
    *(undefined1 *)(lVar16 + 0x34cf) = 0xff;
    *(undefined1 *)(lVar16 + 0x34d2) = 0xff;
    *(undefined1 *)(lVar16 + 0x34d5) = 0xff;
    *(undefined8 *)(lVar16 + 0x34e0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar16 + 0x34d8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar16 + 0x34f0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar16 + 0x34e8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar16 + 0x34f8) = 0;
    *(undefined8 *)(lVar16 + 0x3500) = 0;
    *(undefined8 *)(lVar16 + 0x3508) = 0;
    *(undefined8 *)(lVar16 + 0x3510) = 0;
    *(undefined8 *)(lVar16 + 0x3518) = 0;
    *(undefined8 *)(lVar16 + 0x3520) = 0;
    *(undefined8 *)(lVar16 + 0x3528) = 0;
    *(undefined8 *)(lVar16 + 0x3530) = 0;
    *(undefined8 *)(lVar16 + 0x3538) = 0;
    *(undefined8 *)(lVar16 + 0x3540) = 0;
    *(undefined8 *)(lVar16 + 0x3548) = 0;
    *(undefined8 *)(lVar16 + 0x3550) = 0;
    *(undefined8 *)(lVar16 + 0x3558) = 0;
    *(undefined8 *)(lVar16 + 0x3560) = 0;
    *(undefined8 *)(lVar16 + 0x3568) = 0;
    *(undefined8 *)(lVar16 + 0x3570) = 0;
    switch(*(undefined4 *)(lVar16 + 0xdf8)) {
    case 1:
    case 2:
      lVar16 = *(long *)(param_1 + 8);
      if (*(int *)(lVar16 + 0xdf8) == 2) {
        lVar33 = *(long *)(lVar16 + 0x3a0);
        puVar31 = (undefined1 *)(lVar16 + 0x2ea8);
        if (lVar33 != 0) {
          uVar41 = *(uint *)(lVar16 + 0x3a8);
          uVar22 = 4000;
          if (*(char *)(lVar33 + 2) != '\x10') {
            uVar22 = 8000;
          }
          if (0xe < uVar41) {
            uVar42 = 0xe;
            uVar38 = 6;
            do {
              iVar10 = malib_NextChunk((uchar *)(lVar33 + (ulong)uVar38),uVar41 - uVar38,4,&local_50
                                       ,&local_4c);
              if (((local_50 == 0x43) && (uVar38 = local_4c - 1, uVar38 < 0x3e)) &&
                 (local_4c = uVar38, *(long *)(puVar31 + (ulong)uVar38 * 0x18 + 8) == 0)) {
                *(int *)(puVar31 + (ulong)uVar38 * 0x18 + 0x10) = iVar10;
                *(ulong *)(puVar31 + (ulong)uVar38 * 0x18 + 8) = lVar33 + (ulong)uVar42;
                *(undefined4 *)(puVar31 + (ulong)uVar38 * 0x18 + 0x14) = uVar22;
              }
              uVar38 = iVar10 + uVar42;
              uVar42 = uVar38 + 8;
            } while (uVar42 < uVar41);
            puVar31 = (undefined1 *)(*(long *)(param_1 + 8) + 0x2ea8);
          }
        }
        uVar41 = 0;
        puVar20 = *(uchar **)(puVar31 + 8);
        if (puVar20 != (uchar *)0x0) {
          iVar10 = MaSndDrv_SetStream(param_1,0,0x20,*(uint *)(puVar31 + 0x14),0,puVar20,
                                      *(uint *)(puVar31 + 0x10));
          if (iVar10 < 0) {
            *(undefined8 *)(puVar31 + 8) = 0;
            *(undefined4 *)(puVar31 + 0x10) = 0;
          }
          else {
            *puVar31 = 0;
            uVar41 = 1;
          }
        }
        puVar20 = *(uchar **)(puVar31 + 0x20);
        if (puVar20 == (uchar *)0x0) {
LAB_001ec664:
          puVar39 = (undefined8 *)(puVar31 + 0x38);
          cVar40 = '\x02';
          do {
            if ((uchar *)*puVar39 != (uchar *)0x0) {
              iVar10 = MaSndDrv_SetStream(param_1,uVar41,0x20,*(uint *)((long)puVar39 + 0xc),0,
                                          (uchar *)*puVar39,*(uint *)(puVar39 + 1));
              if (iVar10 < 0) {
                *puVar39 = 0;
                *(undefined4 *)(puVar39 + 1) = 0;
              }
              else {
                *(char *)(puVar39 + -1) = (char)uVar41;
                uVar41 = uVar41 + 1 & 0xff;
                cVar34 = cVar40;
                if (0x1f < uVar41) goto LAB_001ec538;
              }
            }
            if ((uchar *)puVar39[3] != (uchar *)0x0) {
              iVar10 = MaSndDrv_SetStream(param_1,uVar41,0x20,*(uint *)((long)puVar39 + 0x24),0,
                                          (uchar *)puVar39[3],*(uint *)(puVar39 + 4));
              if (iVar10 < 0) {
                puVar39[3] = 0;
                *(undefined4 *)(puVar39 + 4) = 0;
              }
              else {
                *(char *)(puVar39 + 2) = (char)uVar41;
                uVar41 = uVar41 + 1 & 0xff;
                cVar34 = cVar40 + '\x01';
                if (0x1f < uVar41) goto LAB_001ec538;
              }
            }
            if ((uchar *)puVar39[6] != (uchar *)0x0) {
              iVar10 = MaSndDrv_SetStream(param_1,uVar41,0x20,*(uint *)((long)puVar39 + 0x3c),0,
                                          (uchar *)puVar39[6],*(uint *)(puVar39 + 7));
              if (iVar10 < 0) {
                puVar39[6] = 0;
                *(undefined4 *)(puVar39 + 7) = 0;
              }
              else {
                *(char *)(puVar39 + 5) = (char)uVar41;
                uVar41 = uVar41 + 1 & 0xff;
                cVar34 = cVar40 + '\x02';
                if (0x1f < uVar41) goto LAB_001ec538;
              }
            }
            if ((uchar *)puVar39[9] != (uchar *)0x0) {
              iVar10 = MaSndDrv_SetStream(param_1,uVar41,0x20,*(uint *)((long)puVar39 + 0x54),0,
                                          (uchar *)puVar39[9],*(uint *)(puVar39 + 10));
              if (iVar10 < 0) {
                puVar39[9] = 0;
                *(undefined4 *)(puVar39 + 10) = 0;
              }
              else {
                *(char *)(puVar39 + 8) = (char)uVar41;
                uVar41 = uVar41 + 1 & 0xff;
                cVar34 = cVar40 + '\x03';
                if (0x1f < uVar41) goto LAB_001ec538;
              }
            }
            puVar39 = puVar39 + 0xc;
            bVar6 = cVar40 != ':';
            cVar40 = cVar40 + '\x04';
          } while (bVar6);
        }
        else {
          iVar10 = MaSndDrv_SetStream(param_1,uVar41,0x20,*(uint *)(puVar31 + 0x2c),0,puVar20,
                                      *(uint *)(puVar31 + 0x28));
          if (iVar10 < 0) {
            *(undefined8 *)(puVar31 + 0x20) = 0;
            *(undefined4 *)(puVar31 + 0x28) = 0;
            goto LAB_001ec664;
          }
          uVar42 = uVar41 + 1;
          puVar31[0x18] = (char)uVar41;
          uVar41 = uVar42;
          cVar34 = '\x01';
          if (uVar42 < 0x20) goto LAB_001ec664;
LAB_001ec538:
          uVar41 = (uint)(byte)(cVar34 + 1U);
          if (uVar41 != 0x3e) {
            uVar14 = (ulong)(byte)(cVar34 + 2U);
            uVar42 = (uint)(byte)(cVar34 + 2U);
            bVar27 = 0x3d - (cVar34 + 1U) & 3;
            *(undefined8 *)(puVar31 + (ulong)uVar41 * 0x18 + 8) = 0;
            *(undefined4 *)(puVar31 + (ulong)uVar41 * 0x18 + 0x10) = 0;
            if (uVar42 != 0x3e) {
              uVar43 = uVar14;
              if (bVar27 != 0) {
                if (bVar27 != 1) {
                  if (bVar27 != 2) {
                    uVar43 = (ulong)(byte)(cVar34 + 3);
                    *(undefined8 *)(puVar31 + (ulong)uVar42 * 0x18 + 8) = 0;
                    *(undefined4 *)(puVar31 + (ulong)uVar42 * 0x18 + 0x10) = 0;
                  }
                  uVar14 = (ulong)(byte)((char)uVar43 + 1);
                  *(undefined8 *)(puVar31 + uVar43 * 0x18 + 8) = 0;
                  *(undefined4 *)(puVar31 + uVar43 * 0x18 + 0x10) = 0;
                }
                uVar41 = (int)uVar14 + 1;
                uVar43 = (ulong)(byte)uVar41;
                *(undefined8 *)(puVar31 + uVar14 * 0x18 + 8) = 0;
                *(undefined4 *)(puVar31 + uVar14 * 0x18 + 0x10) = 0;
                if ((uVar41 & 0xff) == 0x3e) goto LAB_001ec654;
              }
              do {
                uVar41 = (int)uVar43 + 1;
                bVar27 = (byte)uVar41;
                uVar41 = (uVar41 & 0xff) + 1;
                bVar4 = (byte)uVar41;
                *(undefined8 *)(puVar31 + uVar43 * 0x18 + 8) = 0;
                uVar41 = (uVar41 & 0xff) + 1;
                *(undefined4 *)(puVar31 + uVar43 * 0x18 + 0x10) = 0;
                bVar30 = (byte)uVar41;
                uVar41 = (uVar41 & 0xff) + 1;
                *(undefined8 *)(puVar31 + (ulong)bVar27 * 0x18 + 8) = 0;
                *(undefined4 *)(puVar31 + (ulong)bVar27 * 0x18 + 0x10) = 0;
                uVar43 = (ulong)(byte)uVar41;
                *(undefined8 *)(puVar31 + (ulong)bVar4 * 0x18 + 8) = 0;
                *(undefined4 *)(puVar31 + (ulong)bVar4 * 0x18 + 0x10) = 0;
                *(undefined8 *)(puVar31 + (ulong)bVar30 * 0x18 + 8) = 0;
                *(undefined4 *)(puVar31 + (ulong)bVar30 * 0x18 + 0x10) = 0;
              } while ((uVar41 & 0xff) != 0x3e);
            }
          }
        }
LAB_001ec654:
        lVar16 = *(long *)(param_1 + 8);
      }
      plVar37 = (long *)(lVar16 + 0x58);
      uVar41 = 0;
      do {
        if ((*plVar37 != 0) && (lVar33 = plVar37[4], lVar33 != 0)) {
          uVar38 = *(uint *)(plVar37 + 5);
          uVar42 = 0;
LAB_001eb7e4:
          if (uVar42 + 0x15 <= uVar38) {
            do {
              if ((*(char *)(lVar33 + (ulong)uVar42) == -1) &&
                 (*(char *)(lVar33 + (ulong)(uVar42 + 1)) == -0x10)) {
                bVar27 = *(byte *)(lVar33 + (ulong)(uVar42 + 2));
                uVar19 = (uint)bVar27;
                if (((0x11 < uVar19) && (*(char *)(lVar33 + (ulong)(uVar42 + 3)) == 'C')) &&
                   (cVar34 = *(char *)(lVar33 + (ulong)(uVar42 + 4)), (byte)(cVar34 - 2U) < 2))
                goto code_r0x001eb874;
              }
              else {
                uVar19 = (uint)*(byte *)(lVar33 + (ulong)(uVar42 + 2));
              }
              uVar42 = uVar19 + uVar42 + 3;
              if (uVar38 < uVar42 + 0x15) break;
            } while( true );
          }
        }
        plVar37 = plVar37 + 0xf;
      } while (plVar37 != (long *)(lVar16 + 0x2b0));
      uVar12 = 0;
      goto LAB_001eb558;
    case 3:
    case 5:
    case 7:
      lVar16 = *(long *)(param_1 + 8);
      iVar10 = *(int *)(lVar16 + 0xdf8);
      if (iVar10 == 3) {
        lVar33 = lVar16 + 0x2b0;
      }
      else {
        lVar33 = lVar16 + 0x328;
        if (iVar10 != 5) {
          lVar33 = lVar16 + 0x3a0;
        }
      }
      if ((*(long *)(lVar33 + 0x40) != 0) && (*(char *)(lVar16 + 0x2e54) != '\0')) {
        if (iVar10 == 3) {
          lVar45 = *(long *)(lVar16 + 0x2f0);
          uVar41 = *(uint *)(lVar16 + 0x2f8);
        }
        else if (iVar10 == 5) {
          lVar45 = *(long *)(lVar16 + 0x368);
          uVar41 = *(uint *)(lVar16 + 0x370);
        }
        else {
          lVar45 = *(long *)(lVar16 + 0x3e0);
          uVar41 = *(uint *)(lVar16 + 1000);
        }
        uVar42 = 0;
LAB_001ebc80:
        uVar38 = uVar42 + 8;
        if ((uVar41 <= uVar38) ||
           (iVar11 = malib_NextChunk((uchar *)(lVar45 + (ulong)uVar42),uVar41 - uVar42,6,&local_50,
                                     &local_4c), iVar11 < 0)) goto LAB_001ec868;
        if ((local_50 == 0x3f) && ((3 < iVar11 && (local_4c - 1 < 0x20)))) {
          bVar27 = *(byte *)(lVar45 + (ulong)uVar38);
          uVar36 = bVar27 & 0xffffff80;
          uVar19 = (uint)*(byte *)(lVar45 + (ulong)(uVar42 + 9)) * 0x100 +
                   (uint)*(byte *)(lVar45 + (ulong)(uVar42 + 10));
          switch(bVar27 & 0x77) {
          case 1:
            if ((bVar27 & 0x80) != 0) {
              uVar36 = 0x43;
              uVar35 = 0xc3;
              uVar24 = uVar19 / 0x19;
              break;
            }
            uVar36 = 3;
            uVar35 = 0x83;
            uVar24 = uVar19 / 0x32;
LAB_001edb8c:
            if ((int)uVar24 < iVar11 + -3) goto LAB_001ed464;
            uVar42 = iVar11 + uVar38;
            goto LAB_001ebc80;
          default:
            goto switchD_001ec830_caseD_2;
          case 3:
            if (*(int *)(lVar16 + 0xdf8) != 7) goto switchD_001ec830_caseD_2;
            if ((bVar27 & 0x80) == 0) {
              uVar36 = 1;
              uVar35 = 0x81;
              uVar24 = uVar19 / 0x19;
              goto LAB_001edb8c;
            }
            if (iVar11 + -3 <= (int)(uint)((ulong)((long)(int)(uVar19 * 4) * 0x51eb851f) >> 0x24))
            goto switchD_001ec830_caseD_2;
            uVar36 = 0x41;
            uVar35 = 0xc1;
            goto LAB_001ed464;
          case 0x11:
            if ((bVar27 & 0x80) == 0) {
              uVar36 = 2;
              uVar35 = 0x82;
              uVar24 = uVar19 / 0x32;
              goto LAB_001edb8c;
            }
            uVar36 = 0x42;
            uVar35 = 0xc2;
            uVar24 = uVar19 / 0x19;
            break;
          case 0x20:
            if ((bVar27 & 0x80) == 0) {
              uVar35 = 0x80;
              uVar24 = uVar19 / 100;
              goto LAB_001edb8c;
            }
            uVar36 = 0x40;
            uVar35 = 0xc0;
            uVar24 = uVar19 / 0x32;
          }
          if (((int)uVar24 < iVar11 + -3) && (*(int *)(lVar16 + 0xdf8) != 3)) {
LAB_001ed464:
            if ((((bVar27 >> 3 & 1) == 0) || (uVar36 = uVar35, *(int *)(lVar16 + 0xdf8) == 7)) &&
               (iVar8 = MaSndDrv_SetStream(param_1,local_4c - 1,uVar36,uVar19,0,
                                           (uchar *)(lVar45 + (ulong)(uVar42 + 0xb)),iVar11 - 3),
               -1 < iVar8)) {
              uVar42 = iVar11 + uVar38;
              *(undefined1 *)(lVar16 + 0x3478 + (ulong)(local_4c - 1) * 3) = 0;
              goto LAB_001ebc80;
            }
          }
        }
switchD_001ec830_caseD_2:
        uVar42 = iVar11 + uVar38;
        goto LAB_001ebc80;
      }
      goto LAB_001eb5ec;
    }
  }
  uVar12 = 0xffffffff;
LAB_001eb558:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
LAB_001ec868:
  lVar16 = *(long *)(param_1 + 8);
LAB_001eb5ec:
  if (*(long *)(lVar33 + 0x20) != 0) {
    if (*(int *)(lVar16 + 0xdf8) == 3) {
      lVar33 = *(long *)(lVar16 + 0x2d0);
      uVar42 = 1;
      cVar34 = '\f';
      uVar41 = *(uint *)(lVar16 + 0x2d8);
      cVar40 = '\x06';
    }
    else if (*(int *)(lVar16 + 0xdf8) == 5) {
      lVar33 = *(long *)(lVar16 + 0x348);
      uVar42 = 0;
      uVar41 = *(uint *)(lVar16 + 0x350);
      cVar34 = '\f';
      cVar40 = '\a';
    }
    else {
      lVar33 = *(long *)(lVar16 + 0x3c0);
      uVar42 = 0;
      uVar41 = *(uint *)(lVar16 + 0x3c8);
      cVar34 = ',';
      cVar40 = '\b';
    }
    uVar38 = 0;
    while (uVar19 = uVar38, uVar19 + 9 <= uVar41) {
      lVar16 = lVar33 + (ulong)uVar19;
      if ((uVar41 - uVar19 < 6) || (*(char *)(lVar33 + (ulong)uVar19) != -0x10)) break;
      uVar36 = *(byte *)(lVar16 + 1) & 0x7f;
      if ((char)*(byte *)(lVar16 + 1) < '\0') {
        uVar36 = (*(byte *)(lVar16 + 2) & 0x7f) + uVar36 * 0x80;
        if ((char)*(byte *)(lVar16 + 2) < '\0') {
          uVar36 = (*(byte *)(lVar16 + 3) & 0x7f) + uVar36 * 0x80;
          if ((char)*(byte *)(lVar16 + 3) < '\0') {
            uVar36 = (*(byte *)(lVar16 + 4) & 0x7f) + uVar36 * 0x80;
            if ((0x1fffff < uVar36) || ((char)*(byte *)(lVar16 + 4) < '\0')) break;
            lVar45 = 5;
            iVar11 = 4;
          }
          else {
            lVar45 = 4;
            iVar11 = 3;
          }
        }
        else {
          lVar45 = 3;
          iVar11 = 2;
        }
      }
      else {
        lVar45 = 2;
        iVar11 = 1;
      }
      uVar36 = uVar36 + (int)lVar45;
      if (uVar41 - uVar19 < uVar36) break;
      if ((((*(char *)(lVar16 + lVar45) == 'C') && (*(char *)(lVar16 + (ulong)(iVar11 + 2)) == 'y'))
          && (*(char *)(lVar16 + (ulong)(iVar11 + 3)) == cVar40)) &&
         (*(char *)(lVar16 + (ulong)(iVar11 + 4)) == '\x7f')) {
        uVar38 = uVar36 + uVar19;
        if ((*(char *)(lVar16 + (ulong)(iVar11 + 5)) == cVar34) && (7 < uVar36)) {
          uVar19 = uVar19 + iVar11 + 6;
          bVar27 = *(byte *)(lVar33 + (ulong)uVar19);
          if (((bVar27 & 0xef) == 0xf) || (bVar27 == 0x17)) {
            MaSndDrv_SetFmExtWave
                      (param_1,(uint)bVar27,uVar42,(uchar *)(lVar33 + (ulong)(uVar19 + 1)),
                       (uVar36 - 2) - (iVar11 + 6));
          }
        }
      }
      else {
        uVar38 = uVar19 + uVar36;
      }
    }
    lVar16 = *(long *)(param_1 + 8);
    if (iVar10 == 7) {
      lVar33 = *(long *)(lVar16 + 0x3c0);
      uVar41 = *(uint *)(lVar16 + 0x3c8);
      uVar42 = 0;
      while (uVar42 + 0xe < uVar41) {
        uVar38 = uVar41 - uVar42;
        lVar16 = lVar33 + (ulong)uVar42;
        if ((uVar38 < 6) || (*(char *)(lVar33 + (ulong)uVar42) != -0x10)) break;
        uVar19 = *(byte *)(lVar16 + 1) & 0x7f;
        if ((char)*(byte *)(lVar16 + 1) < '\0') {
          uVar19 = (*(byte *)(lVar16 + 2) & 0x7f) + uVar19 * 0x80;
          if ((char)*(byte *)(lVar16 + 2) < '\0') {
            uVar19 = (*(byte *)(lVar16 + 3) & 0x7f) + uVar19 * 0x80;
            if ((char)*(byte *)(lVar16 + 3) < '\0') {
              uVar19 = (*(byte *)(lVar16 + 4) & 0x7f) + uVar19 * 0x80;
              if ((0x1fffff < uVar19) || ((char)*(byte *)(lVar16 + 4) < '\0')) break;
              lVar45 = 5;
              iVar10 = 4;
            }
            else {
              lVar45 = 4;
              iVar10 = 3;
            }
          }
          else {
            lVar45 = 3;
            iVar10 = 2;
          }
        }
        else {
          lVar45 = 2;
          iVar10 = 1;
        }
        uVar19 = (int)lVar45 + uVar19;
        if (uVar38 < uVar19) break;
        if ((((*(char *)(lVar16 + lVar45) == 'C') &&
             (*(char *)(lVar16 + (ulong)(iVar10 + 2)) == 'y')) &&
            (*(char *)(lVar16 + (ulong)(iVar10 + 3)) == '\b')) &&
           (*(char *)(lVar16 + (ulong)(iVar10 + 4)) == '\x7f')) {
          if ((*(char *)(lVar16 + (ulong)(iVar10 + 5)) != '!') || (uVar19 < 6)) goto LAB_001ed0a0;
          uVar38 = uVar42 + iVar10 + 6;
          bVar27 = *(byte *)(lVar33 + (ulong)(uVar38 + 1));
          bVar4 = *(byte *)(lVar33 + (ulong)(uVar38 + 2));
          uVar36 = (uint)bVar4;
          bVar30 = *(byte *)(lVar33 + (ulong)(uVar38 + 3));
          bVar44 = *(byte *)(lVar33 + (ulong)(uVar38 + 4));
          bVar29 = *(byte *)(lVar33 + (ulong)(uVar38 + 5));
          if ((bVar27 < 10) && (*(char *)(lVar33 + (ulong)uVar38) == '|')) {
            bVar27 = bVar27 + 1;
          }
          else {
            if ((bVar27 != 0 || 9 < bVar4) || (*(char *)(lVar33 + (ulong)uVar38) != '}'))
            goto LAB_001ed0a0;
            bVar27 = bVar4 + 0x81;
            uVar36 = bVar30 & 0x7f;
          }
          iVar10 = uVar19 - (iVar10 + 6);
          DAT_005ddd80 = 0;
          DAT_005ddd81 = 0;
          DAT_005ddd82 = 0;
          DAT_005ddd83 = 0;
          DAT_005ddd84 = 0;
          DAT_005ddd85 = 0;
          DAT_005ddd86 = 0;
          DAT_005ddd87 = 0;
          DAT_005ddd88 = 0;
          DAT_005ddd89 = 0;
          DAT_005ddd8a = 0;
          DAT_005ddd8b = 0;
          DAT_005ddd8c = 0;
          DAT_005ddd8d = 0;
          DAT_005ddd8e = 0;
          DAT_005ddd8f = 0;
          DAT_005ddd90 = 0;
          DAT_005ddd91 = 0;
          DAT_005ddd92 = 0;
          DAT_005ddd93 = 0;
          DAT_005ddd94 = 0;
          DAT_005ddd95 = 0;
          DAT_005ddd96 = 0;
          DAT_005ddd97 = 0;
          DAT_005ddd98 = 0;
          DAT_005ddd99 = 0;
          DAT_005ddd9a = 0;
          DAT_005ddd9b = 0;
          DAT_005ddd9c = 0;
          DAT_005ddd9d = 0;
          DAT_005ddd9e = 0;
          DAT_005ddd9f = 0;
          DAT_005ddda0 = 0;
          DAT_005ddda1 = 0;
          DAT_005ddda2 = 0;
          DAT_005ddda3 = 0;
          DAT_005ddda4 = 0;
          DAT_005ddda5 = 0;
          DAT_005ddda6 = 0;
          DAT_005ddda7 = 0;
          DAT_005ddda8 = 0;
          DAT_005ddda9 = 0;
          DAT_005dddaa = 0;
          DAT_005dddab = 0;
          DAT_005dddac = 0;
          DAT_005dddad = 0;
          DAT_005dddae = 0;
          DAT_005dddaf = 0;
          DAT_005dddb0 = 0;
          DAT_005dddb1 = 0;
          DAT_005dddb2 = 0;
          DAT_005dddb3 = 0;
          DAT_005dddb4 = 0;
          DAT_005dddb5 = 0;
          DAT_005dddb6 = 0;
          DAT_005dddb7 = 0;
          DAT_005dddb8 = 0;
          DAT_005dddb9 = 0;
          DAT_005dddba = 0;
          DAT_005dddbb = 0;
          if (iVar10 != 7) {
            uVar7 = (uVar38 + iVar10) - 1;
            DAT_005ddd80 = *(byte *)(lVar33 + (ulong)(uVar38 + 6));
            uVar35 = uVar38 + 7;
            puVar31 = &DAT_005ddd81;
            uVar24 = ~(uVar38 + 6) + uVar7 & 7;
            if (uVar35 != uVar7) {
              if (uVar24 != 0) {
                if (uVar24 != 1) {
                  puVar32 = puVar31;
                  if (uVar24 != 2) {
                    if (uVar24 != 3) {
                      if (uVar24 != 4) {
                        if (uVar24 != 5) {
                          if (uVar24 != 6) {
                            DAT_005ddd81 = *(undefined1 *)(lVar33 + (ulong)uVar35);
                            puVar32 = &DAT_005ddd82;
                            uVar35 = uVar38 + 8;
                          }
                          uVar14 = (ulong)uVar35;
                          uVar35 = uVar35 + 1;
                          puVar31 = puVar32 + 1;
                          *puVar32 = *(undefined1 *)(lVar33 + uVar14);
                        }
                        uVar14 = (ulong)uVar35;
                        uVar35 = uVar35 + 1;
                        puVar32 = puVar31 + 1;
                        *puVar31 = *(undefined1 *)(lVar33 + uVar14);
                      }
                      uVar14 = (ulong)uVar35;
                      uVar35 = uVar35 + 1;
                      puVar31 = puVar32 + 1;
                      *puVar32 = *(undefined1 *)(lVar33 + uVar14);
                    }
                    uVar14 = (ulong)uVar35;
                    uVar35 = uVar35 + 1;
                    puVar32 = puVar31 + 1;
                    *puVar31 = *(undefined1 *)(lVar33 + uVar14);
                  }
                  uVar14 = (ulong)uVar35;
                  uVar35 = uVar35 + 1;
                  puVar31 = puVar32 + 1;
                  *puVar32 = *(undefined1 *)(lVar33 + uVar14);
                }
                uVar14 = (ulong)uVar35;
                uVar35 = uVar35 + 1;
                *puVar31 = *(undefined1 *)(lVar33 + uVar14);
                puVar31 = puVar31 + 1;
                if (uVar35 == uVar7) goto LAB_001ed370;
              }
              do {
                uVar38 = uVar35 + 3;
                uVar24 = uVar35 + 2;
                *puVar31 = *(undefined1 *)(lVar33 + (ulong)uVar35);
                uVar23 = uVar35 + 4;
                uVar15 = uVar35 + 5;
                uVar9 = uVar35 + 6;
                uVar1 = uVar35 + 7;
                puVar31[1] = *(undefined1 *)(lVar33 + (ulong)(uVar35 + 1));
                uVar35 = uVar35 + 8;
                puVar31[2] = *(undefined1 *)(lVar33 + (ulong)uVar24);
                puVar31[3] = *(undefined1 *)(lVar33 + (ulong)uVar38);
                puVar31[4] = *(undefined1 *)(lVar33 + (ulong)uVar23);
                puVar31[5] = *(undefined1 *)(lVar33 + (ulong)uVar15);
                puVar31[6] = *(undefined1 *)(lVar33 + (ulong)uVar9);
                puVar31[7] = *(undefined1 *)(lVar33 + (ulong)uVar1);
                puVar31 = puVar31 + 8;
              } while (uVar35 != uVar7);
            }
          }
LAB_001ed370:
          if ((bVar29 & 1) == 0) {
            if ((bVar29 & 4) != 0) goto LAB_001ed0a0;
            DAT_005ddd82 = DAT_005ddd82 & 0xef;
            uVar38 = 2;
            if (-1 < (char)bVar30) {
              uVar38 = 0;
            }
            MaSndDrv_SetVoice(param_1,(uint)bVar27,uVar36,uVar38,(uint)DAT_005ddd80,bVar29 & 4,
                              bVar30 & 0x7f,bVar44 & 0x7f,&DAT_005ddd81,iVar10 - 8);
            uVar42 = uVar19 + uVar42;
          }
          else {
            uVar5 = CONCAT11(DAT_005ddd80,DAT_005ddd81);
            uVar38 = 3;
            if (-1 < (char)bVar30) {
              uVar38 = 1;
            }
            uVar35 = (&DAT_005ddd80)[iVar10 - 8] & 0x7f;
            if (-1 < (char)(&DAT_005ddd80)[iVar10 - 8]) {
              lVar16 = *(long *)(param_1 + 8);
              if (*(char *)(lVar16 + 0xdd8 + (ulong)uVar35 + 0x2720) == '\0') {
                if (*(int *)(lVar16 + 0xdf8) == 3) {
                  lVar45 = *(long *)(lVar16 + 0x2d0);
                  cVar40 = '\x06';
                  uVar24 = *(uint *)(lVar16 + 0x2d8);
                  uVar7 = 1;
                  cVar34 = '\x03';
                }
                else {
                  uVar7 = 0;
                  if (*(int *)(lVar16 + 0xdf8) == 5) {
                    lVar45 = *(long *)(lVar16 + 0x348);
                    cVar34 = '\x03';
                    uVar24 = *(uint *)(lVar16 + 0x350);
                    cVar40 = '\a';
                  }
                  else {
                    lVar45 = *(long *)(lVar16 + 0x3c0);
                    cVar34 = '#';
                    uVar24 = *(uint *)(lVar16 + 0x3c8);
                    cVar40 = '\b';
                  }
                }
                for (uVar23 = 0; uVar23 + 0xd < uVar24; uVar23 = uVar15 + uVar23) {
                  lVar28 = lVar45 + (ulong)uVar23;
                  if ((uVar24 - uVar23 < 6) || (*(char *)(lVar45 + (ulong)uVar23) != -0x10)) break;
                  uVar15 = *(byte *)(lVar28 + 1) & 0x7f;
                  if ((char)*(byte *)(lVar28 + 1) < '\0') {
                    uVar15 = (*(byte *)(lVar28 + 2) & 0x7f) + uVar15 * 0x80;
                    if ((char)*(byte *)(lVar28 + 2) < '\0') {
                      uVar15 = (*(byte *)(lVar28 + 3) & 0x7f) + uVar15 * 0x80;
                      if ((char)*(byte *)(lVar28 + 3) < '\0') {
                        uVar15 = (*(byte *)(lVar28 + 4) & 0x7f) + uVar15 * 0x80;
                        if ((0x1fffff < uVar15) || ((char)*(byte *)(lVar28 + 4) < '\0')) break;
                        lVar18 = 5;
                        iVar11 = 4;
                      }
                      else {
                        lVar18 = 4;
                        iVar11 = 3;
                      }
                    }
                    else {
                      lVar18 = 3;
                      iVar11 = 2;
                    }
                  }
                  else {
                    lVar18 = 2;
                    iVar11 = 1;
                  }
                  uVar15 = (int)lVar18 + uVar15;
                  if (uVar24 - uVar23 < uVar15) break;
                  if ((((*(char *)(lVar28 + lVar18) == 'C') &&
                       (*(char *)(lVar28 + (ulong)(iVar11 + 2)) == 'y')) &&
                      (*(char *)(lVar28 + (ulong)(iVar11 + 3)) == cVar40)) &&
                     (((*(char *)(lVar28 + (ulong)(iVar11 + 4)) == '\x7f' &&
                       (*(char *)(lVar28 + (ulong)(iVar11 + 5)) == cVar34)) &&
                      ((10 < uVar15 &&
                       (uVar9 = uVar23 + iVar11 + 6, *(byte *)(lVar45 + (ulong)uVar9) == uVar35)))))
                     ) {
                    iVar11 = MaSndDrv_SetWtWave(param_1,uVar35,uVar7,
                                                (uchar *)(lVar45 + (ulong)(uVar9 + 2)),
                                                (uVar15 - 3) - (iVar11 + 6));
                    if (iVar11 == 0) {
                      *(undefined1 *)(lVar16 + 0xdd8 + (ulong)uVar35 + 0x2720) = 1;
                    }
                    break;
                  }
                }
              }
              uVar35 = uVar35 + 0x80;
            }
            DAT_005ddd83 = DAT_005ddd83 & 0xef;
            MaSndDrv_SetVoice(param_1,(uint)bVar27,uVar36,uVar38,(uint)uVar5,uVar35,bVar30 & 0x7f,
                              bVar44 & 0x7f,&DAT_005ddd82,iVar10 - 9);
            uVar42 = uVar19 + uVar42;
          }
        }
        else {
LAB_001ed0a0:
          uVar42 = uVar19 + uVar42;
        }
      }
    }
    else {
      if (*(int *)(lVar16 + 0xdf8) == 3) {
        uVar41 = *(uint *)(lVar16 + 0x2d8);
        cVar34 = '\x06';
        lVar33 = *(long *)(lVar16 + 0x2d0);
      }
      else {
        lVar33 = *(long *)(lVar16 + 0x348);
        uVar41 = *(uint *)(lVar16 + 0x350);
        cVar34 = '\a';
      }
      uVar42 = 0;
      while (uVar42 + 0xd < uVar41) {
        lVar45 = lVar33 + (ulong)uVar42;
        if ((uVar41 - uVar42 < 6) || (*(char *)(lVar33 + (ulong)uVar42) != -0x10)) break;
        uVar38 = *(byte *)(lVar45 + 1) & 0x7f;
        if ((char)*(byte *)(lVar45 + 1) < '\0') {
          uVar38 = (*(byte *)(lVar45 + 2) & 0x7f) + uVar38 * 0x80;
          if ((char)*(byte *)(lVar45 + 2) < '\0') {
            uVar38 = (*(byte *)(lVar45 + 3) & 0x7f) + uVar38 * 0x80;
            if ((char)*(byte *)(lVar45 + 3) < '\0') {
              uVar38 = (*(byte *)(lVar45 + 4) & 0x7f) + uVar38 * 0x80;
              if ((0x1fffff < uVar38) || ((char)*(byte *)(lVar45 + 4) < '\0')) break;
              lVar28 = 5;
              iVar10 = 4;
            }
            else {
              lVar28 = 4;
              iVar10 = 3;
            }
          }
          else {
            lVar28 = 3;
            iVar10 = 2;
          }
        }
        else {
          lVar28 = 2;
          iVar10 = 1;
        }
        uVar38 = uVar38 + (int)lVar28;
        if (uVar41 - uVar42 < uVar38) break;
        if ((((*(char *)(lVar45 + lVar28) == 'C') &&
             (*(char *)(lVar45 + (ulong)(iVar10 + 2)) == 'y')) &&
            (*(char *)(lVar45 + (ulong)(iVar10 + 3)) == cVar34)) &&
           (*(char *)(lVar45 + (ulong)(iVar10 + 4)) == '\x7f')) {
          if ((*(char *)(lVar45 + (ulong)(iVar10 + 5)) != '\x01') || (uVar38 < 5))
          goto LAB_001ebdcc;
          uVar19 = uVar42 + iVar10 + 6;
          bVar27 = *(byte *)(lVar33 + (ulong)(uVar19 + 1));
          uVar36 = (uint)*(byte *)(lVar33 + (ulong)(uVar19 + 3));
          uVar35 = (uint)*(byte *)(lVar33 + (ulong)(uVar19 + 2));
          bVar4 = *(byte *)(lVar33 + (ulong)(uVar19 + 4));
          if ((bVar27 < 10) && (*(char *)(lVar33 + (ulong)uVar19) == '|')) {
            uVar24 = bVar27 + 1;
            uVar36 = uVar35;
          }
          else {
            if ((bVar27 != 0 || 9 < uVar35) || (*(char *)(lVar33 + (ulong)uVar19) != '}'))
            goto LAB_001ebdcc;
            uVar24 = uVar35 - 0x7f;
          }
          uVar7 = (uVar38 - 6) - (iVar10 + 6);
          uVar35 = uVar19 + 5;
          if (*(int *)(lVar16 + 0xdf8) == 3) {
            lVar45 = lVar33 + (ulong)uVar35;
            if (lVar45 != 0) {
              bVar6 = uVar7 == 0;
              uVar35 = (uint)bVar6;
              if (!bVar6) {
                uVar19 = 0;
                DAT_005ddd40 = bVar6;
                DAT_005ddd41 = bVar6;
                DAT_005ddd42 = bVar6;
                DAT_005ddd43 = bVar6;
                DAT_005ddd44 = bVar6;
                DAT_005ddd45 = bVar6;
                DAT_005ddd46 = bVar6;
                DAT_005ddd47 = bVar6;
                DAT_005ddd48 = bVar6;
                DAT_005ddd49 = bVar6;
                DAT_005ddd4a = bVar6;
                DAT_005ddd4b = bVar6;
                DAT_005ddd4c = bVar6;
                DAT_005ddd4d = bVar6;
                DAT_005ddd4e = bVar6;
                DAT_005ddd4f = bVar6;
                DAT_005ddd50 = bVar6;
                DAT_005ddd51 = bVar6;
                DAT_005ddd52 = bVar6;
                DAT_005ddd53 = bVar6;
                DAT_005ddd54 = bVar6;
                DAT_005ddd55 = bVar6;
                DAT_005ddd56 = bVar6;
                DAT_005ddd57 = bVar6;
                DAT_005ddd58 = bVar6;
                DAT_005ddd59 = bVar6;
                DAT_005ddd5a = bVar6;
                DAT_005ddd5b = bVar6;
                DAT_005ddd5c = bVar6;
                DAT_005ddd5d = bVar6;
                DAT_005ddd5e = bVar6;
                DAT_005ddd5f = bVar6;
                DAT_005ddd60 = bVar6;
                DAT_005ddd61 = bVar6;
                DAT_005ddd62 = bVar6;
                DAT_005ddd63 = bVar6;
                DAT_005ddd64 = bVar6;
                DAT_005ddd65 = bVar6;
                DAT_005ddd66 = bVar6;
                DAT_005ddd67 = bVar6;
                DAT_005ddd68 = bVar6;
                DAT_005ddd69 = bVar6;
                DAT_005ddd6a = bVar6;
                DAT_005ddd6b = bVar6;
                DAT_005ddd6c = bVar6;
                DAT_005ddd6d = bVar6;
                DAT_005ddd6e = bVar6;
                DAT_005ddd6f = bVar6;
                DAT_005ddd70 = bVar6;
                DAT_005ddd71 = bVar6;
                DAT_005ddd72 = bVar6;
                DAT_005ddd73 = bVar6;
                DAT_005ddd74 = bVar6;
                DAT_005ddd75 = bVar6;
                DAT_005ddd76 = bVar6;
                DAT_005ddd77 = bVar6;
                DAT_005ddd78 = bVar6;
                DAT_005ddd79 = bVar6;
                DAT_005ddd7a = bVar6;
                DAT_005ddd7b = bVar6;
                do {
                  if (uVar7 < uVar19 + 8) {
                    uVar23 = uVar7 - uVar19;
                    bVar27 = *(byte *)(lVar45 + (ulong)uVar19);
                    uVar15 = uVar7;
                    if (1 < uVar23) goto LAB_001ed790;
                  }
                  else {
                    bVar27 = *(byte *)(lVar45 + (ulong)uVar19);
                    uVar23 = 8;
LAB_001ed790:
                    if (0x3b < uVar35) break;
                    if ((bVar27 >> 6 & 1) == 0) {
                      (&DAT_005ddd40)[uVar35] = *(byte *)(lVar45 + (ulong)(uVar19 + 1)) & 0x7f;
                    }
                    else {
                      (&DAT_005ddd40)[uVar35] = *(byte *)(lVar45 + (ulong)(uVar19 + 1)) | 0x80;
                    }
                    uVar9 = uVar35 + 1;
                    if (uVar23 != 2) {
                      if (uVar9 != 0x3c) {
                        bVar30 = *(byte *)(lVar45 + (ulong)(uVar19 + 2));
                        if ((bVar27 >> 5 & 1) == 0) {
                          (&DAT_005ddd40)[uVar9] = bVar30 & 0x7f;
                        }
                        else {
                          (&DAT_005ddd40)[uVar9] = bVar30 | 0x80;
                        }
                        uVar9 = uVar35 + 2;
                        if (uVar23 == 3) {
                          uVar15 = uVar19 + 3;
                          uVar35 = uVar9;
                          goto LAB_001ed774;
                        }
                        if (uVar9 != 0x3c) {
                          bVar30 = *(byte *)(lVar45 + (ulong)(uVar19 + 3));
                          if ((bVar27 >> 4 & 1) == 0) {
                            (&DAT_005ddd40)[uVar9] = bVar30 & 0x7f;
                          }
                          else {
                            (&DAT_005ddd40)[uVar9] = bVar30 | 0x80;
                          }
                          uVar9 = uVar35 + 3;
                          if (uVar23 == 4) {
                            uVar15 = uVar19 + 4;
                            uVar35 = uVar9;
                            goto LAB_001ed774;
                          }
                          if (uVar9 != 0x3c) {
                            bVar30 = *(byte *)(lVar45 + (ulong)(uVar19 + 4));
                            if ((bVar27 >> 3 & 1) == 0) {
                              (&DAT_005ddd40)[uVar9] = bVar30 & 0x7f;
                            }
                            else {
                              (&DAT_005ddd40)[uVar9] = bVar30 | 0x80;
                            }
                            uVar9 = uVar35 + 4;
                            if (uVar23 == 5) {
                              uVar15 = uVar19 + 5;
                              uVar35 = uVar9;
                              goto LAB_001ed774;
                            }
                            if (uVar9 != 0x3c) {
                              bVar30 = *(byte *)(lVar45 + (ulong)(uVar19 + 5));
                              if ((bVar27 >> 2 & 1) == 0) {
                                (&DAT_005ddd40)[uVar9] = bVar30 & 0x7f;
                              }
                              else {
                                (&DAT_005ddd40)[uVar9] = bVar30 | 0x80;
                              }
                              uVar9 = uVar35 + 5;
                              if (uVar23 == 6) {
                                uVar15 = uVar19 + 6;
                                uVar35 = uVar9;
                                goto LAB_001ed774;
                              }
                              if (uVar9 != 0x3c) {
                                bVar30 = *(byte *)(lVar45 + (ulong)(uVar19 + 6));
                                if ((bVar27 >> 1 & 1) == 0) {
                                  (&DAT_005ddd40)[uVar9] = bVar30 & 0x7f;
                                }
                                else {
                                  (&DAT_005ddd40)[uVar9] = bVar30 | 0x80;
                                }
                                uVar9 = uVar35 + 6;
                                if (uVar23 == 7) {
                                  uVar15 = uVar19 + 7;
                                  uVar35 = uVar9;
                                  goto LAB_001ed774;
                                }
                                if (uVar9 != 0x3c) {
                                  if ((bVar27 & 1) == 0) {
                                    (&DAT_005ddd40)[uVar9] =
                                         *(byte *)(lVar45 + (ulong)(uVar19 + 7)) & 0x7f;
                                  }
                                  else {
                                    (&DAT_005ddd40)[uVar9] =
                                         *(byte *)(lVar45 + (ulong)(uVar19 + 7)) | 0x80;
                                  }
                                  uVar35 = uVar35 + 7;
                                  uVar15 = uVar19 + 8;
                                  if (uVar23 == 8) goto LAB_001ed774;
                                }
                              }
                            }
                          }
                        }
                      }
                      uVar35 = 0x3c;
                      break;
                    }
                    uVar15 = uVar19 + 2;
                    uVar35 = uVar9;
                  }
LAB_001ed774:
                  uVar19 = uVar15;
                } while (uVar19 < uVar7);
                goto LAB_001ec0a8;
              }
            }
LAB_001ed964:
            uVar35 = 0;
          }
          else {
            DAT_005ddd40 = 0;
            DAT_005ddd41 = 0;
            DAT_005ddd42 = 0;
            DAT_005ddd43 = 0;
            DAT_005ddd44 = 0;
            DAT_005ddd45 = 0;
            DAT_005ddd46 = 0;
            DAT_005ddd47 = 0;
            DAT_005ddd48 = 0;
            DAT_005ddd49 = 0;
            DAT_005ddd4a = 0;
            DAT_005ddd4b = 0;
            DAT_005ddd4c = 0;
            DAT_005ddd4d = 0;
            DAT_005ddd4e = 0;
            DAT_005ddd4f = 0;
            DAT_005ddd50 = 0;
            DAT_005ddd51 = 0;
            DAT_005ddd52 = 0;
            DAT_005ddd53 = 0;
            DAT_005ddd54 = 0;
            DAT_005ddd55 = 0;
            DAT_005ddd56 = 0;
            DAT_005ddd57 = 0;
            DAT_005ddd58 = 0;
            DAT_005ddd59 = 0;
            DAT_005ddd5a = 0;
            DAT_005ddd5b = 0;
            DAT_005ddd5c = 0;
            DAT_005ddd5d = 0;
            DAT_005ddd5e = 0;
            DAT_005ddd5f = 0;
            DAT_005ddd60 = 0;
            DAT_005ddd61 = 0;
            DAT_005ddd62 = 0;
            DAT_005ddd63 = 0;
            DAT_005ddd64 = 0;
            DAT_005ddd65 = 0;
            DAT_005ddd66 = 0;
            DAT_005ddd67 = 0;
            DAT_005ddd68 = 0;
            DAT_005ddd69 = 0;
            DAT_005ddd6a = 0;
            DAT_005ddd6b = 0;
            DAT_005ddd6c = 0;
            DAT_005ddd6d = 0;
            DAT_005ddd6e = 0;
            DAT_005ddd6f = 0;
            DAT_005ddd70 = 0;
            DAT_005ddd71 = 0;
            DAT_005ddd72 = 0;
            DAT_005ddd73 = 0;
            DAT_005ddd74 = 0;
            DAT_005ddd75 = 0;
            DAT_005ddd76 = 0;
            DAT_005ddd77 = 0;
            DAT_005ddd78 = 0;
            DAT_005ddd79 = 0;
            DAT_005ddd7a = 0;
            DAT_005ddd7b = 0;
            if (uVar7 == 0) goto LAB_001ed964;
            uVar15 = uVar7 + uVar35;
            uVar23 = uVar19 + 6;
            DAT_005ddd40 = *(byte *)(lVar33 + (ulong)uVar35);
            puVar31 = &DAT_005ddd41;
            uVar9 = ~uVar35 + uVar15 & 7;
            uVar35 = uVar7;
            if (uVar23 != uVar15) {
              if (uVar9 != 0) {
                if (uVar9 != 1) {
                  puVar32 = puVar31;
                  if (uVar9 != 2) {
                    if (uVar9 != 3) {
                      if (uVar9 != 4) {
                        if (uVar9 != 5) {
                          if (uVar9 != 6) {
                            DAT_005ddd41 = *(undefined1 *)(lVar33 + (ulong)uVar23);
                            puVar32 = &DAT_005ddd42;
                            uVar23 = uVar19 + 7;
                          }
                          uVar14 = (ulong)uVar23;
                          uVar23 = uVar23 + 1;
                          puVar31 = puVar32 + 1;
                          *puVar32 = *(undefined1 *)(lVar33 + uVar14);
                        }
                        uVar14 = (ulong)uVar23;
                        uVar23 = uVar23 + 1;
                        puVar32 = puVar31 + 1;
                        *puVar31 = *(undefined1 *)(lVar33 + uVar14);
                      }
                      uVar14 = (ulong)uVar23;
                      uVar23 = uVar23 + 1;
                      puVar31 = puVar32 + 1;
                      *puVar32 = *(undefined1 *)(lVar33 + uVar14);
                    }
                    uVar14 = (ulong)uVar23;
                    uVar23 = uVar23 + 1;
                    puVar32 = puVar31 + 1;
                    *puVar31 = *(undefined1 *)(lVar33 + uVar14);
                  }
                  uVar14 = (ulong)uVar23;
                  uVar23 = uVar23 + 1;
                  puVar31 = puVar32 + 1;
                  *puVar32 = *(undefined1 *)(lVar33 + uVar14);
                }
                uVar14 = (ulong)uVar23;
                uVar23 = uVar23 + 1;
                *puVar31 = *(undefined1 *)(lVar33 + uVar14);
                puVar31 = puVar31 + 1;
                if (uVar23 == uVar15) goto LAB_001ec0a8;
              }
              do {
                uVar19 = uVar23 + 3;
                uVar7 = uVar23 + 2;
                *puVar31 = *(undefined1 *)(lVar33 + (ulong)uVar23);
                uVar9 = uVar23 + 4;
                uVar1 = uVar23 + 5;
                uVar2 = uVar23 + 6;
                uVar3 = uVar23 + 7;
                puVar31[1] = *(undefined1 *)(lVar33 + (ulong)(uVar23 + 1));
                uVar23 = uVar23 + 8;
                puVar31[2] = *(undefined1 *)(lVar33 + (ulong)uVar7);
                puVar31[3] = *(undefined1 *)(lVar33 + (ulong)uVar19);
                puVar31[4] = *(undefined1 *)(lVar33 + (ulong)uVar9);
                puVar31[5] = *(undefined1 *)(lVar33 + (ulong)uVar1);
                puVar31[6] = *(undefined1 *)(lVar33 + (ulong)uVar2);
                puVar31[7] = *(undefined1 *)(lVar33 + (ulong)uVar3);
                puVar31 = puVar31 + 8;
              } while (uVar23 != uVar15);
            }
          }
LAB_001ec0a8:
          if (((bVar4 & 2) != 0) && (0xf < *(byte *)(lVar16 + 0x2e55))) goto LAB_001ebdcc;
          local_48[7] = bVar4 & 1;
          if ((bVar4 & 1) == 0) {
            if ((bVar4 & 2) == 0) {
              uVar23 = (uint)DAT_005ddd42;
              uVar19 = uVar23 & 7;
              uVar7 = 0x1f;
              if (uVar19 < 2) {
                uVar7 = 0x11;
              }
              uVar15 = 0x2a;
              if (uVar19 < 2) {
                uVar15 = 0x16;
              }
              uVar9 = (uint)DAT_005ddd40;
              pbVar25 = (byte *)0x0;
              iVar10 = 4;
              pbVar13 = &DAT_005ddd40;
              if (uVar19 < 2) {
                iVar10 = 2;
              }
            }
            else {
              uVar23 = (uint)DAT_005ddd5d;
              uVar9 = (uint)DAT_005ddd5b;
              uVar19 = DAT_005ddd5d & 7;
              pbVar25 = &DAT_005ddd40;
              if (uVar19 < 2) {
                uVar7 = 0x2c;
                uVar15 = 0x26;
                iVar10 = 2;
                pbVar13 = &DAT_005ddd5b;
              }
              else {
                uVar7 = 0x3a;
                uVar15 = 0x3a;
                iVar10 = 4;
                pbVar13 = &DAT_005ddd5b;
              }
            }
            local_48[0] = local_48[7];
            local_48[1] = local_48[7];
            local_48[2] = local_48[7];
            local_48[3] = local_48[7];
            local_48[4] = local_48[7];
            local_48[5] = local_48[7];
            local_48[6] = local_48[7];
            local_48[8] = local_48[7];
            local_48[9] = local_48[7];
            local_48[10] = local_48[7];
            local_48[0xb] = local_48[7];
            local_48[0xc] = local_48[7];
            local_48[0xd] = local_48[7];
            local_48[0xe] = local_48[7];
            local_48[0xf] = local_48[7];
            local_48[0x10] = local_48[7];
            local_48[0x11] = local_48[7];
            local_48[0x12] = local_48[7];
            local_48[0x13] = local_48[7];
            local_48[0x14] = local_48[7];
            local_48[0x15] = local_48[7];
            local_48[0x16] = local_48[7];
            local_48[0x17] = local_48[7];
            local_48[0x18] = local_48[7];
            local_48[0x19] = local_48[7];
            local_48[0x1a] = local_48[7];
            local_48[0x1b] = local_48[7];
            local_48[0x1c] = local_48[7];
            local_48[0x1d] = local_48[7];
            local_48[0x1e] = local_48[7];
            local_48[0x1f] = local_48[7];
            local_48[0x20] = local_48[7];
            local_48[0x21] = local_48[7];
            local_48[0x22] = local_48[7];
            local_48[0x23] = local_48[7];
            local_48[0x24] = local_48[7];
            local_48[0x25] = local_48[7];
            local_48[0x26] = local_48[7];
            local_48[0x27] = local_48[7];
            local_48[0x28] = local_48[7];
            local_48[0x29] = local_48[7];
            local_48[0x2a] = local_48[7];
            local_48[0x2b] = local_48[7];
            local_48[0x2c] = local_48[7];
            local_48[0x2d] = local_48[7];
            local_48[0x2e] = local_48[7];
            local_48[0x2f] = local_48[7];
            local_48[0x30] = local_48[7];
            local_48[0x31] = local_48[7];
            local_48[0x32] = local_48[7];
            local_48[0x33] = local_48[7];
            local_48[0x34] = local_48[7];
            local_48[0x35] = local_48[7];
            local_48[0x36] = local_48[7];
            local_48[0x37] = local_48[7];
            local_48[0x38] = local_48[7];
            local_48[0x39] = local_48[7];
            if (uVar35 < uVar7) goto LAB_001ebdcc;
            if ((uVar23 >> 4 & 1) == 0) {
              bVar44 = (byte)uVar23 & 0x30;
              bVar27 = pbVar13[1];
              bVar30 = 0x80;
              if ((uVar23 >> 5 & 1) != 0) {
                bVar30 = bVar27 & 0xf8;
              }
            }
            else {
              bVar27 = pbVar13[1];
              bVar44 = 0x30;
              bVar30 = bVar27 & 0xf8;
            }
            local_48[1] = bVar44 | (byte)uVar23 & 199 | (byte)((bVar4 & 2) << 2);
            local_48[0] = bVar30 | bVar27 & 3;
            local_48[3] = pbVar13[4];
            local_48[4] = pbVar13[5];
            local_48[0x10] = pbVar13[0xe] & 0x77;
            local_48[0x15] = pbVar13[0xf] & 0xf7;
            local_48[2] = pbVar13[3] & 0xfb;
            local_48[6] = pbVar13[7] & 0x77;
            local_48[0xb] = pbVar13[8] & 0xf7;
            local_48[0xc] = pbVar13[10] & 0xfb;
            local_48[5] = pbVar13[6];
            local_48[8] = pbVar13[9];
            local_48[0xd] = pbVar13[0xb];
            local_48[0xe] = pbVar13[0xc];
            local_48[0xf] = pbVar13[0xd];
            local_48[0x12] = pbVar13[0x10];
            if ((iVar10 - 2U & 0xfe) != 0) {
              local_48[0x16] = pbVar13[0x11] & 0xfb;
              local_48[0x17] = pbVar13[0x12];
              local_48[0x1a] = pbVar13[0x15] & 0x77;
              local_48[0x18] = pbVar13[0x13];
              local_48[0x1f] = pbVar13[0x16] & 0xf7;
              local_48[0x19] = pbVar13[0x14];
              local_48[0x1c] = pbVar13[0x17];
              if (iVar10 != 3) {
                local_48[0x20] = pbVar13[0x18] & 0xfb;
                local_48[0x21] = pbVar13[0x19];
                local_48[0x24] = pbVar13[0x1c] & 0x77;
                local_48[0x22] = pbVar13[0x1a];
                local_48[0x29] = pbVar13[0x1d] & 0xf7;
                local_48[0x23] = pbVar13[0x1b];
                local_48[0x26] = pbVar13[0x1e];
              }
            }
            iVar10 = iVar10 * 10;
            if ((bVar4 & 2) != 0) {
              bVar27 = pbVar25[0x11];
              bVar4 = pbVar25[0x13];
              local_48[2] = local_48[2] | (byte)((bVar27 & 0x40) >> 4);
              local_48[9] = bVar27 >> 1 & 0x1f;
              local_48[0xc] = local_48[0xc] | (byte)((bVar4 & 0x40) >> 4);
              local_48[10] = pbVar25[0x12] & 0x7f | bVar27 << 7;
              local_48[0x13] = bVar4 >> 1 & 0x1f;
              local_48[0x14] = pbVar25[0x14] & 0x7f | bVar4 << 7;
              if (1 < uVar19) {
                bVar27 = pbVar25[0x15];
                bVar4 = pbVar25[0x17];
                local_48[0x16] = local_48[0x16] | (byte)((bVar27 & 0x40) >> 4);
                local_48[0x1d] = bVar27 >> 1 & 0x1f;
                local_48[0x20] = local_48[0x20] | (byte)((bVar4 & 0x40) >> 4);
                local_48[0x1e] = pbVar25[0x16] & 0x7f | bVar27 << 7;
                local_48[0x27] = bVar4 >> 1 & 0x1f;
                local_48[0x28] = pbVar25[0x18] & 0x7f | bVar4 << 7;
              }
              bVar27 = pbVar25[0x10];
              cVar40 = (char)iVar10;
              bVar4 = pbVar25[0x19];
              bVar30 = pbVar25[2];
              local_48[iVar10 + 2] = pbVar25[1] & 0x1f;
              bVar44 = pbVar25[3];
              local_48[(byte)(cVar40 + 3)] =
                   (byte)((bVar4 & 0x40) >> 3) | (bVar27 & 0x78) << 1 | bVar27 & 7;
              bVar27 = pbVar25[4];
              local_48[iVar10 + 4] = bVar30 >> 1 & 0x1f;
              bVar4 = pbVar25[5];
              local_48[(byte)(cVar40 + 5)] = bVar44 & 0x7f | bVar30 << 7;
              local_48[iVar10 + 6] = bVar27 >> 1 & 0x1f;
              bVar30 = pbVar25[6];
              bVar44 = pbVar25[7];
              local_48[(byte)(cVar40 + 7)] = bVar4 & 0x7f | bVar27 << 7;
              bVar27 = pbVar25[8];
              local_48[iVar10 + 8] = bVar30 >> 1 & 0x1f;
              bVar4 = pbVar25[9];
              local_48[(byte)(cVar40 + 9)] = bVar44 & 0x7f | bVar30 << 7;
              bVar30 = pbVar25[10];
              local_48[iVar10 + 10] = bVar27 >> 1 & 0x1f;
              bVar44 = pbVar25[0xb];
              local_48[(byte)(cVar40 + 0xb)] = bVar4 & 0x7f | bVar27 << 7;
              local_48[iVar10 + 0xc] = bVar30 >> 1 & 0x1f;
              bVar27 = pbVar25[0xc];
              bVar4 = pbVar25[0xd];
              local_48[(byte)(cVar40 + 0xd)] = bVar44 & 0x7f | bVar30 << 7;
              bVar30 = pbVar25[0x1a];
              local_48[iVar10 + 0xe] = bVar27 & 0x1f;
              local_48[(byte)(cVar40 + 0xf)] = bVar4 & 0x1f;
              if ((bVar30 & 1) == 0) {
                bVar27 = pbVar25[0xf];
                local_48[iVar10 + 0x10] = pbVar25[0xe] & 0x1f;
                local_48[(byte)(cVar40 + 0x11U)] = bVar27 & 0x1f;
              }
              else {
                bVar27 = pbVar25[0xf];
                local_48[iVar10 + 0x10] = pbVar25[0xe] & 0x1f | 0x80;
                local_48[(byte)(cVar40 + 0x11U)] = bVar27 & 0x1f | 0x80;
              }
            }
            MaSndDrv_MultiCnv(local_48,uVar15);
            MaSndDrv_SetVoice(param_1,uVar24 & 0xff,uVar36,0,uVar9,0,0,0x7f,local_48,uVar15);
            uVar42 = uVar38 + uVar42;
          }
          else {
            local_48[0] = 0;
            local_48[1] = 0;
            local_48[2] = 0;
            local_48[3] = 0;
            local_48[4] = 0;
            local_48[5] = 0;
            local_48[6] = 0;
            local_48[7] = 0;
            local_48[8] = 0;
            local_48[9] = 0;
            local_48[10] = 0;
            local_48[0xb] = 0;
            local_48[0xc] = 0;
            local_48[0xd] = 0;
            local_48[0xe] = 0;
            local_48[0xf] = 0;
            local_48[0x10] = 0;
            local_48[0x11] = 0;
            local_48[0x12] = 0;
            local_48[0x13] = 0;
            local_48[0x14] = 0;
            local_48[0x15] = 0;
            local_48[0x16] = 0;
            local_48[0x17] = 0;
            local_48[0x18] = 0;
            local_48[0x19] = 0;
            local_48[0x1a] = 0;
            local_48[0x1b] = 0;
            local_48[0x1c] = 0;
            local_48[0x1d] = 0;
            if ((bVar4 & 2) == 0) {
              pbVar13 = (byte *)0x0;
              uVar19 = 0x10;
              uVar7 = 0xe;
              pbVar25 = &DAT_005ddd40;
            }
            else {
              uVar19 = 0x2b;
              uVar7 = 0x1e;
              pbVar13 = &DAT_005ddd40;
              pbVar25 = &DAT_005ddd5b;
            }
            if (uVar35 < uVar19) goto LAB_001ebdcc;
            if ((pbVar25[3] >> 2 & 1) == 0) {
              bVar30 = pbVar25[2];
              bVar27 = bVar30 & 1;
              if ((bVar30 & 1) == 0) {
                local_48[0] = 0x80;
              }
              else {
                local_48[0] = bVar30 & 0xf8;
                bVar27 = 0x20;
              }
            }
            else {
              bVar27 = 0x30;
              local_48[0] = pbVar25[2] & 0xf8;
            }
            local_48[1] = bVar27 | pbVar25[3] & 0xc3 | (byte)((bVar4 & 2) << 2);
            local_48[2] = pbVar25[4] & 0xfa;
            local_48[5] = pbVar25[7] & 0xfc;
            local_48[3] = pbVar25[5];
            local_48[4] = pbVar25[6];
            local_48[8] = pbVar25[9];
            local_48[6] = pbVar25[8] & 0x77;
            local_48[9] = pbVar25[10];
            local_48[10] = pbVar25[0xb];
            local_48[0xb] = pbVar25[0xc];
            local_48[0xc] = pbVar25[0xd];
            local_48[0xd] = pbVar25[0xe];
            if ((bVar4 & 2) != 0) {
              local_48[0xf] =
                   (byte)((pbVar13[0x19] & 0x40) >> 3) | (pbVar13[0x10] & 0x78) << 1 |
                   pbVar13[0x10] & 7;
              local_48[1] = local_48[1] | (*pbVar13 & 2) << 1;
              local_48[0x10] = pbVar13[2] >> 1 & 0x1f;
              local_48[0xe] = pbVar13[1] & 0x1f;
              local_48[0x11] = pbVar13[3] & 0x7f | pbVar13[2] << 7;
              local_48[0x12] = pbVar13[4] >> 1 & 0x1f;
              local_48[0x13] = pbVar13[5] & 0x7f | pbVar13[4] << 7;
              local_48[0x14] = pbVar13[6] >> 1 & 0x1f;
              local_48[0x18] = pbVar13[10] >> 1 & 0x1f;
              local_48[0x15] = pbVar13[7] & 0x7f | pbVar13[6] << 7;
              local_48[0x19] = pbVar13[0xb] & 0x7f | pbVar13[10] << 7;
              local_48[0x16] = pbVar13[8] >> 1 & 0x1f;
              local_48[0x17] = pbVar13[9] & 0x7f | pbVar13[8] << 7;
              local_48[0x1a] = pbVar13[0xc] & 0x1f;
              local_48[0x1b] = pbVar13[0xd] & 0x1f;
              if ((pbVar13[0x1a] & 1) == 0) {
                local_48[0x1c] = pbVar13[0xe] & 0x1f;
                local_48[0x1d] = pbVar13[0xf] & 0x1f;
              }
              else {
                local_48[0x1c] = pbVar13[0xe] & 0x1f | 0x80;
                local_48[0x1d] = pbVar13[0xf] & 0x1f | 0x80;
              }
            }
            bVar27 = *pbVar25;
            bVar4 = pbVar25[1];
            uVar19 = pbVar25[0xf] & 0x7f;
            if (-1 < (char)pbVar25[0xf]) {
              lVar45 = *(long *)(param_1 + 8);
              if (*(char *)(lVar45 + 0xdd8 + (ulong)uVar19 + 0x2720) == '\0') {
                if (*(int *)(lVar45 + 0xdf8) == 3) {
                  lVar28 = *(long *)(lVar45 + 0x2d0);
                  cVar21 = '\x06';
                  uVar35 = *(uint *)(lVar45 + 0x2d8);
                  uVar23 = 1;
                  cVar40 = '\x03';
                }
                else {
                  uVar23 = 0;
                  if (*(int *)(lVar45 + 0xdf8) == 5) {
                    lVar28 = *(long *)(lVar45 + 0x348);
                    cVar40 = '\x03';
                    uVar35 = *(uint *)(lVar45 + 0x350);
                    cVar21 = '\a';
                  }
                  else {
                    lVar28 = *(long *)(lVar45 + 0x3c0);
                    cVar40 = '#';
                    uVar35 = *(uint *)(lVar45 + 0x3c8);
                    cVar21 = '\b';
                  }
                }
                for (uVar15 = 0; uVar15 + 0xd < uVar35; uVar15 = uVar9 + uVar15) {
                  lVar18 = lVar28 + (ulong)uVar15;
                  if ((uVar35 - uVar15 < 6) || (*(char *)(lVar28 + (ulong)uVar15) != -0x10)) break;
                  uVar9 = *(byte *)(lVar18 + 1) & 0x7f;
                  if ((char)*(byte *)(lVar18 + 1) < '\0') {
                    uVar9 = (*(byte *)(lVar18 + 2) & 0x7f) + uVar9 * 0x80;
                    if ((char)*(byte *)(lVar18 + 2) < '\0') {
                      uVar9 = (*(byte *)(lVar18 + 3) & 0x7f) + uVar9 * 0x80;
                      if ((char)*(byte *)(lVar18 + 3) < '\0') {
                        uVar9 = (*(byte *)(lVar18 + 4) & 0x7f) + uVar9 * 0x80;
                        if ((0x1fffff < uVar9) || ((char)*(byte *)(lVar18 + 4) < '\0')) break;
                        lVar17 = 5;
                        iVar10 = 4;
                      }
                      else {
                        lVar17 = 4;
                        iVar10 = 3;
                      }
                    }
                    else {
                      lVar17 = 3;
                      iVar10 = 2;
                    }
                  }
                  else {
                    lVar17 = 2;
                    iVar10 = 1;
                  }
                  uVar9 = uVar9 + (int)lVar17;
                  if (uVar35 - uVar15 < uVar9) break;
                  if ((((((*(char *)(lVar18 + lVar17) == 'C') &&
                         (*(char *)(lVar18 + (ulong)(iVar10 + 2)) == 'y')) &&
                        (*(char *)(lVar18 + (ulong)(iVar10 + 3)) == cVar21)) &&
                       ((*(char *)(lVar18 + (ulong)(iVar10 + 4)) == '\x7f' &&
                        (*(char *)(lVar18 + (ulong)(iVar10 + 5)) == cVar40)))) && (10 < uVar9)) &&
                     (uVar1 = iVar10 + 6 + uVar15, *(byte *)(lVar28 + (ulong)uVar1) == uVar19)) {
                    iVar10 = MaSndDrv_SetWtWave(param_1,uVar19,uVar23,
                                                (uchar *)(lVar28 + (ulong)(uVar1 + 2)),
                                                (uVar9 - 3) - (iVar10 + 6));
                    if (iVar10 == 0) {
                      *(undefined1 *)(lVar45 + 0xdd8 + (ulong)uVar19 + 0x2720) = 1;
                    }
                    break;
                  }
                }
              }
              uVar19 = uVar19 + 0x80;
            }
            MaSndDrv_SetVoice(param_1,uVar24 & 0xff,uVar36,1,(uint)bVar4 + (uint)bVar27 * 0x100,
                              uVar19,0,0x7f,local_48,uVar7);
            uVar42 = uVar38 + uVar42;
          }
        }
        else {
LAB_001ebdcc:
          uVar42 = uVar38 + uVar42;
        }
      }
    }
    lVar16 = *(long *)(param_1 + 8);
  }
  if (*(byte *)(lVar16 + 0x2e56) != 0x10) {
    MaSndDrv_SetHvCh(param_1,(uint)*(byte *)(lVar16 + 0x2e56));
    MaSndDrv_SetHvScript(param_1,*(uchar **)(lVar16 + 0xdc8),*(uint *)(lVar16 + 0xdd0));
    MaSndDrv_SetHvVoice(param_1,0xff,*(uchar **)(lVar16 + 0xdb8),*(uint *)(lVar16 + 0xdc0));
  }
LAB_001eb790:
  uVar12 = 0;
  goto LAB_001eb558;
code_r0x001eb874:
  uVar14 = (ulong)(uVar42 + 5);
  if (cVar34 == '\x02') {
    lVar45 = lVar33 + uVar14;
    if (((*(byte *)(lVar33 + uVar14) & 0xf8) != 0) || (bVar6 = bVar27 != 0x13, bVar6))
    goto LAB_001ebc14;
    local_48[1] = 0x80;
    local_48[0] = *(byte *)(lVar45 + 3) & 3 | 0x80;
    bVar27 = *(byte *)(lVar45 + 4);
    bVar4 = *(byte *)(lVar45 + 5);
    bVar30 = *(byte *)(lVar45 + 6);
    bVar44 = *(byte *)(lVar45 + 7);
    uVar19 = (bVar27 & 3) << 2 | (uint)(bVar4 >> 6);
    bVar29 = bVar27 >> 2;
    local_48[2] = bVar29 & 1;
    if ((bVar27 >> 3 & 1) == 0) {
      local_48[2] = (&DAT_0048f8a0)[(int)uVar19] << 4;
      bVar26 = 0x80;
      if ((bVar29 & 1) != 0) {
        bVar26 = local_48[2];
      }
    }
    else if ((bVar29 & 1) == 0) {
      bVar26 = (&DAT_0048f8a0)[(int)uVar19] << 4;
    }
    else {
      local_48[2] = 0;
      bVar26 = 0x50;
    }
    local_48[5] = ((bVar30 & 3) << 4 | bVar44 >> 4) << 2;
    local_48[3] = bVar26 + ((&DAT_0048f8a0)[(int)(bVar4 >> 2 & 0xf)] & 0xf);
    local_48[4] = (bVar30 >> 2 & 0xf) +
                  (&DAT_0048f8b0)[(int)((bVar4 & 3) << 2 | (uint)(bVar30 >> 6))] * '\x10';
    local_48[6] = (bVar27 >> 4 & 1) + 4;
    local_48[8] = (bVar44 & 7) + (bVar44 >> 3 & 1) * '\b';
    local_48[0xb] = (bVar27 >> 5) << 4;
    bVar27 = *(byte *)(lVar45 + 8);
    bVar4 = *(byte *)(lVar45 + 9);
    bVar30 = *(byte *)(lVar45 + 10);
    uVar19 = (bVar27 & 3) << 2 | (uint)(bVar4 >> 6);
    bVar44 = bVar27 >> 2;
    local_48[0xc] = bVar44 & 1;
    if ((bVar27 >> 3 & 1) == 0) {
      local_48[0xc] = (&DAT_0048f8a0)[(int)uVar19] << 4;
      bVar29 = 0x80;
      if ((bVar44 & 1) != 0) {
        bVar29 = local_48[0xc];
      }
    }
    else if ((bVar44 & 1) == 0) {
      bVar29 = (&DAT_0048f8a0)[(int)uVar19] << 4;
    }
    else {
      local_48[0xc] = 0;
      bVar29 = 0x50;
    }
    local_48[0x15] = (bVar27 >> 5) << 4;
    local_48[0xe] =
         (bVar30 >> 2 & 0xf) +
         (&DAT_0048f8b0)[(int)((bVar4 & 3) << 2 | (uint)(bVar30 >> 6))] * '\x10';
    local_48[0xf] = ((bVar30 & 3) << 4 | *(byte *)(lVar45 + 0xb) >> 4) << 2;
    local_48[0x12] = (*(byte *)(lVar45 + 0xb) >> 3 & 1) << 3;
    local_48[0x10] = (bVar27 >> 4 & 1) + 4;
    local_48[0xd] = bVar29 + ((&DAT_0048f8a0)[(int)(bVar4 >> 2 & 0xf)] & 0xf);
    local_48[7] = bVar6;
    local_48[9] = bVar6;
    local_48[10] = bVar6;
    local_48[0x11] = bVar6;
    local_48[0x13] = bVar6;
    local_48[0x14] = bVar6;
    MaSndDrv_MultiCnv(local_48,0x16);
    lVar28 = *(long *)(param_1 + 8) + (ulong)(byte)uVar41 * 2;
    *(undefined1 *)(lVar28 + 0x34d8) = *(undefined1 *)(lVar45 + 1);
    *(byte *)(lVar28 + 0x34d9) = *(byte *)(lVar45 + 2) & 0x7f;
    iVar10 = MaSndDrv_SetVoice(param_1,1,uVar41,0,0,0,0,0x7f,local_48,0x16);
  }
  else {
    lVar45 = lVar33 + uVar14;
    bVar4 = *(byte *)(lVar33 + uVar14) & 0xf0;
    if ((*(byte *)(lVar33 + uVar14) & 0xf0) != 0) goto LAB_001ebc14;
    bVar30 = *(byte *)(lVar45 + 3);
    local_48[1] = (bVar30 & 7) + (bVar30 & 0xc0);
    local_48[0] = *(byte *)(lVar45 + 4) & 3 | 0x80;
    local_48[7] = bVar4;
    local_48[9] = bVar4;
    local_48[10] = bVar4;
    local_48[0x11] = bVar4;
    local_48[0x13] = bVar4;
    local_48[0x14] = bVar4;
    local_48[0x16] = bVar4;
    local_48[0x17] = bVar4;
    local_48[0x18] = bVar4;
    local_48[0x19] = bVar4;
    local_48[0x1a] = bVar4;
    local_48[0x1b] = bVar4;
    local_48[0x1c] = bVar4;
    local_48[0x1d] = bVar4;
    local_48[0x1e] = bVar4;
    local_48[0x1f] = bVar4;
    local_48[0x20] = bVar4;
    local_48[0x21] = bVar4;
    local_48[0x22] = bVar4;
    local_48[0x23] = bVar4;
    local_48[0x24] = bVar4;
    local_48[0x25] = bVar4;
    local_48[0x26] = bVar4;
    local_48[0x27] = bVar4;
    local_48[0x28] = bVar4;
    local_48[0x29] = bVar4;
    if ((bVar30 & 7) < 2) {
      uVar19 = 0x16;
      iVar10 = 2;
    }
    else {
      local_48[2] = bVar4;
      local_48[3] = bVar4;
      local_48[4] = bVar4;
      local_48[5] = bVar4;
      local_48[6] = bVar4;
      local_48[8] = bVar4;
      local_48[0xb] = bVar4;
      local_48[0xc] = bVar4;
      local_48[0xd] = bVar4;
      local_48[0xe] = bVar4;
      local_48[0xf] = bVar4;
      local_48[0x10] = bVar4;
      local_48[0x12] = bVar4;
      local_48[0x15] = bVar4;
      if (bVar27 < 0x1c) goto LAB_001ebc14;
      uVar19 = 0x2a;
      iVar10 = 4;
    }
    bVar44 = *(byte *)(lVar45 + 5);
    bVar29 = *(byte *)(lVar45 + 9);
    bVar27 = *(byte *)(lVar45 + 6) & 0xf0;
    bVar4 = bVar27;
    if ((bVar44 & 4) != 0) {
      bVar4 = 0;
    }
    local_48[4] = *(byte *)(lVar45 + 7);
    bVar26 = 0x40;
    if ((bVar44 & 2) != 0) {
      bVar27 = bVar26;
    }
    local_48[5] = *(byte *)(lVar45 + 8);
    local_48[2] = (bVar44 & 1) + bVar4;
    local_48[3] = (*(byte *)(lVar45 + 6) & 0xf) + bVar27;
    local_48[6] = (bVar44 >> 3 & 1) + (bVar29 >> 6) * '\x02' + (bVar29 >> 4 & 3) * ' ' +
                  (bVar29 >> 3 & 1) * '\x10';
    local_48[8] = (bVar29 & 7) * '\b' + (bVar30 >> 3 & 7);
    local_48[0xb] = bVar44 & 0xf0;
    bVar30 = *(byte *)(lVar45 + 10);
    bVar44 = *(byte *)(lVar45 + 0xe);
    bVar27 = *(byte *)(lVar45 + 0xb) & 0xf0;
    bVar4 = bVar27;
    if ((bVar30 & 4) != 0) {
      bVar4 = 0;
    }
    local_48[0xe] = *(byte *)(lVar45 + 0xc);
    if ((bVar30 & 2) != 0) {
      bVar27 = bVar26;
    }
    local_48[0xf] = *(byte *)(lVar45 + 0xd);
    local_48[0xc] = (bVar30 & 1) + bVar4;
    local_48[0xd] = (*(byte *)(lVar45 + 0xb) & 0xf) + bVar27;
    local_48[0x10] =
         (bVar30 >> 3 & 1) + (bVar44 >> 6) * '\x02' + (bVar44 >> 4 & 3) * ' ' +
         (bVar44 >> 3 & 1) * '\x10';
    local_48[0x12] = (bVar44 & 7) << 3;
    local_48[0x15] = bVar30 & 0xf0;
    if ((iVar10 - 2U & 0xfe) != 0) {
      bVar30 = *(byte *)(lVar45 + 0xf);
      bVar44 = *(byte *)(lVar45 + 0x13);
      bVar27 = *(byte *)(lVar45 + 0x10) & 0xf0;
      bVar4 = bVar27;
      if ((bVar30 & 4) != 0) {
        bVar4 = 0;
      }
      local_48[0x18] = *(byte *)(lVar45 + 0x11);
      if ((bVar30 & 2) != 0) {
        bVar27 = bVar26;
      }
      local_48[0x19] = *(byte *)(lVar45 + 0x12);
      local_48[0x16] = (bVar30 & 1) + bVar4;
      local_48[0x17] = (*(byte *)(lVar45 + 0x10) & 0xf) + bVar27;
      local_48[0x1a] =
           (bVar30 >> 3 & 1) + (bVar44 >> 6) * '\x02' + (bVar44 >> 4 & 3) * ' ' +
           (bVar44 >> 3 & 1) * '\x10';
      local_48[0x1c] = (bVar44 & 7) << 3;
      local_48[0x1f] = bVar30 & 0xf0;
      if (iVar10 != 3) {
        bVar30 = *(byte *)(lVar45 + 0x14);
        bVar44 = *(byte *)(lVar45 + 0x18);
        bVar27 = *(byte *)(lVar45 + 0x15) & 0xf0;
        bVar4 = bVar27;
        if ((bVar30 & 4) != 0) {
          bVar4 = 0;
        }
        local_48[0x22] = *(byte *)(lVar45 + 0x16);
        local_48[0x23] = *(byte *)(lVar45 + 0x17);
        if ((bVar30 & 2) != 0) {
          bVar27 = bVar26;
        }
        local_48[0x21] = (*(byte *)(lVar45 + 0x15) & 0xf) + bVar27;
        local_48[0x20] = (bVar30 & 1) + bVar4;
        local_48[0x24] =
             (bVar30 >> 3 & 1) + (bVar44 >> 6) * '\x02' + (bVar44 >> 4 & 3) * ' ' +
             (bVar44 >> 3 & 1) * '\x10';
        local_48[0x26] = (bVar44 & 7) << 3;
        local_48[0x29] = bVar30 & 0xf0;
      }
    }
    MaSndDrv_MultiCnv(local_48,uVar19);
    lVar28 = *(long *)(param_1 + 8) + (ulong)(byte)uVar41 * 2;
    *(undefined1 *)(lVar28 + 0x34d8) = *(undefined1 *)(lVar45 + 1);
    *(byte *)(lVar28 + 0x34d9) = *(byte *)(lVar45 + 2) & 0x7f;
    iVar10 = MaSndDrv_SetVoice(param_1,1,uVar41,0,0,0,0,0x7f,local_48,uVar19);
  }
  if (iVar10 == 0) {
    uVar41 = uVar41 + 1 & 0xff;
  }
LAB_001ebc14:
  if (0xf < uVar41) goto LAB_001eb790;
  uVar42 = (uint)*(byte *)(lVar33 + (ulong)(uVar42 + 2)) + uVar42 + 3;
  goto LAB_001eb7e4;
}

