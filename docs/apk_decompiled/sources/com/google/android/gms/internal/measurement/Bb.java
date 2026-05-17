package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Db;
import java.util.Iterator;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Bb<T extends Db<T>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Bb f1400a = new Bb(true);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final Mc<T, Object> f1401b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f1402c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private boolean f1403d;

    private Bb() {
        this.f1401b = Mc.a(16);
    }

    private Bb(Mc<T, Object> mc) {
        this.f1401b = mc;
        b();
    }

    private Bb(boolean z) {
        this(Mc.a(0));
        b();
    }

    public static int a(Db<?> db, Object obj) {
        db.m();
        throw null;
    }

    public static <T extends Db<T>> Bb<T> a() {
        return f1400a;
    }

    private static <T extends Db<T>> boolean a(Map.Entry<T, Object> entry) {
        entry.getKey().x();
        throw null;
    }

    private final void b(T t, Object obj) {
        t.y();
        throw null;
    }

    private final void b(Map.Entry<T, Object> entry) {
        T key = entry.getKey();
        Object value = entry.getValue();
        if (!(value instanceof Vb)) {
            key.y();
            throw null;
        }
        Vb.c();
        throw null;
    }

    private static int c(Map.Entry<T, Object> entry) {
        T key = entry.getKey();
        entry.getValue();
        key.x();
        throw null;
    }

    public final void a(Bb<T> bb) {
        if (bb.f1401b.c() > 0) {
            b(bb.f1401b.b(0));
            throw null;
        }
        Iterator it = bb.f1401b.d().iterator();
        if (it.hasNext()) {
            b((Map.Entry) it.next());
            throw null;
        }
    }

    public final void b() {
        if (this.f1402c) {
            return;
        }
        this.f1401b.a();
        this.f1402c = true;
    }

    public final boolean c() {
        return this.f1402c;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final /* synthetic */ Object clone() {
        Bb bb = new Bb();
        if (this.f1401b.c() > 0) {
            Map.Entry<K, Object> entryB = this.f1401b.b(0);
            bb.b((Db) entryB.getKey(), entryB.getValue());
            throw null;
        }
        Iterator it = this.f1401b.d().iterator();
        if (!it.hasNext()) {
            bb.f1403d = this.f1403d;
            return bb;
        }
        Map.Entry entry = (Map.Entry) it.next();
        bb.b((Db) entry.getKey(), entry.getValue());
        throw null;
    }

    public final Iterator<Map.Entry<T, Object>> d() {
        return this.f1403d ? new _b(this.f1401b.entrySet().iterator()) : this.f1401b.entrySet().iterator();
    }

    final Iterator<Map.Entry<T, Object>> e() {
        return this.f1403d ? new _b(this.f1401b.e().iterator()) : this.f1401b.e().iterator();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof Bb) {
            return this.f1401b.equals(((Bb) obj).f1401b);
        }
        return false;
    }

    public final boolean f() {
        if (this.f1401b.c() > 0) {
            a(this.f1401b.b(0));
            throw null;
        }
        Iterator it = this.f1401b.d().iterator();
        if (!it.hasNext()) {
            return true;
        }
        a((Map.Entry) it.next());
        throw null;
    }

    public final int g() {
        if (this.f1401b.c() > 0) {
            c(this.f1401b.b(0));
            throw null;
        }
        Iterator it = this.f1401b.d().iterator();
        if (!it.hasNext()) {
            return 0;
        }
        c((Map.Entry) it.next());
        throw null;
    }

    public final int hashCode() {
        return this.f1401b.hashCode();
    }
}
