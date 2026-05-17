package c.a.a.a.d.d;

import java.lang.ref.ReferenceQueue;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class i extends WeakReference<Throwable> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f839a;

    public i(Throwable th, ReferenceQueue<Throwable> referenceQueue) {
        super(th, referenceQueue);
        if (th == null) {
            throw new NullPointerException("The referent cannot be null");
        }
        this.f839a = System.identityHashCode(th);
    }

    public final boolean equals(Object obj) {
        if (obj != null && obj.getClass() == i.class) {
            if (this == obj) {
                return true;
            }
            i iVar = (i) obj;
            if (this.f839a == iVar.f839a && get() == iVar.get()) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return this.f839a;
    }
}
