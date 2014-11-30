#include <stdio.h>
#include <jni.h>
#include "test.h"


JNIEXPORT void JNICALL
Java_testdemo_print(JNIEnv* env, jobject obj)
{
	printf("hello test!!!\n");
}
