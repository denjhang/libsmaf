package jp.co.acrodea.runtime.drm.agent;

import java.io.File;
import java.util.Iterator;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.UUID;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class i implements Iterator<File> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ g f3350a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private File f3351b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private UUID f3352c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private String f3353d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private Iterator<Map.Entry<File, j>> f3354e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private File f3355f = null;
    private boolean g;

    public i(g gVar, File file, boolean z) {
        UUID uuid;
        this.f3350a = gVar;
        this.f3354e = null;
        this.g = z;
        j jVar = (j) gVar.g.get(file);
        if (jVar == null || (uuid = jVar.f3357b) == null) {
            return;
        }
        this.f3351b = file;
        this.f3352c = uuid;
        this.f3353d = jVar.f3360e;
        this.f3354e = gVar.g.entrySet().iterator();
    }

    @Override // java.util.Iterator
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public File next() {
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        File file = this.f3355f;
        this.f3355f = null;
        return file;
    }

    @Override // java.util.Iterator
    public boolean hasNext() {
        if (this.f3355f != null) {
            return true;
        }
        if (this.f3354e == null) {
            return false;
        }
        while (this.f3354e.hasNext()) {
            Map.Entry<File, j> next = this.f3354e.next();
            File key = next.getKey();
            if (this.g || !this.f3351b.equals(key)) {
                j value = next.getValue();
                if (value != null && this.f3352c.equals(value.f3357b)) {
                    String str = this.f3353d;
                    if (str != null) {
                        if (!str.equals(value.f3360e)) {
                            continue;
                        } else if (value.f3356a == 1 || this.f3351b.equals(key)) {
                            this.f3355f = key;
                            return true;
                        }
                    } else {
                        if (value.f3360e == null) {
                            if (value.f3356a == 1) {
                            }
                            this.f3355f = key;
                            return true;
                        }
                        continue;
                    }
                }
            }
        }
        return false;
    }

    @Override // java.util.Iterator
    public void remove() {
        throw new UnsupportedOperationException();
    }
}
