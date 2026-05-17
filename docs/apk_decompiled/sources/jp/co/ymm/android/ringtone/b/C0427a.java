package jp.co.ymm.android.ringtone.b;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import jp.co.ymm.android.ringtone.b.C0428b;

/* JADX INFO: renamed from: jp.co.ymm.android.ringtone.b.a, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class C0427a extends BroadcastReceiver {
    C0427a() {
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        jp.co.ymm.android.ringtone.util.g.a("intent=" + intent);
        C0428b.EnumC0033b enumC0033bB = C0428b.b();
        C0428b.EnumC0033b unused = C0428b.f3506a = intent.getAction().equals("android.intent.action.MEDIA_MOUNTED") ? intent.getBooleanExtra("read-only", false) ? C0428b.EnumC0033b.READABLE : C0428b.EnumC0033b.WRITABLE : C0428b.EnumC0033b.UNUSABLE;
        if (C0428b.b() != enumC0033bB) {
            jp.co.ymm.android.ringtone.util.g.d("State: " + enumC0033bB + " --> " + C0428b.b());
            if (C0428b.f3507b != null) {
                C0428b.f3507b.a(C0428b.b());
            }
        }
    }
}
