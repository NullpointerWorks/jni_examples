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
		// mind you, the line of code below is for testing purposes. The pointer should be hidden from view!
		Information info2 = new Information( info1.nativePointer );
		
		// it should print the previously set information even though it's a new Java instance.
		// the native side doesn't know, nor care, that the pointer has moved from one Java
		// instance to another. 
		printInformation(info2);
		
		// closing the information instance causes the native memory allocation to be deleted.
		// The two Java instances still exist, but will eventually be garbage collected.
		info1.close();
	}
	
	public static void printInformation(Information inf)
	{
		String text = inf.getInformation();
		System.out.println( text );
	}
}
