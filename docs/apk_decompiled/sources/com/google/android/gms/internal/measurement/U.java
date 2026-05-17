package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;
import com.google.android.gms.internal.measurement.V;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class U extends Jb<U, a> implements InterfaceC0231wc {
    private static final U zzd;
    private static volatile Bc<U> zze;
    private Rb<V> zzc = Jb.n();

    public static final class a extends Jb.b<U, a> implements InterfaceC0231wc {
        private a() {
            super(U.zzd);
        }

        /* synthetic */ a(C0084aa c0084aa) {
            this();
        }

        public final a a(V.a aVar) {
            g();
            ((U) this.f1478b).a(aVar);
            return this;
        }

        public final V a(int i) {
            return ((U) this.f1478b).b(0);
        }
    }

    static {
        U u = new U();
        zzd = u;
        Jb.a((Class<U>) U.class, u);
    }

    private U() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void a(V.a aVar) {
        if (!this.zzc.h()) {
            this.zzc = Jb.a(this.zzc);
        }
        this.zzc.add((V) aVar.j());
    }

    public static a p() {
        return zzd.i();
    }

    @Override // com.google.android.gms.internal.measurement.Jb
    protected final Object a(int i, Object obj, Object obj2) {
        C0084aa c0084aa = null;
        switch (C0084aa.f1628a[i - 1]) {
            case 1:
                return new U();
            case 2:
                return new a(c0084aa);
            case 3:
                return Jb.a(zzd, "\u0001\u0001\u0000\u0000\u0001\u0001\u0001\u0000\u0001\u0000\u0001\u001b", new Object[]{"zzc", V.class});
            case 4:
                return zzd;
            case 5:
                Bc<U> aVar = zze;
                if (aVar == null) {
                    synchronized (U.class) {
                        aVar = zze;
                        if (aVar == null) {
                            aVar = new Jb.a<>(zzd);
                            zze = aVar;
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

    public final V b(int i) {
        return this.zzc.get(0);
    }

    public final List<V> o() {
        return this.zzc;
    }
}
