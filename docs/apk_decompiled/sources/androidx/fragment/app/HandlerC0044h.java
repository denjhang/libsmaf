package androidx.fragment.app;

import android.os.Handler;
import android.os.Message;

/* JADX INFO: renamed from: androidx.fragment.app.h, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class HandlerC0044h extends Handler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ FragmentActivity f379a;

    HandlerC0044h(FragmentActivity fragmentActivity) {
        this.f379a = fragmentActivity;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        if (message.what != 2) {
            super.handleMessage(message);
        } else {
            this.f379a.d();
            this.f379a.f318d.i();
        }
    }
}
