package androidx.core.app;

import android.app.Activity;
import android.os.Bundle;
import android.view.KeyEvent;
import android.view.View;
import androidx.lifecycle.f;
import androidx.lifecycle.j;
import androidx.lifecycle.r;
import b.d.d.c;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class ComponentActivity extends Activity implements androidx.lifecycle.h, c.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b.b.h<Class<? extends Object>, Object> f143a = new b.b.h<>();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private j f144b = new j(this);

    @Override // androidx.lifecycle.h
    public androidx.lifecycle.f a() {
        return this.f144b;
    }

    @Override // b.d.d.c.a
    public boolean a(KeyEvent keyEvent) {
        return super.dispatchKeyEvent(keyEvent);
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public boolean dispatchKeyEvent(KeyEvent keyEvent) {
        View decorView = getWindow().getDecorView();
        if (decorView == null || !b.d.d.c.a(decorView, keyEvent)) {
            return b.d.d.c.a(this, decorView, this, keyEvent);
        }
        return true;
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public boolean dispatchKeyShortcutEvent(KeyEvent keyEvent) {
        View decorView = getWindow().getDecorView();
        if (decorView == null || !b.d.d.c.a(decorView, keyEvent)) {
            return super.dispatchKeyShortcutEvent(keyEvent);
        }
        return true;
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        r.a(this);
    }

    @Override // android.app.Activity
    protected void onSaveInstanceState(Bundle bundle) {
        this.f144b.a(f.b.CREATED);
        super.onSaveInstanceState(bundle);
    }
}
