package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Fa<T> extends Ha<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final Fa<Object> f1452a = new Fa<>();

    private Fa() {
    }

    @Override // com.google.android.gms.internal.measurement.Ha
    public final boolean a() {
        return false;
    }

    @Override // com.google.android.gms.internal.measurement.Ha
    public final T b() {
        throw new IllegalStateException("Optional.get() cannot be called on an absent value");
    }

    public final boolean equals(Object obj) {
        return obj == this;
    }

    public final int hashCode() {
        return 2040732332;
    }

    public final String toString() {
        return "Optional.absent()";
    }
}
