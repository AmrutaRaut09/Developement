import java.lang.*;
import java.util.*;

class Sorting
{
	public static void main(String a[])
	{
		int iRet=0;
		int iLength=0;
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the Value for Constructor:");
		iLength = sobj.nextInt();
		ArrayX obj = new ArrayX(iLength);
		
		obj.Accept();
		obj.Display();
		
		obj = null;
	}
}

class ArrayX
{
	private int Arr[];
	
	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
	}
	protected void finalize()
	{
		Arr = null;
	}
	
	public void Accept()
	{
		int iCnt=0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the values: ");
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}
	
	public void Display()
	{
		int iCnt=0;
		System.out.println("Values are: ");
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
	
	
}