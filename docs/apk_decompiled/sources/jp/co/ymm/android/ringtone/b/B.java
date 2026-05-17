package jp.co.ymm.android.ringtone.b;

import java.util.Collection;
import java.util.Collections;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class B<T> {
    B() {
    }

    abstract T a(T t);

    Collection<T> a(Collection<T> collection) {
        if (collection == null) {
            return null;
        }
        A a2 = new A(this, collection);
        a2.removeAll(Collections.singleton(null));
        return a2;
    }

    T b(T t) {
        if (t != null) {
            return a(t);
        }
        return null;
    }
}
