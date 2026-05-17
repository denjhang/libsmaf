package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class L extends Jb<L, a> implements InterfaceC0231wc {
    private static final L zzf;
    private static volatile Bc<L> zzg;
    private int zzc;
    private String zzd = "";
    private String zze = "";

    public static final class a extends Jb.b<L, a> implements InterfaceC0231wc {
        private a() {
            super(L.zzf);
        }

        /* synthetic */ a(N n) {
            this();
        }
    }

    static {
        L l = new L();
        zzf = l;
        Jb.a((Class<L>) L.class, l);
    }

    private L() {
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        N n = null;
        switch (N.f1535a[i - 1]) {
            case 1:
                return new L();
            case 2:
                return new a(n);
            case 3:
                return Jb.a(zzf, "\u0001\u0002\u0000\u0001\u0001\u0002\u0002\u0000\u0000\u0000\u0001\b\u0000\u0002\b\u0001", new Object[]{"zzc", "zzd", "zze"});
            case 4:
                return zzf;
            case 5:
                Bc<L> aVar = zzg;
                if (aVar == null) {
                    synchronized (L.class) {
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

    public final String o() {
        return this.zzd;
    }

    public final String p() {
        return this.zze;
    }
}
