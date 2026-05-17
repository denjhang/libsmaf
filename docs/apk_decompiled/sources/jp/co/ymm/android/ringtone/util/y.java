package jp.co.ymm.android.ringtone.util;

import jp.co.ymm.android.ringtone.b.c;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
/* synthetic */ class y {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final /* synthetic */ int[] f3933a = new int[c.b.values().length];

    static {
        try {
            f3933a[c.b.SMAF.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            f3933a[c.b.MP3.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            f3933a[c.b.MP4.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
        try {
            f3933a[c.b.OGG.ordinal()] = 4;
        } catch (NoSuchFieldError unused4) {
        }
    }
}
