#include <jni.h>
#include <string>
#include <opencv2/opencv.hpp>

extern "C"
JNIEXPORT jstring

JNICALL
Java_net_keathmilligan_android_1native_1opencv_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello From C++ - " + (std::string)CV_VERSION;
    return env->NewStringUTF(hello.c_str());
}
