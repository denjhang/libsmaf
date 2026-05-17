package jp.co.ymm.android.ringtone.mail.carrier;

import android.telephony.PhoneStateListener;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c extends PhoneStateListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f3622a = 0;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ RingtoneListener f3623b;

    c(RingtoneListener ringtoneListener) {
        this.f3623b = ringtoneListener;
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0081  */
    @Override // android.telephony.PhoneStateListener
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void onCallStateChanged(int r3, java.lang.String r4) {
        /*
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onCallStateChanged(state:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = ",number:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            jp.co.ymm.android.ringtone.util.g.d(r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 27
            if (r1 >= r0) goto L29
            java.lang.String r4 = ""
        L29:
            if (r3 == 0) goto L81
            r0 = 1
            r1 = 2
            if (r3 == r0) goto L46
            if (r3 == r1) goto L81
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "unknown state: "
            r4.append(r0)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            jp.co.ymm.android.ringtone.util.g.g(r4)
            goto L86
        L46:
            int r0 = r2.f3622a
            if (r0 == r1) goto L86
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 != 0) goto L7b
            jp.co.ymm.android.ringtone.mail.carrier.RingtoneListener r0 = r2.f3623b
            android.content.Context r0 = r0.getApplicationContext()
            java.util.ArrayList r4 = jp.co.ymm.android.ringtone.a.a.a.d(r0, r4)
            int r0 = r4.size()
            if (r0 <= 0) goto L7b
            jp.co.ymm.android.ringtone.mail.carrier.RingtoneListener r0 = r2.f3623b
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = jp.co.ymm.android.ringtone.a.a.c.a(r0, r4)
            boolean r0 = r1.isEmpty()
            if (r0 == 0) goto L7b
            jp.co.ymm.android.ringtone.mail.carrier.RingtoneListener r0 = r2.f3623b
            android.app.Application r0 = r0.getApplication()
            java.lang.String r1 = jp.co.ymm.android.ringtone.a.a.b.a(r0, r4)
        L7b:
            jp.co.ymm.android.ringtone.mail.carrier.RingtoneListener r4 = r2.f3623b
            jp.co.ymm.android.ringtone.mail.carrier.RingtoneListener.a(r4, r1)
            goto L86
        L81:
            jp.co.ymm.android.ringtone.mail.carrier.RingtoneListener r4 = r2.f3623b
            jp.co.ymm.android.ringtone.mail.carrier.RingtoneListener.a(r4)
        L86:
            r2.f3622a = r3
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.ymm.android.ringtone.mail.carrier.c.onCallStateChanged(int, java.lang.String):void");
    }
}
