#include <jni.h>
#include <string>


extern "C" JNIEXPORT jstring JNICALL
Java_com_gnoes_chainsawman_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Commit TEST";
    return env->NewStringUTF(hello.c_str());
}