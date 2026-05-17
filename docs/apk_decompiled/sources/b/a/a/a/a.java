package b.a.a.a;

import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a implements Executor {
    a() {
    }

    @Override // java.util.concurrent.Executor
    public void execute(Runnable runnable) {
        c.b().b(runnable);
    }
}
