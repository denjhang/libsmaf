package jp.co.ymm.android.ringtone.util;

import android.R;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.Context;
import android.content.DialogInterface;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class r implements DialogInterface.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f3918a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private ProgressDialog f3919b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private a f3920c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f3921d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final DialogInterface.OnKeyListener f3922e = new q(this);

    public interface a {
        void a(DialogInterface dialogInterface, int i, int i2);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public r(Context context) {
        this.f3918a = context;
        if (context instanceof a) {
            this.f3920c = (a) context;
        }
    }

    private void a(int i, int i2, int i3) {
        ProgressDialog progressDialog = new ProgressDialog(this.f3918a);
        progressDialog.setTitle(this.f3918a.getString(i));
        progressDialog.setIcon(i2);
        progressDialog.setMessage(this.f3918a.getString(i3));
        progressDialog.setCancelable(false);
        progressDialog.setOnKeyListener(this.f3922e);
        this.f3919b = progressDialog;
        this.f3919b.show();
    }

    private void a(int i, int i2, int i3, int i4, int i5) {
        ProgressDialog progressDialog = new ProgressDialog(this.f3918a);
        progressDialog.setTitle(this.f3918a.getString(i));
        progressDialog.setIcon(i2);
        progressDialog.setMessage(this.f3918a.getString(i3));
        progressDialog.setIndeterminate(false);
        progressDialog.setCancelable(false);
        progressDialog.setProgressStyle(i4);
        progressDialog.setMax(i5);
        progressDialog.setOnKeyListener(this.f3922e);
        progressDialog.setButton(-2, this.f3918a.getString(2131492922), this);
        this.f3919b = progressDialog;
        this.f3919b.show();
    }

    public void a() {
        ProgressDialog progressDialog = this.f3919b;
        if (progressDialog != null) {
            progressDialog.dismiss();
            this.f3919b = null;
        }
    }

    public void a(int i) {
        a();
        if (i == 2) {
            this.f3921d = i;
            a();
            a(2131493114, R.drawable.ic_menu_more, 2131493113);
        } else if (i == 6) {
            this.f3921d = i;
            a(2131493006, R.drawable.ic_menu_more, 2131493006);
        } else {
            if (i != 8) {
                return;
            }
            this.f3921d = i;
            a(2131493016, R.drawable.ic_menu_more, 2131493015, 1, 100);
        }
    }

    public void a(Dialog dialog) {
        this.f3919b = (ProgressDialog) dialog;
    }

    public void a(boolean z) {
        this.f3919b.getButton(-2).setEnabled(z);
    }

    public int b() {
        return this.f3919b.getMax();
    }

    public void b(int i) {
        this.f3919b.setProgress(i);
    }

    public boolean c() {
        return this.f3919b != null;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        a aVar = this.f3920c;
        if (aVar != null) {
            aVar.a(dialogInterface, this.f3921d, i);
        }
    }
}
