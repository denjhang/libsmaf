package com.yamaha.smafsynth.sample;

import java.io.File;
import java.io.FilenameFilter;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class f implements FilenameFilter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ SMAFSynthSample f2752a;

    f(SMAFSynthSample sMAFSynthSample) {
        this.f2752a = sMAFSynthSample;
    }

    @Override // java.io.FilenameFilter
    public boolean accept(File file, String str) {
        boolean zMatches = str.matches(".+\\.[M,m][M,m][F,f]$");
        if (str.matches(".+\\.[M,m][I,i][D,d]$")) {
            return true;
        }
        return zMatches;
    }
}
