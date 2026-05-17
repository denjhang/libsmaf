package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class _a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Class<?> f1620a = a("libcore.io.Memory");

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static final boolean f1621b;

    static {
        f1621b = a("org.robolectric.Robolectric") != null;
    }

    private static <T> Class<T> a(String str) {
        try {
            return (Class<T>) Class.forName(str);
        } catch (Throwable unused) {
            return null;
        }
    }

    static boolean a() {
        return (f1620a == null || f1621b) ? false : true;
    }

    static Class<?> b() {
        return f1620a;
    }
}
