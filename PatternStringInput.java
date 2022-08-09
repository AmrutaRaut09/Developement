
import java.lang.*;
import java.util.*;
import java.io.*;
/*

hello
h  e  l  l  o
h  e  l  l  o
h  e  l  l  o
h  e  l  l  o
h  e  l  l  o
*/
class PatternStringInput
{
    public static void main(String arg[])
    {
			System.out.println("Enter String");
            Scanner sobj = new Scanner(System.in);
			String str = sobj.nextLine();
			
			char Arr[] = str.toCharArray();
			
			for(int i =0 ; i<Arr.length;i++)
			{
				for(int j =0 ; j <Arr.length; j++)
				{
				  System.out.print(Arr[j]+ " ");
				}
				System.out.println("");
			}
	}
}
