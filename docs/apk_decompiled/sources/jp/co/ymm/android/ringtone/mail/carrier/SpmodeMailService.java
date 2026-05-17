package jp.co.ymm.android.ringtone.mail.carrier;

import android.accessibilityservice.AccessibilityService;
import android.accessibilityservice.AccessibilityServiceInfo;
import android.app.Notification;
import android.content.Context;
import android.os.Build;
import android.os.Parcelable;
import android.text.TextUtils;
import android.view.accessibility.AccessibilityEvent;
import java.util.Timer;
import jp.co.ymm.android.ringtone.mail.gmail.GmailReceiver;
import jp.co.ymm.android.ringtone.mail.sms.SmsReceiver;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.l;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class SpmodeMailService extends AccessibilityService {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f3618a = true;

    private void a(Context context) {
        if (l.h(context)) {
            GmailReceiver.a(context);
        } else {
            g.a("ringtonePlayForGmail not isGmailAccessibility");
        }
    }

    private void a(String str) {
        if (this.f3618a) {
            this.f3618a = false;
            l.b(getApplicationContext(), str);
            new Timer().schedule(new e(this), 10000L);
        }
    }

    private void b(Context context) {
        if (l.d(context)) {
            SmsReceiver.a(context);
        }
    }

    @Override // android.accessibilityservice.AccessibilityService
    public void onAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        boolean z;
        boolean z2;
        String str;
        boolean z3;
        boolean zA;
        g.a("onAccessibilityEvent");
        if (accessibilityEvent.getEventType() != 64) {
            return;
        }
        boolean z4 = true;
        try {
            Parcelable parcelableData = accessibilityEvent.getParcelableData();
            if (parcelableData == null || !(parcelableData instanceof Notification)) {
                g.a("not Notification");
                z3 = false;
                zA = false;
            } else {
                g.a("Parcelable:" + parcelableData.toString());
                zA = l.a((Notification) parcelableData);
                z3 = true;
            }
        } catch (Exception e2) {
            e = e2;
            z = false;
            z2 = false;
        }
        try {
            boolean z5 = zA;
            z = z3;
            str = (String) accessibilityEvent.getText().get(0);
            z2 = z5;
        } catch (Exception e3) {
            boolean z6 = zA;
            z = z3;
            e = e3;
            z2 = z6;
            g.a("size: " + ((Object) accessibilityEvent.getBeforeText()));
            g.a(e.getMessage());
            str = "";
        }
        String str2 = (String) accessibilityEvent.getPackageName();
        g.d("eventText: " + str);
        g.d("packageName: " + str2);
        if (!str2.equals(getString(2131493034)) && !str2.equals(getString(2131493033))) {
            z4 = false;
        }
        if (z4 && z) {
            a(str2);
            return;
        }
        if (str2.equals(getString(2131493040)) && z && 26 <= Build.VERSION.SDK_INT) {
            a(str2);
            return;
        }
        if (str2.equals("com.google.android.gm") && z2) {
            a(getApplicationContext());
            return;
        }
        if (str2.equals(getString(2131493000)) || str2.equals(getString(2131493041)) || str2.equals(getString(2131493129))) {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            b(getApplicationContext());
        } else if ((str2.equals(getString(2131493130)) || str2.equals(getString(2131492953))) && !TextUtils.isEmpty(str)) {
            if (str.equals("未受信メール") || str.startsWith("受信中")) {
                l.a(getApplicationContext(), str2);
            }
            if (str.equals("新着メール") || str.startsWith("新着メール（")) {
                a(str2);
            }
        }
    }

    @Override // android.accessibilityservice.AccessibilityService
    public void onInterrupt() {
    }

    @Override // android.accessibilityservice.AccessibilityService
    public void onServiceConnected() {
        AccessibilityServiceInfo accessibilityServiceInfo = new AccessibilityServiceInfo();
        accessibilityServiceInfo.eventTypes = 64;
        accessibilityServiceInfo.feedbackType = 16;
        accessibilityServiceInfo.notificationTimeout = 1000L;
        accessibilityServiceInfo.flags = 1;
        setServiceInfo(accessibilityServiceInfo);
    }
}
