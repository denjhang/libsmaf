package jp.co.ymm.android.ringtone.player;

import android.content.Context;
import android.media.MediaPlayer;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import jp.co.ymm.android.ringtone.player.h;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class e implements b, MediaPlayer.OnCompletionListener, MediaPlayer.OnErrorListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f3715a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private h.a f3716b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private MediaPlayer f3717c = null;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f3718d = 0;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private boolean f3719e = false;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private int f3720f = 0;

    e(Context context, h.a aVar) {
        this.f3715a = context;
        this.f3716b = aVar;
    }

    private File a() {
        return new File(this.f3715a.getCacheDir(), "tmp");
    }

    /* JADX WARN: Removed duplicated region for block: B:31:0x003c A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.io.File a(jp.co.ymm.android.ringtone.b.c r5) throws java.lang.Throwable {
        /*
            r4 = this;
            java.io.File r0 = r4.a()
            r1 = 0
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L1a java.lang.Exception -> L1d
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L1a java.lang.Exception -> L1d
            byte[] r5 = r5.f()     // Catch: java.lang.Exception -> L18 java.lang.Throwable -> L39
            r2.write(r5)     // Catch: java.lang.Exception -> L18 java.lang.Throwable -> L39
            r2.flush()     // Catch: java.lang.Exception -> L18 java.lang.Throwable -> L39
            r2.close()     // Catch: java.io.IOException -> L17
        L17:
            return r0
        L18:
            r5 = move-exception
            goto L1f
        L1a:
            r5 = move-exception
            r2 = r1
            goto L3a
        L1d:
            r5 = move-exception
            r2 = r1
        L1f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L39
            r0.<init>()     // Catch: java.lang.Throwable -> L39
            java.lang.String r3 = "caught Exception: "
            r0.append(r3)     // Catch: java.lang.Throwable -> L39
            r0.append(r5)     // Catch: java.lang.Throwable -> L39
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> L39
            jp.co.ymm.android.ringtone.util.g.b(r5)     // Catch: java.lang.Throwable -> L39
            if (r2 == 0) goto L38
            r2.close()     // Catch: java.io.IOException -> L38
        L38:
            return r1
        L39:
            r5 = move-exception
        L3a:
            if (r2 == 0) goto L3f
            r2.close()     // Catch: java.io.IOException -> L3f
        L3f:
            throw r5
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.ymm.android.ringtone.player.e.a(jp.co.ymm.android.ringtone.b.c):java.io.File");
    }

    private boolean a(File file, h.b bVar) throws IOException {
        this.f3717c = new MediaPlayer();
        int iA = h.a(bVar);
        jp.co.ymm.android.ringtone.util.g.a("doPlay. stream type ( " + iA + ")");
        this.f3717c.setAudioStreamType(iA);
        FileInputStream fileInputStream = new FileInputStream(file);
        this.f3717c.setDataSource(fileInputStream.getFD());
        fileInputStream.close();
        if (bVar.d() == -1) {
            this.f3717c.setLooping(true);
        }
        this.f3718d = bVar.d();
        this.f3717c.setOnPreparedListener(new d(this));
        this.f3717c.setOnCompletionListener(this);
        this.f3717c.setOnErrorListener(this);
        jp.co.ymm.android.ringtone.util.g.d("=> MediaPlayer.prepareAsync");
        this.f3717c.prepareAsync();
        this.f3719e = true;
        return true;
    }

    private void b() {
        a().delete();
    }

    @Override // jp.co.ymm.android.ringtone.player.b
    public void a(boolean z) {
        if (isPlaying()) {
            try {
                jp.co.ymm.android.ringtone.util.g.d("=> MediaPlayer.stop");
                this.f3717c.setVolume(0.0f, 0.0f);
                this.f3717c.stop();
                b();
            } catch (IllegalStateException unused) {
            }
            this.f3719e = false;
            this.f3716b.a(z);
        }
    }

    @Override // jp.co.ymm.android.ringtone.player.b
    public boolean a(jp.co.ymm.android.ringtone.b.c cVar, h.b bVar) throws Throwable {
        jp.co.ymm.android.ringtone.util.g.a((cVar == null || bVar == null) ? false : true);
        b(true);
        File fileA = a(cVar);
        if (fileA == null) {
            return false;
        }
        try {
            a(fileA, bVar);
            return true;
        } catch (Exception e2) {
            jp.co.ymm.android.ringtone.util.g.b("caught Exception: " + e2);
            b();
            return false;
        }
    }

    @Override // jp.co.ymm.android.ringtone.player.b
    public void b(boolean z) {
        if (this.f3717c == null) {
            return;
        }
        a(z);
        jp.co.ymm.android.ringtone.util.g.d("=> MediaPlayer.release");
        this.f3717c.setVolume(0.0f, 0.0f);
        this.f3717c.release();
        this.f3717c = null;
    }

    @Override // jp.co.ymm.android.ringtone.player.b
    public boolean isPlaying() {
        return this.f3717c != null && this.f3719e;
    }

    @Override // android.media.MediaPlayer.OnCompletionListener
    public void onCompletion(MediaPlayer mediaPlayer) {
        String str;
        jp.co.ymm.android.ringtone.util.g.a("MediaPlayer.onCompletion");
        if (this.f3718d == -1) {
            str = "mRemainRepeat UNLIMITED.";
        } else {
            if (isPlaying()) {
                this.f3718d--;
                if (this.f3718d > 0) {
                    mediaPlayer.start();
                    return;
                } else {
                    jp.co.ymm.android.ringtone.util.g.d("Player stopped");
                    a(true);
                    return;
                }
            }
            str = "already stopped.";
        }
        jp.co.ymm.android.ringtone.util.g.g(str);
    }

    @Override // android.media.MediaPlayer.OnErrorListener
    public boolean onError(MediaPlayer mediaPlayer, int i, int i2) {
        jp.co.ymm.android.ringtone.util.g.b("MediaPlayer.onError: what(" + i + "), extra(" + i2 + ")");
        if (!isPlaying()) {
            jp.co.ymm.android.ringtone.util.g.g("already stopped.");
            return true;
        }
        b(true);
        this.f3716b.a(false);
        return true;
    }
}
