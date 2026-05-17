package jp.co.ymm.android.ringtone.util;

import jp.co.ymm.android.ringtone.b.c;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class v extends c.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final /* synthetic */ byte[] f3932e;

    v(byte[] bArr) {
        this.f3932e = bArr;
        com.yamaha.smafsynth.m7.emu.a aVar = new com.yamaha.smafsynth.m7.emu.a(this.f3932e);
        this.f3513a = z.f(aVar.e());
        this.f3514b = z.f(aVar.c());
        this.f3515c = new u(this, aVar);
    }
}
