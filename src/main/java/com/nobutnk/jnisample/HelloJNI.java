package com.nobutnk.jnisample;

public class HelloJNI {
    
    static {
        // ライブラリのロード。あとで作るlib***.soの***と一致させます。
        System.loadLibrary("hello");
      }

      // nativeメソッドの宣言
      public native void hello();

}
