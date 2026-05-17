package com.yamaha.smafsynth.sample;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class j implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ k f2756a;

    j(k kVar) {
        this.f2756a = kVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        long jA;
        long jB;
        if (this.f2756a.f2757a.l != null) {
            jA = this.f2756a.f2757a.l.a();
            jB = this.f2756a.f2757a.l.b();
        } else {
            jA = 0;
            jB = 0;
        }
        if (jB < 0) {
            this.f2756a.f2757a.i.setText("---");
            return;
        }
        this.f2756a.f2757a.i.setText(String.format("%7d / %7d [ms]", Long.valueOf(jB), Long.valueOf(jA)));
        if (jB <= jA) {
            this.f2756a.f2757a.j.setProgress((int) jB);
        }
    }
}
