//Program 320
//Program to anagram usiing Arrays

import java.io.*;
import java.util.*;

class String6
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println(" Enter First string:");
		String str1 = sobj.nextLine();
		char arr[] = (str1.toLowerCase(),str1.toCharArray());
		
		System.out.println(" Enter second string:");
		String str2 = sobj.nextLine();
		char brr[] = (str2.toLowerCase(),str2.toCharArray());
		
		Arrays.sort(arr);
		Arrays.sort(brr);
		
		if(Arrays.equals(arr, brr))
		{
			System.out.println("Strings are anagram");
		}
		else
		{
			System.out.println("Strings are not anagram");
		}
	}
}