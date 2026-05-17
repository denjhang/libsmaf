package jp.co.ymm.android.ringtone.preferences;

import android.annotation.SuppressLint;
import android.app.Activity;
import android.content.Context;
import android.content.DialogInterface;
import android.net.Uri;
import android.os.Bundle;
import android.widget.Toast;
import jp.co.ymm.android.ringtone.MyApplication;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;
import jp.co.ymm.android.ringtone.util.BookmarkAgent;
import jp.co.ymm.android.ringtone.util.c;
import jp.co.ymm.android.ringtone.util.f;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@SuppressLint({"ParserError"})
public class BookmarkManagerActivity extends BaseActivity implements f.a {

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private String f3752d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private String f3753e;

    private void a(String str, String str2) {
        if (c.a(str, str2) == null) {
            Toast.makeText(this, getString(2131492903), 0).show();
            finish();
            return;
        }
        this.f3752d = str;
        this.f3753e = str2;
        a(26, str + "(" + str2 + ")", this);
    }

    private void b(String str, String str2) {
        String strA = c.a(str, str2);
        if (strA == null) {
            Toast.makeText(this, 2131492903, 0).show();
            finish();
            return;
        }
        a(28, str + "(" + strA + ")", this);
    }

    private void h() {
        Context applicationContext;
        String strName;
        boolean z;
        if (this.f3752d.equalsIgnoreCase("mysound")) {
            applicationContext = getApplicationContext();
            strName = o.Utm_Medium.name();
            z = true;
        } else {
            applicationContext = getApplicationContext();
            strName = o.Utm_Medium.name();
            z = false;
        }
        z.b(applicationContext, strName, z);
        a(27, this);
    }

    private void i() {
        a(29, this);
        z.b(getApplicationContext(), o.Utm_Medium.name(), false);
    }

    @Override // jp.co.ymm.android.ringtone.ui.activity.BaseActivity, jp.co.ymm.android.ringtone.util.f.a
    public void a(DialogInterface dialogInterface, int i, int i2) {
        switch (i) {
            case 26:
                if (i2 == -1) {
                    if (new BookmarkAgent(getApplicationContext()).a(this.f3752d, this.f3753e, "")) {
                        h();
                    }
                    Toast.makeText(getApplicationContext(), getString(2131492901), 0).show();
                    finish();
                }
                break;
            case 28:
                if (i2 == -1) {
                    if (i2 == -1) {
                        if (new BookmarkAgent(getApplicationContext()).a()) {
                            i();
                        }
                        Toast.makeText(getApplicationContext(), getString(2131492901), 0).show();
                    } else if (i2 == -2) {
                        dialogInterface.cancel();
                    }
                    break;
                }
            case 27:
                finish();
                break;
        }
    }

    @Override // jp.co.ymm.android.ringtone.ui.activity.BaseActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        Toast toastMakeText;
        super.onCreate(bundle);
        if (MyApplication.b((Activity) this)) {
            setContentView(2131296264);
            Uri data = getIntent().getData();
            if (data != null) {
                g.a("Uri: " + data.toString());
                g.a("host: " + data.getHost().toString());
                g.a("path: " + data.getPath().toString());
                if (data.getPath().equals("/add")) {
                    String queryParameter = data.getQueryParameter("sitename");
                    String queryParameter2 = data.getQueryParameter("siteurl");
                    if (queryParameter == null || queryParameter2 == null || queryParameter.equals("") || queryParameter2.equals("")) {
                        Toast.makeText(this, getString(2131492900), 0).show();
                        finish();
                    }
                    a(queryParameter, queryParameter2);
                    return;
                }
                if (data.getPath().equals("/del/all")) {
                    BookmarkAgent bookmarkAgent = new BookmarkAgent(this);
                    String strC = bookmarkAgent.c();
                    String strD = bookmarkAgent.d();
                    if (!strC.equals("") && !strD.equals("")) {
                        b(strC, strD);
                        return;
                    }
                    toastMakeText = Toast.makeText(this, getString(2131492906), 0);
                } else {
                    toastMakeText = Toast.makeText(this, 2131492903, 0);
                }
                toastMakeText.show();
                finish();
            }
        }
    }
}
