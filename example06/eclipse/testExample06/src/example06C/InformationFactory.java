package example06C;

public class InformationFactory implements AutoCloseable
{
	private long nativePointer;
	
	public InformationFactory()
	{
		initialize();
	}
	
	public Information newInformation(String info) throws NativeCreationException
	{
		long pointer = newInformationNative(info);
		if (pointer != 0) return new Information(pointer);
		else throw new NativeCreationException();
	}
	
	private native void initialize();
	private native long newInformationNative(String info);
	private native void dispose();
	
	@Override
	public void close() throws Exception 
	{
		dispose();
	}
}
