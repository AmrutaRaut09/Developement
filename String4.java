//Program 306
//Program to count lettrs count

import java.io.*;
import java.util.*;

class String4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println(" Enter the string:");
		String str = sobj.nextLine();
		str = str.toLowerCase();
		
		char arr[] = str.toCharArray();
		int frequency[] = new int[26];
		int i =0;
		for(i=0;i<arr.length;i++)
		{
			frequency[arr[i]-'a']++;
			
		}
		for(i=0;i<frequency.length;i++)
		{
			if(frequency[i]>0)
			{
			    System.out.println(((char)(i+'a'))+" Occures "+frequency[i]+ " Times");
			}
		}
		//System.out.println();
	}
}