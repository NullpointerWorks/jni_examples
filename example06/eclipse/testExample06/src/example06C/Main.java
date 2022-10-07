package example06C;

public class Main 
{
	static
	{
		System.loadLibrary("dllExample06");
	}
	
	public static void main(String[] args) throws Exception 
	{
		// the "Information()" constructor triggers the "NativePointer" superclass to request a pointer from the DLL
		Information info1 = new Information();
		
		// alter the text for the next test
		info1.setInformation("Some new information for instance 1.");
		
		// lets verify the string was set and accessible through "info1" instance
		printInformation(info1);
		
		// Create an object with the same pointer as our original instance.
		// This is obviously not the way to create a new instance. However this demonstrates that the value of the 
		// long field indeed hold the pointer value to our C++ instance. Normally this field is hidden from view!
		Information info2 = new Information( info1.nativePointer );
		
		// it should print the previously set information even though it's a new Java instance.
		// the native side doesn't know, nor care, that the pointer has moved from one Java
		// instance to another. 
		printInformation(info2);
		
		// when all references to your Information objects are lost, they get garbage collected.
		// the "finalize()" method will then call the native "dispose()" function and delete the allocated memory
	}
	
	public static void printInformation(Information inf)
	{
		String text = inf.getInformation();
		System.out.println( text );
	}
}
