package jp.co.ymm.android.ringtone.player;

import android.content.Context;
import android.content.Intent;
import android.media.AudioManager;
import android.os.Build;
import java.util.HashMap;
import java.util.Timer;
import jp.co.ymm.android.ringtone.b.c;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f3723a;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private a f3728f;
    private b h;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private jp.co.ymm.android.ringtone.player.b f3724b = null;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private HashMap<c.b, jp.co.ymm.android.ringtone.player.b> f3725c = null;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private b f3726d = null;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private Timer f3727e = null;
    private boolean g = false;

    interface a {
        void a(boolean z);
    }

    static final class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private l f3729a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private int f3730b = -1;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private int f3731c = -1;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private int f3732d = -1;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private int f3733e = -1;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private char f3734f = '0';

        b(l lVar, Intent intent) {
            this.f3729a = lVar;
            a(intent);
        }

        private void a(Intent intent) {
            if (intent.hasExtra("playtime-limit")) {
                a(intent.getIntExtra("playtime-limit", -1));
            }
            if (intent.hasExtra("repeat-count")) {
                b(intent.getIntExtra("repeat-count", -1));
            }
            this.f3732d = intent.getIntExtra("volume", -1);
            this.f3733e = intent.getIntExtra("muted-stream", -1);
        }

        int a() {
            return this.f3733e;
        }

        b a(int i) {
            jp.co.ymm.android.ringtone.util.g.a(i != -1 && i >= 0);
            this.f3731c = i;
            this.f3730b = -1;
            return this;
        }

        void a(char c2) {
            this.f3734f = c2;
        }

        char b() {
            return this.f3734f;
        }

        b b(int i) {
            jp.co.ymm.android.ringtone.util.g.a(i != -1 && i >= 0);
            this.f3730b = i;
            this.f3731c = -1;
            return this;
        }

        int c() {
            return this.f3731c;
        }

        int d() {
            return this.f3730b;
        }

        l e() {
            return this.f3729a;
        }

        int f() {
            return this.f3732d;
        }
    }

    h(Context context, a aVar) {
        boolean z = false;
        if (context != null && aVar != null) {
            z = true;
        }
        jp.co.ymm.android.ringtone.util.g.a(z);
        this.f3723a = context;
        this.f3728f = aVar;
    }

    public static int a(b bVar) {
        String str;
        if (bVar.e().name().equals(l.Trial.name())) {
            str = "getStreamType[Trial] ( AudioManager.STREAM_MUSIC )";
        } else {
            if (bVar.e() == l.Phone && Build.VERSION.SDK_INT < 16) {
                jp.co.ymm.android.ringtone.util.g.a("getStreamType ( AudioManager.STREAM_SYSTEM )");
                return 1;
            }
            str = "getStreamType[" + bVar.e().name() + "] ( AudioManager.STREAM_MUSIC )";
        }
        jp.co.ymm.android.ringtone.util.g.a(str);
        return 3;
    }

    private jp.co.ymm.android.ringtone.player.b a(jp.co.ymm.android.ringtone.b.c cVar) {
        c.b type = cVar.getType();
        HashMap<c.b, jp.co.ymm.android.ringtone.player.b> map = this.f3725c;
        jp.co.ymm.android.ringtone.util.g.a(map != null && map.containsKey(type));
        jp.co.ymm.android.ringtone.util.g.f("target Player: " + type);
        return this.f3725c.get(type);
    }

    private boolean b(String str, b bVar) {
        String str2;
        d();
        jp.co.ymm.android.ringtone.b.c cVarB = jp.co.ymm.android.ringtone.b.d.b(str);
        if (cVarB == null || !cVarB.b()) {
            str2 = "can't accept tone: " + str;
        } else {
            this.f3724b = a(cVarB);
            jp.co.ymm.android.ringtone.util.g.a(this.f3724b != null);
            if (this.f3724b.a(cVarB, bVar)) {
                jp.co.ymm.android.ringtone.util.g.a("accept play: id=" + cVarB.c() + ", parameter=" + bVar);
                this.f3726d = bVar;
                if (bVar.c() != -1) {
                    this.f3727e = new Timer();
                    this.f3727e.schedule(new g(this), bVar.c() * 1000);
                }
                return true;
            }
            str2 = "play failed";
        }
        jp.co.ymm.android.ringtone.util.g.b(str2);
        return false;
    }

    private boolean b(l lVar) {
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void d() {
        if (b()) {
            if (this.f3724b != null) {
                z.a((AudioManager) this.f3723a.getSystemService("audio"), 2, false);
                this.f3724b.a(true);
                this.f3724b = null;
            }
            this.f3726d = null;
            if (this.f3727e != null) {
                this.f3727e.cancel();
                this.f3727e = null;
            }
        }
    }

    private boolean e() {
        return Build.MODEL.equals("sdk");
    }

    private void f() {
        if (this.f3725c == null) {
            return;
        }
        jp.co.ymm.android.ringtone.util.g.f("finalize without notify");
        for (jp.co.ymm.android.ringtone.player.b bVar : this.f3725c.values()) {
            if (bVar != null) {
                bVar.b(false);
            }
        }
        this.f3725c.clear();
        this.f3725c = null;
    }

    l a() {
        b bVar = this.f3726d;
        if (bVar == null) {
            return null;
        }
        return bVar.e();
    }

    void a(l lVar) {
        if (a() == lVar) {
            d();
            return;
        }
        jp.co.ymm.android.ringtone.util.g.g("can't stop playing. request(" + lVar + ") - current(" + a() + ")");
    }

    boolean a(String str, b bVar) {
        if (b(bVar.e())) {
            this.g = true;
            boolean zB = b(str, bVar);
            this.g = false;
            return zB;
        }
        jp.co.ymm.android.ringtone.util.g.g("can't play. request(" + bVar.e() + ") - current(" + a() + ")");
        return false;
    }

    public void b(b bVar) {
        if (this.f3725c != null) {
            b bVar2 = this.h;
            String strName = bVar2 != null ? bVar2.f3729a.name() : null;
            String strName2 = bVar.f3729a.name();
            if (strName == null || strName2.contentEquals(strName)) {
                jp.co.ymm.android.ringtone.util.g.a("not initialize");
                return;
            }
            f();
        }
        f fVar = new f(this);
        jp.co.ymm.android.ringtone.util.g.f("initialize");
        this.f3725c = new HashMap<>();
        this.f3725c.put(c.b.SMAF, !e() ? new n(fVar, bVar) : new jp.co.ymm.android.ringtone.player.a());
        this.f3725c.put(c.b.MP4, new e(this.f3723a, fVar));
        this.f3725c.put(c.b.MP3, new e(this.f3723a, fVar));
        this.f3725c.put(c.b.OGG, new e(this.f3723a, fVar));
        this.h = bVar;
    }

    boolean b() {
        jp.co.ymm.android.ringtone.player.b bVar;
        return this.g || ((bVar = this.f3724b) != null && bVar.isPlaying());
    }

    public void c() {
        if (this.f3725c == null) {
            return;
        }
        jp.co.ymm.android.ringtone.util.g.f("finalize");
        for (jp.co.ymm.android.ringtone.player.b bVar : this.f3725c.values()) {
            if (bVar != null) {
                bVar.b(true);
            }
        }
        this.f3725c.clear();
        this.f3725c = null;
    }
}
