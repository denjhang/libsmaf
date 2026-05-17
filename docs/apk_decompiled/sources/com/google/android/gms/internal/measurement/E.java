package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class E extends Jb<E, a> implements InterfaceC0231wc {
    private static final E zzh;
    private static volatile Bc<E> zzi;
    private int zzc;
    private int zzd;
    private boolean zzf;
    private String zze = "";
    private Rb<String> zzg = Jb.n();

    public static final class a extends Jb.b<E, a> implements InterfaceC0231wc {
        private a() {
            super(E.zzh);
        }

        /* synthetic */ a(F f2) {
            this();
        }
    }

    public enum b implements Ob {
        UNKNOWN_MATCH_TYPE(0),
        REGEXP(1),
        BEGINS_WITH(2),
        ENDS_WITH(3),
        PARTIAL(4),
        EXACT(5),
        IN_LIST(6);

        private static final Nb<b> h = new I();
        private final int j;

        b(int i2) {
            this.j = i2;
        }

        public static b a(int i2) {
            switch (i2) {
                case 0:
                    return UNKNOWN_MATCH_TYPE;
                case 1:
                    return REGEXP;
                case 2:
                    return BEGINS_WITH;
                case 3:
                    return ENDS_WITH;
                case 4:
                    return PARTIAL;
                case 5:
                    return EXACT;
                case 6:
                    return IN_LIST;
                default:
                    return null;
            }
        }

        public static Qb m() {
            return M.f1509a;
        }

        @Override // java.lang.Enum
        public final String toString() {
            return "<" + b.class.getName() + '@' + Integer.toHexString(System.identityHashCode(this)) + " number=" + this.j + " name=" + name() + '>';
        }
    }

    static {
        E e2 = new E();
        zzh = e2;
        Jb.a((Class<E>) E.class, e2);
    }

    private E() {
    }

    public static E w() {
        return zzh;
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        F f2 = null;
        switch (F.f1451a[i - 1]) {
            case 1:
                return new E();
            case 2:
                return new a(f2);
            case 3:
                return Jb.a(zzh, "\u0001\u0004\u0000\u0001\u0001\u0004\u0004\u0000\u0001\u0000\u0001\f\u0000\u0002\b\u0001\u0003\u0007\u0002\u0004\u001a", new Object[]{"zzc", "zzd", b.m(), "zze", "zzf", "zzg"});
            case 4:
                return zzh;
            case 5:
                Bc<E> aVar = zzi;
                if (aVar == null) {
                    synchronized (E.class) {
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

    public final b p() {
        b bVarA = b.a(this.zzd);
        return bVarA == null ? b.UNKNOWN_MATCH_TYPE : bVarA;
    }

    public final boolean q() {
        return (this.zzc & 2) != 0;
    }

    public final String r() {
        return this.zze;
    }

    public final boolean s() {
        return (this.zzc & 4) != 0;
    }

    public final boolean t() {
        return this.zzf;
    }

    public final List<String> u() {
        return this.zzg;
    }

    public final int v() {
        return this.zzg.size();
    }
}
