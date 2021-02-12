package example04;

public class JNIExample04
{
	/*
	 * Let native methods provide primitive data types
	 * 
	 */
	public static void main(String[] args) 
	{
		System.loadLibrary("src/example04/dllExample04"); 
		JNIExample04 ex = new JNIExample04();
		
		byte b = ex.getByte();
		System.out.println(""+b);
		
		short s = ex.getShort();
		System.out.println(""+s);
		
		int i = ex.getInteger();
		System.out.println(""+i);
		
		long l = ex.getLong();
		System.out.println(""+l);
		
	}
	
	public native byte getByte();
	
	public native short getShort();
	
	public native int getInteger();
	
	public native long getLong();
	
}
