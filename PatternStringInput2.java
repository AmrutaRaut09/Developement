
import java.lang.*;
import java.util.*;
import java.io.*;
/*

hello
h  h h  h h 
l l l l l
l l l l l
o  o o o o 

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
				  System.out.print(Arr[i]+ " ");
				}
				System.out.println("");
			}
	}
}
