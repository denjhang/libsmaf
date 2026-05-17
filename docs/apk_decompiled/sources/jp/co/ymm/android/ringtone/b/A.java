package jp.co.ymm.android.ringtone.b;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;

/* JADX INFO: Add missing generic type declarations: [T] */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class A<T> extends ArrayList<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Collection f3504a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ B f3505b;

    /* JADX WARN: Multi-variable type inference failed */
    A(B b2, Collection collection) {
        this.f3505b = b2;
        this.f3504a = collection;
        Iterator it = this.f3504a.iterator();
        while (it.hasNext()) {
            add(this.f3505b.b(it.next()));
        }
    }
}
