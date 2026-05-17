package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Z extends Jb<Z, a> implements InterfaceC0231wc {
    private static final Z zzj;
    private static volatile Bc<Z> zzk;
    private int zzc;
    private long zzd;
    private String zze = "";
    private String zzf = "";
    private long zzg;
    private float zzh;
    private double zzi;

    public static final class a extends Jb.b<Z, a> implements InterfaceC0231wc {
        private a() {
            super(Z.zzj);
        }

        /* synthetic */ a(C0084aa c0084aa) {
            this();
        }

        public final a a(double d2) {
            g();
            ((Z) this.f1478b).a(d2);
            return this;
        }

        public final a a(long j) {
            g();
            ((Z) this.f1478b).a(j);
            return this;
        }

        public final a a(String str) {
            g();
            ((Z) this.f1478b).a(str);
            return this;
        }

        public final a b(long j) {
            g();
            ((Z) this.f1478b).b(j);
            return this;
        }

        public final a b(String str) {
            g();
            ((Z) this.f1478b).b(str);
            return this;
        }

        public final a k() {
            g();
            ((Z) this.f1478b).z();
            return this;
        }

        public final a l() {
            g();
            ((Z) this.f1478b).A();
            return this;
        }

        public final a m() {
            g();
            ((Z) this.f1478b).B();
            return this;
        }
    }

    static {
        Z z = new Z();
        zzj = z;
        Jb.a((Class<Z>) Z.class, z);
    }

    private Z() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void A() {
        this.zzc &= -9;
        this.zzg = 0L;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void B() {
        this.zzc &= -33;
        this.zzi = 0.0d;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(double d2) {
        this.zzc |= 32;
        this.zzi = d2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(long j) {
        this.zzc |= 1;
        this.zzd = j;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(String str) {
        if (str == null) {
            throw new NullPointerException();
        }
        this.zzc |= 2;
        this.zze = str;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void b(long j) {
        this.zzc |= 8;
        this.zzg = j;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void b(String str) {
        if (str == null) {
            throw new NullPointerException();
        }
        this.zzc |= 4;
        this.zzf = str;
    }

    public static a x() {
        return zzj.i();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void z() {
        this.zzc &= -5;
        this.zzf = zzj.zzf;
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        C0084aa c0084aa = null;
        switch (C0084aa.f1628a[i - 1]) {
            case 1:
                return new Z();
            case 2:
                return new a(c0084aa);
            case 3:
                return Jb.a(zzj, "\u0001\u0006\u0000\u0001\u0001\u0006\u0006\u0000\u0000\u0000\u0001\u0002\u0000\u0002\b\u0001\u0003\b\u0002\u0004\u0002\u0003\u0005\u0001\u0004\u0006\u0000\u0005", new Object[]{"zzc", "zzd", "zze", "zzf", "zzg", "zzh", "zzi"});
            case 4:
                return zzj;
            case 5:
                Bc<Z> aVar = zzk;
                if (aVar == null) {
                    synchronized (Z.class) {
                        aVar = zzk;
                        if (aVar == null) {
                            aVar = new Jb.a<>(zzj);
                            zzk = aVar;
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

    public final long p() {
        return this.zzd;
    }

    public final String q() {
        return this.zze;
    }

    public final boolean r() {
        return (this.zzc & 4) != 0;
    }

    public final String s() {
        return this.zzf;
    }

    public final boolean t() {
        return (this.zzc & 8) != 0;
    }

    public final long u() {
        return this.zzg;
    }

    public final boolean v() {
        return (this.zzc & 32) != 0;
    }

    public final double w() {
        return this.zzi;
    }
}
