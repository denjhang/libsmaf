package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Kb implements InterfaceC0201rc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Kb f1494a = new Kb();

    private Kb() {
    }

    public static Kb a() {
        return f1494a;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0201rc
    public final boolean a(Class<?> cls) {
        return Jb.class.isAssignableFrom(cls);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0201rc
    public final InterfaceC0207sc b(Class<?> cls) {
        if (!Jb.class.isAssignableFrom(cls)) {
            String strValueOf = String.valueOf(cls.getName());
            throw new IllegalArgumentException(strValueOf.length() != 0 ? "Unsupported message type: ".concat(strValueOf) : new String("Unsupported message type: "));
        }
        try {
            return (InterfaceC0207sc) Jb.a(cls.asSubclass(Jb.class)).a(Jb.e.f1482c, (Object) null, (Object) null);
        } catch (Exception e2) {
            String strValueOf2 = String.valueOf(cls.getName());
            throw new RuntimeException(strValueOf2.length() != 0 ? "Unable to get message info for ".concat(strValueOf2) : new String("Unable to get message info for "), e2);
        }
    }
}
