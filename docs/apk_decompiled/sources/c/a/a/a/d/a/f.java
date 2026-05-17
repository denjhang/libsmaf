package c.a.a.a.d.a;

import android.os.IBinder;
import android.os.Parcel;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class f extends a implements d {
    f(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
    }

    @Override // c.a.a.a.d.a.d
    public final boolean a(boolean z) {
        Parcel parcelE = e();
        c.a(parcelE, true);
        Parcel parcelA = a(2, parcelE);
        boolean zA = c.a(parcelA);
        parcelA.recycle();
        return zA;
    }

    @Override // c.a.a.a.d.a.d
    public final String getId() {
        Parcel parcelA = a(1, e());
        String string = parcelA.readString();
        parcelA.recycle();
        return string;
    }
}
