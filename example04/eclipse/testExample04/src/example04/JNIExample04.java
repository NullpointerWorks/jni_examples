package example04;

public class JNIExample04
{
	/*
	 * Let native methods provide primitive data types
	 * 
	 */
	public static void main(String[] args) 
	{
		System.loadLibrary("dllExample04"); 
		JNIExample04 ex = new JNIExample04();
		
		byte b = ex.getByte();
		System.out.println(""+b);
		
		short s = ex.getShort();
		System.out.println(""+s);
		
		int i = ex.getInteger();
		System.out.println(""+i);
		
		long l = ex.getLong();
		System.out.println(""+l);
		
		float f = ex.getFloat();
		System.out.println(""+f);
		
		double d = ex.getDouble();
		System.out.println(""+d); // returns 2.700000047683716 while it should be 2.7. this is due to lack of floating-point precision
		
		String t = ex.getString();
		System.out.println(""+t);
		
	}
	
	public native byte getByte();
	
	public native short getShort();
	
	public native int getInteger();

	public native long getLong();

	public native float getFloat();
	
	public native float getDouble();
	
	public native String getString();
	
}
