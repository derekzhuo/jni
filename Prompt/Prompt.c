#include <jni.h>
#include <stdio.h>
#include "Prompt.h"
	
	
JNIEXPORT jstring JNICALL
Java_Prompt_getLine(JNIEnv *env, jobject obj, jstring prompt)
{
	char buf[128];
	const jbyte* str;
	str = (*env)->GetStringUTFChars(env, prompt, NULL);
	if(str == NULL) {
		return NULL;
	}
	printf("%s", str);
	(*env)->ReleaseStringUTFChars(env, prompt, str);
	scanf("%s", buf);
	return (*env)->NewStringUTF(env, buf);
}
