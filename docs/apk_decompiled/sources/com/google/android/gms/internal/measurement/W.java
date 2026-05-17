package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class W extends Jb<W, b> implements InterfaceC0231wc {
    private static final W zzf;
    private static volatile Bc<W> zzg;
    private int zzc;
    private int zzd = 1;
    private Rb<S> zze = Jb.n();

    public enum a implements Ob {
        RADS(1),
        PROVISIONING(2);


        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private static final Nb<a> f1591c = new C0098ca();

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private final int f1593e;

        a(int i) {
            this.f1593e = i;
        }

        public static a a(int i) {
            if (i == 1) {
                return RADS;
            }
            if (i != 2) {
                return null;
            }
            return PROVISIONING;
        }

        public static Qb m() {
            return C0091ba.f1640a;
        }

        @Override // java.lang.Enum
        public final String toString() {
            return "<" + a.class.getName() + '@' + Integer.toHexString(System.identityHashCode(this)) + " number=" + this.f1593e + " name=" + name() + '>';
        }
    }

    public static final class b extends Jb.b<W, b> implements InterfaceC0231wc {
        private b() {
            super(W.zzf);
        }

        /* synthetic */ b(C0084aa c0084aa) {
            this();
        }
    }

    static {
        W w = new W();
        zzf = w;
        Jb.a((Class<W>) W.class, w);
    }

    private W() {
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        C0084aa c0084aa = null;
        switch (C0084aa.f1628a[i - 1]) {
            case 1:
                return new W();
            case 2:
                return new b(c0084aa);
            case 3:
                return Jb.a(zzf, "\u0001\u0002\u0000\u0001\u0001\u0002\u0002\u0000\u0001\u0000\u0001\f\u0000\u0002\u001b", new Object[]{"zzc", "zzd", a.m(), "zze", S.class});
            case 4:
                return zzf;
            case 5:
                Bc<W> aVar = zzg;
                if (aVar == null) {
                    synchronized (W.class) {
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
