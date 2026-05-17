package androidx.lifecycle;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class m implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ LiveData f481a;

    m(LiveData liveData) {
        this.f481a = liveData;
    }

    @Override // java.lang.Runnable
    public void run() {
        Object obj;
        synchronized (this.f481a.f441b) {
            obj = this.f481a.f445f;
            this.f481a.f445f = LiveData.f440a;
        }
        this.f481a.a(obj);
    }
}
