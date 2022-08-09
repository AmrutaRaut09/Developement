
import java.lang.*;
import java.util.*;
import java.io.*;

class SwapArrayRowsOOP2
{
    public static void main(String arg[])
    {
			System.out.println("Enter Number of Rows:");
            Scanner sobj = new Scanner(System.in);
			int iRow = sobj.nextInt();
			
			System.out.println("Enter Number of columns:");
			int iCol = sobj.nextInt();
			
			Matrix mobj = new Matrix(iRow,iCol);
			mobj.Accept();
			mobj.Display();			
			mobj.SwapRow();		
			mobj.Display();		
	}
}

class Matrix
{
	public int iRow;
	public int iCol;
	public int Arr[][];
	public Matrix(int a, int b)
	{
		this.iRow = a;
		this.iCol = b;
		Arr = new int[iRow][iCol];
	}
	
	public void Accept()
	{
		 Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the data:");
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr.length;j++)
			{
				Arr[i][j]=sobj.nextInt();
			}
		}
	}
	public void Display()
	{
		    System.out.println("Elements of array are:");
			for(int i=0;i<Arr.length;i++)
			{
				for(int j=0;j<Arr.length;j++)
				{
					System.out.print(Arr[i][j]);
					System.out.print(" ");
				}
				System.out.println(" ");
			}
	}
	public void SwapRow()
	{
		int iTemp=0;
		for(int i = 0;i < iRow; i+=2)
		{
			for(int j=0;j < iCol;j++)
			{
				iTemp = Arr[i][j];
				Arr[i][j] = Arr[i+1][j];
				Arr[i+1][j] = iTemp;
			}
		}
	}
}