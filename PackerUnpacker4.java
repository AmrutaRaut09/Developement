//Program to create File and Pack and Unpack file

import java.lang.*;
import java.util.*;
import java.io.File;
import java.io.*;

class PackerUnpacker4
{
	public static void main(String a[])
	{
		try
		{
			Scanner sobj = new Scanner(System.in);
			System.out.println("Please Directory/Folder name");
			String foldername =  sobj.nextLine();
			File dobj = new File(foldername);
			File allfiles[] = dobj.listFiles();
			for(int i =0; i<allfiles.length;i++)
			{
				System.out.println(allfiles[i].getName());
			}
		}
		catch(Exception obj)
		{
			System.out.println(obj);
		}
	}
}