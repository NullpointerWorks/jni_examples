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
	
	private native long newInformationNative(String info);
}
