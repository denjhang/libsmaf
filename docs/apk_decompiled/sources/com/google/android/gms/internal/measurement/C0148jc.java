package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.jc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0148jc implements InterfaceC0201rc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private InterfaceC0201rc[] f1733a;

    C0148jc(InterfaceC0201rc... interfaceC0201rcArr) {
        this.f1733a = interfaceC0201rcArr;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0201rc
    public final boolean a(Class<?> cls) {
        for (InterfaceC0201rc interfaceC0201rc : this.f1733a) {
            if (interfaceC0201rc.a(cls)) {
                return true;
            }
        }
        return false;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0201rc
    public final InterfaceC0207sc b(Class<?> cls) {
        for (InterfaceC0201rc interfaceC0201rc : this.f1733a) {
            if (interfaceC0201rc.a(cls)) {
                return interfaceC0201rc.b(cls);
            }
        }
        String strValueOf = String.valueOf(cls.getName());
        throw new UnsupportedOperationException(strValueOf.length() != 0 ? "No factory is available for message type: ".concat(strValueOf) : new String("No factory is available for message type: "));
    }
}
