package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class A extends Jb<A, a> implements InterfaceC0231wc {
    private static final A zzl;
    private static volatile Bc<A> zzm;
    private int zzc;
    private int zzd;
    private String zze = "";
    private Rb<B> zzf = Jb.n();
    private boolean zzg;
    private C zzh;
    private boolean zzi;
    private boolean zzj;
    private boolean zzk;

    public static final class a extends Jb.b<A, a> implements InterfaceC0231wc {
        private a() {
            super(A.zzl);
        }

        /* synthetic */ a(F f2) {
            this();
        }

        public final a a(int i, B b2) {
            g();
            ((A) this.f1478b).a(i, b2);
            return this;
        }

        public final a a(String str) {
            g();
            ((A) this.f1478b).a(str);
            return this;
        }

        public final B a(int i) {
            return ((A) this.f1478b).b(i);
        }

        public final String k() {
            return ((A) this.f1478b).q();
        }

        public final int l() {
            return ((A) this.f1478b).s();
        }
    }

    static {
        A a2 = new A();
        zzl = a2;
        Jb.a((Class<A>) A.class, a2);
    }

    private A() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(int i, B b2) {
        if (b2 == null) {
            throw new NullPointerException();
        }
        if (!this.zzf.h()) {
            this.zzf = Jb.a(this.zzf);
        }
        this.zzf.set(i, b2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(String str) {
        if (str == null) {
            throw new NullPointerException();
        }
        this.zzc |= 2;
        this.zze = str;
    }

    public static a z() {
        return zzl.i();
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        F f2 = null;
        switch (F.f1451a[i - 1]) {
            case 1:
                return new A();
            case 2:
                return new a(f2);
            case 3:
                return Jb.a(zzl, "\u0001\b\u0000\u0001\u0001\b\b\u0000\u0001\u0000\u0001\u0004\u0000\u0002\b\u0001\u0003\u001b\u0004\u0007\u0002\u0005\t\u0003\u0006\u0007\u0004\u0007\u0007\u0005\b\u0007\u0006", new Object[]{"zzc", "zzd", "zze", "zzf", B.class, "zzg", "zzh", "zzi", "zzj", "zzk"});
            case 4:
                return zzl;
            case 5:
                Bc<A> aVar = zzm;
                if (aVar == null) {
                    synchronized (A.class) {
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

    public final B b(int i) {
        return this.zzf.get(i);
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

    public final List<B> r() {
        return this.zzf;
    }

    public final int s() {
        return this.zzf.size();
    }

    public final boolean t() {
        return (this.zzc & 8) != 0;
    }

    public final C u() {
        C c2 = this.zzh;
        return c2 == null ? C.y() : c2;
    }

    public final boolean v() {
        return this.zzi;
    }

    public final boolean w() {
        return this.zzj;
    }

    public final boolean x() {
        return (this.zzc & 64) != 0;
    }

    public final boolean y() {
        return this.zzk;
    }
}
