package androidx.fragment.app;

import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;

/* JADX INFO: renamed from: androidx.fragment.app.c, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class DialogInterfaceOnCancelListenerC0039c extends Fragment implements DialogInterface.OnCancelListener, DialogInterface.OnDismissListener {
    int Y = 0;
    int Z = 0;
    boolean aa = true;
    boolean ba = true;
    int ca = -1;
    Dialog da;
    boolean ea;
    boolean fa;
    boolean ga;

    @Override // androidx.fragment.app.Fragment
    public void J() {
        super.J();
        Dialog dialog = this.da;
        if (dialog != null) {
            this.ea = true;
            dialog.dismiss();
            this.da = null;
        }
    }

    @Override // androidx.fragment.app.Fragment
    public void K() {
        super.K();
        if (this.ga || this.fa) {
            return;
        }
        this.fa = true;
    }

    @Override // androidx.fragment.app.Fragment
    public void N() {
        super.N();
        Dialog dialog = this.da;
        if (dialog != null) {
            this.ea = false;
            dialog.show();
        }
    }

    @Override // androidx.fragment.app.Fragment
    public void O() {
        super.O();
        Dialog dialog = this.da;
        if (dialog != null) {
            dialog.hide();
        }
    }

    public void a(Dialog dialog, int i) {
        if (i != 1 && i != 2) {
            if (i != 3) {
                return;
            } else {
                dialog.getWindow().addFlags(24);
            }
        }
        dialog.requestWindowFeature(1);
    }

    @Override // androidx.fragment.app.Fragment
    public void a(Context context) {
        super.a(context);
        if (this.ga) {
            return;
        }
        this.fa = false;
    }

    public void a(AbstractC0048l abstractC0048l, String str) {
        this.fa = false;
        this.ga = true;
        x xVarA = abstractC0048l.a();
        xVarA.a(this, str);
        xVarA.a();
    }

    @Override // androidx.fragment.app.Fragment
    public void b(Bundle bundle) {
        Bundle bundle2;
        super.b(bundle);
        if (this.ba) {
            View viewY = y();
            if (viewY != null) {
                if (viewY.getParent() != null) {
                    throw new IllegalStateException("DialogFragment can not be attached to a container view");
                }
                this.da.setContentView(viewY);
            }
            FragmentActivity fragmentActivityD = d();
            if (fragmentActivityD != null) {
                this.da.setOwnerActivity(fragmentActivityD);
            }
            this.da.setCancelable(this.aa);
            this.da.setOnCancelListener(this);
            this.da.setOnDismissListener(this);
            if (bundle == null || (bundle2 = bundle.getBundle("android:savedDialogState")) == null) {
                return;
            }
            this.da.onRestoreInstanceState(bundle2);
        }
    }

    @Override // androidx.fragment.app.Fragment
    public void c(Bundle bundle) {
        super.c(bundle);
        this.ba = this.A == 0;
        if (bundle != null) {
            this.Y = bundle.getInt("android:style", 0);
            this.Z = bundle.getInt("android:theme", 0);
            this.aa = bundle.getBoolean("android:cancelable", true);
            this.ba = bundle.getBoolean("android:showsDialog", this.ba);
            this.ca = bundle.getInt("android:backStackId", -1);
        }
    }

    @Override // androidx.fragment.app.Fragment
    public LayoutInflater d(Bundle bundle) {
        Context contextC;
        if (!this.ba) {
            return super.d(bundle);
        }
        this.da = n(bundle);
        Dialog dialog = this.da;
        if (dialog != null) {
            a(dialog, this.Y);
            contextC = this.da.getContext();
        } else {
            contextC = this.u.c();
        }
        return (LayoutInflater) contextC.getSystemService("layout_inflater");
    }

    @Override // androidx.fragment.app.Fragment
    public void e(Bundle bundle) {
        Bundle bundleOnSaveInstanceState;
        super.e(bundle);
        Dialog dialog = this.da;
        if (dialog != null && (bundleOnSaveInstanceState = dialog.onSaveInstanceState()) != null) {
            bundle.putBundle("android:savedDialogState", bundleOnSaveInstanceState);
        }
        int i = this.Y;
        if (i != 0) {
            bundle.putInt("android:style", i);
        }
        int i2 = this.Z;
        if (i2 != 0) {
            bundle.putInt("android:theme", i2);
        }
        boolean z = this.aa;
        if (!z) {
            bundle.putBoolean("android:cancelable", z);
        }
        boolean z2 = this.ba;
        if (!z2) {
            bundle.putBoolean("android:showsDialog", z2);
        }
        int i3 = this.ca;
        if (i3 != -1) {
            bundle.putInt("android:backStackId", i3);
        }
    }

    void g(boolean z) {
        if (this.fa) {
            return;
        }
        this.fa = true;
        this.ga = false;
        Dialog dialog = this.da;
        if (dialog != null) {
            dialog.dismiss();
        }
        this.ea = true;
        if (this.ca >= 0) {
            o().a(this.ca, 1);
            this.ca = -1;
            return;
        }
        x xVarA = o().a();
        xVarA.c(this);
        if (z) {
            xVarA.b();
        } else {
            xVarA.a();
        }
    }

    public void h(boolean z) {
        this.ba = z;
    }

    public Dialog n(Bundle bundle) {
        throw null;
    }

    @Override // android.content.DialogInterface.OnDismissListener
    public void onDismiss(DialogInterface dialogInterface) {
        if (this.ea) {
            return;
        }
        g(true);
    }
}
