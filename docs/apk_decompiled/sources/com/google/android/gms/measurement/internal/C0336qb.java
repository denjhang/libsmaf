package com.google.android.gms.measurement.internal;

import android.os.IBinder;
import android.os.Parcel;
import com.google.android.gms.internal.measurement.C0083a;
import com.google.android.gms.internal.measurement.C0187p;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.qb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0336qb extends C0083a implements InterfaceC0326ob {
    C0336qb(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.measurement.internal.IMeasurementService");
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final List<zzv> a(String str, String str2, zzm zzmVar) {
        Parcel parcelE = e();
        parcelE.writeString(str);
        parcelE.writeString(str2);
        C0187p.a(parcelE, zzmVar);
        Parcel parcelA = a(16, parcelE);
        ArrayList arrayListCreateTypedArrayList = parcelA.createTypedArrayList(zzv.CREATOR);
        parcelA.recycle();
        return arrayListCreateTypedArrayList;
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final List<zzv> a(String str, String str2, String str3) {
        Parcel parcelE = e();
        parcelE.writeString(str);
        parcelE.writeString(str2);
        parcelE.writeString(str3);
        Parcel parcelA = a(17, parcelE);
        ArrayList arrayListCreateTypedArrayList = parcelA.createTypedArrayList(zzv.CREATOR);
        parcelA.recycle();
        return arrayListCreateTypedArrayList;
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final List<zzkj> a(String str, String str2, String str3, boolean z) {
        Parcel parcelE = e();
        parcelE.writeString(str);
        parcelE.writeString(str2);
        parcelE.writeString(str3);
        C0187p.a(parcelE, z);
        Parcel parcelA = a(15, parcelE);
        ArrayList arrayListCreateTypedArrayList = parcelA.createTypedArrayList(zzkj.CREATOR);
        parcelA.recycle();
        return arrayListCreateTypedArrayList;
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final List<zzkj> a(String str, String str2, boolean z, zzm zzmVar) {
        Parcel parcelE = e();
        parcelE.writeString(str);
        parcelE.writeString(str2);
        C0187p.a(parcelE, z);
        C0187p.a(parcelE, zzmVar);
        Parcel parcelA = a(14, parcelE);
        ArrayList arrayListCreateTypedArrayList = parcelA.createTypedArrayList(zzkj.CREATOR);
        parcelA.recycle();
        return arrayListCreateTypedArrayList;
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void a(long j, String str, String str2, String str3) {
        Parcel parcelE = e();
        parcelE.writeLong(j);
        parcelE.writeString(str);
        parcelE.writeString(str2);
        parcelE.writeString(str3);
        b(10, parcelE);
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void a(zzan zzanVar, zzm zzmVar) {
        Parcel parcelE = e();
        C0187p.a(parcelE, zzanVar);
        C0187p.a(parcelE, zzmVar);
        b(1, parcelE);
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void a(zzan zzanVar, String str, String str2) {
        Parcel parcelE = e();
        C0187p.a(parcelE, zzanVar);
        parcelE.writeString(str);
        parcelE.writeString(str2);
        b(5, parcelE);
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void a(zzkj zzkjVar, zzm zzmVar) {
        Parcel parcelE = e();
        C0187p.a(parcelE, zzkjVar);
        C0187p.a(parcelE, zzmVar);
        b(2, parcelE);
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void a(zzm zzmVar) {
        Parcel parcelE = e();
        C0187p.a(parcelE, zzmVar);
        b(18, parcelE);
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void a(zzv zzvVar) {
        Parcel parcelE = e();
        C0187p.a(parcelE, zzvVar);
        b(13, parcelE);
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void a(zzv zzvVar, zzm zzmVar) {
        Parcel parcelE = e();
        C0187p.a(parcelE, zzvVar);
        C0187p.a(parcelE, zzmVar);
        b(12, parcelE);
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final byte[] a(zzan zzanVar, String str) {
        Parcel parcelE = e();
        C0187p.a(parcelE, zzanVar);
        parcelE.writeString(str);
        Parcel parcelA = a(9, parcelE);
        byte[] bArrCreateByteArray = parcelA.createByteArray();
        parcelA.recycle();
        return bArrCreateByteArray;
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void b(zzm zzmVar) {
        Parcel parcelE = e();
        C0187p.a(parcelE, zzmVar);
        b(6, parcelE);
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final String c(zzm zzmVar) {
        Parcel parcelE = e();
        C0187p.a(parcelE, zzmVar);
        Parcel parcelA = a(11, parcelE);
        String string = parcelA.readString();
        parcelA.recycle();
        return string;
    }

    @Override // com.google.android.gms.measurement.internal.InterfaceC0326ob
    public final void d(zzm zzmVar) {
        Parcel parcelE = e();
        C0187p.a(parcelE, zzmVar);
        b(4, parcelE);
    }
}
