package com.google.android.gms.internal.measurement;

import java.lang.ref.ReferenceQueue;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Ra extends WeakReference<Throwable> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1565a;

    public Ra(Throwable th, ReferenceQueue<Throwable> referenceQueue) {
        super(th, referenceQueue);
        if (th == null) {
            throw new NullPointerException("The referent cannot be null");
        }
        this.f1565a = System.identityHashCode(th);
    }

    public final boolean equals(Object obj) {
        if (obj != null && obj.getClass() == Ra.class) {
            if (this == obj) {
                return true;
            }
            Ra ra = (Ra) obj;
            if (this.f1565a == ra.f1565a && get() == ra.get()) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return this.f1565a;
    }
}
