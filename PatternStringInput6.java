

import java.lang.*;
import java.util.*;
import java.io.*;

/*
Enter Number
87654

8 7 6 5 4
8 7 6 5 4
8 7 6 5 4
8 7 6 5 4
8 7 6 5 4

*/
class PatternStringInput6
{
    public static void main(String arg[])
    {
			System.out.println("Enter Number");
            Scanner sobj = new Scanner(System.in);
			//int no = sobj.nextInt();
			char Arr[] = (Integer.toString(sobj.nextInt())).toCharArray();
					
			for(int i = 0 ; i < Arr.length; i++)
			{
				for(int j =0; j < Arr.length; j++)
				{
				  System.out.print(Arr[j]+ " ");
				}
				System.out.println("");
			}
	}
}
