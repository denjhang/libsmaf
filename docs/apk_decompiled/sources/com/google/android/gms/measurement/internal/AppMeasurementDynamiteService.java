package com.google.android.gms.measurement.internal;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import android.os.RemoteException;
import com.google.android.gms.common.util.DynamiteApi;
import com.google.android.gms.internal.measurement.Ee;
import com.google.android.gms.internal.measurement.Ef;
import com.google.android.gms.internal.measurement.If;
import com.google.android.gms.internal.measurement.Jf;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@DynamiteApi
public class AppMeasurementDynamiteService extends Ee {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    _b f1910a = null;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Map<Integer, Ec> f1911b = new b.b.b();

    class a implements Ac {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private If f1912a;

        a(If r2) {
            this.f1912a = r2;
        }

        @Override // com.google.android.gms.measurement.internal.Ac
        public final void a(String str, String str2, Bundle bundle, long j) {
            try {
                this.f1912a.a(str, str2, bundle, j);
            } catch (RemoteException e2) {
                AppMeasurementDynamiteService.this.f1910a.d().w().a("Event interceptor threw exception", e2);
            }
        }
    }

    class b implements Ec {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private If f1914a;

        b(If r2) {
            this.f1914a = r2;
        }

        @Override // com.google.android.gms.measurement.internal.Ec
        public final void a(String str, String str2, Bundle bundle, long j) {
            try {
                this.f1914a.a(str, str2, bundle, j);
            } catch (RemoteException e2) {
                AppMeasurementDynamiteService.this.f1910a.d().w().a("Event listener threw exception", e2);
            }
        }
    }

    private final void a(Ef ef, String str) {
        this.f1910a.v().a(ef, str);
    }

    private final void h() {
        if (this.f1910a == null) {
            throw new IllegalStateException("Attempting to perform action before initialize.");
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void beginAdUnitExposure(String str, long j) {
        h();
        this.f1910a.H().a(str, j);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void clearConditionalUserProperty(String str, String str2, Bundle bundle) {
        h();
        this.f1910a.u().c(str, str2, bundle);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void endAdUnitExposure(String str, long j) {
        h();
        this.f1910a.H().b(str, j);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void generateEventId(Ef ef) {
        h();
        this.f1910a.v().a(ef, this.f1910a.v().t());
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void getAppInstanceId(Ef ef) {
        h();
        this.f1910a.c().a(new RunnableC0262bd(this, ef));
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void getCachedAppInstanceId(Ef ef) {
        h();
        a(ef, this.f1910a.u().H());
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void getConditionalUserProperties(String str, String str2, Ef ef) {
        h();
        this.f1910a.c().a(new Bd(this, ef, str, str2));
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void getCurrentScreenClass(Ef ef) {
        h();
        a(ef, this.f1910a.u().K());
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void getCurrentScreenName(Ef ef) {
        h();
        a(ef, this.f1910a.u().J());
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void getGmpAppId(Ef ef) {
        h();
        a(ef, this.f1910a.u().L());
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void getMaxUserProperties(String str, Ef ef) {
        h();
        this.f1910a.u();
        com.google.android.gms.common.internal.r.b(str);
        this.f1910a.v().a(ef, 25);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void getTestFlag(Ef ef, int i) {
        h();
        if (i == 0) {
            this.f1910a.v().a(ef, this.f1910a.u().D());
            return;
        }
        if (i == 1) {
            this.f1910a.v().a(ef, this.f1910a.u().E().longValue());
            return;
        }
        if (i != 2) {
            if (i == 3) {
                this.f1910a.v().a(ef, this.f1910a.u().F().intValue());
                return;
            } else {
                if (i != 4) {
                    return;
                }
                this.f1910a.v().a(ef, this.f1910a.u().C().booleanValue());
                return;
            }
        }
        le leVarV = this.f1910a.v();
        double dDoubleValue = this.f1910a.u().G().doubleValue();
        Bundle bundle = new Bundle();
        bundle.putDouble("r", dDoubleValue);
        try {
            ef.b(bundle);
        } catch (RemoteException e2) {
            leVarV.f2438a.d().w().a("Error returning double value to wrapper", e2);
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void getUserProperties(String str, String str2, boolean z, Ef ef) {
        h();
        this.f1910a.c().a(new RunnableC0263be(this, ef, str, str2, z));
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void initForTests(Map map) {
        h();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void initialize(c.a.a.a.c.a aVar, com.google.android.gms.internal.measurement.zzv zzvVar, long j) {
        Context context = (Context) c.a.a.a.c.b.a(aVar);
        _b _bVar = this.f1910a;
        if (_bVar == null) {
            this.f1910a = _b.a(context, zzvVar);
        } else {
            _bVar.d().w().a("Attempting to initialize multiple times");
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void isDataCollectionEnabled(Ef ef) {
        h();
        this.f1910a.c().a(new pe(this, ef));
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void logEvent(String str, String str2, Bundle bundle, boolean z, boolean z2, long j) {
        h();
        this.f1910a.u().a(str, str2, bundle, z, z2, j);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void logEventAndBundle(String str, String str2, Bundle bundle, Ef ef, long j) {
        h();
        com.google.android.gms.common.internal.r.b(str2);
        (bundle != null ? new Bundle(bundle) : new Bundle()).putString("_o", "app");
        this.f1910a.c().a(new Dc(this, ef, new zzan(str2, new zzam(bundle), "app", j), str));
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void logHealthData(int i, String str, c.a.a.a.c.a aVar, c.a.a.a.c.a aVar2, c.a.a.a.c.a aVar3) {
        h();
        this.f1910a.d().a(i, true, false, str, aVar == null ? null : c.a.a.a.c.b.a(aVar), aVar2 == null ? null : c.a.a.a.c.b.a(aVar2), aVar3 != null ? c.a.a.a.c.b.a(aVar3) : null);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void onActivityCreated(c.a.a.a.c.a aVar, Bundle bundle, long j) {
        h();
        Xc xc = this.f1910a.u().f1973c;
        if (xc != null) {
            this.f1910a.u().B();
            xc.onActivityCreated((Activity) c.a.a.a.c.b.a(aVar), bundle);
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void onActivityDestroyed(c.a.a.a.c.a aVar, long j) {
        h();
        Xc xc = this.f1910a.u().f1973c;
        if (xc != null) {
            this.f1910a.u().B();
            xc.onActivityDestroyed((Activity) c.a.a.a.c.b.a(aVar));
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void onActivityPaused(c.a.a.a.c.a aVar, long j) {
        h();
        Xc xc = this.f1910a.u().f1973c;
        if (xc != null) {
            this.f1910a.u().B();
            xc.onActivityPaused((Activity) c.a.a.a.c.b.a(aVar));
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void onActivityResumed(c.a.a.a.c.a aVar, long j) {
        h();
        Xc xc = this.f1910a.u().f1973c;
        if (xc != null) {
            this.f1910a.u().B();
            xc.onActivityResumed((Activity) c.a.a.a.c.b.a(aVar));
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void onActivitySaveInstanceState(c.a.a.a.c.a aVar, Ef ef, long j) {
        h();
        Xc xc = this.f1910a.u().f1973c;
        Bundle bundle = new Bundle();
        if (xc != null) {
            this.f1910a.u().B();
            xc.onActivitySaveInstanceState((Activity) c.a.a.a.c.b.a(aVar), bundle);
        }
        try {
            ef.b(bundle);
        } catch (RemoteException e2) {
            this.f1910a.d().w().a("Error returning bundle value to wrapper", e2);
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void onActivityStarted(c.a.a.a.c.a aVar, long j) {
        h();
        Xc xc = this.f1910a.u().f1973c;
        if (xc != null) {
            this.f1910a.u().B();
            xc.onActivityStarted((Activity) c.a.a.a.c.b.a(aVar));
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void onActivityStopped(c.a.a.a.c.a aVar, long j) {
        h();
        Xc xc = this.f1910a.u().f1973c;
        if (xc != null) {
            this.f1910a.u().B();
            xc.onActivityStopped((Activity) c.a.a.a.c.b.a(aVar));
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void performAction(Bundle bundle, Ef ef, long j) {
        h();
        ef.b(null);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void registerOnMeasurementEventListener(If r3) {
        h();
        Ec bVar = this.f1911b.get(Integer.valueOf(r3.h()));
        if (bVar == null) {
            bVar = new b(r3);
            this.f1911b.put(Integer.valueOf(r3.h()), bVar);
        }
        this.f1910a.u().a(bVar);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void resetAnalyticsData(long j) {
        h();
        this.f1910a.u().c(j);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void setConditionalUserProperty(Bundle bundle, long j) {
        h();
        if (bundle == null) {
            this.f1910a.d().t().a("Conditional user property must not be null");
        } else {
            this.f1910a.u().a(bundle, j);
        }
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void setCurrentScreen(c.a.a.a.c.a aVar, String str, String str2, long j) {
        h();
        this.f1910a.D().a((Activity) c.a.a.a.c.b.a(aVar), str, str2);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void setDataCollectionEnabled(boolean z) {
        h();
        this.f1910a.u().b(z);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void setEventInterceptor(If r4) {
        h();
        Gc gcU = this.f1910a.u();
        a aVar = new a(r4);
        gcU.a();
        gcU.x();
        gcU.c().a(new Mc(gcU, aVar));
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void setInstanceIdProvider(Jf jf) {
        h();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void setMeasurementEnabled(boolean z, long j) {
        h();
        this.f1910a.u().a(z);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void setMinimumSessionDuration(long j) {
        h();
        this.f1910a.u().a(j);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void setSessionTimeoutDuration(long j) {
        h();
        this.f1910a.u().b(j);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void setUserId(String str, long j) {
        h();
        this.f1910a.u().a(null, "_id", str, true, j);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void setUserProperty(String str, String str2, c.a.a.a.c.a aVar, boolean z, long j) {
        h();
        this.f1910a.u().a(str, str2, c.a.a.a.c.b.a(aVar), z, j);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public void unregisterOnMeasurementEventListener(If r3) {
        h();
        Ec ecRemove = this.f1911b.remove(Integer.valueOf(r3.h()));
        if (ecRemove == null) {
            ecRemove = new b(r3);
        }
        this.f1910a.u().b(ecRemove);
    }
}
