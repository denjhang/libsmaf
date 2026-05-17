package com.google.android.gms.internal.measurement;

import java.lang.ref.Reference;
import java.lang.ref.ReferenceQueue;
import java.util.List;
import java.util.Vector;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Sa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ConcurrentHashMap<Ra, List<Throwable>> f1571a = new ConcurrentHashMap<>(16, 0.75f, 10);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final ReferenceQueue<Throwable> f1572b = new ReferenceQueue<>();

    Sa() {
    }

    public final List<Throwable> a(Throwable th, boolean z) {
        while (true) {
            Reference<? extends Throwable> referencePoll = this.f1572b.poll();
            if (referencePoll == null) {
                break;
            }
            this.f1571a.remove(referencePoll);
        }
        List<Throwable> list = this.f1571a.get(new Ra(th, null));
        if (list != null) {
            return list;
        }
        Vector vector = new Vector(2);
        List<Throwable> listPutIfAbsent = this.f1571a.putIfAbsent(new Ra(th, this.f1572b), vector);
        return listPutIfAbsent == null ? vector : listPutIfAbsent;
    }
}
