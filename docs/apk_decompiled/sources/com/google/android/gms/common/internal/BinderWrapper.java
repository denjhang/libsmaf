package com.google.android.gms.common.internal;

import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.annotation.KeepName;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@KeepName
public final class BinderWrapper implements Parcelable {
    public static final Parcelable.Creator<BinderWrapper> CREATOR = new E();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private IBinder f1190a;

    public BinderWrapper() {
        this.f1190a = null;
    }

    private BinderWrapper(Parcel parcel) {
        this.f1190a = null;
        this.f1190a = parcel.readStrongBinder();
    }

    /* synthetic */ BinderWrapper(Parcel parcel, E e2) {
        this(parcel);
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeStrongBinder(this.f1190a);
    }
}
