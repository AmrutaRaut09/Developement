import java.lang.*;
import java.util.*;
import java.io.*;
//import
class MatrixMax
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
	}
}

class MyMatrix2 extends Matrix
{
	public MyMatrix2(int a, int b)
	{
		super(a,b);
	}
	
	public int Maximum()
	{
		int iMax = Arr[0][0];
		for(int i=0; i<Arr.length;i++)
		{
			for(int j =0;j<Arr.length;j++)
			{
				if(Arr[i][j]>iMax)
				{
					iMax = Arr[i][j];
				}
			}
		}
		return iMax;
	}
}
