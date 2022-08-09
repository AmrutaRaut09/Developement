
/*//Program to print given Pattern 
input  Row=4
Col = 4

	*	*	*	*
	*	*	*	*
	*	*	*	*
	*	*	*	*

*/
import java.lang.*;
import java.util.*;

class Patternjava
{
	public static void main(String a[])
	{
		pattern pobj=new pattern(4,4);
		pobj.DisplayPattern();
	}	
}

class pattern
{
	private int iRow,iCol;
		
	public void DisplayPattern()
	{
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				System.out.print("* \t");
			}
			System.out.println();
		}
	}
}








