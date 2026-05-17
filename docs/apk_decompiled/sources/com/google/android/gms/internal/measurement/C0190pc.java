package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.pc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0190pc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final InterfaceC0176nc f1777a = c();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final InterfaceC0176nc f1778b = new C0196qc();

    static InterfaceC0176nc a() {
        return f1777a;
    }

    static InterfaceC0176nc b() {
        return f1778b;
    }

    private static InterfaceC0176nc c() {
        try {
            return (InterfaceC0176nc) Class.forName("com.google.protobuf.MapFieldSchemaFull").getDeclaredConstructor(new Class[0]).newInstance(new Object[0]);
        } catch (Exception unused) {
            return null;
        }
    }
}
