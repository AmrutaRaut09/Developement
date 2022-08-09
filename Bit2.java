import java.lang.*;
import java.util.*;

class Bit2
{
    public static void main(String arg[])
    {
		System.out.println("Enter Number:");
        Scanner sobj = new Scanner(System.in);
		int iNo = sobj.nextInt();
	
		Bitwise bobj = new Bitwise();
		int iRet = bobj.CheckBit(iNo);
		
		System.out.println("NUmber of bits ON are:"+ iRet);
	
	}
}
class Bitwise
{
	public int CheckBit(int iValue)
	{
		
		int iMask = 0X00000001;		
		int iResult = 0;
		int iCnt = 0;
		for(int i = 1; i<=32; i++)
		{
			iResult = iValue & iMask;
			
			if(iResult == iMask)
			{
				iCnt++;
			}
			iMask = iMask<< 1;
		}
		return iCnt;
		
	}
}
