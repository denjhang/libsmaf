package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class B extends Jb<B, a> implements InterfaceC0231wc {
    private static final B zzh;
    private static volatile Bc<B> zzi;
    private int zzc;
    private E zzd;
    private C zze;
    private boolean zzf;
    private String zzg = "";

    public static final class a extends Jb.b<B, a> implements InterfaceC0231wc {
        private a() {
            super(B.zzh);
        }

        /* synthetic */ a(F f2) {
            this();
        }

        public final a a(String str) {
            g();
            ((B) this.f1478b).a(str);
            return this;
        }
    }

    static {
        B b2 = new B();
        zzh = b2;
        Jb.a((Class<B>) B.class, b2);
    }

    private B() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(String str) {
        if (str == null) {
            throw new NullPointerException();
        }
        this.zzc |= 8;
        this.zzg = str;
    }

    public static B v() {
        return zzh;
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        F f2 = null;
        switch (F.f1451a[i - 1]) {
            case 1:
                return new B();
            case 2:
                return new a(f2);
            case 3:
                return Jb.a(zzh, "\u0001\u0004\u0000\u0001\u0001\u0004\u0004\u0000\u0000\u0000\u0001\t\u0000\u0002\t\u0001\u0003\u0007\u0002\u0004\b\u0003", new Object[]{"zzc", "zzd", "zze", "zzf", "zzg"});
            case 4:
                return zzh;
            case 5:
                Bc<B> aVar = zzi;
                if (aVar == null) {
                    synchronized (B.class) {
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

    public final E p() {
        E e2 = this.zzd;
        return e2 == null ? E.w() : e2;
    }

    public final boolean q() {
        return (this.zzc & 2) != 0;
    }

    public final C r() {
        C c2 = this.zze;
        return c2 == null ? C.y() : c2;
    }

    public final boolean s() {
        return (this.zzc & 4) != 0;
    }

    public final boolean t() {
        return this.zzf;
    }

    public final String u() {
        return this.zzg;
    }
}
