package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.J;
import com.google.android.gms.internal.measurement.Jb;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class K extends Jb<K, a> implements InterfaceC0231wc {
    private static final K zzl;
    private static volatile Bc<K> zzm;
    private int zzc;
    private long zzd;
    private int zzf;
    private boolean zzk;
    private String zze = "";
    private Rb<L> zzg = Jb.n();
    private Rb<J> zzh = Jb.n();
    private Rb<C0246z> zzi = Jb.n();
    private String zzj = "";

    public static final class a extends Jb.b<K, a> implements InterfaceC0231wc {
        private a() {
            super(K.zzl);
        }

        /* synthetic */ a(N n) {
            this();
        }

        public final J a(int i) {
            return ((K) this.f1478b).b(i);
        }

        public final a a(int i, J.a aVar) {
            g();
            ((K) this.f1478b).a(i, aVar);
            return this;
        }

        public final int k() {
            return ((K) this.f1478b).t();
        }

        public final List<C0246z> l() {
            return Collections.unmodifiableList(((K) this.f1478b).u());
        }

        public final a m() {
            g();
            ((K) this.f1478b).z();
            return this;
        }
    }

    static {
        K k = new K();
        zzl = k;
        Jb.a((Class<K>) K.class, k);
    }

    private K() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(int i, J.a aVar) {
        if (!this.zzh.h()) {
            this.zzh = Jb.a(this.zzh);
        }
        this.zzh.set(i, (J) aVar.j());
    }

    public static a w() {
        return zzl.i();
    }

    public static K x() {
        return zzl;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void z() {
        this.zzi = Jb.n();
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        N n = null;
        switch (N.f1535a[i - 1]) {
            case 1:
                return new K();
            case 2:
                return new a(n);
            case 3:
                return Jb.a(zzl, "\u0001\b\u0000\u0001\u0001\b\b\u0000\u0003\u0000\u0001\u0002\u0000\u0002\b\u0001\u0003\u0004\u0002\u0004\u001b\u0005\u001b\u0006\u001b\u0007\b\u0003\b\u0007\u0004", new Object[]{"zzc", "zzd", "zze", "zzf", "zzg", L.class, "zzh", J.class, "zzi", C0246z.class, "zzj", "zzk"});
            case 4:
                return zzl;
            case 5:
                Bc<K> aVar = zzm;
                if (aVar == null) {
                    synchronized (K.class) {
                        aVar = zzm;
                        if (aVar == null) {
                            aVar = new Jb.a<>(zzl);
                            zzm = aVar;
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

    public final J b(int i) {
        return this.zzh.get(i);
    }

    public final boolean o() {
        return (this.zzc & 1) != 0;
    }

    public final long p() {
        return this.zzd;
    }

    public final boolean q() {
        return (this.zzc & 2) != 0;
    }

    public final String r() {
        return this.zze;
    }

    public final List<L> s() {
        return this.zzg;
    }

    public final int t() {
        return this.zzh.size();
    }

    public final List<C0246z> u() {
        return this.zzi;
    }

    public final boolean v() {
        return this.zzk;
    }
}
