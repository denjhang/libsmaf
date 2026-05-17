package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;
import com.google.android.gms.internal.measurement.X;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class O extends Jb<O, a> implements InterfaceC0231wc {
    private static final O zzh;
    private static volatile Bc<O> zzi;
    private int zzc;
    private int zzd;
    private X zze;
    private X zzf;
    private boolean zzg;

    public static final class a extends Jb.b<O, a> implements InterfaceC0231wc {
        private a() {
            super(O.zzh);
        }

        /* synthetic */ a(C0084aa c0084aa) {
            this();
        }

        public final a a(int i) {
            g();
            ((O) this.f1478b).b(i);
            return this;
        }

        public final a a(X.a aVar) {
            g();
            ((O) this.f1478b).a(aVar);
            return this;
        }

        public final a a(X x) {
            g();
            ((O) this.f1478b).a(x);
            return this;
        }

        public final a a(boolean z) {
            g();
            ((O) this.f1478b).a(z);
            return this;
        }

        public final boolean k() {
            return ((O) this.f1478b).r();
        }

        public final X l() {
            return ((O) this.f1478b).s();
        }
    }

    static {
        O o = new O();
        zzh = o;
        Jb.a((Class<O>) O.class, o);
    }

    private O() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(X.a aVar) {
        this.zze = (X) aVar.j();
        this.zzc |= 2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(X x) {
        if (x == null) {
            throw new NullPointerException();
        }
        this.zzf = x;
        this.zzc |= 4;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(boolean z) {
        this.zzc |= 8;
        this.zzg = z;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void b(int i) {
        this.zzc |= 1;
        this.zzd = i;
    }

    public static a v() {
        return zzh.i();
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        C0084aa c0084aa = null;
        switch (C0084aa.f1628a[i - 1]) {
            case 1:
                return new O();
            case 2:
                return new a(c0084aa);
            case 3:
                return Jb.a(zzh, "\u0001\u0004\u0000\u0001\u0001\u0004\u0004\u0000\u0000\u0000\u0001\u0004\u0000\u0002\t\u0001\u0003\t\u0002\u0004\u0007\u0003", new Object[]{"zzc", "zzd", "zze", "zzf", "zzg"});
            case 4:
                return zzh;
            case 5:
                Bc<O> aVar = zzi;
                if (aVar == null) {
                    synchronized (O.class) {
                        aVar = zzi;
                        if (aVar == null) {
                            aVar = new Jb.a<>(zzh);
                            zzi = aVar;
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

    public final boolean o() {
        return (this.zzc & 1) != 0;
    }

    public final int p() {
        return this.zzd;
    }

    public final X q() {
        X x = this.zze;
        return x == null ? X.x() : x;
    }

    public final boolean r() {
        return (this.zzc & 4) != 0;
    }

    public final X s() {
        X x = this.zzf;
        return x == null ? X.x() : x;
    }

    public final boolean t() {
        return (this.zzc & 8) != 0;
    }

    public final boolean u() {
        return this.zzg;
    }
}
