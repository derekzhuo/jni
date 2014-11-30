#include <jni.h>
#include <stdio.h>
#include "InstanceFieldDemo.h"

JNIEXPORT void JNICALL
Java_InstanceFieldDemo_accessField(JNIEnv* env, jobject obj)
{
	jfieldID fid;
	jstring jstr;
	const char* str;
	
	//to get a class of a obj
	jclass cls = (*env)->GetObjectClass(env, obj);
	printf("current in C:\n");
	
	//according the class of obj, we get the ID of its field
	fid = (*env)->GetFieldID(env, cls, "s", "Ljava/lang/String;");
	if(fid == NULL ) {
		return  ;
	}
	
	//we get the field of sting according the ID we get from upstair
	jstr = (*env)->GetObjectField(env, obj, fid);
	
	//invoke method to get the value of the field
	str = (*env)->GetStringUTFChars(env, jstr, NULL);
	if(str == NULL ) {
		return  ;
	}
	
	//send the data to the terminal and release the lock
	printf("ifd.s = \"%s\"\n", str);
	(*env)->ReleaseStringUTFChars(env, jstr, str);
	
	//new a string natively
	jstr = (*env)->NewStringUTF(env, "123");
	if(jstr == NULL ) {
		return  ;
	}
	
	//set the str in java world
	(*env)->SetObjectField(env, obj, fid, jstr);
}
