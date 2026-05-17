package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C extends Jb<C, b> implements InterfaceC0231wc {
    private static final C zzi;
    private static volatile Bc<C> zzj;
    private int zzc;
    private int zzd;
    private boolean zze;
    private String zzf = "";
    private String zzg = "";
    private String zzh = "";

    public enum a implements Ob {
        UNKNOWN_COMPARISON_TYPE(0),
        LESS_THAN(1),
        GREATER_THAN(2),
        EQUAL(3),
        BETWEEN(4);


        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private static final Nb<a> f1411f = new H();
        private final int h;

        a(int i) {
            this.h = i;
        }

        public static a a(int i) {
            if (i == 0) {
                return UNKNOWN_COMPARISON_TYPE;
            }
            if (i == 1) {
                return LESS_THAN;
            }
            if (i == 2) {
                return GREATER_THAN;
            }
            if (i == 3) {
                return EQUAL;
            }
            if (i != 4) {
                return null;
            }
            return BETWEEN;
        }

        public static Qb m() {
            return G.f1454a;
        }

        @Override // java.lang.Enum
        public final String toString() {
            return "<" + a.class.getName() + '@' + Integer.toHexString(System.identityHashCode(this)) + " number=" + this.h + " name=" + name() + '>';
        }
    }

    public static final class b extends Jb.b<C, b> implements InterfaceC0231wc {
        private b() {
            super(C.zzi);
        }

        /* synthetic */ b(F f2) {
            this();
        }
    }

    static {
        C c2 = new C();
        zzi = c2;
        Jb.a((Class<C>) C.class, c2);
    }

    private C() {
    }

    public static C y() {
        return zzi;
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        F f2 = null;
        switch (F.f1451a[i - 1]) {
            case 1:
                return new C();
            case 2:
                return new b(f2);
            case 3:
                return Jb.a(zzi, "\u0001\u0005\u0000\u0001\u0001\u0005\u0005\u0000\u0000\u0000\u0001\f\u0000\u0002\u0007\u0001\u0003\b\u0002\u0004\b\u0003\u0005\b\u0004", new Object[]{"zzc", "zzd", a.m(), "zze", "zzf", "zzg", "zzh"});
            case 4:
                return zzi;
            case 5:
                Bc<C> aVar = zzj;
                if (aVar == null) {
                    synchronized (C.class) {
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

    public final boolean o() {
        return (this.zzc & 1) != 0;
    }

    public final a p() {
        a aVarA = a.a(this.zzd);
        return aVarA == null ? a.UNKNOWN_COMPARISON_TYPE : aVarA;
    }

    public final boolean q() {
        return (this.zzc & 2) != 0;
    }

    public final boolean r() {
        return this.zze;
    }

    public final boolean s() {
        return (this.zzc & 4) != 0;
    }

    public final String t() {
        return this.zzf;
    }

    public final boolean u() {
        return (this.zzc & 8) != 0;
    }

    public final String v() {
        return this.zzg;
    }

    public final boolean w() {
        return (this.zzc & 16) != 0;
    }

    public final String x() {
        return this.zzh;
    }
}
