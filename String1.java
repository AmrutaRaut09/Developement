//Program 306
//Program to saperate words from string in array

import java.io.*;
import java.util.*;

class String1
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
	}
}