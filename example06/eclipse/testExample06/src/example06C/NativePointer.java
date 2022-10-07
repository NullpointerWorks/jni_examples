package example06C;

/**
 * Wrapper class to conceal the native pointer variable from 
 * alteration. Though declared private, it can still be accessed 
 * through JNI.
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
	
	// Use the Autoclosable to make sure memory allocated when using try-with-resource are properly released
	@Override
	public final void close() throws Exception 
	{
		dispose();
	}
	
	// This method is called before garbage collection. Handy to have it clean up natively allocated memory.
	@Override
	public final void finalize()
	{
		dispose();
	}
}
