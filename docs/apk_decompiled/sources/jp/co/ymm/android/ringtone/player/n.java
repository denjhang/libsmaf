package jp.co.ymm.android.ringtone.player;

import android.annotation.SuppressLint;
import android.media.AudioTrack;
import com.yamaha.smafsynth.m7.emu.EmuSmw7;
import java.util.Timer;
import jp.co.ymm.android.ringtone.player.h;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@SuppressLint({"ParserError", "ParserError"})
class n implements b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static int f3746a = 48000;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static int f3747b = 44100;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static int f3748c = 22050;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static long f3749d = 24;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private static long f3750e = 24;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private h.a f3751f;
    private EmuSmw7 g;
    private Timer h = null;

    n(h.a aVar, h.b bVar) {
        this.g = null;
        this.f3751f = aVar;
        jp.co.ymm.android.ringtone.util.g.d("=> new EnuSmw7");
        this.g = new EmuSmw7();
        jp.co.ymm.android.ringtone.util.g.d("=> EnuSmw7::init");
        int iA = h.a(bVar);
        jp.co.ymm.android.ringtone.util.g.a("SmafPlayer. stream type ( " + iA + " )");
        a(bVar.b(), iA);
        jp.co.ymm.android.ringtone.util.g.a("SmafQualitySettings: " + bVar.b() + " Fs=" + f3748c + "/FM=" + f3749d + "/WT=" + f3750e);
        long jA = this.g.a((long) f3748c, iA);
        StringBuilder sb = new StringBuilder();
        sb.append("   result: ");
        sb.append(jA);
        jp.co.ymm.android.ringtone.util.g.f(sb.toString());
    }

    private void a() {
        this.h = new Timer();
        this.h.schedule(new m(this), 500L, 500L);
    }

    void a(char c2, int i) {
        int nativeOutputSampleRate = AudioTrack.getNativeOutputSampleRate(i);
        switch (c2) {
            case '1':
                int i2 = f3747b;
                if (nativeOutputSampleRate == i2 || nativeOutputSampleRate == (i2 = f3746a)) {
                    f3748c = i2;
                    f3749d = 24L;
                    f3750e = 24L;
                    break;
                }
                break;
            case '2':
                if (nativeOutputSampleRate != f3747b) {
                    if (nativeOutputSampleRate != f3746a) {
                    }
                    f3748c = 24000;
                    f3749d = 16L;
                    f3750e = 16L;
                } else {
                    f3748c = 22050;
                    f3749d = 16L;
                    f3750e = 16L;
                }
                break;
            case '3':
                if (nativeOutputSampleRate != f3747b) {
                    if (nativeOutputSampleRate != f3746a) {
                    }
                    f3748c = 24000;
                    f3749d = 16L;
                    f3750e = 16L;
                } else {
                    f3748c = 16000;
                    f3749d = 16L;
                    f3750e = 16L;
                }
                break;
            default:
                if (nativeOutputSampleRate == f3747b) {
                    f3748c = 22050;
                } else if (nativeOutputSampleRate == f3746a) {
                    f3748c = 24000;
                }
                f3749d = 24L;
                f3750e = 24L;
                break;
        }
    }

    @Override // jp.co.ymm.android.ringtone.player.b
    public void a(boolean z) {
        if (isPlaying()) {
            jp.co.ymm.android.ringtone.util.g.d("=> EnuSmw7::stop");
            this.g.a(0L);
            jp.co.ymm.android.ringtone.util.g.f("   result: " + this.g.d());
            Timer timer = this.h;
            if (timer != null) {
                timer.cancel();
                this.h = null;
            }
            if (z) {
                this.f3751f.a(z);
            }
        }
    }

    @Override // jp.co.ymm.android.ringtone.player.b
    public boolean a(jp.co.ymm.android.ringtone.b.c cVar, h.b bVar) {
        long jA;
        StringBuilder sb;
        jp.co.ymm.android.ringtone.util.g.a((cVar == null || bVar == null) ? false : true);
        if (this.g.c() != 1) {
            sb = new StringBuilder();
            sb.append("sequence error: state=");
            jA = this.g.c();
        } else {
            this.g.a(100L);
            jp.co.ymm.android.ringtone.util.g.d("=> EnuSmw7::start");
            jA = this.g.a(cVar.f(), 100L, bVar.d(), 15L, f3749d, f3750e);
            if (jA >= 0) {
                a();
                return true;
            }
            sb = new StringBuilder();
            sb.append(" start failed: ");
        }
        sb.append(jA);
        jp.co.ymm.android.ringtone.util.g.b(sb.toString());
        return false;
    }

    @Override // jp.co.ymm.android.ringtone.player.b
    public void b(boolean z) {
        if (this.g == null) {
            return;
        }
        a(z);
        jp.co.ymm.android.ringtone.util.g.d("=> EnuSmw7::term");
        long jE = this.g.e();
        this.g = null;
        jp.co.ymm.android.ringtone.util.g.f("   result: " + jE);
    }

    @Override // jp.co.ymm.android.ringtone.player.b
    public boolean isPlaying() {
        return this.h != null;
    }
}
