package jp.co.ymm.android.ringtone.purchase;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.ActivityNotFoundException;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Iterator;
import jp.co.ymm.android.ringtone.MyApplication;
import jp.co.ymm.android.ringtone.b.c;
import jp.co.ymm.android.ringtone.net.e;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;
import jp.co.ymm.android.ringtone.ui.activity.TopActivity;
import jp.co.ymm.android.ringtone.util.f;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.n;
import jp.co.ymm.android.ringtone.util.r;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class ContentsDownLoadActivity extends BaseActivity implements f.a, r.a {

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private e f3754d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private String f3755e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private ProgressDialog f3756f;
    private String g;
    private c.a i;
    private Activity k;
    private String h = null;
    private boolean j = false;
    private boolean l = false;
    private final jp.co.ymm.android.ringtone.net.f m = new b(this);

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str) {
        if (!TextUtils.isEmpty(str)) {
            this.f3755e = "(" + str + ")";
        }
        k();
    }

    private boolean a(Uri uri) {
        if (n.a(getApplicationContext(), "android.permission.WRITE_EXTERNAL_STORAGE")) {
            return false;
        }
        g.a("isPermissionRequest Request : " + this.l);
        this.l = true;
        n.a().a(this, new a(this, uri), "android.permission.WRITE_EXTERNAL_STORAGE");
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean a(String str, String str2) {
        String str3 = "002";
        boolean z = false;
        if (str.equals("000")) {
            z = true;
            str3 = null;
        } else if (str.equals("001")) {
            str3 = "001";
        } else if (!str.equals("002")) {
            str3 = "999";
        }
        if (!z) {
            this.f3755e = str2;
            if (str3 != null) {
                this.f3755e = "(" + this.f3755e + "_" + str3 + ")";
            }
            k();
        }
        return z;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(Uri uri) {
        if (uri != null) {
            String host = uri.getHost();
            if (TextUtils.isEmpty(host)) {
                return;
            }
            if (!host.equals("validate_drmf")) {
                if (host.equals("download_drmf")) {
                    if (a(uri)) {
                        return;
                    }
                    this.f3754d = new e(getApplicationContext());
                    showDialog(7);
                    if (this.f3754d.b(uri, this.m)) {
                        return;
                    }
                } else {
                    if (host.equals("validate")) {
                        e eVar = new e(getApplicationContext());
                        showDialog(6);
                        if (eVar.a(uri, this.m)) {
                            return;
                        }
                        b();
                        this.f3755e = null;
                        k();
                        return;
                    }
                    if (host.equals("download")) {
                        if (a(uri)) {
                            return;
                        }
                        showDialog(7);
                        this.f3754d = new e(getApplicationContext());
                        if (this.f3754d.c(uri, this.m)) {
                            return;
                        }
                    }
                }
                a();
                k();
                return;
            }
            g.a("validate_drmf");
            String queryParameter = uri.getQueryParameter("x");
            if (queryParameter == null) {
                return;
            } else {
                startActivity(new Intent("android.intent.action.VIEW", Uri.parse(queryParameter)));
            }
            finish();
        }
    }

    private b.d.c.d<String, String> h() {
        Intent launchIntentForPackage;
        if (Build.VERSION.SDK_INT <= 28) {
            return null;
        }
        Intent intent = new Intent("android.intent.action.VIEW", Uri.parse("http://www.example.com/"));
        intent.addCategory("android.intent.category.BROWSABLE");
        ArrayList arrayList = new ArrayList();
        PackageManager packageManager = getPackageManager();
        Iterator<ResolveInfo> it = packageManager.queryIntentActivities(intent, 131072).iterator();
        while (it.hasNext()) {
            ActivityInfo activityInfo = it.next().activityInfo;
            if (activityInfo.packageName != null && (launchIntentForPackage = packageManager.getLaunchIntentForPackage(activityInfo.packageName)) != null && launchIntentForPackage.getComponent() != null) {
                String str = launchIntentForPackage.getComponent().getClassName() + "";
                if (activityInfo.packageName.equals("com.android.chrome")) {
                    return new b.d.c.d<>(activityInfo.packageName, str);
                }
                arrayList.add(new b.d.c.d(activityInfo.packageName, str));
            }
        }
        if (arrayList.size() == 0) {
            return null;
        }
        return (b.d.c.d) arrayList.get(0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void i() {
        a();
        b();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void j() {
        if (isFinishing()) {
            return;
        }
        if (c() == -1) {
            showDialog(9);
        } else {
            new Handler(Looper.getMainLooper()).postDelayed(new c(this), 100L);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void k() {
        if (isFinishing()) {
            return;
        }
        showDialog(10);
    }

    private void l() {
        if (n.a().a(this) != null) {
            new AlertDialog.Builder(this).setMessage(getString(2131493008)).setNeutralButton(2131493001, new d(this)).setCancelable(false).create().show();
        }
    }

    private void m() {
    }

    @Override // jp.co.ymm.android.ringtone.ui.activity.BaseActivity, jp.co.ymm.android.ringtone.util.f.a
    public void a(DialogInterface dialogInterface, int i, int i2) {
        switch (i) {
            case 6:
            case 7:
            default:
                return;
            case 8:
                if (((ProgressDialog) dialogInterface).getProgress() >= 100) {
                    return;
                }
                this.j = true;
                m();
                dialogInterface.cancel();
                break;
            case 9:
                if (i2 == -1) {
                    dialogInterface.dismiss();
                    finish();
                    Intent intent = new Intent(this, (Class<?>) TopActivity.class);
                    intent.putExtra("jp.co.ymm.android.ringtone.intent.INTENT_START_POPUP", false);
                    startActivity(intent);
                    return;
                }
                if (i2 == -2) {
                    dialogInterface.dismiss();
                    androidx.core.app.a.a(this.k);
                    b.d.c.d<String, String> dVarH = h();
                    if (dVarH == null || dVarH.f749a == null || dVarH.f750b == null) {
                        return;
                    }
                    try {
                        Intent intent2 = new Intent("android.intent.action.VIEW");
                        intent2.setClassName(dVarH.f749a, dVarH.f750b);
                        intent2.setFlags(268435456);
                        startActivity(intent2);
                        return;
                    } catch (ActivityNotFoundException e2) {
                        e2.printStackTrace();
                        return;
                    }
                }
                return;
            case 10:
                if (i2 != -1) {
                    return;
                } else {
                    dialogInterface.dismiss();
                }
                break;
        }
        finish();
    }

    @Override // jp.co.ymm.android.ringtone.ui.activity.BaseActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        Bundle extras;
        String string;
        StringBuilder sb;
        String str;
        super.onCreate(bundle);
        this.k = this;
        this.l = false;
        if (MyApplication.b((Activity) this)) {
            setContentView(2131296302);
            Intent intent = getIntent();
            Uri data = intent.getData();
            if (data == null && (extras = intent.getExtras()) != null) {
                String str2 = "x";
                if (extras.getString("x") != null) {
                    sb = new StringBuilder();
                    str = "ymmringtone://validate_drmf?x=";
                } else {
                    str2 = "session_id";
                    if (extras.getString("session_id") != null) {
                        sb = new StringBuilder();
                        str = "ymmringtone://download_drmf?session_id=";
                    } else {
                        str2 = "vid";
                        if (extras.getString("vid") != null) {
                            sb = new StringBuilder();
                            str = "ymmringtone://validate?vid=";
                        } else {
                            string = "ymmringtone://download?aid=" + extras.getString("aid") + "&cntcode=" + extras.getString("cntcode") + "&sngname=" + extras.getString("sngname") + "&artname=" + extras.getString("artname");
                            data = Uri.parse(string);
                        }
                    }
                }
                sb.append(str);
                sb.append(extras.getString(str2));
                string = sb.toString();
                data = Uri.parse(string);
            }
            b(data);
        }
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        int i2;
        switch (i) {
            case 6:
                i2 = 6;
                a(i2);
                break;
            case 7:
                a(7, -1, this);
                break;
            case 8:
                i2 = 8;
                a(i2);
                break;
            case 9:
                a(9, this.g, this.f3754d, this.i, this);
                break;
            case 10:
                a(10, this);
                break;
        }
        return super.onCreateDialog(i);
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        g.a("onDestroy()");
        i();
        m();
        this.f3754d = null;
        this.f3755e = null;
        this.f3756f = null;
        b();
        this.g = null;
        this.h = null;
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
        g.a("onPause()");
        ((MyApplication) getApplicationContext()).f3462e = false;
    }

    @Override // android.app.Activity
    protected void onPrepareDialog(int i, Dialog dialog) {
        String string;
        StringBuilder sb;
        if (i == 8) {
            a(dialog);
        } else if (i == 10) {
            AlertDialog alertDialog = (AlertDialog) dialog;
            int i2 = 2131493008;
            if (TextUtils.isEmpty(this.f3755e)) {
                string = getString(2131493008);
            } else {
                if (this.f3755e.indexOf("_") != -1) {
                    sb = new StringBuilder();
                    i2 = 2131493009;
                } else {
                    sb = new StringBuilder();
                }
                sb.append(getString(i2));
                sb.append(this.f3755e);
                string = sb.toString();
            }
            alertDialog.setMessage(string);
        }
        super.onPrepareDialog(i, dialog);
    }

    @Override // jp.co.ymm.android.ringtone.ui.activity.BaseActivity, android.app.Activity
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        n.a().a(this, strArr, iArr);
        l();
    }

    @Override // jp.co.ymm.android.ringtone.ui.activity.BaseActivity, android.app.Activity
    public void onResume() {
        super.onResume();
        g.a("onResume()");
    }

    @Override // jp.co.ymm.android.ringtone.ui.activity.BaseActivity, android.app.Activity
    protected void onStart() {
        super.onStart();
        g.a("onStart()");
    }

    @Override // android.app.Activity
    protected void onStop() {
        super.onStop();
        g.a("onStop()");
    }

    @Override // android.app.Activity
    protected void onUserLeaveHint() {
        super.onUserLeaveHint();
        g.a("onUserLeaveHint");
        g.a("isPermissionRequest : " + this.l);
        if (this.l) {
            return;
        }
        g.a("finish()!!!!!!!");
        finish();
    }
}
