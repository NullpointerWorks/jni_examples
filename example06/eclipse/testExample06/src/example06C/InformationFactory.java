package example06C;

public class InformationFactory
{
	public InformationFactory()
	{
		
	}
	
	public Information newInformation(String info) throws NativeCreationException
	{
		long pointer = newInformationNative(info);
		if (pointer != 0) return new Information(pointer);
		else throw new NativeCreationException();
	}
	
	// this method may be private in Java, but it's still accessible in C++
	private native long newInformationNative(String info);
}
