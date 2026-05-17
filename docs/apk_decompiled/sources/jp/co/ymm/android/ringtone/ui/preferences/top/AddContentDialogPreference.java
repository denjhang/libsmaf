package jp.co.ymm.android.ringtone.ui.preferences.top;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.graphics.Color;
import android.net.Uri;
import android.preference.DialogPreference;
import android.util.AttributeSet;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;
import jp.co.ymm.android.ringtone.util.BookmarkAgent;
import jp.co.ymm.android.ringtone.util.a;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class AddContentDialogPreference extends DialogPreference implements a.InterfaceC0036a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Activity f3838a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private boolean f3839b;

    public AddContentDialogPreference(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f3839b = false;
        setDialogIcon(R.drawable.ic_dialog_info);
        setDialogTitle(context.getString(2131493180));
        setDialogMessage(context.getString(2131493117));
    }

    public static void a(Context context) {
        BookmarkAgent bookmarkAgent = new BookmarkAgent(context);
        String strC = bookmarkAgent.c();
        String strA = jp.co.ymm.android.ringtone.util.c.a(strC, bookmarkAgent.d());
        if (strA == null) {
            Toast.makeText(context, 2131492903, 0).show();
            return;
        }
        ((BaseActivity) context).a(25, strC, String.format(context.getString(2131492910), strC + "(" + strA + ")"), new b(context));
    }

    public static void b(Context context) {
        String strB = jp.co.ymm.android.ringtone.util.c.b(context);
        if (strB.equals("")) {
            Toast.makeText(context, 2131492903, 0).show();
        } else {
            context.startActivity(new Intent("android.intent.action.VIEW", Uri.parse(strB)));
        }
    }

    @Override // jp.co.ymm.android.ringtone.util.a.InterfaceC0036a
    public void a(int i, Intent intent) {
    }

    @Override // jp.co.ymm.android.ringtone.util.a.InterfaceC0036a
    public void a(Activity activity) {
        this.f3838a = activity;
    }

    @Override // android.preference.Preference
    protected void onBindView(View view) {
        super.onBindView(view);
        ((TextView) view.findViewById(R.id.title)).setTextColor(Color.parseColor("#FFFF00"));
    }

    @Override // android.preference.DialogPreference, android.preference.Preference
    protected void onClick() {
        String strB = jp.co.ymm.android.ringtone.util.c.b(super.getContext());
        Boolean boolValueOf = Boolean.valueOf(z.a(getContext(), o.Utm_Medium.name(), false));
        if (boolValueOf.booleanValue() && jp.co.ymm.android.ringtone.util.c.d(super.getContext())) {
            jp.co.ymm.android.ringtone.c.a.h.f fVarA = jp.co.ymm.android.ringtone.c.a.h.f.a(2131493140, this.f3839b);
            Activity activity = this.f3838a;
            if (activity instanceof BaseActivity) {
                ((BaseActivity) activity).a(fVarA);
                return;
            }
            return;
        }
        if (boolValueOf.booleanValue() || strB.equals("")) {
            super.onClick();
        } else {
            a(super.getContext());
        }
    }

    @Override // android.preference.DialogPreference
    protected void onDialogClosed(boolean z) {
        super.onDialogClosed(z);
        if (z) {
            jp.co.ymm.android.ringtone.c.a.h.f fVarA = jp.co.ymm.android.ringtone.c.a.h.f.a(2131493180, this.f3839b);
            Activity activity = this.f3838a;
            if (activity instanceof BaseActivity) {
                ((BaseActivity) activity).a(fVarA);
            }
        }
    }
}
