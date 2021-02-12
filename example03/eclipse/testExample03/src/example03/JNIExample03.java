package example03;

public class JNIExample03
{
	/*
	 * Have a native method create, populate and return an instance of a Java class.
	 * 
	 */
	public static void main(String[] args) 
	{
		System.loadLibrary("src/example03/dllExample03"); 
		JNIExample03 ex = new JNIExample03();
		
		StringInformation info = ex.getInformation();
		
		System.out.println( info.getInformation() );
	}
	
	public native StringInformation getInformation();
	
}
