package jp.co.ymm.android.ringtone.b;

import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Collections;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class g extends ArrayList<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ByteBuffer f3523a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ h f3524b;

    g(h hVar, ByteBuffer byteBuffer) {
        this.f3524b = hVar;
        this.f3523a = byteBuffer;
        this.f3523a.clear();
        add(h.b(h.b("cprt", this.f3523a)));
        this.f3523a.clear();
        add(h.b(h.b("dscp", this.f3523a)));
        removeAll(Collections.singleton(null));
    }
}
