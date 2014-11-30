#include <jni.h>
#include <stdio.h>
#include "ObjectArrayTest.h"

JNIEXPORT jobjectArray JNICALL
Java_ObjectArrayTest_initInt2DArray(JNIEnv* env, jclass cls, int size)
{
	//what (*env) points is a reference of java data structure
	jobjectArray result;
	//data that does not interact with java code use original c form
	int i;
	jclass intArrCls = (*env)->FindClass(env , "[I");
	if(intArrCls == NULL) {
		return NULL;
	}
	result = (*env)->NewObjectArray(env, size, intArrCls, NULL);
	if(result == NULL) {
		return NULL;
	}

	for( i = 0; i < size; i++) {
		//data that interact with java code use jni form
		jint tmp[256];
		int j;
		//data that does not interact with java code use original c form
		jintArray iarr = (*env)->NewIntArray(env, size);
		if(iarr == NULL) {
			return NULL;
		}
		for(j = 0; j < size; j++) {
			tmp[j] = i + j;
		}

		(*env)->SetIntArrayRegion(env, iarr, 0, size, tmp);
		(*env)->SetObjectArrayElement(env, result, i, iarr);
		(*env)->DeleteLocalRef(env, iarr);

	}
	return result;
}
