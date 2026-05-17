package com.google.android.gms.measurement.internal;

import android.os.Parcel;
import com.google.android.gms.internal.measurement.BinderC0140ia;
import com.google.android.gms.internal.measurement.C0187p;
import java.util.Collection;
import org.apache.http.protocol.HTTP;
import org.apache.http.util.LangUtils;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.rb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class AbstractBinderC0340rb extends BinderC0140ia implements InterfaceC0326ob {
    public AbstractBinderC0340rb() {
        super("com.google.android.gms.measurement.internal.IMeasurementService");
    }

    @Override // com.google.android.gms.internal.measurement.BinderC0140ia
    protected final boolean a(int i, Parcel parcel, Parcel parcel2, int i2) {
        Collection collectionA;
        switch (i) {
            case 1:
                a((zzan) C0187p.a(parcel, zzan.CREATOR), (zzm) C0187p.a(parcel, zzm.CREATOR));
                parcel2.writeNoException();
                return true;
            case 2:
                a((zzkj) C0187p.a(parcel, zzkj.CREATOR), (zzm) C0187p.a(parcel, zzm.CREATOR));
                parcel2.writeNoException();
                return true;
            case 3:
            case 8:
            default:
                return false;
            case 4:
                d((zzm) C0187p.a(parcel, zzm.CREATOR));
                parcel2.writeNoException();
                return true;
            case 5:
                a((zzan) C0187p.a(parcel, zzan.CREATOR), parcel.readString(), parcel.readString());
                parcel2.writeNoException();
                return true;
            case 6:
                b((zzm) C0187p.a(parcel, zzm.CREATOR));
                parcel2.writeNoException();
                return true;
            case 7:
                collectionA = a((zzm) C0187p.a(parcel, zzm.CREATOR), C0187p.a(parcel));
                parcel2.writeNoException();
                parcel2.writeTypedList(collectionA);
                return true;
            case 9:
                byte[] bArrA = a((zzan) C0187p.a(parcel, zzan.CREATOR), parcel.readString());
                parcel2.writeNoException();
                parcel2.writeByteArray(bArrA);
                return true;
            case 10:
                a(parcel.readLong(), parcel.readString(), parcel.readString(), parcel.readString());
                parcel2.writeNoException();
                return true;
            case 11:
                String strC = c((zzm) C0187p.a(parcel, zzm.CREATOR));
                parcel2.writeNoException();
                parcel2.writeString(strC);
                return true;
            case 12:
                a((zzv) C0187p.a(parcel, zzv.CREATOR), (zzm) C0187p.a(parcel, zzm.CREATOR));
                parcel2.writeNoException();
                return true;
            case HTTP.CR /* 13 */:
                a((zzv) C0187p.a(parcel, zzv.CREATOR));
                parcel2.writeNoException();
                return true;
            case 14:
                collectionA = a(parcel.readString(), parcel.readString(), C0187p.a(parcel), (zzm) C0187p.a(parcel, zzm.CREATOR));
                parcel2.writeNoException();
                parcel2.writeTypedList(collectionA);
                return true;
            case 15:
                collectionA = a(parcel.readString(), parcel.readString(), parcel.readString(), C0187p.a(parcel));
                parcel2.writeNoException();
                parcel2.writeTypedList(collectionA);
                return true;
            case 16:
                collectionA = a(parcel.readString(), parcel.readString(), (zzm) C0187p.a(parcel, zzm.CREATOR));
                parcel2.writeNoException();
                parcel2.writeTypedList(collectionA);
                return true;
            case LangUtils.HASH_SEED /* 17 */:
                collectionA = a(parcel.readString(), parcel.readString(), parcel.readString());
                parcel2.writeNoException();
                parcel2.writeTypedList(collectionA);
                return true;
            case 18:
                a((zzm) C0187p.a(parcel, zzm.CREATOR));
                parcel2.writeNoException();
                return true;
        }
    }
}
