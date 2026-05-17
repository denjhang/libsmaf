package c.a.a.a.f;

import java.util.ArrayDeque;
import java.util.Queue;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class x<TResult> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Object f889a = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Queue<w<TResult>> f890b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f891c;

    x() {
    }

    public final void a(g<TResult> gVar) {
        w<TResult> wVarPoll;
        synchronized (this.f889a) {
            if (this.f890b != null && !this.f891c) {
                this.f891c = true;
                while (true) {
                    synchronized (this.f889a) {
                        wVarPoll = this.f890b.poll();
                        if (wVarPoll == null) {
                            this.f891c = false;
                            return;
                        }
                    }
                    wVarPoll.a(gVar);
                }
            }
        }
    }

    public final void a(w<TResult> wVar) {
        synchronized (this.f889a) {
            if (this.f890b == null) {
                this.f890b = new ArrayDeque();
            }
            this.f890b.add(wVar);
        }
    }
}
