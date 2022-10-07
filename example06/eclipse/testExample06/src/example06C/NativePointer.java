package example06C;

/**
 * Wrapper class to conceal the native pointer variable from 
 * alteration. Though declared private, it can still be accessed 
 * through JNI.
 */
public abstract class NativePointer
{
	@SuppressWarnings("unused")
	long nativePointer = 0; // make private after testing
	
	public NativePointer() throws NativeCreationException
	{
		make();
		if (nativePointer <= 0) throw new NativeCreationException();
	}
	
	public NativePointer(long ptr) 
	{
		nativePointer = ptr;
	}
	
	protected native void make();
	protected native void dispose();
	
	// This method is called before garbage collection. Handy to have it clean up natively allocated memory.
	@Override
	public final void finalize()
	{
		dispose();
	}
}
