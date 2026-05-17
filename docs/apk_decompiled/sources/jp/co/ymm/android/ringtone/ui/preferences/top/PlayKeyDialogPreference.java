package jp.co.ymm.android.ringtone.ui.preferences.top;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.preference.DialogPreference;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;
import jp.co.ymm.android.ringtone.util.a;
import jp.co.ymm.android.ringtone.util.m;
import jp.co.ymm.android.ringtone.util.n;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class PlayKeyDialogPreference extends DialogPreference implements a.InterfaceC0036a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f3840a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Activity f3841b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private EditText f3842c;

    public PlayKeyDialogPreference(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        setDialogLayoutResource(2131296305);
        setDialogIcon((Drawable) null);
    }

    private String a() {
        String strD;
        String strH = m.f().h();
        return (TextUtils.isEmpty(strH) || (strD = z.d(z.a(strH, true))) == null) ? "" : z.a(strD);
    }

    private void a(String str) {
        ((BaseActivity) this.f3841b).b(40, this.f3841b.getString(2131493157), str, new d(this));
    }

    private void b(String str) {
        SharedPreferences.Editor editorEdit = getContext().getSharedPreferences(o.L, 0).edit();
        editorEdit.putString(o.User_Key.name(), z.g(str));
        editorEdit.apply();
        m.f();
    }

    @Override // jp.co.ymm.android.ringtone.util.a.InterfaceC0036a
    public void a(int i, Intent intent) {
    }

    @Override // jp.co.ymm.android.ringtone.util.a.InterfaceC0036a
    public void a(Activity activity) {
        this.f3841b = activity;
    }

    @Override // android.preference.DialogPreference
    protected void onBindDialogView(View view) {
        super.onBindDialogView(view);
        this.f3842c = (EditText) view.findViewById(2131165267);
        this.f3842c.setText("");
        ((TextView) view.findViewById(2131165269)).setText(f3840a);
        f3840a = null;
    }

    @Override // android.preference.Preference
    protected void onBindView(View view) {
        super.onBindView(view);
        if (Build.VERSION.SDK_INT <= 28) {
            Button button = (Button) view.findViewById(R.id.button2);
            if (button != null) {
                button.setVisibility(8);
            }
            Button button2 = (Button) view.findViewById(R.id.button3);
            if (button2 != null) {
                button2.setVisibility(8);
            }
        }
    }

    @Override // android.preference.DialogPreference, android.preference.Preference
    protected void onClick() {
        if ((Build.VERSION.SDK_INT <= 28) && !n.a(this.f3841b, "android.permission.READ_PHONE_STATE")) {
            n.a().a(this.f3841b, new c(this), "android.permission.READ_PHONE_STATE");
            return;
        }
        String strA = a();
        if (28 >= Build.VERSION.SDK_INT || !TextUtils.isEmpty(strA)) {
            a(strA);
        } else {
            super.onClick();
        }
    }

    @Override // android.preference.DialogPreference
    protected void onDialogClosed(boolean z) {
        if (z) {
            String string = this.f3842c.getText().toString();
            String strC = z.c(string);
            if (TextUtils.isEmpty(strC)) {
                f3840a = "キーが正しくありません";
                super.onClick();
                return;
            }
            String strC2 = z.c(z.d(strC));
            if (TextUtils.isEmpty(string)) {
                f3840a = "キーが正しくありません";
                super.onClick();
                return;
            }
            b(z.h(strC2));
        }
        super.onDialogClosed(z);
    }
}
