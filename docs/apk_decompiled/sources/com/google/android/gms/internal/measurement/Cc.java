package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Cc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Ac f1419a = c();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final Ac f1420b = new C0249zc();

    static Ac a() {
        return f1419a;
    }

    static Ac b() {
        return f1420b;
    }

    private static Ac c() {
        try {
            return (Ac) Class.forName("com.google.protobuf.NewInstanceSchemaFull").getDeclaredConstructor(new Class[0]).newInstance(new Object[0]);
        } catch (Exception unused) {
            return null;
        }
    }
}
