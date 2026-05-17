package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class P extends Jb<P, a> implements InterfaceC0231wc {
    private static final P zzf;
    private static volatile Bc<P> zzg;
    private int zzc;
    private int zzd;
    private long zze;

    public static final class a extends Jb.b<P, a> implements InterfaceC0231wc {
        private a() {
            super(P.zzf);
        }

        /* synthetic */ a(C0084aa c0084aa) {
            this();
        }

        public final a a(int i) {
            g();
            ((P) this.f1478b).b(i);
            return this;
        }

        public final a a(long j) {
            g();
            ((P) this.f1478b).a(j);
            return this;
        }
    }

    static {
        P p = new P();
        zzf = p;
        Jb.a((Class<P>) P.class, p);
    }

    private P() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(long j) {
        this.zzc |= 2;
        this.zze = j;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void b(int i) {
        this.zzc |= 1;
        this.zzd = i;
    }

    public static a s() {
        return zzf.i();
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        C0084aa c0084aa = null;
        switch (C0084aa.f1628a[i - 1]) {
            case 1:
                return new P();
            case 2:
                return new a(c0084aa);
            case 3:
                return Jb.a(zzf, "\u0001\u0002\u0000\u0001\u0001\u0002\u0002\u0000\u0000\u0000\u0001\u0004\u0000\u0002\u0002\u0001", new Object[]{"zzc", "zzd", "zze"});
            case 4:
                return zzf;
            case 5:
                Bc<P> aVar = zzg;
                if (aVar == null) {
                    synchronized (P.class) {
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

    public final boolean o() {
        return (this.zzc & 1) != 0;
    }

    public final int p() {
        return this.zzd;
    }

    public final boolean q() {
        return (this.zzc & 2) != 0;
    }

    public final long r() {
        return this.zze;
    }
}
