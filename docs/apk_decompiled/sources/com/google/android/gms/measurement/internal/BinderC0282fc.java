package com.google.android.gms.measurement.internal;

import android.os.Binder;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.concurrent.ExecutionException;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.fc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class BinderC0282fc extends AbstractBinderC0340rb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ee f2247a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Boolean f2248b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private String f2249c;

    public BinderC0282fc(ee eeVar) {
        this(eeVar, null);
    }

    private BinderC0282fc(ee eeVar, String str) {
        com.google.android.gms.common.internal.r.a(eeVar);
        this.f2247a = eeVar;
        this.f2249c = null;
    }

    private final void a(Runnable runnable) {
        com.google.android.gms.common.internal.r.a(runnable);
        if (this.f2247a.c().t()) {
            runnable.run();
        } else {
            this.f2247a.c().a(runnable);
        }
    }

    private final void a(String str, boolean z) {
        if (TextUtils.isEmpty(str)) {
            this.f2247a.d().t().a("Measurement Service called without app package");
            throw new SecurityException("Measurement Service called without app package");
        }
        if (z) {
            try {
                if (this.f2248b == null) {
                    this.f2248b = Boolean.valueOf("com.google.android.gms".equals(this.f2249c) || com.google.android.gms.common.util.q.a(this.f2247a.e(), Binder.getCallingUid()) || com.google.android.gms.common.h.a(this.f2247a.e()).a(Binder.getCallingUid()));
                }
                if (this.f2248b.booleanValue()) {
                    return;
                }
            } catch (SecurityException e2) {
                this.f2247a.d().t().a("Measurement Service called with invalid calling package. appId", C0365wb.a(str));
                throw e2;
            }
        }
        if (this.f2249c == null && com.google.android.gms.common.g.a(this.f2247a.e(), Binder.getCallingUid(), str)) {
            this.f2249c = str;
        }
        if (str.equals(this.f2249c)) {
        } else {
            throw new SecurityException(String.format("Unknown calling package name '%s'.", str));
        }
    }

    private final void b(zzm zzmVar, boolean z) {
        com.google.android.gms.common.internal.r.a(zzmVar);
        a(zzmVar.f2516a, false);
        this.f2247a.o().c(zzmVar.f2517b, zzmVar.r);
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final List<zzkj> a(zzm zzmVar, boolean z) {
        b(zzmVar, false);
        try {
            List<me> list = (List) this.f2247a.c().a(new CallableC0341rc(this, zzmVar)).get();
            ArrayList arrayList = new ArrayList(list.size());
            for (me meVar : list) {
                if (z || !le.e(meVar.f2341c)) {
                    arrayList.add(new zzkj(meVar));
                }
            }
            return arrayList;
        } catch (InterruptedException | ExecutionException e2) {
            this.f2247a.d().t().a("Failed to get user attributes. appId", C0365wb.a(zzmVar.f2516a), e2);
            return null;
        }
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final List<zzv> a(String str, String str2, zzm zzmVar) {
        b(zzmVar, false);
        try {
            return (List) this.f2247a.c().a(new CallableC0297ic(this, zzmVar, str, str2)).get();
        } catch (InterruptedException | ExecutionException e2) {
            this.f2247a.d().t().a("Failed to get conditional user properties", e2);
            return Collections.emptyList();
        }
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final List<zzv> a(String str, String str2, String str3) {
        a(str, true);
        try {
            return (List) this.f2247a.c().a(new CallableC0312lc(this, str, str2, str3)).get();
        } catch (InterruptedException | ExecutionException e2) {
            this.f2247a.d().t().a("Failed to get conditional user properties", e2);
            return Collections.emptyList();
        }
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final List<zzkj> a(String str, String str2, String str3, boolean z) {
        a(str, true);
        try {
            List<me> list = (List) this.f2247a.c().a(new CallableC0302jc(this, str, str2, str3)).get();
            ArrayList arrayList = new ArrayList(list.size());
            for (me meVar : list) {
                if (z || !le.e(meVar.f2341c)) {
                    arrayList.add(new zzkj(meVar));
                }
            }
            return arrayList;
        } catch (InterruptedException | ExecutionException e2) {
            this.f2247a.d().t().a("Failed to get user attributes. appId", C0365wb.a(str), e2);
            return Collections.emptyList();
        }
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final List<zzkj> a(String str, String str2, boolean z, zzm zzmVar) {
        b(zzmVar, false);
        try {
            List<me> list = (List) this.f2247a.c().a(new CallableC0287gc(this, zzmVar, str, str2)).get();
            ArrayList arrayList = new ArrayList(list.size());
            for (me meVar : list) {
                if (z || !le.e(meVar.f2341c)) {
                    arrayList.add(new zzkj(meVar));
                }
            }
            return arrayList;
        } catch (InterruptedException | ExecutionException e2) {
            this.f2247a.d().t().a("Failed to get user attributes. appId", C0365wb.a(zzmVar.f2516a), e2);
            return Collections.emptyList();
        }
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void a(long j, String str, String str2, String str3) {
        a(new RunnableC0351tc(this, str2, str3, str, j));
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void a(zzan zzanVar, zzm zzmVar) {
        com.google.android.gms.common.internal.r.a(zzanVar);
        b(zzmVar, false);
        a(new RunnableC0322nc(this, zzanVar, zzmVar));
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void a(zzan zzanVar, String str, String str2) {
        com.google.android.gms.common.internal.r.a(zzanVar);
        com.google.android.gms.common.internal.r.b(str);
        a(str, true);
        a(new RunnableC0317mc(this, zzanVar, str));
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void a(zzkj zzkjVar, zzm zzmVar) {
        com.google.android.gms.common.internal.r.a(zzkjVar);
        b(zzmVar, false);
        a(new RunnableC0327oc(this, zzkjVar, zzmVar));
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void a(zzm zzmVar) {
        a(zzmVar.f2516a, false);
        a(new RunnableC0307kc(this, zzmVar));
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void a(zzv zzvVar) {
        com.google.android.gms.common.internal.r.a(zzvVar);
        com.google.android.gms.common.internal.r.a(zzvVar.f2524c);
        a(zzvVar.f2522a, true);
        a(new RunnableC0292hc(this, new zzv(zzvVar)));
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void a(zzv zzvVar, zzm zzmVar) {
        com.google.android.gms.common.internal.r.a(zzvVar);
        com.google.android.gms.common.internal.r.a(zzvVar.f2524c);
        b(zzmVar, false);
        zzv zzvVar2 = new zzv(zzvVar);
        zzvVar2.f2522a = zzmVar.f2516a;
        a(new RunnableC0346sc(this, zzvVar2, zzmVar));
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final byte[] a(zzan zzanVar, String str) {
        com.google.android.gms.common.internal.r.b(str);
        com.google.android.gms.common.internal.r.a(zzanVar);
        a(str, true);
        this.f2247a.d().A().a("Log and bundle. event", this.f2247a.n().a(zzanVar.f2506a));
        long jC = this.f2247a.g().c() / 1000000;
        try {
            byte[] bArr = (byte[]) this.f2247a.c().b(new CallableC0332pc(this, zzanVar, str)).get();
            if (bArr == null) {
                this.f2247a.d().t().a("Log and bundle returned null. appId", C0365wb.a(str));
                bArr = new byte[0];
            }
            this.f2247a.d().A().a("Log and bundle processed. event, size, time_ms", this.f2247a.n().a(zzanVar.f2506a), Integer.valueOf(bArr.length), Long.valueOf((this.f2247a.g().c() / 1000000) - jC));
            return bArr;
        } catch (InterruptedException | ExecutionException e2) {
            this.f2247a.d().t().a("Failed to log and bundle. appId, event, error", C0365wb.a(str), this.f2247a.n().a(zzanVar.f2506a), e2);
            return null;
        }
    }

    final zzan b(zzan zzanVar, zzm zzmVar) {
        zzam zzamVar;
        boolean z = false;
        if ("_cmp".equals(zzanVar.f2506a) && (zzamVar = zzanVar.f2507b) != null && zzamVar.h() != 0) {
            String strE = zzanVar.f2507b.e("_cis");
            if (!TextUtils.isEmpty(strE) && (("referrer broadcast".equals(strE) || "referrer API".equals(strE)) && this.f2247a.b().j(zzmVar.f2516a))) {
                z = true;
            }
        }
        if (!z) {
            return zzanVar;
        }
        this.f2247a.d().z().a("Event has been filtered ", zzanVar.toString());
        return new zzan("_cmpx", zzanVar.f2507b, zzanVar.f2508c, zzanVar.f2509d);
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void b(zzm zzmVar) {
        b(zzmVar, false);
        a(new RunnableC0277ec(this, zzmVar));
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final String c(zzm zzmVar) {
        b(zzmVar, false);
        return this.f2247a.d(zzmVar);
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void d(zzm zzmVar) {
        b(zzmVar, false);
        a(new RunnableC0337qc(this, zzmVar));
    }
}
