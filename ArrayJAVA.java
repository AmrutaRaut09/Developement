import java.lang.*;
import java.util.*;


class ArrayJava
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
		
		iRet= obj.Sumation();
		System.out.println("Sum of elements: "+iRet);
		
		obj = null;
	}
}

class ArrayX
{
	private int Arr[];
	
	public ArrayX(int iNo)
	{
		Arr = new int[iNo];
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
	
	public int Sumation()
	{
		int iCnt=0, iSum=0;
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
		iSum= iSum+Arr[iCnt];
		}
		return iSum;
	}
	
}