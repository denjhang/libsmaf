package jp.co.ymm.android.ringtone.b;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class s extends B<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ u f3538a;

    s(u uVar) {
        this.f3538a = uVar;
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    @Override // jp.co.ymm.android.ringtone.b.B
    public String a(String str) {
        return jp.co.ymm.android.ringtone.util.z.f(str.replace("\\n", "\n").trim());
    }
}
