/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_libharu_PdfDocument */

#ifndef _Included_org_libharu_PdfDocument
#define _Included_org_libharu_PdfDocument
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_libharu_PdfDocument
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfDocument_initIDs
  (JNIEnv *, jclass);

/*
 * Class:     org_libharu_PdfDocument
 * Method:    create
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_libharu_PdfDocument_create__
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfDocument
 * Method:    create
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_libharu_PdfDocument_create__I
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_libharu_PdfDocument
 * Method:    free
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfDocument_free
  (JNIEnv *, jobject);

/*
 * Class:     org_libharu_PdfDocument
 * Method:    freeDoc
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfDocument_freeDoc
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_libharu_PdfDocument
 * Method:    freeDocAll
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_libharu_PdfDocument_freeDocAll
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_libharu_PdfDocument
 * Method:    saveToFile
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_libharu_PdfDocument_saveToFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_libharu_PdfDocument
 * Method:    hasDoc
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_libharu_PdfDocument_hasDoc
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
