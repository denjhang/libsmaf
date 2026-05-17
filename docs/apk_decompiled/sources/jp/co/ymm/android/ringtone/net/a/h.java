package jp.co.ymm.android.ringtone.net.a;

import android.util.Xml;
import e.J;
import e.x;
import java.io.IOException;
import java.io.InputStream;
import java.io.StringReader;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class h extends jp.co.ymm.android.ringtone.net.a.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public a f3666a = new a();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public b f3667b;

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f3668a = null;
    }

    public static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f3669a;
    }

    @Override // jp.co.ymm.android.ringtone.net.a.a
    public J a() {
        x.a aVar = new x.a();
        aVar.a("servicecode", "ymmringtone");
        aVar.a("aid", this.f3666a.f3668a);
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
        this.f3667b = new b();
        XmlPullParser xmlPullParserNewPullParser = Xml.newPullParser();
        boolean z = false;
        try {
            xmlPullParserNewPullParser.setInput(new StringReader(str));
            for (int eventType = xmlPullParserNewPullParser.getEventType(); eventType != 1; eventType = xmlPullParserNewPullParser.next()) {
                if (eventType != 2) {
                    if (eventType != 3) {
                        continue;
                    } else if (xmlPullParserNewPullParser.getName().equalsIgnoreCase("acFinish")) {
                        z = true;
                    }
                } else if (xmlPullParserNewPullParser.getName().equalsIgnoreCase("acFinish")) {
                    this.f3667b.f3669a = xmlPullParserNewPullParser.getAttributeValue(null, "status");
                }
            }
        } catch (IOException | XmlPullParserException e2) {
            jp.co.ymm.android.ringtone.util.g.b("parseXmlResponse ", e2);
        }
        return z;
    }
}
