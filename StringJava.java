//Check Strings are in rotation or not
/*

java StringJava.java
Enter String:
amruta
Enter rotation String:
taamru
Strings are in Rotation
*/
import java.lang.*;
import java.util.*;

class StringJava
{
	
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter String:");
		String str1 = sobj.nextLine();
		
		System.out.println("Enter rotation String:");
		String str2 = sobj.nextLine();
		
		if(str1.length()!= str2.length())
		{
			System.out.println("Strings are of differnt length");	
			return;
		}
		else
		{
			String str3 = str1.concat(str1);
			if(str3.contains(str2))
			{
				System.out.println("Strings are in Rotation");	
			}
			else
			{
				System.out.println("Strings are not in Rotation");	
			}
		}
	}
}
