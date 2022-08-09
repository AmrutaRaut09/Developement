//Program 306
//Program to display reverse a string in place

import java.io.*;
import java.util.*;

class String3
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println(" Enter the string:");
		String str = sobj.nextLine();
		
		String newStr = str.replaceAll("\\s+"," "); 	//Regex
		String newStr2 = newStr.trim();
		String arr[] = newStr2.split(" ");
		
		StringBuffer finalstr = new StringBuffer(arr[i]);
		
		for(int i=0;i<arr.length;i++)
		{
			StringBuffer sb = new StringBuffer(arr[i]);
		
		}
		String str = sb.toString();
		System.out.println(str);
	}
}