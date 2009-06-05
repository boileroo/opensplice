/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to 2009 PrismTech 
 *   Limited and its licensees. All rights reserved. See file:
 *
 *                     $OSPL_HOME/LICENSE 
 *
 *   for full copyright notice and license terms. 
 *
 */

 /* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_opensplice_dds_dcps_ContentFilteredTopicImpl */

#ifndef _Included_org_opensplice_dds_dcps_ContentFilteredTopicImpl
#define _Included_org_opensplice_dds_dcps_ContentFilteredTopicImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_opensplice_dds_dcps_ContentFilteredTopicImpl
 * Method:    jniGetFilterExpression
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_opensplice_dds_dcps_ContentFilteredTopicImpl_jniGetFilterExpression
  (JNIEnv *, jobject);

/*
 * Class:     org_opensplice_dds_dcps_ContentFilteredTopicImpl
 * Method:    jniGetExpressionParameters
 * Signature: (LDDS/StringSeqHolder;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_ContentFilteredTopicImpl_jniGetExpressionParameters
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_ContentFilteredTopicImpl
 * Method:    jniSetExpressionParameters
 * Signature: ([Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_ContentFilteredTopicImpl_jniSetExpressionParameters
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     org_opensplice_dds_dcps_ContentFilteredTopicImpl
 * Method:    jniGetRelatedTopic
 * Signature: ()LDDS/Topic;
 */
JNIEXPORT jobject JNICALL Java_org_opensplice_dds_dcps_ContentFilteredTopicImpl_jniGetRelatedTopic
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif