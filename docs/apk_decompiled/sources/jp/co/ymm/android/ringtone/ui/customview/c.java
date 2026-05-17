package jp.co.ymm.android.ringtone.ui.customview;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ NumberPicker f3804a;

    c(NumberPicker numberPicker) {
        this.f3804a = numberPicker;
    }

    @Override // java.lang.Runnable
    public void run() {
        NumberPicker numberPicker;
        int iD;
        if (this.f3804a.l) {
            numberPicker = this.f3804a;
            iD = numberPicker.h + NumberPicker.e(this.f3804a.h, this.f3804a.n);
        } else {
            if (!this.f3804a.m) {
                return;
            }
            numberPicker = this.f3804a;
            iD = numberPicker.h - NumberPicker.d(this.f3804a.h, this.f3804a.n);
        }
        numberPicker.a(iD);
        this.f3804a.f3789b.postDelayed(this, this.f3804a.k);
    }
}
