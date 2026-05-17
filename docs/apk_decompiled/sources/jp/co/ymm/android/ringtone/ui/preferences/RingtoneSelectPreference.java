package jp.co.ymm.android.ringtone.ui.preferences;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.res.TypedArray;
import android.preference.Preference;
import android.preference.PreferenceManager;
import android.text.TextUtils;
import android.util.AttributeSet;
import java.util.List;
import jp.co.ymm.android.ringtone.b.c;
import jp.co.ymm.android.ringtone.b.d;
import jp.co.ymm.android.ringtone.b.e;
import jp.co.ymm.android.ringtone.j;
import jp.co.ymm.android.ringtone.util.a;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.n;
import jp.co.ymm.android.ringtone.util.o;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class RingtoneSelectPreference extends Preference implements a.InterfaceC0036a, e, n.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Activity f3805a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private String f3806b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private String f3807c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private Boolean f3808d;

    public RingtoneSelectPreference(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, R.attr.ringtonePreferenceStyle);
    }

    public RingtoneSelectPreference(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.f3805a = null;
        this.f3806b = null;
        this.f3807c = null;
        this.f3808d = false;
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, j.RingtonePreference);
        this.f3806b = typedArrayObtainStyledAttributes.getString(0);
        this.f3807c = typedArrayObtainStyledAttributes.getString(1);
        typedArrayObtainStyledAttributes.recycle();
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0047  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x005e  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0072  */
    /* JADX WARN: Removed duplicated region for block: B:19:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void b() {
        /*
            r7 = this;
            android.content.Context r0 = r7.getContext()
            java.lang.String r1 = r7.getKey()
            jp.co.ymm.android.ringtone.util.o r2 = jp.co.ymm.android.ringtone.util.o.Tone_Carrier
            java.lang.String r2 = r2.name()
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L1b
            java.lang.String r0 = jp.co.ymm.android.ringtone.util.l.g(r0)
        L18:
            r7.f3806b = r0
            goto L3f
        L1b:
            java.lang.String r1 = r7.getKey()
            jp.co.ymm.android.ringtone.util.o r2 = jp.co.ymm.android.ringtone.util.o.Tone_SMS
            java.lang.String r2 = r2.name()
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L3f
            java.lang.String r1 = jp.co.ymm.android.ringtone.util.l.f(r0)
            java.lang.String r2 = jp.co.ymm.android.ringtone.util.o.U
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L3f
            r1 = 2131493162(0x7f0c012a, float:1.8609796E38)
            java.lang.String r0 = r0.getString(r1)
            goto L18
        L3f:
            java.lang.Boolean r0 = r7.f3808d
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L5e
            java.lang.String r1 = r7.f3806b
            r0 = 1
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r0)
            java.lang.String r4 = r7.getKey()
            java.lang.String r5 = r7.a()
            r6 = 0
            java.lang.String r2 = ""
            jp.co.ymm.android.ringtone.c.a.d.k r0 = jp.co.ymm.android.ringtone.c.a.d.k.a(r1, r2, r3, r4, r5, r6)
            goto L6c
        L5e:
            java.lang.String r0 = r7.getKey()
            java.lang.String r1 = r7.f3806b
            java.lang.String r2 = r7.a()
            jp.co.ymm.android.ringtone.c.a.d.k r0 = jp.co.ymm.android.ringtone.c.a.d.k.a(r0, r1, r2)
        L6c:
            android.app.Activity r1 = r7.f3805a
            boolean r2 = r1 instanceof jp.co.ymm.android.ringtone.ui.activity.BaseActivity
            if (r2 == 0) goto L77
            jp.co.ymm.android.ringtone.ui.activity.BaseActivity r1 = (jp.co.ymm.android.ringtone.ui.activity.BaseActivity) r1
            r1.a(r0)
        L77:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.ymm.android.ringtone.ui.preferences.RingtoneSelectPreference.b():void");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(d dVar) {
        if (!getSharedPreferences().contains(getKey())) {
            setSummary(2131493136);
            return;
        }
        c cVarA = dVar.a(a());
        if (cVarA != null) {
            setSummary(cVarA.getAttributes().f3513a);
        } else {
            setSummary(2131493073);
        }
    }

    private void c() {
        b(d.a());
    }

    public String a() {
        return getPersistedString("");
    }

    @Override // jp.co.ymm.android.ringtone.util.a.InterfaceC0036a
    public void a(int i, Intent intent) {
        if (i != -1) {
            return;
        }
        a(intent.getStringExtra("tone-id"));
        c();
    }

    @Override // jp.co.ymm.android.ringtone.util.a.InterfaceC0036a
    public void a(Activity activity) {
        this.f3805a = activity;
        c();
        d.a(this);
    }

    public void a(Boolean bool) {
        this.f3808d = bool;
    }

    public void a(String str) {
        SharedPreferences.Editor editorEdit = getSharedPreferences().edit();
        if (TextUtils.isEmpty(str)) {
            editorEdit.remove(getKey());
        } else {
            editorEdit.putString(getKey(), str);
        }
        editorEdit.commit();
        c();
    }

    @Override // jp.co.ymm.android.ringtone.util.n.b
    public void a(List<String> list, boolean z) {
        g.b("==== onPermissionResult:" + z + ", " + getKey());
        if (z) {
            b();
        }
    }

    @Override // jp.co.ymm.android.ringtone.b.e
    public void a(d dVar) {
        g.a("*");
        Activity activity = this.f3805a;
        if (activity == null) {
            return;
        }
        activity.runOnUiThread(new a(this, dVar));
    }

    @Override // android.preference.Preference
    protected void onAttachedToHierarchy(PreferenceManager preferenceManager) {
        super.onAttachedToHierarchy(preferenceManager);
    }

    @Override // android.preference.Preference
    protected void onClick() {
        if (getKey().equals(o.Tone_SMS.name())) {
            Activity activity = this.f3805a;
            if (activity == null) {
                return;
            }
            if (!n.a(activity, "android.permission.RECEIVE_SMS")) {
                n.a().a(this.f3805a, this, "android.permission.RECEIVE_SMS");
                return;
            }
        }
        b();
    }

    @Override // android.preference.Preference
    protected void onPrepareForRemoval() {
        super.onPrepareForRemoval();
        d.b(this);
    }
}
