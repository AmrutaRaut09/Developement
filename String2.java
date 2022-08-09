//Program 306
//Program to find largest word in array

import java.io.*;
import java.util.*;
//import java.

class String2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println(" Enter the string:");
		String str = sobj.nextLine();
		
		String newStr = str.replaceAll("\\s+"," "); 	//Regex
		String newStr2 = newStr.trim();
		String arr[] = newStr2.split(" ");
		
		System.out.println("Number of word are:"+arr.length);
		
		int iMax = 0;
		int iPos=0;
		for(int i=0; i<arr.length;i++)
		{
			if(arr[i].length()>iMax)
			{
				iMax = arr[i].length();
				iPos = i;
			}
		}
		
		System.out.println(" length of Largest word is:" +iMax);
		System.out.println("Largest word is:" +arr[iPos]);
		
	}
}