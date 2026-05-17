package jp.co.ymm.android.ringtone.util;

import android.R;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.text.Html;
import android.text.Spanned;
import android.text.TextUtils;
import android.text.format.DateFormat;
import android.view.ContextThemeWrapper;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.Button;
import android.widget.TextView;
import java.util.Collection;
import java.util.Date;
import jp.co.ymm.android.ringtone.b.c;
import org.apache.http.conn.params.ConnManagerParams;
import org.apache.http.protocol.HTTP;
import org.apache.http.util.LangUtils;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class f implements DialogInterface.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final DialogInterface.OnKeyListener f3872a = new d();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Context f3873b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private a f3874c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private Dialog f3875d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private int f3876e = -1;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private String f3877f = null;
    private String g = null;
    private Collection<CharSequence> h = null;
    private String i = null;
    private jp.co.ymm.android.ringtone.net.e j = null;
    private c.a k = null;
    private Date l = null;
    private int m = -1;
    private String n = "";
    private CharSequence[] o = null;
    private String[] p = null;
    private View q = null;
    private WebView r = null;
    private int s = -1;
    private int t = 0;
    private boolean u = false;

    public interface a {
        void a(DialogInterface dialogInterface, int i, int i2);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public f(Context context) {
        this.f3873b = context;
        if (context instanceof a) {
            this.f3874c = (a) context;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void f() {
        this.f3875d = null;
        this.t = 0;
        this.f3876e = -1;
        this.f3874c = null;
        this.f3877f = null;
        this.g = null;
        this.h = null;
        this.i = null;
        this.j = null;
        this.k = null;
        this.l = null;
        this.m = -1;
        this.o = null;
        this.p = null;
        this.s = -1;
        this.u = false;
    }

    public Dialog a(int i, int i2) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this.f3873b);
        builder.setMessage(i);
        builder.setNeutralButton(i2, this);
        builder.setOnKeyListener(f3872a);
        return builder.create();
    }

    public Dialog a(int i, int i2, int i3, int i4) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this.f3873b);
        builder.setTitle(i);
        builder.setIcon(i2);
        builder.setCancelable(false);
        builder.setMessage(i3);
        builder.setPositiveButton(i4, this);
        builder.setOnKeyListener(f3872a);
        return builder.create();
    }

    public Dialog a(int i, int i2, int i3, int i4, int i5) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this.f3873b);
        builder.setTitle(i);
        if (i2 != -1) {
            builder.setIcon(i2);
        }
        builder.setCancelable(false);
        builder.setMessage(i3);
        builder.setPositiveButton(i4, this);
        if (i5 != -1) {
            builder.setNegativeButton(i5, this);
        }
        builder.setOnKeyListener(f3872a);
        return builder.create();
    }

    public Dialog a(int i, int i2, int i3, int i4, String str, jp.co.ymm.android.ringtone.net.e eVar, c.a aVar) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this.f3873b);
        builder.setTitle(i);
        builder.setIcon(i2);
        builder.setCancelable(false);
        jp.co.ymm.android.ringtone.b.c cVarA = jp.co.ymm.android.ringtone.b.d.a().a(str);
        c.a aVarA = eVar != null ? eVar.a() : null;
        if (aVar != null) {
            new c.a();
            aVarA = aVar;
        }
        c.a aVarA2 = aVarA != null ? cVarA.a(aVarA) : cVarA.getAttributes();
        builder.setMessage(aVarA2.f3513a + "/" + aVarA2.f3514b + this.f3873b.getString(2131493004));
        builder.setPositiveButton(i3, this);
        builder.setNegativeButton(i4, this);
        builder.setOnKeyListener(f3872a);
        return builder.create();
    }

    public Dialog a(int i, int i2, Spanned spanned, int i3) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this.f3873b);
        builder.setTitle(i);
        builder.setIcon((i2 == -1 ? null : Integer.valueOf(i2)).intValue());
        builder.setCancelable(false);
        builder.setMessage(spanned);
        builder.setPositiveButton(i3, this);
        builder.setOnKeyListener(f3872a);
        return builder.create();
    }

    public Dialog a(int i, int i2, Boolean bool, View view) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this.f3873b);
        builder.setTitle(i);
        builder.setIcon(i2);
        builder.setCancelable(bool.booleanValue());
        builder.setView(view);
        builder.setOnKeyListener(f3872a);
        return builder.create();
    }

    public Dialog a(int i, int i2, Boolean bool, View view, int i3, int i4) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this.f3873b);
        builder.setTitle(i);
        builder.setIcon(i2);
        builder.setCancelable(bool.booleanValue());
        builder.setView(view);
        if (i4 == -1) {
            builder.setNegativeButton(i3, this);
        } else {
            builder.setPositiveButton(i3, this);
            builder.setNegativeButton(i4, this);
        }
        builder.setOnKeyListener(f3872a);
        return builder.create();
    }

    public Dialog a(int i, String str, int i2, int i3, int i4, int i5) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this.f3873b);
        builder.setTitle(i);
        builder.setIcon(i2);
        builder.setCancelable(false);
        builder.setMessage(String.format(this.f3873b.getString(i3), str));
        builder.setPositiveButton(i4, this);
        builder.setNegativeButton(i5, this);
        builder.setOnKeyListener(f3872a);
        return builder.create();
    }

    public Dialog a(View view, int i, int i2) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this.f3873b);
        builder.setView(view);
        builder.setPositiveButton(i, this);
        builder.setNegativeButton(i2, this);
        builder.setCancelable(false);
        return builder.create();
    }

    public Dialog a(View view, String str) {
        AlertDialog.Builder builder = new AlertDialog.Builder(new ContextThemeWrapper(this.f3873b, 2131558402));
        ((TextView) view.findViewById(2131165268)).setText(str);
        builder.setView(view);
        builder.setIcon((Drawable) null);
        builder.setCancelable(false);
        return builder.create();
    }

    public Dialog a(String str, int i, String str2, int i2, int i3) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this.f3873b);
        builder.setTitle(str);
        builder.setIcon(i);
        builder.setCancelable(false);
        builder.setMessage(str2);
        builder.setPositiveButton(i2, this);
        builder.setNegativeButton(i3, this);
        builder.setOnKeyListener(f3872a);
        return builder.create();
    }

    public Dialog a(String str, View view, int i, int i2) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this.f3873b);
        builder.setTitle(str);
        builder.setIcon((Drawable) null);
        builder.setCancelable(true);
        builder.setView(view);
        builder.setPositiveButton(i, this);
        if (28 < Build.VERSION.SDK_INT) {
            builder.setNegativeButton(i2, this);
        }
        builder.setOnKeyListener(f3872a);
        return builder.create();
    }

    public Dialog a(String str, String[] strArr) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this.f3873b);
        builder.setTitle(str);
        builder.setItems(strArr, this);
        return builder.create();
    }

    public Dialog a(Date date, int i, CharSequence[] charSequenceArr) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this.f3873b);
        builder.setTitle(DateFormat.getTimeFormat(this.f3873b).format(Long.valueOf(date.getTime())));
        builder.setItems(charSequenceArr, this);
        builder.setIcon(i);
        return builder.create();
    }

    public Dialog a(c.a aVar, String[] strArr) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this.f3873b);
        builder.setTitle(aVar.f3513a);
        builder.setItems(strArr, this);
        return builder.create();
    }

    /* JADX WARN: Failed to find 'out' block for switch in B:3:0x0013. Please report as an issue. */
    public f a() {
        int i;
        int i2;
        int i3;
        int i4;
        int i5;
        Dialog dialogA;
        int i6;
        String str;
        int i7;
        int i8;
        int i9;
        int i10;
        int i11;
        View view;
        int i12;
        int i13;
        int i14;
        int i15;
        switch (this.f3876e) {
            case 1:
                i = 2131493138;
                i2 = R.drawable.ic_dialog_info;
                i3 = 2131493137;
                i4 = 2131492946;
                i5 = 2131492922;
                dialogA = a(i, i2, i3, i4, i5);
                this.f3875d = dialogA;
                break;
            case 3:
                i = 2131493116;
                i2 = R.drawable.ic_dialog_alert;
                i3 = 2131493115;
                i4 = 2131492949;
                i5 = 2131492922;
                dialogA = a(i, i2, i3, i4, i5);
                this.f3875d = dialogA;
                break;
            case 4:
                i = 2131493132;
                i2 = R.drawable.ic_dialog_info;
                i3 = 2131493131;
                i4 = 2131492947;
                i5 = 2131492923;
                dialogA = a(i, i2, i3, i4, i5);
                this.f3875d = dialogA;
                break;
            case 5:
                i = 2131493132;
                i2 = R.drawable.ic_dialog_info;
                i3 = 2131493019;
                i4 = 2131492944;
                i5 = 2131492922;
                dialogA = a(i, i2, i3, i4, i5);
                this.f3875d = dialogA;
                break;
            case 7:
                dialogA = a(2131493016, R.drawable.ic_menu_more, (Boolean) false, this.q);
                this.f3875d = dialogA;
                break;
            case 9:
                dialogA = a(2131493005, 2131493001, 2131493003, 2131493002, this.i, this.j, this.k);
                this.f3875d = dialogA;
                break;
            case 10:
                dialogA = a(2131493018, R.drawable.ic_dialog_alert, 2131493008, 2131492925);
                this.f3875d = dialogA;
                break;
            case 11:
                i = 2131492920;
                i2 = R.drawable.ic_dialog_alert;
                i3 = 2131492919;
                i4 = 2131492946;
                i5 = 2131492922;
                dialogA = a(i, i2, i3, i4, i5);
                this.f3875d = dialogA;
                break;
            case 12:
                dialogA = a(this.k, this.p);
                this.f3875d = dialogA;
                break;
            case HTTP.CR /* 13 */:
                i6 = 2131493168;
                str = this.f3877f;
                i7 = R.drawable.ic_dialog_alert;
                i8 = 2131493167;
                dialogA = a(i6, str, i7, i8, 2131492946, 2131492922);
                this.f3875d = dialogA;
                break;
            case 14:
                dialogA = a(2131493154, 0, Html.fromHtml(TextUtils.join("<br>", this.h)), 2131492946);
                this.f3875d = dialogA;
                break;
            case 15:
            case 18:
                i = 2131493143;
                i2 = 0;
                i3 = 2131493146;
                i4 = 2131492952;
                i5 = 2131492945;
                dialogA = a(i, i2, i3, i4, i5);
                this.f3875d = dialogA;
                break;
            case 16:
                dialogA = a(this.l, R.drawable.ic_lock_idle_alarm, this.o);
                this.f3875d = dialogA;
                break;
            case LangUtils.HASH_SEED /* 17 */:
                dialogA = a(2131493109, 2131492946);
                this.f3875d = dialogA;
                break;
            case 19:
                i9 = 2131492954;
                dialogA = a(i9, R.drawable.ic_menu_info_details, (Boolean) true, this.q);
                this.f3875d = dialogA;
                break;
            case ConnManagerParams.DEFAULT_MAX_TOTAL_CONNECTIONS /* 20 */:
            case 22:
                i6 = 2131492965;
                str = this.f3877f;
                i7 = R.drawable.ic_dialog_alert;
                i8 = 2131492964;
                dialogA = a(i6, str, i7, i8, 2131492946, 2131492922);
                this.f3875d = dialogA;
                break;
            case 21:
                i9 = 2131492959;
                dialogA = a(i9, R.drawable.ic_menu_info_details, (Boolean) true, this.q);
                this.f3875d = dialogA;
                break;
            case 23:
                i10 = this.m;
                i11 = R.drawable.ic_dialog_info;
                view = this.q;
                i12 = 2131492946;
                i13 = this.s;
                dialogA = a(i10, i11, (Boolean) false, view, i12, i13);
                this.f3875d = dialogA;
                break;
            case 24:
                i10 = 2131492866;
                i11 = R.drawable.ic_dialog_info;
                view = this.q;
                i12 = 2131492864;
                i13 = 2131492922;
                dialogA = a(i10, i11, (Boolean) false, view, i12, i13);
                this.f3875d = dialogA;
                break;
            case 25:
                dialogA = a(this.f3877f, R.drawable.ic_dialog_info, this.g, 2131492946, 2131492922);
                this.f3875d = dialogA;
                break;
            case 26:
                i6 = 2131492899;
                str = this.f3877f;
                i7 = R.drawable.ic_dialog_info;
                i8 = 2131492898;
                dialogA = a(i6, str, i7, i8, 2131492946, 2131492922);
                this.f3875d = dialogA;
                break;
            case 27:
                i14 = 2131492899;
                i15 = 2131492902;
                dialogA = a(i14, -1, i15, 2131492946);
                this.f3875d = dialogA;
                break;
            case 28:
                i6 = 2131492905;
                str = this.f3877f;
                i7 = R.drawable.ic_dialog_alert;
                i8 = 2131492904;
                dialogA = a(i6, str, i7, i8, 2131492946, 2131492922);
                this.f3875d = dialogA;
                break;
            case 29:
                i14 = 2131492905;
                i15 = 2131492908;
                dialogA = a(i14, -1, i15, 2131492946);
                this.f3875d = dialogA;
                break;
            case 30:
                dialogA = a(com.yamaha.smafsynth.sample.d.app_name, -1, 2131492889, 2131492927);
                this.f3875d = dialogA;
                break;
            case 31:
                dialogA = a(this.r, 2131492897, 2131492896);
                this.f3875d = dialogA;
                break;
            case HTTP.SP /* 32 */:
                i10 = com.yamaha.smafsynth.sample.d.app_name;
                i11 = R.drawable.ic_dialog_info;
                view = this.q;
                i12 = 2131492946;
                i13 = 2131492888;
                dialogA = a(i10, i11, (Boolean) false, view, i12, i13);
                this.f3875d = dialogA;
                break;
            case 33:
                i = 2131493194;
                i2 = -1;
                i3 = 2131493193;
                i4 = 2131492946;
                i5 = -1;
                dialogA = a(i, i2, i3, i4, i5);
                this.f3875d = dialogA;
                break;
            case 34:
                i = 2131493194;
                i2 = -1;
                i3 = 2131493192;
                i4 = 2131493001;
                i5 = 2131493002;
                dialogA = a(i, i2, i3, i4, i5);
                this.f3875d = dialogA;
                break;
            case 35:
                dialogA = a(this.n, this.p);
                this.f3875d = dialogA;
                break;
            case 36:
                i = 2131493108;
                i2 = R.drawable.ic_dialog_info;
                i3 = 2131493107;
                i4 = 2131492944;
                i5 = 2131492922;
                dialogA = a(i, i2, i3, i4, i5);
                this.f3875d = dialogA;
                break;
            case LangUtils.HASH_OFFSET /* 37 */:
                i = 2131493108;
                i2 = R.drawable.ic_dialog_info;
                i3 = 2131493105;
                i4 = 2131492944;
                i5 = 2131492922;
                dialogA = a(i, i2, i3, i4, i5);
                this.f3875d = dialogA;
                break;
            case 38:
                i = 2131493108;
                i2 = R.drawable.ic_dialog_info;
                i3 = 2131493102;
                i4 = 2131492944;
                i5 = 2131492922;
                dialogA = a(i, i2, i3, i4, i5);
                this.f3875d = dialogA;
                break;
            case 39:
                i = 2131493108;
                i2 = R.drawable.ic_dialog_info;
                i3 = 2131493106;
                i4 = 2131492944;
                i5 = 2131492922;
                dialogA = a(i, i2, i3, i4, i5);
                this.f3875d = dialogA;
                break;
            case 40:
                dialogA = a(this.f3877f, this.q, 2131492946, 2131493086);
                this.f3875d = dialogA;
                break;
            case 41:
                dialogA = a(this.q, this.f3877f);
                this.f3875d = dialogA;
                break;
            case 42:
                i = 2131493108;
                i2 = 0;
                i3 = 2131493104;
                i4 = 2131493103;
                i5 = 2131492922;
                dialogA = a(i, i2, i3, i4, i5);
                this.f3875d = dialogA;
                break;
        }
        Dialog dialog = this.f3875d;
        if (dialog != null) {
            dialog.setOnDismissListener(new e(this));
        }
        return this;
    }

    public f a(int i) {
        this.s = i;
        return this;
    }

    public f a(int i, a aVar) {
        this.f3876e = i;
        this.f3874c = aVar;
        return this;
    }

    public f a(WebView webView) {
        this.r = webView;
        return this;
    }

    public f a(String str) {
        this.g = str;
        return this;
    }

    public f a(Collection<CharSequence> collection) {
        this.h = collection;
        return this;
    }

    public f a(Date date) {
        this.l = date;
        return this;
    }

    public f a(c.a aVar) {
        this.k = aVar;
        return this;
    }

    public f a(jp.co.ymm.android.ringtone.net.e eVar) {
        this.j = eVar;
        return this;
    }

    public f a(CharSequence[] charSequenceArr) {
        this.o = charSequenceArr;
        return this;
    }

    public f a(String[] strArr) {
        this.p = strArr;
        return this;
    }

    public void a(boolean z) {
        Button button = ((AlertDialog) this.f3875d).getButton(-1);
        if (button != null) {
            button.setEnabled(z);
        }
        Button button2 = ((AlertDialog) this.f3875d).getButton(-2);
        if (button2 != null) {
            button2.setEnabled(z);
        }
    }

    public f b(int i) {
        this.m = i;
        return this;
    }

    public f b(String str) {
        this.f3877f = str;
        return this;
    }

    public void b() {
        Dialog dialog = this.f3875d;
        if (dialog != null) {
            dialog.dismiss();
            this.f3875d = null;
        }
    }

    public int c() {
        return this.f3876e;
    }

    public f c(int i) {
        LayoutInflater layoutInflaterFrom = LayoutInflater.from(this.f3873b);
        if (i == -1) {
            i = 2131296277;
        }
        this.q = layoutInflaterFrom.inflate(i, (ViewGroup) null);
        return this;
    }

    public f c(String str) {
        this.n = str;
        return this;
    }

    public Dialog d() {
        return this.f3875d;
    }

    public f d(String str) {
        this.i = str;
        return this;
    }

    public void e() {
        this.f3875d.show();
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        if (this.f3874c != null) {
            this.t = i;
            this.u = true;
        }
    }
}
