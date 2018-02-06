#include "TestJNI.h"
#include <windows.h>

JNIEXPORT auto JNICALL Java_com_shadowyy_jni_TestJNI_beep(JNIEnv *, jclass, jint freq, jint duration)-> void {
    Beep(
            static_cast<unsigned long>(freq),
            static_cast<unsigned long>(duration)
    );
}

JNIEXPORT auto JNICALL Java_com_shadowyy_jni_TestJNI_sleep(JNIEnv *, jclass, jint duration)-> void {
    Sleep(
            static_cast<unsigned long>(duration)
    );
}