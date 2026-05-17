package com.google.android.gms.common;

import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;
import android.widget.FrameLayout;
import c.a.a.a.c.c;
import com.google.android.gms.common.api.Scope;
import com.google.android.gms.common.internal.C0080s;
import com.google.android.gms.common.internal.SignInButtonImpl;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class SignInButton extends FrameLayout implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f1010a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f1011b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private View f1012c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private View.OnClickListener f1013d;

    public SignInButton(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public SignInButton(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.f1013d = null;
        TypedArray typedArrayObtainStyledAttributes = context.getTheme().obtainStyledAttributes(attributeSet, c.a.a.a.b.d.SignInButton, 0, 0);
        try {
            this.f1010a = typedArrayObtainStyledAttributes.getInt(c.a.a.a.b.d.SignInButton_buttonSize, 0);
            this.f1011b = typedArrayObtainStyledAttributes.getInt(c.a.a.a.b.d.SignInButton_colorScheme, 2);
            typedArrayObtainStyledAttributes.recycle();
            a(this.f1010a, this.f1011b);
        } catch (Throwable th) {
            typedArrayObtainStyledAttributes.recycle();
            throw th;
        }
    }

    public final void a(int i, int i2) {
        this.f1010a = i;
        this.f1011b = i2;
        Context context = getContext();
        View view = this.f1012c;
        if (view != null) {
            removeView(view);
        }
        try {
            this.f1012c = C0080s.a(context, this.f1010a, this.f1011b);
        } catch (c.a unused) {
            Log.w("SignInButton", "Sign in button not found, using placeholder instead");
            int i3 = this.f1010a;
            int i4 = this.f1011b;
            SignInButtonImpl signInButtonImpl = new SignInButtonImpl(context);
            signInButtonImpl.a(context.getResources(), i3, i4);
            this.f1012c = signInButtonImpl;
        }
        addView(this.f1012c);
        this.f1012c.setEnabled(isEnabled());
        this.f1012c.setOnClickListener(this);
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        View.OnClickListener onClickListener = this.f1013d;
        if (onClickListener == null || view != this.f1012c) {
            return;
        }
        onClickListener.onClick(this);
    }

    public final void setColorScheme(int i) {
        a(this.f1010a, i);
    }

    @Override // android.view.View
    public final void setEnabled(boolean z) {
        super.setEnabled(z);
        this.f1012c.setEnabled(z);
    }

    @Override // android.view.View
    public final void setOnClickListener(View.OnClickListener onClickListener) {
        this.f1013d = onClickListener;
        View view = this.f1012c;
        if (view != null) {
            view.setOnClickListener(this);
        }
    }

    @Deprecated
    public final void setScopes(Scope[] scopeArr) {
        a(this.f1010a, this.f1011b);
    }

    public final void setSize(int i) {
        a(i, this.f1011b);
    }
}
