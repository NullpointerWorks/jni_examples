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
		
		printInformation(info1);
		info1.close();
		
		info1 = factory.newInformation("Starting information for instance 2.");
		
		
		factory.close();
		
		return;
	}
	
	public static void printInformation(Information inf)
	{
		String text1 = inf.getInformation();
		System.out.println( text1 );
	}
}
