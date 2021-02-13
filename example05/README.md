# Example05
A more complicated example where a JNI DLL loads and utilizes another DLL.

## Eclipse
The eclipse project loads and calls some math routines that are executed by a stand-alone DLL. 

## Visual Studio Example05A
This DLL code represents a third-party C++ library. However, this library is not designed to be used with JNI so a bridge is needed.

## Visual Studio Example05B
This is the bridge DLL that uses JNI to allow the JVM to talk and utilize the code in the Example05A DLL.
