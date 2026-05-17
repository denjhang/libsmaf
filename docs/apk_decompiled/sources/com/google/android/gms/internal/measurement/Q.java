package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;
import com.google.android.gms.internal.measurement.T;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Q extends Jb<Q, a> implements InterfaceC0231wc {
    private static final Q zzi;
    private static volatile Bc<Q> zzj;
    private int zzc;
    private Rb<T> zzd = Jb.n();
    private String zze = "";
    private long zzf;
    private long zzg;
    private int zzh;

    public static final class a extends Jb.b<Q, a> implements InterfaceC0231wc {
        private a() {
            super(Q.zzi);
        }

        /* synthetic */ a(C0084aa c0084aa) {
            this();
        }

        public final a a(int i, T.a aVar) {
            g();
            ((Q) this.f1478b).a(i, aVar);
            return this;
        }

        public final a a(int i, T t) {
            g();
            ((Q) this.f1478b).a(i, t);
            return this;
        }

        public final a a(long j) {
            g();
            ((Q) this.f1478b).a(j);
            return this;
        }

        public final a a(T.a aVar) {
            g();
            ((Q) this.f1478b).a(aVar);
            return this;
        }

        public final a a(T t) {
            g();
            ((Q) this.f1478b).a(t);
            return this;
        }

        public final a a(String str) {
            g();
            ((Q) this.f1478b).a(str);
            return this;
        }

        public final T a(int i) {
            return ((Q) this.f1478b).b(i);
        }

        public final a b(int i) {
            g();
            ((Q) this.f1478b).c(i);
            return this;
        }

        public final a b(long j) {
            g();
            ((Q) this.f1478b).b(j);
            return this;
        }

        public final List<T> k() {
            return Collections.unmodifiableList(((Q) this.f1478b).o());
        }

        public final int l() {
            return ((Q) this.f1478b).p();
        }

        public final String m() {
            return ((Q) this.f1478b).q();
        }

        public final long n() {
            return ((Q) this.f1478b).s();
        }

        public final long o() {
            return ((Q) this.f1478b).u();
        }
    }

    static {
        Q q = new Q();
        zzi = q;
        Jb.a((Class<Q>) Q.class, q);
    }

    private Q() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(int i, T.a aVar) {
        z();
        this.zzd.set(i, (T) aVar.j());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(int i, T t) {
        if (t == null) {
            throw new NullPointerException();
        }
        z();
        this.zzd.set(i, t);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(long j) {
        this.zzc |= 2;
        this.zzf = j;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(T.a aVar) {
        z();
        this.zzd.add((T) aVar.j());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(T t) {
        if (t == null) {
            throw new NullPointerException();
        }
        z();
        this.zzd.add(t);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(String str) {
        if (str == null) {
            throw new NullPointerException();
        }
        this.zzc |= 1;
        this.zze = str;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void b(long j) {
        this.zzc |= 4;
        this.zzg = j;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void c(int i) {
        z();
        this.zzd.remove(i);
    }

    public static a x() {
        return zzi.i();
    }

    private final void z() {
        if (this.zzd.h()) {
            return;
        }
        this.zzd = Jb.a(this.zzd);
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        C0084aa c0084aa = null;
        switch (C0084aa.f1628a[i - 1]) {
            case 1:
                return new Q();
            case 2:
                return new a(c0084aa);
            case 3:
                return Jb.a(zzi, "\u0001\u0005\u0000\u0001\u0001\u0005\u0005\u0000\u0001\u0000\u0001\u001b\u0002\b\u0000\u0003\u0002\u0001\u0004\u0002\u0002\u0005\u0004\u0003", new Object[]{"zzc", "zzd", T.class, "zze", "zzf", "zzg", "zzh"});
            case 4:
                return zzi;
            case 5:
                Bc<Q> aVar = zzj;
                if (aVar == null) {
                    synchronized (Q.class) {
                        aVar = zzj;
                        if (aVar == null) {
                            aVar = new Jb.a<>(zzi);
                            zzj = aVar;
                        }
                        break;
                    }
                }
                return aVar;
            case 6:
                return (byte) 1;
            case 7:
                return null;
            default:
                throw new UnsupportedOperationException();
        }
    }

    public final T b(int i) {
        return this.zzd.get(i);
    }

    public final List<T> o() {
        return this.zzd;
    }

    public final int p() {
        return this.zzd.size();
    }

    public final String q() {
        return this.zze;
    }

    public final boolean r() {
        return (this.zzc & 2) != 0;
    }

    public final long s() {
        return this.zzf;
    }

    public final boolean t() {
        return (this.zzc & 4) != 0;
    }

    public final long u() {
        return this.zzg;
    }

    public final boolean v() {
        return (this.zzc & 8) != 0;
    }

    public final int w() {
        return this.zzh;
    }
}
