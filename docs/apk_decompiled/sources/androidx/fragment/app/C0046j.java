package androidx.fragment.app;

import android.content.Context;
import android.content.res.Configuration;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;

/* JADX INFO: renamed from: androidx.fragment.app.j, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class C0046j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final AbstractC0047k<?> f380a;

    private C0046j(AbstractC0047k<?> abstractC0047k) {
        this.f380a = abstractC0047k;
    }

    public static C0046j a(AbstractC0047k<?> abstractC0047k) {
        return new C0046j(abstractC0047k);
    }

    public View a(View view, String str, Context context, AttributeSet attributeSet) {
        return this.f380a.f385e.onCreateView(view, str, context, attributeSet);
    }

    public Fragment a(String str) {
        return this.f380a.f385e.b(str);
    }

    public void a() {
        this.f380a.f385e.f();
    }

    public void a(Configuration configuration) {
        this.f380a.f385e.a(configuration);
    }

    public void a(Parcelable parcelable, t tVar) {
        this.f380a.f385e.a(parcelable, tVar);
    }

    public void a(Menu menu) {
        this.f380a.f385e.a(menu);
    }

    public void a(Fragment fragment) {
        AbstractC0047k<?> abstractC0047k = this.f380a;
        abstractC0047k.f385e.a(abstractC0047k, abstractC0047k, fragment);
    }

    public void a(boolean z) {
        this.f380a.f385e.a(z);
    }

    public boolean a(Menu menu, MenuInflater menuInflater) {
        return this.f380a.f385e.a(menu, menuInflater);
    }

    public boolean a(MenuItem menuItem) {
        return this.f380a.f385e.a(menuItem);
    }

    public void b() {
        this.f380a.f385e.g();
    }

    public void b(boolean z) {
        this.f380a.f385e.b(z);
    }

    public boolean b(Menu menu) {
        return this.f380a.f385e.b(menu);
    }

    public boolean b(MenuItem menuItem) {
        return this.f380a.f385e.b(menuItem);
    }

    public void c() {
        this.f380a.f385e.h();
    }

    public void d() {
        this.f380a.f385e.j();
    }

    public void e() {
        this.f380a.f385e.k();
    }

    public void f() {
        this.f380a.f385e.l();
    }

    public void g() {
        this.f380a.f385e.m();
    }

    public void h() {
        this.f380a.f385e.n();
    }

    public boolean i() {
        return this.f380a.f385e.p();
    }

    public AbstractC0048l j() {
        return this.f380a.d();
    }

    public void k() {
        this.f380a.f385e.s();
    }

    public t l() {
        return this.f380a.f385e.u();
    }

    public Parcelable m() {
        return this.f380a.f385e.v();
    }
}
