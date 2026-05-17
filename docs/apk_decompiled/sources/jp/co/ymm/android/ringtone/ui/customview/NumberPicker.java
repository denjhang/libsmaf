package jp.co.ymm.android.ringtone.ui.customview;

import android.content.Context;
import android.os.Build;
import android.os.Handler;
import android.text.InputFilter;
import android.text.Spanned;
import android.text.method.NumberKeyListener;
import android.util.AttributeSet;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.EditText;
import android.widget.ImageButton;
import android.widget.LinearLayout;
import android.widget.TextView;
import java.lang.reflect.Field;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class NumberPicker extends LinearLayout implements View.OnClickListener, View.OnFocusChangeListener, View.OnLongClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final char[] f3788a = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Handler f3789b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Runnable f3790c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final EditText f3791d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final InputFilter f3792e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private int f3793f;
    private int g;
    private int h;
    private int i;
    private c j;
    private long k;
    private boolean l;
    private boolean m;
    private int n;
    private boolean o;
    private final Button p;
    private final Button q;

    public static class Button extends ImageButton {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private NumberPicker f3794a;

        public Button(Context context) {
            super(context);
        }

        public Button(Context context, AttributeSet attributeSet) {
            super(context, attributeSet);
        }

        public Button(Context context, AttributeSet attributeSet, int i) {
            super(context, attributeSet, i);
        }

        private void a() {
            if (2131165245 == getId()) {
                this.f3794a.c();
            } else if (2131165228 == getId()) {
                this.f3794a.b();
            }
        }

        private void a(MotionEvent motionEvent) {
            if (motionEvent.getAction() == 3 || motionEvent.getAction() == 1) {
                a();
            }
        }

        @Override // android.view.View, android.view.KeyEvent.Callback
        public boolean onKeyUp(int i, KeyEvent keyEvent) {
            if (i == 23 || i == 66) {
                a();
            }
            return super.onKeyUp(i, keyEvent);
        }

        @Override // android.view.View
        public boolean onTouchEvent(MotionEvent motionEvent) {
            a(motionEvent);
            return super.onTouchEvent(motionEvent);
        }

        @Override // android.view.View
        public boolean onTrackballEvent(MotionEvent motionEvent) {
            a(motionEvent);
            return super.onTrackballEvent(motionEvent);
        }

        public void setNumberPicker(NumberPicker numberPicker) {
            this.f3794a = numberPicker;
        }
    }

    private class a implements InputFilter {
        private a() {
        }

        /* synthetic */ a(NumberPicker numberPicker, jp.co.ymm.android.ringtone.ui.customview.c cVar) {
            this();
        }

        @Override // android.text.InputFilter
        public CharSequence filter(CharSequence charSequence, int i, int i2, Spanned spanned, int i3, int i4) {
            return NumberPicker.this.f3792e.filter(charSequence, i, i2, spanned, i3, i4);
        }
    }

    private class b extends NumberKeyListener {
        private b() {
        }

        /* synthetic */ b(NumberPicker numberPicker, jp.co.ymm.android.ringtone.ui.customview.c cVar) {
            this();
        }

        @Override // android.text.method.NumberKeyListener, android.text.InputFilter
        public CharSequence filter(CharSequence charSequence, int i, int i2, Spanned spanned, int i3, int i4) {
            CharSequence charSequenceFilter = super.filter(charSequence, i, i2, spanned, i3, i4);
            if (charSequenceFilter == null) {
                charSequenceFilter = charSequence.subSequence(i, i2);
            }
            String str = String.valueOf(spanned.subSequence(0, i3)) + ((Object) charSequenceFilter) + ((Object) spanned.subSequence(i4, spanned.length()));
            return "".equals(str) ? str : Integer.parseInt(str) > NumberPicker.this.g ? "" : charSequenceFilter;
        }

        @Override // android.text.method.NumberKeyListener
        protected char[] getAcceptedChars() {
            return NumberPicker.f3788a;
        }

        @Override // android.text.method.KeyListener
        public int getInputType() {
            return 2;
        }
    }

    public interface c {
        void a(NumberPicker numberPicker, int i, int i2);
    }

    public NumberPicker(Context context) {
        this(context, null);
    }

    public NumberPicker(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public NumberPicker(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet);
        this.f3790c = new jp.co.ymm.android.ringtone.ui.customview.c(this);
        this.k = 300L;
        this.n = 1;
        setOrientation(1);
        ((LayoutInflater) context.getSystemService("layout_inflater")).inflate(2131296299, (ViewGroup) this, true);
        this.f3789b = new Handler();
        jp.co.ymm.android.ringtone.ui.customview.c cVar = null;
        a aVar = new a(this, cVar);
        this.f3792e = new b(this, cVar);
        this.p = (Button) findViewById(2131165245);
        this.p.setOnClickListener(this);
        this.p.setOnLongClickListener(this);
        this.p.setNumberPicker(this);
        this.q = (Button) findViewById(2131165228);
        this.q.setOnClickListener(this);
        this.q.setOnLongClickListener(this);
        this.q.setNumberPicker(this);
        this.f3791d = (EditText) findViewById(2131165328);
        this.f3791d.setOnFocusChangeListener(this);
        this.f3791d.setFilters(new InputFilter[]{aVar});
        this.f3791d.setRawInputType(2);
        if (isEnabled()) {
            return;
        }
        setEnabled(false);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(int i) {
        int i2 = this.g;
        if (i > i2) {
            i = this.f3793f;
        } else if (i < this.f3793f) {
            i = i2 - (i2 % this.n);
        }
        this.i = this.h;
        this.h = i;
        f();
        g();
    }

    private void a(View view) {
        String strValueOf = String.valueOf(((TextView) view).getText());
        if ("".equals(strValueOf)) {
            g();
        } else {
            a(strValueOf);
        }
    }

    private void a(CharSequence charSequence) {
        int i;
        int i2 = Integer.parseInt(charSequence.toString());
        if (i2 >= this.f3793f && i2 <= this.g && (i = this.h) != i2) {
            this.i = i;
            this.h = i2;
            f();
        }
        g();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int d(int i, int i2) {
        int i3;
        return (i == 0 || (i3 = i % i2) == 0) ? i2 : i3;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int e(int i, int i2) {
        int i3;
        return (i == 0 || (i3 = i % i2) == 0) ? i2 : i2 - i3;
    }

    private void f() {
        c cVar = this.j;
        if (cVar != null) {
            cVar.a(this, this.i, this.h);
        }
    }

    private void g() {
        this.f3791d.setText(String.valueOf(this.h));
        EditText editText = this.f3791d;
        editText.setSelection(editText.getText().length());
    }

    public void b() {
        this.m = false;
    }

    public void c() {
        this.l = false;
    }

    public void c(int i, int i2) {
        this.f3793f = i;
        this.g = i2;
        this.h = i;
        g();
    }

    public void d() {
        this.f3791d.setCursorVisible(false);
    }

    protected void e() {
        if (this.o) {
            return;
        }
        int i = Build.VERSION.SDK_INT;
        try {
            Context context = getContext();
            Object objNewInstance = context.getClassLoader().loadClass("android.widget.NumberPicker").getConstructor(Context.class).newInstance(context);
            Class<?> cls = objNewInstance.getClass();
            if (i < 28) {
                Field declaredField = cls.getDeclaredField("mIncrementButton");
                if (!declaredField.isAccessible()) {
                    declaredField.setAccessible(true);
                }
                this.p.setBackgroundDrawable(((ImageButton) declaredField.get(objNewInstance)).getBackground());
            } else {
                this.p.setImageResource(2131099677);
            }
            Field declaredField2 = cls.getDeclaredField(i < 11 ? "mText" : "mInputText");
            if (!declaredField2.isAccessible()) {
                declaredField2.setAccessible(true);
            }
            EditText editText = (EditText) declaredField2.get(objNewInstance);
            this.f3791d.setBackgroundDrawable(editText.getBackground());
            this.f3791d.setTextColor(editText.getTextColors());
            if (i < 28) {
                Field declaredField3 = cls.getDeclaredField("mDecrementButton");
                if (!declaredField3.isAccessible()) {
                    declaredField3.setAccessible(true);
                }
                this.q.setBackgroundDrawable(((ImageButton) declaredField3.get(objNewInstance)).getBackground());
            } else {
                this.q.setImageResource(2131099680);
            }
            this.o = true;
        } catch (Exception unused) {
            g.b("android.widget.NumberPicker internal button background resource got not.");
        }
    }

    public int getCurrent() {
        return this.h;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        int iD;
        a(this.f3791d);
        if (!this.f3791d.hasFocus()) {
            this.f3791d.requestFocus();
        }
        if (2131165245 == view.getId()) {
            int i = this.h;
            iD = i + e(i, this.n);
        } else {
            if (2131165228 != view.getId()) {
                return;
            }
            int i2 = this.h;
            iD = i2 - d(i2, this.n);
        }
        a(iD);
    }

    @Override // android.view.View.OnFocusChangeListener
    public void onFocusChange(View view, boolean z) {
        if (z) {
            return;
        }
        a(view);
    }

    @Override // android.widget.LinearLayout, android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
        e();
    }

    @Override // android.view.View.OnLongClickListener
    public boolean onLongClick(View view) {
        this.f3791d.clearFocus();
        if (2131165245 != view.getId()) {
            if (2131165228 == view.getId()) {
                this.m = true;
            }
            return true;
        }
        this.l = true;
        this.f3789b.post(this.f3790c);
        return true;
    }

    public void setCurrent(int i) {
        this.h = i;
        g();
    }

    @Override // android.view.View
    public void setEnabled(boolean z) {
        super.setEnabled(z);
        this.p.setEnabled(z);
        this.q.setEnabled(z);
        this.f3791d.setEnabled(z);
    }

    public void setIncrementValue(int i) {
        this.n = i;
    }

    public void setOnChangeListener(c cVar) {
        this.j = cVar;
    }

    public void setSpeed(long j) {
        this.k = j;
    }
}
