//Program 319
//Program to check anagram strings

import java.io.*;
import java.util.*;

class String5
{
	public static void main(String arg[]) //throws exception
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println(" Enter First string:");
		String str1 = sobj.nextLine();
		str1 = str1.toLowerCase();
		char arr[] = str1.toCharArray();
		
		System.out.println(" Enter second string:");
		String str2 = sobj.nextLine();
		str2 = str2.toLowerCase();
		char brr[] = str2.toCharArray();
		
		int frequency1[] = new int[26];
		int frequency2[] = new int[26];
		int i =0;
		
		for(i=0;i<arr.length;i++)
		{
			frequency1[arr[i]-'a']++;
			frequency2[brr[i]-'a']++;
		}
		if(str1.length()!=str2.length())
		{
			 System.out.println("Strings are not anagram as lengths are different..");
			 return;
		}
		for(i=0;i<frequency1.length;i++)
		{
			if(frequency1[i] != frequency2[i])
			{
			    System.out.println("Strings are not anagram..");
				return;
			}
		}
		if(i==26)
		{
			System.out.println("Strings are anagram..");
		}
	}
}