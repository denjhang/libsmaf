package jp.co.ymm.android.ringtone.util;

import android.app.Activity;
import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Handler;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.Toast;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class t extends WebViewClient {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Activity f3924a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private WebView f3925b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private a f3926c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private boolean f3927d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final Handler f3928e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private int f3929f;
    private final Runnable g;

    public interface a {
        boolean a(String str);
    }

    public t(Activity activity, WebView webView, int i) {
        this.f3924a = null;
        this.f3925b = null;
        this.f3927d = true;
        this.f3928e = new Handler();
        this.f3929f = -1;
        this.g = new s(this);
        this.f3924a = activity;
        this.f3925b = webView;
        this.f3929f = i;
    }

    public t(Activity activity, a aVar) {
        this.f3924a = null;
        this.f3925b = null;
        this.f3927d = true;
        this.f3928e = new Handler();
        this.f3929f = -1;
        this.g = new s(this);
        this.f3924a = activity;
        this.f3926c = aVar;
    }

    @Override // android.webkit.WebViewClient
    public void onPageFinished(WebView webView, String str) {
        if (this.f3929f == -1) {
            return;
        }
        if (this.f3927d) {
            ((BaseActivity) this.f3924a).b(true);
            this.f3928e.removeCallbacks(this.g);
        } else {
            Toast.makeText(this.f3924a, 2131493173, 0).show();
            ((BaseActivity) this.f3924a).a();
            this.f3924a.finish();
        }
    }

    @Override // android.webkit.WebViewClient
    public void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        int i = this.f3929f;
        if (i == -1) {
            return;
        }
        this.f3928e.postDelayed(this.g, i);
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedError(WebView webView, int i, String str, String str2) {
        if (this.f3929f != -1) {
            this.f3927d = false;
        } else {
            Activity activity = this.f3924a;
            Toast.makeText(activity, activity.getString(2131493173), 0).show();
        }
    }

    @Override // android.webkit.WebViewClient
    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
        Intent intent;
        a aVar = this.f3926c;
        if (aVar != null && aVar.a(str)) {
            return true;
        }
        if (str.startsWith("mailto:") || str.startsWith("tel:")) {
            intent = new Intent("android.intent.action.VIEW", Uri.parse(str));
        } else {
            if (str.startsWith("copysilent:")) {
                return true;
            }
            if (Uri.parse(str).getHost().equals(this.f3924a.getString(2131493172))) {
                return false;
            }
            intent = new Intent("android.intent.action.VIEW", Uri.parse(str));
        }
        this.f3924a.startActivity(intent);
        return true;
    }
}
