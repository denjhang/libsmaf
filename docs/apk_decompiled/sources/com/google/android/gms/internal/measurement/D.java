package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class D extends Jb<D, a> implements InterfaceC0231wc {
    private static final D zzj;
    private static volatile Bc<D> zzk;
    private int zzc;
    private int zzd;
    private String zze = "";
    private B zzf;
    private boolean zzg;
    private boolean zzh;
    private boolean zzi;

    public static final class a extends Jb.b<D, a> implements InterfaceC0231wc {
        private a() {
            super(D.zzj);
        }

        /* synthetic */ a(F f2) {
            this();
        }

        public final a a(String str) {
            g();
            ((D) this.f1478b).a(str);
            return this;
        }
    }

    static {
        D d2 = new D();
        zzj = d2;
        Jb.a((Class<D>) D.class, d2);
    }

    private D() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(String str) {
        if (str == null) {
            throw new NullPointerException();
        }
        this.zzc |= 2;
        this.zze = str;
    }

    public static a w() {
        return zzj.i();
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        F f2 = null;
        switch (F.f1451a[i - 1]) {
            case 1:
                return new D();
            case 2:
                return new a(f2);
            case 3:
                return Jb.a(zzj, "\u0001\u0006\u0000\u0001\u0001\u0006\u0006\u0000\u0000\u0000\u0001\u0004\u0000\u0002\b\u0001\u0003\t\u0002\u0004\u0007\u0003\u0005\u0007\u0004\u0006\u0007\u0005", new Object[]{"zzc", "zzd", "zze", "zzf", "zzg", "zzh", "zzi"});
            case 4:
                return zzj;
            case 5:
                Bc<D> aVar = zzk;
                if (aVar == null) {
                    synchronized (D.class) {
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

    public final int p() {
        return this.zzd;
    }

    public final String q() {
        return this.zze;
    }

    public final B r() {
        B b2 = this.zzf;
        return b2 == null ? B.v() : b2;
    }

    public final boolean s() {
        return this.zzg;
    }

    public final boolean t() {
        return this.zzh;
    }

    public final boolean u() {
        return (this.zzc & 32) != 0;
    }

    public final boolean v() {
        return this.zzi;
    }
}
