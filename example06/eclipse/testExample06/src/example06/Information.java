package example06;

public class Information 
{
	private String information; // set by a native call
	
	public Information()
	{
		
	}
	
	public native void setInformation(String info);
	
	public String getInformation()
	{
		return information;
	}
}
