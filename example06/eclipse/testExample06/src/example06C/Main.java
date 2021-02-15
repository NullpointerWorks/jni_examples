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
		
		// create an instance and print it's text.
		Information info1 = factory.newInformation("Starting information for instance 1.");
		printInformation(info1);
		
		// alter the text for the next test
		info1.setInformation("Some new information for instance 1.");
		
		// create an object with the same pointer as our original instance
		Information info2 = new Information( info1.nativePointer );
		
		// it should print the newly set information even though it's a new Java instance.
		// the C++ side doesn't know, nor care, that the pointer has moved from one Java
		// instance to another. 
		printInformation(info2);
		
		factory.close();
		return;
	}
	
	public static void printInformation(Information inf)
	{
		String text1 = inf.getInformation();
		System.out.println( text1 );
	}
}
