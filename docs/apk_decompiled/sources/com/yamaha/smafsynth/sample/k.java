package com.yamaha.smafsynth.sample;

import java.util.TimerTask;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class k extends TimerTask {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ SMAFSynthSample f2757a;

    k(SMAFSynthSample sMAFSynthSample) {
        this.f2757a = sMAFSynthSample;
    }

    @Override // java.util.TimerTask, java.lang.Runnable
    public void run() {
        this.f2757a.p.post(new j(this));
    }
}
