package androidx.fragment.app;

import android.R;
import android.content.Context;
import android.content.res.TypedArray;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.view.View;
import android.widget.TabHost;
import java.util.ArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class FragmentTabHost extends TabHost implements TabHost.OnTabChangeListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ArrayList<a> f336a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Context f337b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private AbstractC0048l f338c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f339d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private TabHost.OnTabChangeListener f340e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private a f341f;
    private boolean g;

    static class SavedState extends View.BaseSavedState {
        public static final Parcelable.Creator<SavedState> CREATOR = new w();

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        String f342a;

        SavedState(Parcel parcel) {
            super(parcel);
            this.f342a = parcel.readString();
        }

        SavedState(Parcelable parcelable) {
            super(parcelable);
        }

        public String toString() {
            return "FragmentTabHost.SavedState{" + Integer.toHexString(System.identityHashCode(this)) + " curTab=" + this.f342a + "}";
        }

        @Override // android.view.View.BaseSavedState, android.view.AbsSavedState, android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            super.writeToParcel(parcel, i);
            parcel.writeString(this.f342a);
        }
    }

    static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final String f343a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final Class<?> f344b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        final Bundle f345c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        Fragment f346d;
    }

    public FragmentTabHost(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f336a = new ArrayList<>();
        a(context, attributeSet);
    }

    private a a(String str) {
        int size = this.f336a.size();
        for (int i = 0; i < size; i++) {
            a aVar = this.f336a.get(i);
            if (aVar.f343a.equals(str)) {
                return aVar;
            }
        }
        return null;
    }

    private x a(String str, x xVar) {
        Fragment fragment;
        a aVarA = a(str);
        if (this.f341f != aVarA) {
            if (xVar == null) {
                xVar = this.f338c.a();
            }
            a aVar = this.f341f;
            if (aVar != null && (fragment = aVar.f346d) != null) {
                xVar.b(fragment);
            }
            if (aVarA != null) {
                Fragment fragment2 = aVarA.f346d;
                if (fragment2 == null) {
                    aVarA.f346d = Fragment.a(this.f337b, aVarA.f344b.getName(), aVarA.f345c);
                    xVar.a(this.f339d, aVarA.f346d, aVarA.f343a);
                } else {
                    xVar.a(fragment2);
                }
            }
            this.f341f = aVarA;
        }
        return xVar;
    }

    private void a(Context context, AttributeSet attributeSet) {
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, new int[]{R.attr.inflatedId}, 0, 0);
        this.f339d = typedArrayObtainStyledAttributes.getResourceId(0, 0);
        typedArrayObtainStyledAttributes.recycle();
        super.setOnTabChangedListener(this);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        String currentTabTag = getCurrentTabTag();
        int size = this.f336a.size();
        x xVarA = null;
        for (int i = 0; i < size; i++) {
            a aVar = this.f336a.get(i);
            aVar.f346d = this.f338c.a(aVar.f343a);
            Fragment fragment = aVar.f346d;
            if (fragment != null && !fragment.B()) {
                if (aVar.f343a.equals(currentTabTag)) {
                    this.f341f = aVar;
                } else {
                    if (xVarA == null) {
                        xVarA = this.f338c.a();
                    }
                    xVarA.b(aVar.f346d);
                }
            }
        }
        this.g = true;
        x xVarA2 = a(currentTabTag, xVarA);
        if (xVarA2 != null) {
            xVarA2.a();
            this.f338c.b();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.g = false;
    }

    @Override // android.view.View
    protected void onRestoreInstanceState(Parcelable parcelable) {
        if (!(parcelable instanceof SavedState)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        SavedState savedState = (SavedState) parcelable;
        super.onRestoreInstanceState(savedState.getSuperState());
        setCurrentTabByTag(savedState.f342a);
    }

    @Override // android.view.View
    protected Parcelable onSaveInstanceState() {
        SavedState savedState = new SavedState(super.onSaveInstanceState());
        savedState.f342a = getCurrentTabTag();
        return savedState;
    }

    @Override // android.widget.TabHost.OnTabChangeListener
    public void onTabChanged(String str) {
        x xVarA;
        if (this.g && (xVarA = a(str, (x) null)) != null) {
            xVarA.a();
        }
        TabHost.OnTabChangeListener onTabChangeListener = this.f340e;
        if (onTabChangeListener != null) {
            onTabChangeListener.onTabChanged(str);
        }
    }

    @Override // android.widget.TabHost
    public void setOnTabChangedListener(TabHost.OnTabChangeListener onTabChangeListener) {
        this.f340e = onTabChangeListener;
    }

    @Override // android.widget.TabHost
    @Deprecated
    public void setup() {
        throw new IllegalStateException("Must call setup() that takes a Context and FragmentManager");
    }
}
