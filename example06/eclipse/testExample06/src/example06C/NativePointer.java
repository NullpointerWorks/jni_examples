package example06C;

/**
 * Wrapper class to conceal the native pointer variable from 
 * alteration. Though declared private, it can still be accessed 
 * through JNI.
 * 
 */
public abstract class NativePointer implements AutoCloseable 
{
	@SuppressWarnings("unused")
	long nativePointer = 0; // make private after testing
	
	public NativePointer() {}
	public NativePointer(long ptr) 
	{
		nativePointer = ptr;
	}
	
	protected abstract void dispose();
	
	@Override
	public final void close() throws Exception 
	{
		dispose();
	}
}
