package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class J extends Jb<J, a> implements InterfaceC0231wc {
    private static final J zzh;
    private static volatile Bc<J> zzi;
    private int zzc;
    private String zzd = "";
    private boolean zze;
    private boolean zzf;
    private int zzg;

    public static final class a extends Jb.b<J, a> implements InterfaceC0231wc {
        private a() {
            super(J.zzh);
        }

        /* synthetic */ a(N n) {
            this();
        }

        public final a a(String str) {
            g();
            ((J) this.f1478b).a(str);
            return this;
        }

        public final String k() {
            return ((J) this.f1478b).o();
        }

        public final boolean l() {
            return ((J) this.f1478b).p();
        }

        public final boolean m() {
            return ((J) this.f1478b).q();
        }

        public final boolean n() {
            return ((J) this.f1478b).r();
        }

        public final int o() {
            return ((J) this.f1478b).s();
        }
    }

    static {
        J j = new J();
        zzh = j;
        Jb.a((Class<J>) J.class, j);
    }

    private J() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(String str) {
        if (str == null) {
            throw new NullPointerException();
        }
        this.zzc |= 1;
        this.zzd = str;
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        N n = null;
        switch (N.f1535a[i - 1]) {
            case 1:
                return new J();
            case 2:
                return new a(n);
            case 3:
                return Jb.a(zzh, "\u0001\u0004\u0000\u0001\u0001\u0004\u0004\u0000\u0000\u0000\u0001\b\u0000\u0002\u0007\u0001\u0003\u0007\u0002\u0004\u0004\u0003", new Object[]{"zzc", "zzd", "zze", "zzf", "zzg"});
            case 4:
                return zzh;
            case 5:
                Bc<J> aVar = zzi;
                if (aVar == null) {
                    synchronized (J.class) {
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

    public final String o() {
        return this.zzd;
    }

    public final boolean p() {
        return this.zze;
    }

    public final boolean q() {
        return this.zzf;
    }

    public final boolean r() {
        return (this.zzc & 8) != 0;
    }

    public final int s() {
        return this.zzg;
    }
}
