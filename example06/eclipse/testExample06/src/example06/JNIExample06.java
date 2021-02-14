package example06;

public class JNIExample06 
{
	
	public static void main(String[] args) 
	{
		System.loadLibrary("dllExample06"); 
		
		InformationFactory infofactory = new InformationFactory();
		
		Information info1 = infofactory.newInformation();
		Information info2 = infofactory.newInformation();
		
		info1.setInformation("Some info for instance 1");
		info2.setInformation("Some info for instance 2");
		
		System.out.println( info1.getInformation() );
		System.out.println( info2.getInformation() );
		
		info2.setInformation("Set new information for instance 2");
		
		System.out.println( info1.getInformation() );
		System.out.println( info2.getInformation() );
	}
}
