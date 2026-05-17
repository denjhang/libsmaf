package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class X extends Jb<X, a> implements InterfaceC0231wc {
    private static final X zzg;
    private static volatile Bc<X> zzh;
    private Sb zzc = Jb.m();
    private Sb zzd = Jb.m();
    private Rb<P> zze = Jb.n();
    private Rb<Y> zzf = Jb.n();

    public static final class a extends Jb.b<X, a> implements InterfaceC0231wc {
        private a() {
            super(X.zzg);
        }

        /* synthetic */ a(C0084aa c0084aa) {
            this();
        }

        public final a a(int i) {
            g();
            ((X) this.f1478b).d(i);
            return this;
        }

        public final a a(Iterable<? extends Long> iterable) {
            g();
            ((X) this.f1478b).a(iterable);
            return this;
        }

        public final a b(int i) {
            g();
            ((X) this.f1478b).e(i);
            return this;
        }

        public final a b(Iterable<? extends Long> iterable) {
            g();
            ((X) this.f1478b).b(iterable);
            return this;
        }

        public final a c(Iterable<? extends P> iterable) {
            g();
            ((X) this.f1478b).c(iterable);
            return this;
        }

        public final a d(Iterable<? extends Y> iterable) {
            g();
            ((X) this.f1478b).d(iterable);
            return this;
        }

        public final a k() {
            g();
            ((X) this.f1478b).z();
            return this;
        }

        public final a l() {
            g();
            ((X) this.f1478b).A();
            return this;
        }
    }

    static {
        X x = new X();
        zzg = x;
        Jb.a((Class<X>) X.class, x);
    }

    private X() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void A() {
        this.zzd = Jb.m();
    }

    private final void B() {
        if (this.zze.h()) {
            return;
        }
        this.zze = Jb.a(this.zze);
    }

    private final void C() {
        if (this.zzf.h()) {
            return;
        }
        this.zzf = Jb.a(this.zzf);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(Iterable<? extends Long> iterable) {
        if (!this.zzc.h()) {
            this.zzc = Jb.a(this.zzc);
        }
        Va.a(iterable, this.zzc);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void b(Iterable<? extends Long> iterable) {
        if (!this.zzd.h()) {
            this.zzd = Jb.a(this.zzd);
        }
        Va.a(iterable, this.zzd);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void c(Iterable<? extends P> iterable) {
        B();
        Va.a(iterable, this.zze);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void d(int i) {
        B();
        this.zze.remove(i);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void d(Iterable<? extends Y> iterable) {
        C();
        Va.a(iterable, this.zzf);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void e(int i) {
        C();
        this.zzf.remove(i);
    }

    public static a w() {
        return zzg.i();
    }

    public static X x() {
        return zzg;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void z() {
        this.zzc = Jb.m();
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        C0084aa c0084aa = null;
        switch (C0084aa.f1628a[i - 1]) {
            case 1:
                return new X();
            case 2:
                return new a(c0084aa);
            case 3:
                return Jb.a(zzg, "\u0001\u0004\u0000\u0000\u0001\u0004\u0004\u0000\u0004\u0000\u0001\u0015\u0002\u0015\u0003\u001b\u0004\u001b", new Object[]{"zzc", "zzd", "zze", P.class, "zzf", Y.class});
            case 4:
                return zzg;
            case 5:
                Bc<X> aVar = zzh;
                if (aVar == null) {
                    synchronized (X.class) {
                        aVar = zzh;
                        if (aVar == null) {
                            aVar = new Jb.a<>(zzg);
                            zzh = aVar;
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

    public final P b(int i) {
        return this.zze.get(i);
    }

    public final Y c(int i) {
        return this.zzf.get(i);
    }

    public final List<Long> o() {
        return this.zzc;
    }

    public final int p() {
        return this.zzc.size();
    }

    public final List<Long> q() {
        return this.zzd;
    }

    public final int r() {
        return this.zzd.size();
    }

    public final List<P> s() {
        return this.zze;
    }

    public final int t() {
        return this.zze.size();
    }

    public final List<Y> u() {
        return this.zzf;
    }

    public final int v() {
        return this.zzf.size();
    }
}
