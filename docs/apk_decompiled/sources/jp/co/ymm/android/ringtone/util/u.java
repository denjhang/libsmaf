package jp.co.ymm.android.ringtone.util;

import java.util.ArrayList;
import java.util.Collections;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class u extends ArrayList<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ com.yamaha.smafsynth.m7.emu.a f3930a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ v f3931b;

    u(v vVar, com.yamaha.smafsynth.m7.emu.a aVar) {
        this.f3931b = vVar;
        this.f3930a = aVar;
        add(z.f(this.f3930a.d()));
        add(z.f(this.f3930a.a()));
        add(z.f(this.f3930a.b()));
        removeAll(Collections.singleton(null));
    }
}
