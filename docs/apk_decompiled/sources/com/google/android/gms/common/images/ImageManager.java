package com.google.android.gms.common.images;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.ParcelFileDescriptor;
import android.os.ResultReceiver;
import android.os.SystemClock;
import android.util.Log;
import b.b.f;
import c.a.a.a.d.b.d;
import com.google.android.gms.common.annotation.KeepName;
import com.google.android.gms.common.internal.C0064b;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Map;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.ExecutorService;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class ImageManager {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Object f1161a = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static HashSet<Uri> f1162b = new HashSet<>();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Context f1163c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Handler f1164d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final ExecutorService f1165e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final a f1166f;
    private final d g;
    private final Map<com.google.android.gms.common.images.a, ImageReceiver> h;
    private final Map<Uri, ImageReceiver> i;
    private final Map<Uri, Long> j;

    @KeepName
    private final class ImageReceiver extends ResultReceiver {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Uri f1167a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final ArrayList<com.google.android.gms.common.images.a> f1168b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final /* synthetic */ ImageManager f1169c;

        @Override // android.os.ResultReceiver
        public final void onReceiveResult(int i, Bundle bundle) {
            this.f1169c.f1165e.execute(this.f1169c.new b(this.f1167a, (ParcelFileDescriptor) bundle.getParcelable("com.google.android.gms.extra.fileDescriptor")));
        }
    }

    private static final class a extends f<com.google.android.gms.common.images.b, Bitmap> {
    }

    private final class b implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Uri f1170a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final ParcelFileDescriptor f1171b;

        public b(Uri uri, ParcelFileDescriptor parcelFileDescriptor) {
            this.f1170a = uri;
            this.f1171b = parcelFileDescriptor;
        }

        @Override // java.lang.Runnable
        public final void run() {
            boolean z;
            Bitmap bitmap;
            C0064b.b("LoadBitmapFromDiskRunnable can't be executed in the main thread");
            ParcelFileDescriptor parcelFileDescriptor = this.f1171b;
            boolean z2 = false;
            Bitmap bitmapDecodeFileDescriptor = null;
            if (parcelFileDescriptor != null) {
                try {
                    bitmapDecodeFileDescriptor = BitmapFactory.decodeFileDescriptor(parcelFileDescriptor.getFileDescriptor());
                } catch (OutOfMemoryError e2) {
                    String strValueOf = String.valueOf(this.f1170a);
                    StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 34);
                    sb.append("OOM while loading bitmap for uri: ");
                    sb.append(strValueOf);
                    Log.e("ImageManager", sb.toString(), e2);
                    z2 = true;
                }
                try {
                    this.f1171b.close();
                } catch (IOException e3) {
                    Log.e("ImageManager", "closed failed", e3);
                }
                z = z2;
                bitmap = bitmapDecodeFileDescriptor;
            } else {
                bitmap = null;
                z = false;
            }
            CountDownLatch countDownLatch = new CountDownLatch(1);
            ImageManager.this.f1164d.post(ImageManager.this.new c(this.f1170a, bitmap, z, countDownLatch));
            try {
                countDownLatch.await();
            } catch (InterruptedException unused) {
                String strValueOf2 = String.valueOf(this.f1170a);
                StringBuilder sb2 = new StringBuilder(String.valueOf(strValueOf2).length() + 32);
                sb2.append("Latch interrupted while posting ");
                sb2.append(strValueOf2);
                Log.w("ImageManager", sb2.toString());
            }
        }
    }

    private final class c implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Uri f1173a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final Bitmap f1174b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final CountDownLatch f1175c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private boolean f1176d;

        public c(Uri uri, Bitmap bitmap, boolean z, CountDownLatch countDownLatch) {
            this.f1173a = uri;
            this.f1174b = bitmap;
            this.f1176d = z;
            this.f1175c = countDownLatch;
        }

        @Override // java.lang.Runnable
        public final void run() {
            C0064b.a("OnBitmapLoadedRunnable must be executed in the main thread");
            boolean z = this.f1174b != null;
            if (ImageManager.this.f1166f != null) {
                if (this.f1176d) {
                    ImageManager.this.f1166f.a();
                    throw null;
                }
                if (z) {
                    ImageManager.this.f1166f.a(new com.google.android.gms.common.images.b(this.f1173a), this.f1174b);
                    throw null;
                }
            }
            ImageReceiver imageReceiver = (ImageReceiver) ImageManager.this.i.remove(this.f1173a);
            if (imageReceiver != null) {
                ArrayList arrayList = imageReceiver.f1168b;
                int size = arrayList.size();
                for (int i = 0; i < size; i++) {
                    com.google.android.gms.common.images.a aVar = (com.google.android.gms.common.images.a) arrayList.get(i);
                    if (z) {
                        aVar.a(ImageManager.this.f1163c, this.f1174b, false);
                    } else {
                        ImageManager.this.j.put(this.f1173a, Long.valueOf(SystemClock.elapsedRealtime()));
                        aVar.a(ImageManager.this.f1163c, ImageManager.this.g, false);
                    }
                    ImageManager.this.h.remove(aVar);
                }
            }
            this.f1175c.countDown();
            synchronized (ImageManager.f1161a) {
                ImageManager.f1162b.remove(this.f1173a);
            }
        }
    }
}
