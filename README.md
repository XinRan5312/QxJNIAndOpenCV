# QxJNIAndOpenCV
对JNI  开发和Android_OpenCV的研究
http://www.jianshu.com/p/178a2169b7ff //Android Studio NDk调试(基于gradle-experimental插件与LLDB)
http://www.jianshu.com/p/adae93e3e982  //[Androidstudio]的坑之OpenCV4Android部署
http://blog.csdn.net/donglynn/article/details/23046925 //OpenCV4Android+JNI开发快速上手入门

 把class文件生成h头：E:\shijue\JniHello\app\src\main>在项目这个路径下执行
javah -bootclasspath E:\developer\android\android-sdk-windows\
platforms\android-23\android.jar -jni -classpath E:\worspace\msjf\androidReCodes
\MinShJinFu\pdfjni\build\intermediates\classes\debug com.fhkg.msjf.pdfjni.MuPDFC
ore

单独JNI的使用：
http://blog.csdn.net/sodino/article/details/41946607
http://www.cnblogs.com/yejiurui/p/3476565.html
http://www.cnblogs.com/xitang/p/4174619.html  //jni的c也可以调用java中的代码

按照操作生成so包后，D:\myspace\settings\TestJNI\app\build\intermediates\ndk这个目录下生成的目录烤出来备用，在工程main下跟java平行见一个文件夹jniLibs，备用包就放到这个目录下，这样so就可以被用了，原来为了生成so而写的c和h文件不都在jni包下吗，现在可以把jni包彻底删除掉了，最后别忘了删除工程D:\myspace\settings\TestJNI\app\build\intermediates\ndk目录下的所有so，要不然会在打包中包重复的，还有buid.gradle中
  ndk {
           moduleName "QX"
           ldLibs "log", "z", "m"           
abiFilters "armeabi", "armeabi-v7a", "x86"
        }
这个也不需要了



 

