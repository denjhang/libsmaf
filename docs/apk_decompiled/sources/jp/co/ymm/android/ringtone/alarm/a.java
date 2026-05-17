package jp.co.ymm.android.ringtone.alarm;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a implements Parcelable.Creator<AlarmItem> {
    a() {
    }

    @Override // android.os.Parcelable.Creator
    public AlarmItem createFromParcel(Parcel parcel) {
        return new AlarmItem(parcel, null);
    }

    @Override // android.os.Parcelable.Creator
    public AlarmItem[] newArray(int i) {
        return new AlarmItem[i];
    }
}
