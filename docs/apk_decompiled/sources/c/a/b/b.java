package c.a.b;

import android.content.Context;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final /* synthetic */ class b implements c.a.b.b.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final d f901a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Context f902b;

    private b(d dVar, Context context) {
        this.f901a = dVar;
        this.f902b = context;
    }

    public static c.a.b.b.a a(d dVar, Context context) {
        return new b(dVar, context);
    }

    @Override // c.a.b.b.a
    public Object get() {
        return d.a(this.f901a, this.f902b);
    }
}
