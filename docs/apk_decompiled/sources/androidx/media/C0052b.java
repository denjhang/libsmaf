package androidx.media;

import android.annotation.TargetApi;
import android.media.AudioAttributes;

/* JADX INFO: renamed from: androidx.media.b, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@TargetApi(21)
class C0052b implements InterfaceC0051a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    AudioAttributes f523a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    int f524b = -1;

    C0052b() {
    }

    public boolean equals(Object obj) {
        if (obj instanceof C0052b) {
            return this.f523a.equals(((C0052b) obj).f523a);
        }
        return false;
    }

    public int hashCode() {
        return this.f523a.hashCode();
    }

    public String toString() {
        return "AudioAttributesCompat: audioattributes=" + this.f523a;
    }
}
