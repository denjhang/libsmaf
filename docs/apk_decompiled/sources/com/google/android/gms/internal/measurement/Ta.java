package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Ta extends Pa {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Sa f1576b = new Sa();

    Ta() {
    }

    @Override // com.google.android.gms.internal.measurement.Pa
    public final void a(Throwable th, Throwable th2) {
        if (th2 == th) {
            throw new IllegalArgumentException("Self suppression is not allowed.", th2);
        }
        if (th2 == null) {
            throw new NullPointerException("The suppressed exception cannot be null.");
        }
        this.f1576b.a(th, true).add(th2);
    }
}
