package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.zb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0248zb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final AbstractC0242yb<?> f1879a = new Ab();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final AbstractC0242yb<?> f1880b = c();

    static AbstractC0242yb<?> a() {
        return f1879a;
    }

    static AbstractC0242yb<?> b() {
        AbstractC0242yb<?> abstractC0242yb = f1880b;
        if (abstractC0242yb != null) {
            return abstractC0242yb;
        }
        throw new IllegalStateException("Protobuf runtime is not correctly loaded.");
    }

    private static AbstractC0242yb<?> c() {
        try {
            return (AbstractC0242yb) Class.forName("com.google.protobuf.ExtensionSchemaFull").getDeclaredConstructor(new Class[0]).newInstance(new Object[0]);
        } catch (Exception unused) {
            return null;
        }
    }
}
