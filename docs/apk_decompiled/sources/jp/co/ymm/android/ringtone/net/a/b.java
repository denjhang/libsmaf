package jp.co.ymm.android.ringtone.net.a;

import android.os.Build;
import android.util.Xml;
import e.J;
import e.x;
import java.io.IOException;
import java.io.InputStream;
import java.io.StringReader;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class b extends jp.co.ymm.android.ringtone.net.a.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public a f3633a = new a();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public C0035b f3634b;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f3635a = null;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public String f3636b = null;
    }

    /* JADX INFO: renamed from: jp.co.ymm.android.ringtone.net.a.b$b, reason: collision with other inner class name */
    public static class C0035b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f3637a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public String f3638b;
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public J a() {
        x.a aVar = new x.a();
        aVar.a("servicecode", "ymmringtone");
        aVar.a("vid", this.f3633a.f3635a);
        aVar.a("userkey", this.f3633a.f3636b);
        aVar.a("device", Build.MODEL);
        return aVar.a();
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public String a(String str) {
        return null;
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public boolean a(InputStream inputStream, jp.co.ymm.android.ringtone.net.f fVar, long j) {
        return false;
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public boolean b(String str) {
        this.f3634b = new C0035b();
        XmlPullParser xmlPullParserNewPullParser = Xml.newPullParser();
        boolean z = false;
        try {
            xmlPullParserNewPullParser.setInput(new StringReader(str));
            for (int eventType = xmlPullParserNewPullParser.getEventType(); eventType != 1; eventType = xmlPullParserNewPullParser.next()) {
                if (eventType == 2) {
                    String name = xmlPullParserNewPullParser.getName();
                    if (name.equalsIgnoreCase("acQueryResult")) {
                        this.f3634b.f3637a = xmlPullParserNewPullParser.getAttributeValue(null, "status");
                    } else if (name.equalsIgnoreCase("acTransition")) {
                        this.f3634b.f3638b = xmlPullParserNewPullParser.getAttributeValue(null, "url");
                    }
                } else if (eventType != 3) {
                    continue;
                } else if (xmlPullParserNewPullParser.getName().equalsIgnoreCase("acQueryResult")) {
                    z = true;
                }
            }
        } catch (IOException | XmlPullParserException e2) {
            jp.co.ymm.android.ringtone.util.g.b("parseXmlResponse ", e2);
        }
        return z;
    }
}
