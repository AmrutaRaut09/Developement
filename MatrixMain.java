import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;

class MatrixMain
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