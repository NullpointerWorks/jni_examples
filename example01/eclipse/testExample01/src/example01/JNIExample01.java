package example01;

public class JNIExample01
{
	/*
	 * Call a native method to return a string containing "Hello World!"
	 * 
	 */
	public static void main(String[] args) 
	{
		System.loadLibrary("src/example01/dllExample01"); // don't include .dll extension
		
		JNIExample01 ex01 = new JNIExample01();
		
		System.out.println( ex01.getHelloWorld() );
		
	}
	
	public native String getHelloWorld();
	
}
