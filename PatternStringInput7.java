

import java.lang.*;
import java.util.*;
import java.io.*;

/*
Enter Number
234567
2 3 4 5 6 7
2 3 4 5 6
2 3 4 5
2 3 4
2 3
2
*/
class PatternStringInput6
{
    public static void main(String arg[])
    {
			System.out.println("Enter Number");
            Scanner sobj = new Scanner(System.in);
			int no = sobj.nextInt();
			char Arr[] = (Integer.toString(no)).toCharArray();
					
			for(int i = Arr.length-1 ; i >= 0; i--)
			{
				for(int j =0; j <=i; j++)
				{
				  System.out.print(Arr[j]+ " ");
				}
				System.out.println("");
			}
	}
}
