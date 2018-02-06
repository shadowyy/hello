#include "TestJNI.h"
#include <windows.h>

JNIEXPORT auto JNICALL Java_com_shadowyy_jni_TestJNI_hello(JNIEnv *, jclass, jint freq, jint duration)-> void {
    Beep(
            static_cast<unsigned long>(freq),
            static_cast<unsigned long>(duration)
    );
}