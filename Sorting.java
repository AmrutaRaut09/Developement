//Sorting Algorithm Implementation
//BubbleSort Increasing Order.
//program 379

import java.lang.*;
import java.util.*;

class Sorting
{
	public static void main(String arg[])
	{
		int iRet = 0;
		int iLength = 0;
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the Value for Constructor:");
		iLength = sobj.nextInt();
		Array aobj = new Array(iLength);
		aobj.Accept();
		aobj.Display();
		aobj.BubbleSort('I');
		System.out.println("Data After sorting: ");
		aobj.Display();
	}
}

interface MarvellousSort
{
	public void Accept();
	public void Display();
	public void BubbleSort();
	public void InsertionSort();
	public void SelectionSort();
}
//Class searching uses all properties of Base class
class Array implements MarvellousSort
{
	public int Arr[];
	public Array(int iSize)
	{
		Arr = new int[iSize];
	}
	
	public void BubbleSort(char)
	{
		int i =0, j=0, temp=0;
		boolean bSwap = false;
		try
		{
		
			for(i = 0; i < Arr.length; i++)
			{
				System.out.println("Pass (i) "+i);		
				for(j=0; j < ((Arr.length-i)-1); j++)	// -i is for minus the done passes
				{
					System.out.print("j "+j);		
					if(Arr[j] > Arr[j+1])
					{
						temp = Arr[j];
						Arr[j] = Arr[j+1];
						Arr[j+1] = temp;
						bSwap = true;
					}
				}
				//jar swap zal nahi tr break the loop
				if(bSwap == false)
				{
					break;	
				}
				System.out.println(" Inner Loop (j) "+j);		
				Display();
			}
		}
		catch(ArrayIndexOutOfBoundsException e){}
	}
	public void InsertionSort()
	{
		
	}
	public void SelectionSort()
	{
		
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
			System.out.print(Arr[iCnt]+" ");
		}
	}
}
