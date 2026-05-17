package androidx.lifecycle;

import android.util.Log;
import androidx.lifecycle.f;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class j extends f {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final WeakReference<h> f473c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b.a.a.b.a<g, a> f471a = new b.a.a.b.a<>();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f474d = 0;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private boolean f475e = false;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private boolean f476f = false;
    private ArrayList<f.b> g = new ArrayList<>();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private f.b f472b = f.b.INITIALIZED;

    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        f.b f477a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        e f478b;

        a(g gVar, f.b bVar) {
            this.f478b = l.a(gVar);
            this.f477a = bVar;
        }

        void a(h hVar, f.a aVar) {
            f.b bVarA = j.a(aVar);
            this.f477a = j.a(this.f477a, bVarA);
            this.f478b.a(hVar, aVar);
            this.f477a = bVarA;
        }
    }

    public j(h hVar) {
        this.f473c = new WeakReference<>(hVar);
    }

    static f.b a(f.a aVar) {
        switch (i.f469a[aVar.ordinal()]) {
            case 1:
            case 2:
                return f.b.CREATED;
            case 3:
            case 4:
                return f.b.STARTED;
            case 5:
                return f.b.RESUMED;
            case 6:
                return f.b.DESTROYED;
            default:
                throw new IllegalArgumentException("Unexpected event value " + aVar);
        }
    }

    static f.b a(f.b bVar, f.b bVar2) {
        return (bVar2 == null || bVar2.compareTo(bVar) >= 0) ? bVar : bVar2;
    }

    private void a(h hVar) {
        Iterator<Map.Entry<g, a>> itDescendingIterator = this.f471a.descendingIterator();
        while (itDescendingIterator.hasNext() && !this.f476f) {
            Map.Entry<g, a> next = itDescendingIterator.next();
            a value = next.getValue();
            while (value.f477a.compareTo(this.f472b) > 0 && !this.f476f && this.f471a.contains(next.getKey())) {
                f.a aVarB = b(value.f477a);
                d(a(aVarB));
                value.a(hVar, aVarB);
                c();
            }
        }
    }

    private static f.a b(f.b bVar) {
        int i = i.f470b[bVar.ordinal()];
        if (i == 1) {
            throw new IllegalArgumentException();
        }
        if (i == 2) {
            return f.a.ON_DESTROY;
        }
        if (i == 3) {
            return f.a.ON_STOP;
        }
        if (i == 4) {
            return f.a.ON_PAUSE;
        }
        if (i == 5) {
            throw new IllegalArgumentException();
        }
        throw new IllegalArgumentException("Unexpected state value " + bVar);
    }

    private void b(h hVar) {
        b.a.a.b.b<g, a>.d dVarB = this.f471a.b();
        while (dVarB.hasNext() && !this.f476f) {
            Map.Entry next = dVarB.next();
            a aVar = (a) next.getValue();
            while (aVar.f477a.compareTo(this.f472b) < 0 && !this.f476f && this.f471a.contains((g) next.getKey())) {
                d(aVar.f477a);
                aVar.a(hVar, e(aVar.f477a));
                c();
            }
        }
    }

    private boolean b() {
        if (this.f471a.size() == 0) {
            return true;
        }
        f.b bVar = this.f471a.a().getValue().f477a;
        f.b bVar2 = this.f471a.c().getValue().f477a;
        return bVar == bVar2 && this.f472b == bVar2;
    }

    private f.b c(g gVar) {
        Map.Entry<g, a> entryB = this.f471a.b(gVar);
        f.b bVar = null;
        f.b bVar2 = entryB != null ? entryB.getValue().f477a : null;
        if (!this.g.isEmpty()) {
            bVar = this.g.get(r0.size() - 1);
        }
        return a(a(this.f472b, bVar2), bVar);
    }

    private void c() {
        this.g.remove(r0.size() - 1);
    }

    private void c(f.b bVar) {
        if (this.f472b == bVar) {
            return;
        }
        this.f472b = bVar;
        if (this.f475e || this.f474d != 0) {
            this.f476f = true;
            return;
        }
        this.f475e = true;
        d();
        this.f475e = false;
    }

    private void d() {
        h hVar = this.f473c.get();
        if (hVar == null) {
            Log.w("LifecycleRegistry", "LifecycleOwner is garbage collected, you shouldn't try dispatch new events from it.");
            return;
        }
        while (!b()) {
            this.f476f = false;
            if (this.f472b.compareTo(this.f471a.a().getValue().f477a) < 0) {
                a(hVar);
            }
            Map.Entry<g, a> entryC = this.f471a.c();
            if (!this.f476f && entryC != null && this.f472b.compareTo(entryC.getValue().f477a) > 0) {
                b(hVar);
            }
        }
        this.f476f = false;
    }

    private void d(f.b bVar) {
        this.g.add(bVar);
    }

    private static f.a e(f.b bVar) {
        int i = i.f470b[bVar.ordinal()];
        if (i != 1) {
            if (i == 2) {
                return f.a.ON_START;
            }
            if (i == 3) {
                return f.a.ON_RESUME;
            }
            if (i == 4) {
                throw new IllegalArgumentException();
            }
            if (i != 5) {
                throw new IllegalArgumentException("Unexpected state value " + bVar);
            }
        }
        return f.a.ON_CREATE;
    }

    @Override // androidx.lifecycle.f
    public f.b a() {
        return this.f472b;
    }

    public void a(f.b bVar) {
        c(bVar);
    }

    @Override // androidx.lifecycle.f
    public void a(g gVar) {
        h hVar;
        f.b bVar = this.f472b;
        f.b bVar2 = f.b.DESTROYED;
        if (bVar != bVar2) {
            bVar2 = f.b.INITIALIZED;
        }
        a aVar = new a(gVar, bVar2);
        if (this.f471a.b(gVar, aVar) == null && (hVar = this.f473c.get()) != null) {
            boolean z = this.f474d != 0 || this.f475e;
            f.b bVarC = c(gVar);
            this.f474d++;
            while (aVar.f477a.compareTo(bVarC) < 0 && this.f471a.contains(gVar)) {
                d(aVar.f477a);
                aVar.a(hVar, e(aVar.f477a));
                c();
                bVarC = c(gVar);
            }
            if (!z) {
                d();
            }
            this.f474d--;
        }
    }

    public void b(f.a aVar) {
        c(a(aVar));
    }

    @Override // androidx.lifecycle.f
    public void b(g gVar) {
        this.f471a.remove(gVar);
    }
}
