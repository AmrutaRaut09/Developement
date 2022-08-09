//Program to create File and Pack and Unpack file
import java.lang.*;
import java.util.*;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.io.*;
class PackerUnpacker9
{
	public static void main(String a[])
	{
		try
		{
				
			Scanner sobj = new Scanner(System.in);
			System.out.println("Enter Packed file name");
			String PackFileName = sobj.nextLine();
			
			File fobj = new File(PackFileName);
			
			FileInputStream fobj = new FileInputStream(fobj);
			byte Headerarray[] = new byte[100];
			
			fobj.read(Headerarray,0,100);
			
			String HeaderString = new String(Headerarray);
			System.out.println(HeaderString);
		}
		catch(Exception eobj)
		{
			System.out.println(eobj);
		}
	}
}