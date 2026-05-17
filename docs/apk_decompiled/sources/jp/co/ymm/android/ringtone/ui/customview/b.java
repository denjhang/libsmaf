package jp.co.ymm.android.ringtone.ui.customview;

import android.content.res.ColorStateList;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import android.widget.AbsListView;
import android.widget.Checkable;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.TextView;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class b extends LinearLayout implements Checkable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ListView f3798a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Checkable f3799b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private TextView f3800c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private TextView f3801d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private TextView f3802e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private TextView f3803f;
    private ColorStateList g;

    public b(ListView listView, int i) {
        super(listView.getContext());
        this.f3798a = null;
        this.f3799b = null;
        this.f3800c = null;
        this.f3801d = null;
        this.f3802e = null;
        this.f3803f = null;
        this.g = null;
        this.f3798a = listView;
        setLayoutParams(new AbsListView.LayoutParams(-1, -2));
        LayoutInflater.from(listView.getContext()).inflate(i, (ViewGroup) this, true);
        this.f3800c = (TextView) findViewById(2131165185);
        this.f3801d = (TextView) findViewById(2131165186);
        this.f3802e = (TextView) findViewById(2131165187);
        this.f3799b = (Checkable) findViewById(2131165184);
    }

    private void a(boolean z) {
        TextView textView = this.f3803f;
        if (textView == null) {
            return;
        }
        textView.setSelected(z);
        if (z) {
            if (!isSelected()) {
                this.f3803f.setTextColor(this.g.getDefaultColor());
            }
            this.f3798a.setOnItemSelectedListener(new a(this));
        }
    }

    public void a(String str, String str2) {
        setFirstText(str);
        setSecondText(str2);
    }

    public void a(String str, String str2, String str3) {
        setFirstText(str);
        setSecondText(str2);
        setThirdText(str3);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void dispatchSetSelected(boolean z) {
        TextView textView;
        super.dispatchSetSelected(z);
        if (!z || (textView = this.f3803f) == null) {
            return;
        }
        textView.setTextColor(this.g);
    }

    @Override // android.widget.Checkable
    public boolean isChecked() {
        return this.f3799b.isChecked();
    }

    @Override // android.widget.Checkable
    public void setChecked(boolean z) {
        if (isChecked() == z) {
            return;
        }
        this.f3799b.setChecked(z);
        a(z);
    }

    public void setFirstText(String str) {
        TextView textView = this.f3800c;
        if (textView != null) {
            textView.setText(str);
        }
    }

    public void setMaqrueeText(int i) {
        this.f3803f = (TextView) findViewById(i);
        g.a(this.f3803f != null);
        this.f3803f.setEllipsize(TextUtils.TruncateAt.MARQUEE);
        this.g = this.f3803f.getTextColors();
    }

    public void setSecondText(String str) {
        TextView textView = this.f3801d;
        if (textView != null) {
            textView.setText(str);
        }
    }

    public void setThirdText(String str) {
        TextView textView = this.f3802e;
        if (textView != null) {
            textView.setText(str);
        }
    }

    @Override // android.widget.Checkable
    public void toggle() {
        this.f3799b.toggle();
        a(isChecked());
    }
}
