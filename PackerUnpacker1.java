//Program to create File and Pack and Unpack file
import java.lang.*;
import java.util.*;
import java.io.File;

import java.io.*;
class PackerUnpacker
{
	public static void main(String a[])
	{
		try
		{
			Scanner sobj = new Scanner(System.in);
			System.out.println("Please enter file name");
			String Filename =  sobj.nextLine();
			File fobj = new File(Filename);
			boolean bobj = fobj.createNewFile();
			
			if(bobj == true)
			{
				System.out.println("File is successfully created...!!");
			}
			else
			{
				System.out.println("File is already Exists.");
			}
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}