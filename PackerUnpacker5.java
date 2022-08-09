//Program to create File and Pack and Unpack file

import java.lang.*;
import java.util.*;
import java.io.File;
import java.io.*;

class PackerUnpacker5
{
	public static void main(String a[])
	{
		try
		{
			Scanner sobj = new Scanner(System.in);
			System.out.println("Please Directory/Folder name");
			S tring foldername =  sobj.nextLine();
			File dobj = new File(foldername);
			File allfiles[] = dobj.listFiles();
			String name;
			
			for(int i =0; i<allfiles.length;i++)
			{
				name =  allfiles[i].getName();
				if(name.endsWith(".txt"))	//Display only text files
				{
						System.out.println(name);
				}
			}
		}
		catch(Exception obj)
		{
			System.out.println(obj);
		}
	}
}