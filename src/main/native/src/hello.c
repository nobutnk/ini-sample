#include "HelloJNI.h"
/* Java_HelloJNI_helloのHelloJNIはあとで作るJavaのクラス名、helloはあとで作るnativeメソッド名です。 */
JNIEXPORT void JNICALL Java_com_nobutnk_jnisample_HelloJNI_hello (JNIEnv *env, jobject obj) {
  printf("Hello World!\n");
}
