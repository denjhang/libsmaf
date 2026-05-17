package jp.co.ymm.android.ringtone.audition;

import android.app.Service;
import android.content.BroadcastReceiver;
import android.content.Intent;
import android.media.AudioManager;
import android.net.Uri;
import android.os.IBinder;
import android.os.Message;
import android.text.TextUtils;
import jp.co.ymm.android.ringtone.audition.b;
import jp.co.ymm.android.ringtone.net.e;
import jp.co.ymm.android.ringtone.net.f;
import jp.co.ymm.android.ringtone.player.l;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class PreviewService extends Service {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private String f3485c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private e f3486d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private String f3487e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b f3483a = null;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f3484b = 0;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final BroadcastReceiver f3488f = new c(this);
    private f g = new d(this);

    /* JADX INFO: Access modifiers changed from: private */
    public void a() {
        this.f3483a.b();
        jp.co.ymm.android.ringtone.b.d.a().c();
        stopSelf();
    }

    private void a(int i) {
        if (i == this.f3484b) {
            return;
        }
        this.f3484b = i;
        this.f3483a.a(this.f3484b);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(Message message) {
        e eVar;
        int i = message.what;
        if (i == 0) {
            int i2 = message.arg1 * 10;
            g.a("Progress ratio： " + i2);
            a(i2);
            return;
        }
        if (i != 1) {
            return;
        }
        jp.co.ymm.android.ringtone.net.a.g gVar = (jp.co.ymm.android.ringtone.net.a.g) message.obj;
        byte[] bArr = gVar.f3659b.f3665b;
        jp.co.ymm.android.ringtone.b.d dVarA = jp.co.ymm.android.ringtone.b.d.a();
        String str = this.f3485c;
        if (str != null && bArr != null) {
            this.f3487e = dVarA.a(str, bArr);
            if (!TextUtils.isEmpty(this.f3487e)) {
                String str2 = gVar.f3658a.f3662a;
                if (!TextUtils.isEmpty(str2) && (eVar = this.f3486d) != null) {
                    eVar.a(str2, this.g);
                    return;
                }
            }
        }
        a(b.a.DownloadFailed);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(b.a aVar) {
        b();
        this.f3483a.a(aVar);
        stopSelf();
    }

    private boolean a(Uri uri) {
        if (uri != null) {
            String host = uri.getHost();
            if (!TextUtils.isEmpty(host) && host.equals("preview")) {
                return true;
            }
        }
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean a(String str) {
        return !TextUtils.isEmpty(str) && str.equals("000");
    }

    private void b() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(String str) {
        g.a(this.f3483a != null);
        g.f("notifyFinishDownload");
        jp.co.ymm.android.ringtone.b.c cVarA = jp.co.ymm.android.ringtone.b.d.a().a(str);
        if (cVarA == null) {
            g.b("unknown toneId: " + str);
            return;
        }
        e eVar = this.f3486d;
        this.f3483a.a(cVarA, eVar != null ? eVar.a() : null);
        AudioManager audioManager = (AudioManager) getSystemService("audio");
        int i = getSharedPreferences(o.L, 0).getInt(o.Volume_Ringtone.name(), o.M);
        if (z.b(audioManager)) {
            g.a("manner mode");
            i = 0;
        }
        z.a(this, str, i, l.Trial, 0);
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override // android.app.Service
    public void onCreate() {
        g.d("onCreate");
    }

    @Override // android.app.Service
    public void onDestroy() {
        g.d("onDestroy");
        jp.co.ymm.android.ringtone.b.d.a().c();
        stopForeground(true);
        try {
            unregisterReceiver(this.f3488f);
        } catch (IllegalArgumentException unused) {
            g.a("IllegalArgumentException ");
        }
        b bVar = this.f3483a;
        if (bVar != null) {
            bVar.b();
        }
        b();
        this.f3486d = null;
        this.f3487e = null;
        this.f3485c = null;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0064  */
    @Override // android.app.Service
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public int onStartCommand(android.content.Intent r2, int r3, int r4) {
        /*
            r1 = this;
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "onStartCommand("
            r3.append(r0)
            r3.append(r4)
            java.lang.String r4 = ":"
            r3.append(r4)
            r3.append(r2)
            java.lang.String r4 = ")"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            jp.co.ymm.android.ringtone.util.g.d(r3)
            jp.co.ymm.android.ringtone.audition.b r3 = r1.f3483a
            if (r3 == 0) goto L27
            r2 = 0
            return r2
        L27:
            jp.co.ymm.android.ringtone.audition.b r3 = new jp.co.ymm.android.ringtone.audition.b
            android.content.Context r4 = r1.getApplicationContext()
            r3.<init>(r4)
            r1.f3483a = r3
            jp.co.ymm.android.ringtone.audition.b r3 = r1.f3483a
            r3.c()
            jp.co.ymm.android.ringtone.audition.b r3 = r1.f3483a
            android.app.Notification r3 = r3.a()
            if (r3 == 0) goto L43
            r4 = 1
            r1.startForeground(r4, r3)
        L43:
            android.net.Uri r2 = r2.getData()
            if (r2 == 0) goto L64
            boolean r3 = r1.a(r2)
            if (r3 == 0) goto L64
            jp.co.ymm.android.ringtone.net.e r3 = new jp.co.ymm.android.ringtone.net.e
            android.content.Context r4 = r1.getApplicationContext()
            r3.<init>(r4)
            r1.f3486d = r3
            jp.co.ymm.android.ringtone.net.e r3 = r1.f3486d
            jp.co.ymm.android.ringtone.net.f r4 = r1.g
            boolean r2 = r3.c(r2, r4)
            if (r2 != 0) goto L69
        L64:
            jp.co.ymm.android.ringtone.audition.b$a r2 = jp.co.ymm.android.ringtone.audition.b.a.DownloadFailed
            r1.a(r2)
        L69:
            android.content.Context r2 = r1.getApplicationContext()
            android.content.BroadcastReceiver r3 = r1.f3488f
            android.content.IntentFilter r4 = new android.content.IntentFilter
            java.lang.String r0 = "jp.co.ymm.android.ringtone.event.STOPPED"
            r4.<init>(r0)
            r2.registerReceiver(r3, r4)
            r2 = 2
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.ymm.android.ringtone.audition.PreviewService.onStartCommand(android.content.Intent, int, int):int");
    }
}
