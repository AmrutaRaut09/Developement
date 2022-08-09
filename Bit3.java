import java.lang.*;
import java.util.*;

class Bit2
{
    public static void main(String arg[])
    {
		System.out.println("Enter 1st Number:");
        Scanner sobj = new Scanner(System.in);
		int iNo1 = sobj.nextInt();
	
		System.out.println("Enter 2nd Number:");
		int iNo2 = sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		int iRet = bobj.CheckBit(iNo1,iNo2);
		
		System.out.println("Number of bits ON are:"+ iRet);
	}
}
class Bitwise
{
	public int CheckBit(int iValue1,int iValue2)
	{
		int iMask = 0X00000001;		
		int iResult1 = 0;
		int iResult2 = 0;
		
		int iCnt = 0;
		for(int i = 1; i<=32; i++)
		{
			iResult1 = iValue1 & iMask;
			iResult2 = iValue2 & iMask;
			
			if((iResult1 == iMask) && (iResult2 == iMask))
			{
				iCnt++;
			}
			iMask = iMask<< 1;
		}
		return iCnt;
	}
}
