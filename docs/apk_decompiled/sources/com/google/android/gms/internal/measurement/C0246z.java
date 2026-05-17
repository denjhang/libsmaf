package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.A;
import com.google.android.gms.internal.measurement.D;
import com.google.android.gms.internal.measurement.Jb;
import java.util.List;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.z, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0246z extends Jb<C0246z, a> implements InterfaceC0231wc {
    private static final C0246z zzi;
    private static volatile Bc<C0246z> zzj;
    private int zzc;
    private int zzd;
    private Rb<D> zze = Jb.n();
    private Rb<A> zzf = Jb.n();
    private boolean zzg;
    private boolean zzh;

    /* JADX INFO: renamed from: com.google.android.gms.internal.measurement.z$a */
    public static final class a extends Jb.b<C0246z, a> implements InterfaceC0231wc {
        private a() {
            super(C0246z.zzi);
        }

        /* synthetic */ a(F f2) {
            this();
        }

        public final D a(int i) {
            return ((C0246z) this.f1478b).b(i);
        }

        public final a a(int i, A.a aVar) {
            g();
            ((C0246z) this.f1478b).a(i, aVar);
            return this;
        }

        public final a a(int i, D.a aVar) {
            g();
            ((C0246z) this.f1478b).a(i, aVar);
            return this;
        }

        public final A b(int i) {
            return ((C0246z) this.f1478b).c(i);
        }

        public final int k() {
            return ((C0246z) this.f1478b).r();
        }

        public final int l() {
            return ((C0246z) this.f1478b).t();
        }
    }

    static {
        C0246z c0246z = new C0246z();
        zzi = c0246z;
        Jb.a((Class<C0246z>) C0246z.class, c0246z);
    }

    private C0246z() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(int i, A.a aVar) {
        if (!this.zzf.h()) {
            this.zzf = Jb.a(this.zzf);
        }
        this.zzf.set(i, (A) aVar.j());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(int i, D.a aVar) {
        if (!this.zze.h()) {
            this.zze = Jb.a(this.zze);
        }
        this.zze.set(i, (D) aVar.j());
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        F f2 = null;
        switch (F.f1451a[i - 1]) {
            case 1:
                return new C0246z();
            case 2:
                return new a(f2);
            case 3:
                return Jb.a(zzi, "\u0001\u0005\u0000\u0001\u0001\u0005\u0005\u0000\u0002\u0000\u0001\u0004\u0000\u0002\u001b\u0003\u001b\u0004\u0007\u0001\u0005\u0007\u0002", new Object[]{"zzc", "zzd", "zze", D.class, "zzf", A.class, "zzg", "zzh"});
            case 4:
                return zzi;
            case 5:
                Bc<C0246z> aVar = zzj;
                if (aVar == null) {
                    synchronized (C0246z.class) {
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

    public final D b(int i) {
        return this.zze.get(i);
    }

    public final A c(int i) {
        return this.zzf.get(i);
    }

    public final boolean o() {
        return (this.zzc & 1) != 0;
    }

    public final int p() {
        return this.zzd;
    }

    public final List<D> q() {
        return this.zze;
    }

    public final int r() {
        return this.zze.size();
    }

    public final List<A> s() {
        return this.zzf;
    }

    public final int t() {
        return this.zzf.size();
    }
}
