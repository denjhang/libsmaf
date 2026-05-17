package jp.co.ymm.android.ringtone.player;

import android.content.Context;
import android.media.AudioManager;
import java.util.ArrayList;
import java.util.List;
import jp.co.ymm.android.ringtone.player.h;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private AudioManager f3712a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private List<h.b> f3713b = new ArrayList();

    c(Context context) {
        this.f3712a = (AudioManager) context.getSystemService("audio");
    }

    private int a(int i) {
        int i2;
        AudioManager audioManager = this.f3712a;
        if (audioManager != null) {
            int streamMaxVolume = audioManager.getStreamMaxVolume(1);
            jp.co.ymm.android.ringtone.util.g.a("System Max Vol : " + streamMaxVolume);
            int streamMaxVolume2 = this.f3712a.getStreamMaxVolume(3);
            jp.co.ymm.android.ringtone.util.g.a("Music Max Vol: " + streamMaxVolume2);
            i2 = (streamMaxVolume2 * i) / streamMaxVolume;
        } else {
            i2 = 7;
        }
        jp.co.ymm.android.ringtone.util.g.a("convert\u3000media\u3000Volume : " + i2);
        return i2;
    }

    private void b(int i) {
        if (i == -1) {
            return;
        }
        z.a(this.f3712a, i, false);
        jp.co.ymm.android.ringtone.util.g.d("unmuted STREAM=" + i + ", volume=" + this.f3712a.getStreamVolume(i));
    }

    private void c() {
        h.b bVar;
        int iF;
        if (this.f3713b.isEmpty() || (iF = (bVar = this.f3713b.get(0)).f()) == -1) {
            return;
        }
        jp.co.ymm.android.ringtone.util.g.a("change Volume: " + iF);
        int iA = h.a(bVar);
        if (iA == 3) {
            iF = a(iF);
        }
        this.f3712a.setStreamVolume(iA, iF, 0);
    }

    void a() {
        if (this.f3713b.isEmpty()) {
            return;
        }
        b(this.f3713b.get(0));
    }

    void a(h.b bVar) {
        jp.co.ymm.android.ringtone.util.g.a(bVar != null);
        this.f3713b.add(bVar);
    }

    void b() {
        a();
        this.f3713b.clear();
    }

    void b(h.b bVar) {
        int iIndexOf = this.f3713b.indexOf(bVar);
        if (iIndexOf == -1) {
            jp.co.ymm.android.ringtone.util.g.g("target stream not found.");
            return;
        }
        this.f3713b.remove(bVar);
        b(bVar.a());
        if (iIndexOf != 0 || z.a(this.f3712a)) {
            return;
        }
        c();
    }

    void c(h.b bVar) {
        jp.co.ymm.android.ringtone.util.g.a(bVar != null);
        this.f3713b.add(bVar);
        if (this.f3713b.size() == 1) {
            c();
        }
    }
}
