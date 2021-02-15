package example06C;

/**
 * Though this simple factory also has a native pointer, it's not necessary in this implementation.
 */
public class InformationFactory extends NativePointer
{
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
	
	@Override
	protected native void dispose();
}
