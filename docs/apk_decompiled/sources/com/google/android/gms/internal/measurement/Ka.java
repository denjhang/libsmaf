package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Ka<T> extends Ha<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final T f1493a;

    Ka(T t) {
        this.f1493a = t;
    }

    @Override // com.google.android.gms.internal.measurement.Ha
    public final boolean a() {
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.Ha
    public final T b() {
        return this.f1493a;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof Ka) {
            return this.f1493a.equals(((Ka) obj).f1493a);
        }
        return false;
    }

    public final int hashCode() {
        return this.f1493a.hashCode() + 1502476572;
    }

    public final String toString() {
        String strValueOf = String.valueOf(this.f1493a);
        StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 13);
        sb.append("Optional.of(");
        sb.append(strValueOf);
        sb.append(")");
        return sb.toString();
    }
}
