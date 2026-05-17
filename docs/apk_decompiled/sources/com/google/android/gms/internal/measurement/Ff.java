package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Ff extends C0083a implements InterfaceC0117ef {
    Ff(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.measurement.api.internal.IAppMeasurementDynamiteService");
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void beginAdUnitExposure(String str, long j) {
        Parcel parcelE = e();
        parcelE.writeString(str);
        parcelE.writeLong(j);
        b(23, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void clearConditionalUserProperty(String str, String str2, Bundle bundle) {
        Parcel parcelE = e();
        parcelE.writeString(str);
        parcelE.writeString(str2);
        C0187p.a(parcelE, bundle);
        b(9, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void endAdUnitExposure(String str, long j) {
        Parcel parcelE = e();
        parcelE.writeString(str);
        parcelE.writeLong(j);
        b(24, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void generateEventId(Ef ef) {
        Parcel parcelE = e();
        C0187p.a(parcelE, ef);
        b(22, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void getCachedAppInstanceId(Ef ef) {
        Parcel parcelE = e();
        C0187p.a(parcelE, ef);
        b(19, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void getConditionalUserProperties(String str, String str2, Ef ef) {
        Parcel parcelE = e();
        parcelE.writeString(str);
        parcelE.writeString(str2);
        C0187p.a(parcelE, ef);
        b(10, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void getCurrentScreenClass(Ef ef) {
        Parcel parcelE = e();
        C0187p.a(parcelE, ef);
        b(17, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void getCurrentScreenName(Ef ef) {
        Parcel parcelE = e();
        C0187p.a(parcelE, ef);
        b(16, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void getGmpAppId(Ef ef) {
        Parcel parcelE = e();
        C0187p.a(parcelE, ef);
        b(21, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void getMaxUserProperties(String str, Ef ef) {
        Parcel parcelE = e();
        parcelE.writeString(str);
        C0187p.a(parcelE, ef);
        b(6, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void getUserProperties(String str, String str2, boolean z, Ef ef) {
        Parcel parcelE = e();
        parcelE.writeString(str);
        parcelE.writeString(str2);
        C0187p.a(parcelE, z);
        C0187p.a(parcelE, ef);
        b(5, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void initialize(c.a.a.a.c.a aVar, zzv zzvVar, long j) {
        Parcel parcelE = e();
        C0187p.a(parcelE, aVar);
        C0187p.a(parcelE, zzvVar);
        parcelE.writeLong(j);
        b(1, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void logEvent(String str, String str2, Bundle bundle, boolean z, boolean z2, long j) {
        Parcel parcelE = e();
        parcelE.writeString(str);
        parcelE.writeString(str2);
        C0187p.a(parcelE, bundle);
        C0187p.a(parcelE, z);
        C0187p.a(parcelE, z2);
        parcelE.writeLong(j);
        b(2, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void logHealthData(int i, String str, c.a.a.a.c.a aVar, c.a.a.a.c.a aVar2, c.a.a.a.c.a aVar3) {
        Parcel parcelE = e();
        parcelE.writeInt(i);
        parcelE.writeString(str);
        C0187p.a(parcelE, aVar);
        C0187p.a(parcelE, aVar2);
        C0187p.a(parcelE, aVar3);
        b(33, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void onActivityCreated(c.a.a.a.c.a aVar, Bundle bundle, long j) {
        Parcel parcelE = e();
        C0187p.a(parcelE, aVar);
        C0187p.a(parcelE, bundle);
        parcelE.writeLong(j);
        b(27, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void onActivityDestroyed(c.a.a.a.c.a aVar, long j) {
        Parcel parcelE = e();
        C0187p.a(parcelE, aVar);
        parcelE.writeLong(j);
        b(28, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void onActivityPaused(c.a.a.a.c.a aVar, long j) {
        Parcel parcelE = e();
        C0187p.a(parcelE, aVar);
        parcelE.writeLong(j);
        b(29, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void onActivityResumed(c.a.a.a.c.a aVar, long j) {
        Parcel parcelE = e();
        C0187p.a(parcelE, aVar);
        parcelE.writeLong(j);
        b(30, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void onActivitySaveInstanceState(c.a.a.a.c.a aVar, Ef ef, long j) {
        Parcel parcelE = e();
        C0187p.a(parcelE, aVar);
        C0187p.a(parcelE, ef);
        parcelE.writeLong(j);
        b(31, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void onActivityStarted(c.a.a.a.c.a aVar, long j) {
        Parcel parcelE = e();
        C0187p.a(parcelE, aVar);
        parcelE.writeLong(j);
        b(25, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void onActivityStopped(c.a.a.a.c.a aVar, long j) {
        Parcel parcelE = e();
        C0187p.a(parcelE, aVar);
        parcelE.writeLong(j);
        b(26, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void setConditionalUserProperty(Bundle bundle, long j) {
        Parcel parcelE = e();
        C0187p.a(parcelE, bundle);
        parcelE.writeLong(j);
        b(8, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void setCurrentScreen(c.a.a.a.c.a aVar, String str, String str2, long j) {
        Parcel parcelE = e();
        C0187p.a(parcelE, aVar);
        parcelE.writeString(str);
        parcelE.writeString(str2);
        parcelE.writeLong(j);
        b(15, parcelE);
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0117ef
    public final void setDataCollectionEnabled(boolean z) {
        Parcel parcelE = e();
        C0187p.a(parcelE, z);
        b(39, parcelE);
    }
}
