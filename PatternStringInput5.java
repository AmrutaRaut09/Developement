

import java.lang.*;
import java.util.*;
import java.io.*;
/*
Enter String
hello
h
h e
h e l
h e l l
h e l l o
h e l l
h e l
h e
h

*/
class PatternStringInput5
{
    public static void main(String arg[])
    {
			System.out.println("Enter String");
            Scanner sobj = new Scanner(System.in);
			String str = sobj.nextLine();
			
			char Arr[] = str.toCharArray();
			
			for(int i = 0 ; i<Arr.length;i++)
			{
				for(int j =0 ; j <= i; j++)
				{
				  System.out.print(Arr[j]+ " ");
				}
				System.out.println("");
			}
			for(int i = Arr.length-1; i >= 0; i--)
			{
				for(int j =0 ; j <i; j++)
				{
				  System.out.print(Arr[j]+ " ");
				}
				System.out.println("");
			}
	}
}
