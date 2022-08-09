

import java.lang.*;
import java.util.*;
import java.io.*;

/*
Enter Number

*/
class PatternStringInput6
{
    public static void main(String arg[])
    {
			System.out.println("Enter Number");
            Scanner sobj = new Scanner(System.in);
			int no = sobj.nextInt();
			int temp=0;
			int iSum = 0;
	while(true)
	{
			while(no>0)
			{
				temp = no%10;
				iSum = iSum + temp;
				no = no/10;
			}
			System.out.println(iSum);
			
			no iSum;
			iSum =0;
			
			if(no >10)
			{
				break;
			}
			System.out.println(no);
	}
	
	}
}
