package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.dc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class AbstractC0107dc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0107dc f1668a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0107dc f1669b;

    static {
        C0100cc c0100cc = null;
        f1668a = new C0128gc();
        f1669b = new C0114ec();
    }

    private AbstractC0107dc() {
    }

    static AbstractC0107dc a() {
        return f1668a;
    }

    static AbstractC0107dc b() {
        return f1669b;
    }

    abstract void a(Object obj, long j);

    abstract <L> void a(Object obj, Object obj2, long j);
}
