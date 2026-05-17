package jp.co.ymm.android.ringtone.ui.activity;

import android.R;
import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.Fragment;
import android.app.FragmentTransaction;
import android.content.DialogInterface;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.webkit.WebView;
import android.widget.CheckBox;
import android.widget.TextView;
import java.util.Collection;
import java.util.Date;
import jp.co.ymm.android.ringtone.b.c;
import jp.co.ymm.android.ringtone.mail.carrier.CarrierKddiEmail;
import jp.co.ymm.android.ringtone.util.f;
import jp.co.ymm.android.ringtone.util.n;
import jp.co.ymm.android.ringtone.util.r;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class BaseActivity extends Activity implements f.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private jp.co.ymm.android.ringtone.util.f f3772a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private r f3773b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private String f3774c;

    private void g() {
        String strA = n.a().a(this);
        if (strA != null) {
            a(strA, this);
        }
    }

    public void a() {
        this.f3772a.b();
    }

    public void a(int i) {
        this.f3773b.a(i);
    }

    public void a(int i, int i2, int i3, int i4, f.a aVar) {
        jp.co.ymm.android.ringtone.util.f fVar = this.f3772a;
        fVar.a(i, aVar);
        fVar.b(i2);
        fVar.c(i3);
        fVar.a(i4);
        fVar.a();
        fVar.e();
    }

    public void a(int i, int i2, String str) {
        jp.co.ymm.android.ringtone.util.f fVar = this.f3772a;
        fVar.a(i, (f.a) null);
        fVar.c(i2);
        fVar.b(str);
        fVar.a();
        fVar.e();
        AlertDialog alertDialogE = e();
        View viewFindViewById = alertDialogE.findViewById(2131165230);
        if (viewFindViewById != null) {
            viewFindViewById.setOnClickListener(new e(this, alertDialogE));
        }
        View viewFindViewById2 = alertDialogE.findViewById(2131165229);
        if (viewFindViewById2 != null) {
            ((CheckBox) viewFindViewById2).setOnCheckedChangeListener(new f(this));
        }
        TextView textView = (TextView) alertDialogE.findViewById(2131165272);
        textView.setText(2131493094);
        TextView textView2 = (TextView) alertDialogE.findViewById(2131165270);
        TextView textView3 = (TextView) alertDialogE.findViewById(2131165271);
        if (28 < Build.VERSION.SDK_INT && TextUtils.isEmpty(str)) {
            textView.setVisibility(8);
            textView2.setText(getResources().getText(2131493088));
            textView3.setText(getResources().getText(2131493089));
        } else {
            textView.setVisibility(0);
            textView2.setText(getResources().getText(2131493090));
            textView3.setText(getResources().getText(2131493091));
            if (TextUtils.isEmpty(str)) {
                textView.setText(2131493095);
            }
        }
    }

    public void a(int i, int i2, f.a aVar) {
        jp.co.ymm.android.ringtone.util.f fVar = this.f3772a;
        fVar.a(i, aVar);
        fVar.c(i2);
        fVar.a();
        fVar.e();
    }

    public void a(int i, WebView webView, f.a aVar) {
        jp.co.ymm.android.ringtone.util.f fVar = this.f3772a;
        fVar.a(i, aVar);
        fVar.a(webView);
        fVar.a();
        fVar.e();
    }

    public void a(int i, String str, String str2, f.a aVar) {
        jp.co.ymm.android.ringtone.util.f fVar = this.f3772a;
        fVar.a(i, aVar);
        fVar.b(str);
        fVar.a(str2);
        fVar.a();
        fVar.e();
    }

    public void a(int i, String str, jp.co.ymm.android.ringtone.net.e eVar, c.a aVar, f.a aVar2) {
        jp.co.ymm.android.ringtone.util.f fVar = this.f3772a;
        fVar.a(i, aVar2);
        fVar.d(str);
        fVar.a(eVar);
        fVar.a(aVar);
        fVar.a();
        fVar.e();
    }

    public void a(int i, String str, f.a aVar) {
        jp.co.ymm.android.ringtone.util.f fVar = this.f3772a;
        fVar.a(i, aVar);
        fVar.b(str);
        fVar.a();
        fVar.e();
    }

    public void a(int i, String str, String[] strArr, f.a aVar) {
        jp.co.ymm.android.ringtone.util.f fVar = this.f3772a;
        fVar.a(i, aVar);
        fVar.c(str);
        fVar.a(strArr);
        fVar.a();
        fVar.e();
    }

    public void a(int i, Collection<CharSequence> collection, f.a aVar) {
        jp.co.ymm.android.ringtone.util.f fVar = this.f3772a;
        fVar.a(i, aVar);
        fVar.a(collection);
        fVar.a();
        fVar.e();
    }

    public void a(int i, Date date, CharSequence[] charSequenceArr, f.a aVar) {
        jp.co.ymm.android.ringtone.util.f fVar = this.f3772a;
        fVar.a(i, aVar);
        fVar.a(date);
        fVar.a(charSequenceArr);
        fVar.a();
        fVar.e();
    }

    public void a(int i, c.a aVar, String[] strArr, f.a aVar2) {
        jp.co.ymm.android.ringtone.util.f fVar = this.f3772a;
        fVar.a(i, aVar2);
        fVar.a(aVar);
        fVar.a(strArr);
        fVar.a();
        fVar.e();
    }

    public void a(int i, f.a aVar) {
        jp.co.ymm.android.ringtone.util.f fVar = this.f3772a;
        fVar.a(i, aVar);
        fVar.a();
        fVar.e();
    }

    public void a(Dialog dialog) {
        this.f3773b.a(dialog);
    }

    public void a(Fragment fragment) {
        a(fragment, 0);
    }

    public void a(Fragment fragment, int i) {
        a(fragment, i, 0);
    }

    public void a(Fragment fragment, int i, int i2) {
        fragment.setTargetFragment(getFragmentManager().findFragmentById(2131165331), i);
        FragmentTransaction fragmentTransactionBeginTransaction = getFragmentManager().beginTransaction();
        fragmentTransactionBeginTransaction.setTransition(i2);
        fragmentTransactionBeginTransaction.replace(2131165331, fragment);
        fragmentTransactionBeginTransaction.addToBackStack(null);
        fragmentTransactionBeginTransaction.commit();
    }

    public void a(DialogInterface dialogInterface, int i, int i2) {
        if (i == 36 || i == 37 || i == 38 || i == 39) {
            String str = i == 36 ? "android.permission.WRITE_EXTERNAL_STORAGE" : i == 37 ? "android.permission.READ_PHONE_STATE" : i == 38 ? "android.permission.READ_CONTACTS" : i == 39 ? "android.permission.RECEIVE_SMS" : "";
            if (i2 != -1) {
                n.a().a(str, n.a(this, str));
                g();
                return;
            }
            this.f3774c = str;
            Intent intent = new Intent();
            intent.setAction("android.settings.APPLICATION_DETAILS_SETTINGS");
            intent.setData(Uri.fromParts("package", getPackageName(), null));
            startActivity(intent);
        }
    }

    public void a(String str, f.a aVar) {
        int i = str.equals("android.permission.WRITE_EXTERNAL_STORAGE") ? 36 : str.equals("android.permission.READ_PHONE_STATE") ? 37 : str.equals("android.permission.READ_CONTACTS") ? 38 : str.equals("android.permission.RECEIVE_SMS") ? 39 : -1;
        if (i != -1) {
            jp.co.ymm.android.ringtone.util.f fVar = this.f3772a;
            fVar.a(i, aVar);
            fVar.a();
            fVar.e();
        }
    }

    public void a(boolean z) {
        this.f3773b.a(z);
    }

    public void b() {
        this.f3773b.a();
    }

    public void b(int i) {
        this.f3773b.b(i);
    }

    public void b(int i, String str, String str2, f.a aVar) {
        TextView textView;
        int i2;
        jp.co.ymm.android.ringtone.util.f fVar = this.f3772a;
        fVar.a(i, aVar);
        fVar.b(str);
        fVar.c(2131296280);
        fVar.a();
        fVar.e();
        View viewFindViewById = e().findViewById(2131165272);
        if (viewFindViewById != null) {
            if (TextUtils.isEmpty(str2)) {
                textView = (TextView) viewFindViewById;
                i2 = 2131493095;
            } else {
                textView = (TextView) viewFindViewById;
                i2 = 2131493094;
            }
            textView.setText(i2);
        }
        View viewFindViewById2 = e().findViewById(2131165268);
        if (viewFindViewById2 != null) {
            ((TextView) viewFindViewById2).setText(str2);
        }
        View viewFindViewById3 = e().findViewById(2131165273);
        if (viewFindViewById3 != null) {
            ((TextView) viewFindViewById3).setText(getApplicationContext().getString(2131493097));
        }
        View viewFindViewById4 = e().findViewById(R.id.message);
        if (viewFindViewById4 != null) {
            ((TextView) viewFindViewById4).setTextIsSelectable(true);
        }
    }

    public void b(boolean z) {
        this.f3772a.a(z);
    }

    public int c() {
        return this.f3772a.c();
    }

    public int d() {
        return this.f3773b.b();
    }

    public AlertDialog e() {
        return (AlertDialog) this.f3772a.d();
    }

    public boolean f() {
        return this.f3773b.c();
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.f3772a = new jp.co.ymm.android.ringtone.util.f(this);
        this.f3773b = new r(this);
    }

    @Override // android.app.Activity
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        n.a().a(this, strArr, iArr);
        g();
    }

    @Override // android.app.Activity
    public void onResume() {
        super.onResume();
        if (this.f3774c != null) {
            n nVarA = n.a();
            String str = this.f3774c;
            nVarA.a(str, n.a(this, str));
            this.f3774c = null;
            g();
        }
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        if (n.a(getApplicationContext(), "android.permission.WRITE_EXTERNAL_STORAGE")) {
            return;
        }
        CarrierKddiEmail.b(this);
    }
}
