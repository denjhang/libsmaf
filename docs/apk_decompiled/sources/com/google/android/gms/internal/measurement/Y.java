package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Y extends Jb<Y, a> implements InterfaceC0231wc {
    private static final Y zzf;
    private static volatile Bc<Y> zzg;
    private int zzc;
    private int zzd;
    private Sb zze = Jb.m();

    public static final class a extends Jb.b<Y, a> implements InterfaceC0231wc {
        private a() {
            super(Y.zzf);
        }

        /* synthetic */ a(C0084aa c0084aa) {
            this();
        }

        public final a a(int i) {
            g();
            ((Y) this.f1478b).c(i);
            return this;
        }

        public final a a(long j) {
            g();
            ((Y) this.f1478b).a(j);
            return this;
        }

        public final a a(Iterable<? extends Long> iterable) {
            g();
            ((Y) this.f1478b).a(iterable);
            return this;
        }

        public final a k() {
            g();
            ((Y) this.f1478b).v();
            return this;
        }
    }

    static {
        Y y = new Y();
        zzf = y;
        Jb.a((Class<Y>) Y.class, y);
    }

    private Y() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(long j) {
        u();
        this.zze.a(j);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(Iterable<? extends Long> iterable) {
        u();
        Va.a(iterable, this.zze);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void c(int i) {
        this.zzc |= 1;
        this.zzd = i;
    }

    public static a s() {
        return zzf.i();
    }

    private final void u() {
        if (this.zze.h()) {
            return;
        }
        this.zze = Jb.a(this.zze);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void v() {
        this.zze = Jb.m();
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        C0084aa c0084aa = null;
        switch (C0084aa.f1628a[i - 1]) {
            case 1:
                return new Y();
            case 2:
                return new a(c0084aa);
            case 3:
                return Jb.a(zzf, "\u0001\u0002\u0000\u0001\u0001\u0002\u0002\u0000\u0001\u0000\u0001\u0004\u0000\u0002\u0014", new Object[]{"zzc", "zzd", "zze"});
            case 4:
                return zzf;
            case 5:
                Bc<Y> aVar = zzg;
                if (aVar == null) {
                    synchronized (Y.class) {
                        aVar = zzg;
                        if (aVar == null) {
                            aVar = new Jb.a<>(zzf);
                            zzg = aVar;
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

    public final long b(int i) {
        return this.zze.b(i);
    }

    public final boolean o() {
        return (this.zzc & 1) != 0;
    }

    public final int p() {
        return this.zzd;
    }

    public final List<Long> q() {
        return this.zze;
    }

    public final int r() {
        return this.zze.size();
    }
}
