package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class T extends Jb<T, a> implements InterfaceC0231wc {
    private static final T zzi;
    private static volatile Bc<T> zzj;
    private int zzc;
    private String zzd = "";
    private String zze = "";
    private long zzf;
    private float zzg;
    private double zzh;

    public static final class a extends Jb.b<T, a> implements InterfaceC0231wc {
        private a() {
            super(T.zzi);
        }

        /* synthetic */ a(C0084aa c0084aa) {
            this();
        }

        public final a a(double d2) {
            g();
            ((T) this.f1478b).a(d2);
            return this;
        }

        public final a a(long j) {
            g();
            ((T) this.f1478b).a(j);
            return this;
        }

        public final a a(String str) {
            g();
            ((T) this.f1478b).a(str);
            return this;
        }

        public final a b(String str) {
            g();
            ((T) this.f1478b).b(str);
            return this;
        }

        public final a k() {
            g();
            ((T) this.f1478b).x();
            return this;
        }

        public final a l() {
            g();
            ((T) this.f1478b).y();
            return this;
        }

        public final a m() {
            g();
            ((T) this.f1478b).z();
            return this;
        }
    }

    static {
        T t = new T();
        zzi = t;
        Jb.a((Class<T>) T.class, t);
    }

    private T() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(double d2) {
        this.zzc |= 16;
        this.zzh = d2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(long j) {
        this.zzc |= 4;
        this.zzf = j;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(String str) {
        if (str == null) {
            throw new NullPointerException();
        }
        this.zzc |= 1;
        this.zzd = str;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void b(String str) {
        if (str == null) {
            throw new NullPointerException();
        }
        this.zzc |= 2;
        this.zze = str;
    }

    public static a v() {
        return zzi.i();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void x() {
        this.zzc &= -3;
        this.zze = zzi.zze;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void y() {
        this.zzc &= -5;
        this.zzf = 0L;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void z() {
        this.zzc &= -17;
        this.zzh = 0.0d;
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        C0084aa c0084aa = null;
        switch (C0084aa.f1628a[i - 1]) {
            case 1:
                return new T();
            case 2:
                return new a(c0084aa);
            case 3:
                return Jb.a(zzi, "\u0001\u0005\u0000\u0001\u0001\u0005\u0005\u0000\u0000\u0000\u0001\b\u0000\u0002\b\u0001\u0003\u0002\u0002\u0004\u0001\u0003\u0005\u0000\u0004", new Object[]{"zzc", "zzd", "zze", "zzf", "zzg", "zzh"});
            case 4:
                return zzi;
            case 5:
                Bc<T> aVar = zzj;
                if (aVar == null) {
                    synchronized (T.class) {
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

    public final String o() {
        return this.zzd;
    }

    public final boolean p() {
        return (this.zzc & 2) != 0;
    }

    public final String q() {
        return this.zze;
    }

    public final boolean r() {
        return (this.zzc & 4) != 0;
    }

    public final long s() {
        return this.zzf;
    }

    public final boolean t() {
        return (this.zzc & 16) != 0;
    }

    public final double u() {
        return this.zzh;
    }
}
