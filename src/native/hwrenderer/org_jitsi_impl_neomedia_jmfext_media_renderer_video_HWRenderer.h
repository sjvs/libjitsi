/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jitsi_impl_neomedia_jmfext_media_renderer_video_HWRenderer */

#ifndef _Included_org_jitsi_impl_neomedia_jmfext_media_renderer_video_HWRenderer
#define _Included_org_jitsi_impl_neomedia_jmfext_media_renderer_video_HWRenderer
#ifdef __cplusplus
extern "C" {
#endif
#undef org_jitsi_impl_neomedia_jmfext_media_renderer_video_HWRenderer_DEFAULT_COMPONENT_HEIGHT_OR_WIDTH
#define org_jitsi_impl_neomedia_jmfext_media_renderer_video_HWRenderer_DEFAULT_COMPONENT_HEIGHT_OR_WIDTH 16L
/*
 * Class:     org_jitsi_impl_neomedia_jmfext_media_renderer_video_HWRenderer
 * Method:    close
 * Signature: (JLjava/awt/Component;)V
 */
JNIEXPORT void JNICALL Java_org_jitsi_impl_neomedia_jmfext_media_renderer_video_HWRenderer_close
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_jitsi_impl_neomedia_jmfext_media_renderer_video_HWRenderer
 * Method:    open
 * Signature: (Ljava/awt/Component;)J
 */
JNIEXPORT jlong JNICALL Java_org_jitsi_impl_neomedia_jmfext_media_renderer_video_HWRenderer_open
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_jitsi_impl_neomedia_jmfext_media_renderer_video_HWRenderer
 * Method:    paint
 * Signature: (JLjava/awt/Component;Ljava/awt/Graphics;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jitsi_impl_neomedia_jmfext_media_renderer_video_HWRenderer_paint
  (JNIEnv *, jclass, jlong, jobject, jobject, jint);

/*
 * Class:     org_jitsi_impl_neomedia_jmfext_media_renderer_video_HWRenderer
 * Method:    process
 * Signature: (JLjava/awt/Component;JIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jitsi_impl_neomedia_jmfext_media_renderer_video_HWRenderer_process
  (JNIEnv *, jclass, jlong, jobject, jlong, jint, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif