package example05;

public class JNIExample05 
{
	
	public static void main(String[] args) 
	{
		System.loadLibrary("dllExample05B"); 
		
		IMathematics math = new Mathematics();

		System.out.println( ""+math.Addition(10, 14) );
		System.out.println( ""+math.Subtraction(10, 14) );
		System.out.println( ""+math.Multiplication(10, 14) );
		System.out.println( ""+math.Division(10, 14) );
		
	}
	
	
	
	
}
