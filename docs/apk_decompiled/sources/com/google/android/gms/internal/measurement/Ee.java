package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import c.a.a.a.c.a;
import org.apache.http.conn.params.ConnManagerParams;
import org.apache.http.protocol.HTTP;
import org.apache.http.util.LangUtils;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class Ee extends BinderC0140ia implements InterfaceC0117ef {
    public Ee() {
        super("com.google.android.gms.measurement.api.internal.IAppMeasurementDynamiteService");
    }

    public static InterfaceC0117ef asInterface(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.measurement.api.internal.IAppMeasurementDynamiteService");
        return iInterfaceQueryLocalInterface instanceof InterfaceC0117ef ? (InterfaceC0117ef) iInterfaceQueryLocalInterface : new Ff(iBinder);
    }

    @Override // com.google.android.gms.internal.measurement.BinderC0140ia
    protected final boolean a(int i, Parcel parcel, Parcel parcel2, int i2) {
        Ef gf;
        Ef gf2 = null;
        Ef gf3 = null;
        Ef gf4 = null;
        If kf = null;
        If kf2 = null;
        If kf3 = null;
        Ef gf5 = null;
        Ef gf6 = null;
        Ef gf7 = null;
        Ef gf8 = null;
        Ef gf9 = null;
        Ef gf10 = null;
        Jf lf = null;
        Ef gf11 = null;
        Ef gf12 = null;
        Ef gf13 = null;
        Ef gf14 = null;
        switch (i) {
            case 1:
                initialize(a.AbstractBinderC0017a.a(parcel.readStrongBinder()), (zzv) C0187p.a(parcel, zzv.CREATOR), parcel.readLong());
                break;
            case 2:
                logEvent(parcel.readString(), parcel.readString(), (Bundle) C0187p.a(parcel, Bundle.CREATOR), C0187p.a(parcel), C0187p.a(parcel), parcel.readLong());
                break;
            case 3:
                String string = parcel.readString();
                String string2 = parcel.readString();
                Bundle bundle = (Bundle) C0187p.a(parcel, Bundle.CREATOR);
                IBinder strongBinder = parcel.readStrongBinder();
                if (strongBinder == null) {
                    gf = null;
                } else {
                    IInterface iInterfaceQueryLocalInterface = strongBinder.queryLocalInterface("com.google.android.gms.measurement.api.internal.IBundleReceiver");
                    gf = iInterfaceQueryLocalInterface instanceof Ef ? (Ef) iInterfaceQueryLocalInterface : new Gf(strongBinder);
                }
                logEventAndBundle(string, string2, bundle, gf, parcel.readLong());
                break;
            case 4:
                setUserProperty(parcel.readString(), parcel.readString(), a.AbstractBinderC0017a.a(parcel.readStrongBinder()), C0187p.a(parcel), parcel.readLong());
                break;
            case 5:
                String string3 = parcel.readString();
                String string4 = parcel.readString();
                boolean zA = C0187p.a(parcel);
                IBinder strongBinder2 = parcel.readStrongBinder();
                if (strongBinder2 != null) {
                    IInterface iInterfaceQueryLocalInterface2 = strongBinder2.queryLocalInterface("com.google.android.gms.measurement.api.internal.IBundleReceiver");
                    gf2 = iInterfaceQueryLocalInterface2 instanceof Ef ? (Ef) iInterfaceQueryLocalInterface2 : new Gf(strongBinder2);
                }
                getUserProperties(string3, string4, zA, gf2);
                break;
            case 6:
                String string5 = parcel.readString();
                IBinder strongBinder3 = parcel.readStrongBinder();
                if (strongBinder3 != null) {
                    IInterface iInterfaceQueryLocalInterface3 = strongBinder3.queryLocalInterface("com.google.android.gms.measurement.api.internal.IBundleReceiver");
                    gf14 = iInterfaceQueryLocalInterface3 instanceof Ef ? (Ef) iInterfaceQueryLocalInterface3 : new Gf(strongBinder3);
                }
                getMaxUserProperties(string5, gf14);
                break;
            case 7:
                setUserId(parcel.readString(), parcel.readLong());
                break;
            case 8:
                setConditionalUserProperty((Bundle) C0187p.a(parcel, Bundle.CREATOR), parcel.readLong());
                break;
            case 9:
                clearConditionalUserProperty(parcel.readString(), parcel.readString(), (Bundle) C0187p.a(parcel, Bundle.CREATOR));
                break;
            case 10:
                String string6 = parcel.readString();
                String string7 = parcel.readString();
                IBinder strongBinder4 = parcel.readStrongBinder();
                if (strongBinder4 != null) {
                    IInterface iInterfaceQueryLocalInterface4 = strongBinder4.queryLocalInterface("com.google.android.gms.measurement.api.internal.IBundleReceiver");
                    gf13 = iInterfaceQueryLocalInterface4 instanceof Ef ? (Ef) iInterfaceQueryLocalInterface4 : new Gf(strongBinder4);
                }
                getConditionalUserProperties(string6, string7, gf13);
                break;
            case 11:
                setMeasurementEnabled(C0187p.a(parcel), parcel.readLong());
                break;
            case 12:
                resetAnalyticsData(parcel.readLong());
                break;
            case HTTP.CR /* 13 */:
                setMinimumSessionDuration(parcel.readLong());
                break;
            case 14:
                setSessionTimeoutDuration(parcel.readLong());
                break;
            case 15:
                setCurrentScreen(a.AbstractBinderC0017a.a(parcel.readStrongBinder()), parcel.readString(), parcel.readString(), parcel.readLong());
                break;
            case 16:
                IBinder strongBinder5 = parcel.readStrongBinder();
                if (strongBinder5 != null) {
                    IInterface iInterfaceQueryLocalInterface5 = strongBinder5.queryLocalInterface("com.google.android.gms.measurement.api.internal.IBundleReceiver");
                    gf12 = iInterfaceQueryLocalInterface5 instanceof Ef ? (Ef) iInterfaceQueryLocalInterface5 : new Gf(strongBinder5);
                }
                getCurrentScreenName(gf12);
                break;
            case LangUtils.HASH_SEED /* 17 */:
                IBinder strongBinder6 = parcel.readStrongBinder();
                if (strongBinder6 != null) {
                    IInterface iInterfaceQueryLocalInterface6 = strongBinder6.queryLocalInterface("com.google.android.gms.measurement.api.internal.IBundleReceiver");
                    gf11 = iInterfaceQueryLocalInterface6 instanceof Ef ? (Ef) iInterfaceQueryLocalInterface6 : new Gf(strongBinder6);
                }
                getCurrentScreenClass(gf11);
                break;
            case 18:
                IBinder strongBinder7 = parcel.readStrongBinder();
                if (strongBinder7 != null) {
                    IInterface iInterfaceQueryLocalInterface7 = strongBinder7.queryLocalInterface("com.google.android.gms.measurement.api.internal.IStringProvider");
                    lf = iInterfaceQueryLocalInterface7 instanceof Jf ? (Jf) iInterfaceQueryLocalInterface7 : new Lf(strongBinder7);
                }
                setInstanceIdProvider(lf);
                break;
            case 19:
                IBinder strongBinder8 = parcel.readStrongBinder();
                if (strongBinder8 != null) {
                    IInterface iInterfaceQueryLocalInterface8 = strongBinder8.queryLocalInterface("com.google.android.gms.measurement.api.internal.IBundleReceiver");
                    gf10 = iInterfaceQueryLocalInterface8 instanceof Ef ? (Ef) iInterfaceQueryLocalInterface8 : new Gf(strongBinder8);
                }
                getCachedAppInstanceId(gf10);
                break;
            case ConnManagerParams.DEFAULT_MAX_TOTAL_CONNECTIONS /* 20 */:
                IBinder strongBinder9 = parcel.readStrongBinder();
                if (strongBinder9 != null) {
                    IInterface iInterfaceQueryLocalInterface9 = strongBinder9.queryLocalInterface("com.google.android.gms.measurement.api.internal.IBundleReceiver");
                    gf9 = iInterfaceQueryLocalInterface9 instanceof Ef ? (Ef) iInterfaceQueryLocalInterface9 : new Gf(strongBinder9);
                }
                getAppInstanceId(gf9);
                break;
            case 21:
                IBinder strongBinder10 = parcel.readStrongBinder();
                if (strongBinder10 != null) {
                    IInterface iInterfaceQueryLocalInterface10 = strongBinder10.queryLocalInterface("com.google.android.gms.measurement.api.internal.IBundleReceiver");
                    gf8 = iInterfaceQueryLocalInterface10 instanceof Ef ? (Ef) iInterfaceQueryLocalInterface10 : new Gf(strongBinder10);
                }
                getGmpAppId(gf8);
                break;
            case 22:
                IBinder strongBinder11 = parcel.readStrongBinder();
                if (strongBinder11 != null) {
                    IInterface iInterfaceQueryLocalInterface11 = strongBinder11.queryLocalInterface("com.google.android.gms.measurement.api.internal.IBundleReceiver");
                    gf7 = iInterfaceQueryLocalInterface11 instanceof Ef ? (Ef) iInterfaceQueryLocalInterface11 : new Gf(strongBinder11);
                }
                generateEventId(gf7);
                break;
            case 23:
                beginAdUnitExposure(parcel.readString(), parcel.readLong());
                break;
            case 24:
                endAdUnitExposure(parcel.readString(), parcel.readLong());
                break;
            case 25:
                onActivityStarted(a.AbstractBinderC0017a.a(parcel.readStrongBinder()), parcel.readLong());
                break;
            case 26:
                onActivityStopped(a.AbstractBinderC0017a.a(parcel.readStrongBinder()), parcel.readLong());
                break;
            case 27:
                onActivityCreated(a.AbstractBinderC0017a.a(parcel.readStrongBinder()), (Bundle) C0187p.a(parcel, Bundle.CREATOR), parcel.readLong());
                break;
            case 28:
                onActivityDestroyed(a.AbstractBinderC0017a.a(parcel.readStrongBinder()), parcel.readLong());
                break;
            case 29:
                onActivityPaused(a.AbstractBinderC0017a.a(parcel.readStrongBinder()), parcel.readLong());
                break;
            case 30:
                onActivityResumed(a.AbstractBinderC0017a.a(parcel.readStrongBinder()), parcel.readLong());
                break;
            case 31:
                c.a.a.a.c.a aVarA = a.AbstractBinderC0017a.a(parcel.readStrongBinder());
                IBinder strongBinder12 = parcel.readStrongBinder();
                if (strongBinder12 != null) {
                    IInterface iInterfaceQueryLocalInterface12 = strongBinder12.queryLocalInterface("com.google.android.gms.measurement.api.internal.IBundleReceiver");
                    gf6 = iInterfaceQueryLocalInterface12 instanceof Ef ? (Ef) iInterfaceQueryLocalInterface12 : new Gf(strongBinder12);
                }
                onActivitySaveInstanceState(aVarA, gf6, parcel.readLong());
                break;
            case HTTP.SP /* 32 */:
                Bundle bundle2 = (Bundle) C0187p.a(parcel, Bundle.CREATOR);
                IBinder strongBinder13 = parcel.readStrongBinder();
                if (strongBinder13 != null) {
                    IInterface iInterfaceQueryLocalInterface13 = strongBinder13.queryLocalInterface("com.google.android.gms.measurement.api.internal.IBundleReceiver");
                    gf5 = iInterfaceQueryLocalInterface13 instanceof Ef ? (Ef) iInterfaceQueryLocalInterface13 : new Gf(strongBinder13);
                }
                performAction(bundle2, gf5, parcel.readLong());
                break;
            case 33:
                logHealthData(parcel.readInt(), parcel.readString(), a.AbstractBinderC0017a.a(parcel.readStrongBinder()), a.AbstractBinderC0017a.a(parcel.readStrongBinder()), a.AbstractBinderC0017a.a(parcel.readStrongBinder()));
                break;
            case 34:
                IBinder strongBinder14 = parcel.readStrongBinder();
                if (strongBinder14 != null) {
                    IInterface iInterfaceQueryLocalInterface14 = strongBinder14.queryLocalInterface("com.google.android.gms.measurement.api.internal.IEventHandlerProxy");
                    kf3 = iInterfaceQueryLocalInterface14 instanceof If ? (If) iInterfaceQueryLocalInterface14 : new Kf(strongBinder14);
                }
                setEventInterceptor(kf3);
                break;
            case 35:
                IBinder strongBinder15 = parcel.readStrongBinder();
                if (strongBinder15 != null) {
                    IInterface iInterfaceQueryLocalInterface15 = strongBinder15.queryLocalInterface("com.google.android.gms.measurement.api.internal.IEventHandlerProxy");
                    kf2 = iInterfaceQueryLocalInterface15 instanceof If ? (If) iInterfaceQueryLocalInterface15 : new Kf(strongBinder15);
                }
                registerOnMeasurementEventListener(kf2);
                break;
            case 36:
                IBinder strongBinder16 = parcel.readStrongBinder();
                if (strongBinder16 != null) {
                    IInterface iInterfaceQueryLocalInterface16 = strongBinder16.queryLocalInterface("com.google.android.gms.measurement.api.internal.IEventHandlerProxy");
                    kf = iInterfaceQueryLocalInterface16 instanceof If ? (If) iInterfaceQueryLocalInterface16 : new Kf(strongBinder16);
                }
                unregisterOnMeasurementEventListener(kf);
                break;
            case LangUtils.HASH_OFFSET /* 37 */:
                initForTests(C0187p.b(parcel));
                break;
            case 38:
                IBinder strongBinder17 = parcel.readStrongBinder();
                if (strongBinder17 != null) {
                    IInterface iInterfaceQueryLocalInterface17 = strongBinder17.queryLocalInterface("com.google.android.gms.measurement.api.internal.IBundleReceiver");
                    gf4 = iInterfaceQueryLocalInterface17 instanceof Ef ? (Ef) iInterfaceQueryLocalInterface17 : new Gf(strongBinder17);
                }
                getTestFlag(gf4, parcel.readInt());
                break;
            case 39:
                setDataCollectionEnabled(C0187p.a(parcel));
                break;
            case 40:
                IBinder strongBinder18 = parcel.readStrongBinder();
                if (strongBinder18 != null) {
                    IInterface iInterfaceQueryLocalInterface18 = strongBinder18.queryLocalInterface("com.google.android.gms.measurement.api.internal.IBundleReceiver");
                    gf3 = iInterfaceQueryLocalInterface18 instanceof Ef ? (Ef) iInterfaceQueryLocalInterface18 : new Gf(strongBinder18);
                }
                isDataCollectionEnabled(gf3);
                break;
            default:
                return false;
        }
        parcel2.writeNoException();
        return true;
    }
}
