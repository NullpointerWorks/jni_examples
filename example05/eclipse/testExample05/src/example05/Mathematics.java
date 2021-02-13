package example05;

public class Mathematics implements IMathematics 
{
	public native int Addition(int a, int b);
	public native int Subtraction(int a, int b);
	public native int Multiplication(int a, int b);
	public native int Division(int a, int b);
}
