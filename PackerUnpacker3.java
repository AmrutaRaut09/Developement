//Program to create File and Pack and Unpack file
import java.lang.*;
import java.util.*;
import java.io.File;
import java.nio.charset.StandardCharsets;
import java.io.*;
class PackerUnpacker3
{
	public static void main(String a[])
	{
		try
		{
			Scanner sobj = new Scanner(System.in);
			System.out.println("Please enter file name");
			String Filename =  sobj.nextLine();
			File fobj = new File(Filename);
			              //boolean bobj = fobj.createNewFile();
			if(fobj.exists())
			{
				FileInputStream fiobj = new FileInputStream(fobj);
				byte buffer[] = new byte[100];
				int ret = 0;
				while((ret = fiobj.read(buffer))!= -1)
				{
					String strData = new String(buffer, StandardCharsets.UTF_8);
					System.out.println(strData);
				}
			}
			else 
			{
				System.out.println("There is no such file..!!");
			}
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}