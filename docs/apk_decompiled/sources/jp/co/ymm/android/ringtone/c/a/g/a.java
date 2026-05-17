package jp.co.ymm.android.ringtone.c.a.g;

import android.animation.Animator;
import android.animation.ObjectAnimator;
import android.app.Activity;
import android.app.Fragment;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ListView;
import android.widget.SimpleAdapter;
import android.widget.TextView;
import d.a.a.a.m;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Date;
import java.util.List;
import java.util.Map;
import jp.co.ymm.android.ringtone.b.c;
import jp.co.ymm.android.ringtone.c.a.d.k;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;
import jp.co.ymm.android.ringtone.util.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a extends Fragment implements f.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected jp.co.ymm.android.ringtone.ui.activity.a.a f3581a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    protected m f3582b;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    protected SimpleAdapter f3584d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    protected View f3585e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    protected ListView f3586f;
    protected TextView g;
    protected TextView h;
    protected String i;
    protected String j;
    protected String k;
    protected BaseActivity l;
    protected int m;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    protected List<Map<String, Object>> f3583c = new ArrayList();
    protected boolean n = true;

    protected void a() {
        if (getFragmentManager().getBackStackEntryCount() != 0) {
            getFragmentManager().popBackStack();
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    public void a(int i) {
        BaseActivity baseActivity = this.l;
        if (baseActivity != null) {
            baseActivity.a(i, this);
        }
    }

    protected void a(int i, int i2) {
        BaseActivity baseActivity = this.l;
        if (baseActivity != null) {
            baseActivity.a(i, i2, this);
        }
    }

    protected void a(int i, String str) {
        BaseActivity baseActivity = this.l;
        if (baseActivity != null) {
            baseActivity.a(i, str, this);
        }
    }

    protected void a(int i, String str, String[] strArr) {
        BaseActivity baseActivity = this.l;
        if (baseActivity != null) {
            baseActivity.a(i, str, strArr, this);
        }
    }

    protected void a(int i, Collection<CharSequence> collection) {
        BaseActivity baseActivity = this.l;
        if (baseActivity != null) {
            baseActivity.a(i, collection, this);
        }
    }

    protected void a(int i, Date date, CharSequence[] charSequenceArr) {
        BaseActivity baseActivity = this.l;
        if (baseActivity != null) {
            baseActivity.a(i, date, charSequenceArr, this);
        }
    }

    protected void a(int i, c.a aVar, String[] strArr) {
        BaseActivity baseActivity = this.l;
        if (baseActivity != null) {
            baseActivity.a(i, aVar, strArr, this);
        }
    }

    protected void a(Fragment fragment) {
        BaseActivity baseActivity = this.l;
        if (baseActivity != null) {
            baseActivity.a(fragment);
        }
    }

    protected void a(Fragment fragment, int i, int i2) {
        BaseActivity baseActivity = this.l;
        if (baseActivity != null) {
            baseActivity.a(fragment, i, i2);
        }
    }

    public void a(DialogInterface dialogInterface, int i, int i2) {
    }

    protected void a(String str, String str2, int i) {
        a(k.a(str + String.format(getString(i), new Object[0]), "Volume_Ringtone", true, getClass().getSimpleName(), str2, false), str2.equals("") ? 1 : 2, 4097);
    }

    protected void a(String str, String str2, String str3, String str4) {
        this.f3581a.a(str, str2, str3, str4);
    }

    protected void b() {
        if (this.f3583c.size() > 0) {
            this.g.setVisibility(0);
            this.f3586f.setVisibility(0);
            this.h.setVisibility(8);
        } else {
            this.g.setVisibility(8);
            this.f3586f.setVisibility(8);
            this.h.setVisibility(0);
        }
        this.f3584d.notifyDataSetChanged();
    }

    protected void b(String str) {
        if (this.k == null || this.j == null || TextUtils.isEmpty(str)) {
            return;
        }
        this.f3581a.a(this.k, this.j, str, this.i);
    }

    @Override // android.app.Fragment
    public void onAttach(Activity activity) {
        super.onAttach(activity);
        if (activity instanceof BaseActivity) {
            this.l = (BaseActivity) activity;
        }
    }

    @Override // android.app.Fragment
    public void onAttach(Context context) {
        super.onAttach(context);
        if (context instanceof BaseActivity) {
            this.l = (BaseActivity) context;
        }
    }

    @Override // android.app.Fragment
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.f3581a = new jp.co.ymm.android.ringtone.ui.activity.a.a(getActivity());
        this.i = getClass().getName();
    }

    @Override // android.app.Fragment
    public Animator onCreateAnimator(int i, boolean z, int i2) {
        if (!this.n) {
            return null;
        }
        if (i == 4097) {
            if (!z) {
                return ObjectAnimator.ofFloat(getView(), "x", 0.0f, -this.m);
            }
        } else if (i == 8194 && z) {
            return ObjectAnimator.ofFloat(getView(), "x", -this.m, 0.0f);
        }
        return super.onCreateAnimator(i, z, i2);
    }

    @Override // android.app.Fragment
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        this.m = viewGroup.getWidth();
        return super.onCreateView(layoutInflater, viewGroup, bundle);
    }

    @Override // android.app.Fragment
    public void onDestroy() {
        super.onDestroy();
        this.f3581a.a();
    }

    @Override // android.app.Fragment
    public void onDetach() {
        super.onDetach();
        this.l = null;
    }

    @Override // android.app.Fragment
    public void onPause() {
        super.onPause();
        m mVar = this.f3582b;
        if (mVar != null) {
            mVar.a();
        }
    }

    @Override // android.app.Fragment
    public void onResume() {
        super.onResume();
        jp.co.ymm.android.ringtone.util.c.a(getActivity(), this.f3582b);
    }

    @Override // android.app.Fragment
    public void onStart() {
        super.onStart();
        this.f3581a.b();
    }

    @Override // android.app.Fragment
    public void onStop() {
        super.onStop();
        this.f3581a.c();
    }
}
