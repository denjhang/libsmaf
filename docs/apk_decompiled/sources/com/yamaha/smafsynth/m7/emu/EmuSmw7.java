package com.yamaha.smafsynth.m7.emu;

import android.media.AudioTrack;
import java.lang.reflect.Array;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class EmuSmw7 implements AudioTrack.OnPlaybackPositionUpdateListener {
    private boolean[] k;
    private byte[][] l;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private a f2730a = null;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f2731b = 22050;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f2732c = 0;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private byte[] f2733d = null;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private int f2734e = 0;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private int f2735f = 0;
    private final int g = 5;
    private boolean h = false;
    private int i = 0;
    private int j = 0;
    private AudioTrack m = null;
    private byte[] n = null;
    private int o = 1000;

    public class a extends Thread {
        public a() {
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            while (EmuSmw7.this.h) {
                if (!EmuSmw7.this.k[EmuSmw7.this.i]) {
                    EmuSmw7 emuSmw7 = EmuSmw7.this;
                    if (emuSmw7.getGenerateData(emuSmw7.l[EmuSmw7.this.i]) > 0) {
                        EmuSmw7.this.k[EmuSmw7.this.i] = true;
                        EmuSmw7.d(EmuSmw7.this);
                        if (EmuSmw7.this.i >= 5) {
                            EmuSmw7.this.i = 0;
                        }
                    }
                }
                Thread.yield();
            }
        }
    }

    public EmuSmw7() {
        System.loadLibrary("M7_EmuSmw7");
    }

    static /* synthetic */ int d(EmuSmw7 emuSmw7) {
        int i = emuSmw7.i;
        emuSmw7.i = i + 1;
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public native int getGenerateData(byte[] bArr);

    private native long getLength();

    private native long getPosition();

    private native long getState();

    private native long init(long j, int i);

    private native int setVolume(long j);

    private native long start(byte[] bArr, long j, long j2, long j3, long j4, long j5);

    private native long stop();

    private native long term();

    public int a(long j) {
        return setVolume(j);
    }

    public long a() {
        return getLength();
    }

    public long a(long j, int i) {
        int i2;
        this.f2731b = (int) j;
        if (this.m == null) {
            this.f2732c = AudioTrack.getMinBufferSize(this.f2731b, 12, 2);
            int i3 = this.f2732c;
            this.f2734e = i3;
            this.f2734e /= 2;
            this.f2734e /= 2;
            this.f2735f = ((this.f2734e * 1000) / this.f2731b) + 1;
            this.o = this.f2735f * 2;
            this.n = new byte[i3];
            int i4 = 0;
            while (true) {
                i2 = this.f2732c;
                if (i4 >= i2) {
                    break;
                }
                this.n[i4] = 0;
                i4++;
            }
            this.m = new AudioTrack(i, this.f2731b, 12, 2, i2, 1);
            this.m.setPositionNotificationPeriod(this.f2734e);
            this.m.setPlaybackPositionUpdateListener(this);
        }
        a(this.f2732c);
        long jInit = init(this.f2731b, this.f2734e);
        this.m.play();
        if (jInit >= 0) {
            this.f2730a = new a();
            this.f2730a.start();
            this.m.write(this.n, 0, this.f2732c);
            this.m.write(this.n, 0, this.f2732c);
            this.m.write(this.n, 0, this.f2732c);
        } else {
            this.m.stop();
            try {
                Thread.sleep(this.o);
            } catch (InterruptedException e2) {
                e2.printStackTrace();
            }
            this.m.flush();
            this.m.release();
            this.m = null;
        }
        return jInit;
    }

    public long a(byte[] bArr, long j, long j2, long j3, long j4, long j5) {
        return start(bArr, j, j2, j3, j4, j5);
    }

    public void a(int i) {
        this.i = 1;
        this.j = 1;
        this.k = new boolean[5];
        this.l = (byte[][]) Array.newInstance((Class<?>) byte.class, 5, this.f2732c);
        for (int i2 = 0; i2 < 5; i2++) {
            this.k[i2] = false;
            for (int i3 = 0; i3 < this.f2732c; i3++) {
                this.l[i2][i3] = 0;
            }
        }
        this.h = true;
    }

    public long b() {
        return getPosition();
    }

    public long c() {
        return getState();
    }

    public long d() {
        return stop();
    }

    public long e() {
        long jTerm = term();
        if (jTerm >= 0) {
            this.h = false;
            a aVar = this.f2730a;
            if (aVar != null) {
                try {
                    aVar.join();
                    this.f2730a = null;
                } catch (InterruptedException e2) {
                    e2.printStackTrace();
                }
            }
            AudioTrack audioTrack = this.m;
            if (audioTrack != null) {
                this.m = null;
                audioTrack.setPlaybackPositionUpdateListener(null);
                audioTrack.stop();
                try {
                    Thread.sleep(this.o);
                } catch (InterruptedException e3) {
                    e3.printStackTrace();
                }
                audioTrack.flush();
            }
        }
        return jTerm;
    }

    @Override // android.media.AudioTrack.OnPlaybackPositionUpdateListener
    public void onMarkerReached(AudioTrack audioTrack) {
    }

    @Override // android.media.AudioTrack.OnPlaybackPositionUpdateListener
    public void onPeriodicNotification(AudioTrack audioTrack) {
        if (this.m == null) {
            return;
        }
        int i = this.j + 1;
        if (i >= 5) {
            i = 0;
        }
        boolean[] zArr = this.k;
        if (zArr[i]) {
            zArr[this.j] = false;
            this.j = i;
        }
        audioTrack.write(this.l[this.j], 0, this.f2732c);
    }
}
