//Searching AlgorithmConstraints
//Linear Search

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
		Searching  aobj = new Searching(iLength);
		
		aobj.Accept();
		aobj.Display();
		System.out.println("Enter The Element that you want to search: ");
		int iValue = sobj.nextInt();
		//iRet = aobj.LinearSearch(iValue);
		iRet = aobj.BiDirectionalSearch(iValue);
		
		if(iRet == -1)
		{
			System.out.println("There is no such elements..");			
		}
		else
		{
			System.out.println("Index of Element is: "+iRet);			
		}
		aobj = null;
	}
}

class ArrayX
{
	public int Arr[];
	
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

//Class searching uses all properties of Base class
class Searching extends ArrayX
{
	public Searching(int iSize)
	{
		super(iSize);
	}
	public int BiDirectionalSearch(int iNo)
	{
		int iStart =0;
		int iEnd = Arr.length-1;
		int iPos = -1;
		try
		{
			while(iStart <= iEnd)
			{
				if(Arr[iStart] == iNo)
				{
					iPos = iStart;
					break;
				}
				if(Arr[iEnd] == iNo)
				{
					iPos = iEnd;
					break;
				}
				iStart++;
				iEnd--;
			}
		}
		catch(ArrayIndexOutOfBoundsException eobj)
		{}
		return iPos;
	}
	
	public int LinearSearch(int iNo)
	{
		int i = 0;
		for(i = 0; i<Arr.length; i++)
		{
			
			if(Arr[i]==iNo)
			{
				break;
			}
		}
		if(i == Arr.length)
		{
			return -1;
		}
		else
		{
			return i;
		}
	}
}
