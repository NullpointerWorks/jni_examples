package example02;

public class JNIExample02
{
	/*
	 * Call a native method to make it call a method in the JVM.
	 * It should make the program print "Hello World Again!"
	 * 
	 */
	public static void main(String[] args) 
	{
		System.loadLibrary("src/example02/dllExample02"); 
		JNIExample02 ex = new JNIExample02();
		ex.doPrint();
	}
	
	public void printMessage(String msg)
	{
		System.out.println(msg);
	}
	
	public native void doPrint();
	
}
