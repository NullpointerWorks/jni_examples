package example06C;

public class Information implements AutoCloseable
{
	private long nativePointer;
	
	public Information(long pointer) 
	{
		nativePointer = pointer;
	}

	public native void setInformation(String msg);
	public native String getInformation();
	public native void dispose();
	
	@Override
	public void close() throws Exception 
	{
		dispose();
	}
}
