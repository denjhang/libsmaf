package c.a.a.a.d.d;

import java.lang.ref.Reference;
import java.lang.ref.ReferenceQueue;
import java.util.List;
import java.util.Vector;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ConcurrentHashMap<i, List<Throwable>> f840a = new ConcurrentHashMap<>(16, 0.75f, 10);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final ReferenceQueue<Throwable> f841b = new ReferenceQueue<>();

    j() {
    }

    public final List<Throwable> a(Throwable th, boolean z) {
        while (true) {
            Reference<? extends Throwable> referencePoll = this.f841b.poll();
            if (referencePoll == null) {
                break;
            }
            this.f840a.remove(referencePoll);
        }
        List<Throwable> list = this.f840a.get(new i(th, null));
        if (list != null) {
            return list;
        }
        Vector vector = new Vector(2);
        List<Throwable> listPutIfAbsent = this.f840a.putIfAbsent(new i(th, this.f841b), vector);
        return listPutIfAbsent == null ? vector : listPutIfAbsent;
    }
}
