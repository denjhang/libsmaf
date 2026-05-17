package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class S extends Jb<S, a> implements InterfaceC0231wc {
    private static final S zzf;
    private static volatile Bc<S> zzg;
    private int zzc;
    private String zzd = "";
    private long zze;

    public static final class a extends Jb.b<S, a> implements InterfaceC0231wc {
        private a() {
            super(S.zzf);
        }

        /* synthetic */ a(C0084aa c0084aa) {
            this();
        }
    }

    static {
        S s = new S();
        zzf = s;
        Jb.a((Class<S>) S.class, s);
    }

    private S() {
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        C0084aa c0084aa = null;
        switch (C0084aa.f1628a[i - 1]) {
            case 1:
                return new S();
            case 2:
                return new a(c0084aa);
            case 3:
                return Jb.a(zzf, "\u0001\u0002\u0000\u0001\u0001\u0002\u0002\u0000\u0000\u0000\u0001\b\u0000\u0002\u0002\u0001", new Object[]{"zzc", "zzd", "zze"});
            case 4:
                return zzf;
            case 5:
                Bc<S> aVar = zzg;
                if (aVar == null) {
                    synchronized (S.class) {
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
}
