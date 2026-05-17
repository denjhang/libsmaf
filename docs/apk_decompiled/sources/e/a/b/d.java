package e.a.b;

import e.N;
import java.util.LinkedHashSet;
import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Set<N> f2918a = new LinkedHashSet();

    public synchronized void a(N n) {
        this.f2918a.remove(n);
    }

    public synchronized void b(N n) {
        this.f2918a.add(n);
    }

    public synchronized boolean c(N n) {
        return this.f2918a.contains(n);
    }
}
