package example06C;

public class Main 
{
	static
	{
		System.loadLibrary("dllExample06");
	}
	
	public static void main(String[] args) throws Exception 
	{
		var factory = new InformationFactory();
		Information info1 = factory.newInformation("Starting information for instance 1.");
		
		info1.setInformation("Some new information for instance 1.");

		String text1 = info1.getInformation();
		System.out.println( text1 );
		
		factory.close();
		
		return;
	}
	
}
