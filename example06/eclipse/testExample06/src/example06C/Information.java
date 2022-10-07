package example06C;

public class Information extends NativePointer
{
	// this constructor will also call "NativePointer()" which natively initializes the pointer
	public Information() throws NativeCreationException {} 
	
	public Information(long pointer) 
	{
		super(pointer);
	}
	
	public native void setInformation(String msg);
	
	public native String getInformation();
}
