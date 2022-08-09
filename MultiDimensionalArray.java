import java.lang.*;
import java.util.*;
import java.io.*;

class MultiDimensionalArray
{
    public static void main(String arg[])
    {
			System.out.println("Enter Number of Rows:");
            Scanner sobj = new Scanner(System.in);
			int iRow = sobj.nextInt();
			System.out.println("Enter Number of columns:");
			int iCol = sobj.nextInt();
			int Arr[][] = new int[iRow][iCol];
			
			System.out.println("Enter the data:");
			for(int i=0;i<Arr.length;i++)
			{
				for(int j=0;j<Arr.length;j++)
				{
					Arr[i][j]=sobj.nextInt();
				}
			}
			
			System.out.println("Elements of array are:");
			for(int i=0;i<Arr.length;i++)
			{
				for(int j=0;j<Arr.length;j++)
				{
					System.out.print(Arr[i][j]);
					System.out.println(" ");
				}
				System.out.println(" ");
			}
			
	}
}