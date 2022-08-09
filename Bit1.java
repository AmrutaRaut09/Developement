import java.lang.*;
import java.util.*;

class Bit1
{
    public static void main(String arg[])
    {
		System.out.println("Enter Number:");
        Scanner sobj = new Scanner(System.in);
		long iNo = sobj.nextLong();
		
		System.out.println("Enter Starting Point:");
		int iStart = sobj.nextInt();
		
		System.out.println("Enter Ending Point:");
		int iEnd = sobj.nextInt();
		
		if((iStart<=0)||(iStart>32)||(iEnd>32)||(iEnd<=0))
		{
			System.out.println("Position Invalid..");
		}
		Bitwise bobj = new Bitwise();
		boolean bRet = bobj.CheckBit(iNo, iStart, iEnd);
		
		if(bRet == true)
		{
			System.out.println("bits are ON");
		}
		else
		{
			System.out.println("bits are OFF ");
		}
	
	}
}
class Bitwise
{
	public boolean CheckBit(long iValue ,int iStart, int iEnd)
	{
		
		long iMask = 0;
		
		long iMask1 = 0Xffffffff;
		long iMask2 = 0Xffffffff;
		long iResult = 0;	
		
		iMask1 = iMask1<<(iStart-1);
		iMask2= iMask2<<(32-iEnd);
		
		iMask = iMask1 & iMask2;
	
		iResult = iValue & iMask;
		
		if(iResult == iValue)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}