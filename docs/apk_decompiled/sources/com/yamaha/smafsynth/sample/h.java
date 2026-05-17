package com.yamaha.smafsynth.sample;

import android.util.Log;
import android.view.View;
import android.widget.AdapterView;
import android.widget.Spinner;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class h implements AdapterView.OnItemSelectedListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ SMAFSynthSample f2754a;

    h(SMAFSynthSample sMAFSynthSample) {
        this.f2754a = sMAFSynthSample;
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
        this.f2754a.n = Integer.parseInt((String) ((Spinner) adapterView).getSelectedItem());
        Log.d("SMAF", "FM: " + this.f2754a.n);
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onNothingSelected(AdapterView<?> adapterView) {
    }
}
