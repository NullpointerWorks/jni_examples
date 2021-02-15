package example06C;

public class Information extends NativePointer
{
	public Information(long pointer) 
	{
		super(pointer);
	}
	
	public native void setInformation(String msg);
	public native String getInformation();
	
	@Override
	protected native void dispose();
}
