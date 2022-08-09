//32	31	30	29	28	27	26	25	24	23	22	21	20	19	18	17	16	15	14	13	12	11	10	9	8	7	6	5	4	3	2	1
//0		0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0   0	0	1	0	0	0	0
//0					0				0				0				0				0							1	0
//Hex conversion : 0X00000048

import java.lang.*;
import java.util.*;

//0000	0000	0000	0000	0000	0000	0100	1000
//0		0		0		0		0		0		4		8
class Bitwise4
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number:");
		int iValue = sobj.nextInt();
		
		System.out.println("Enter Position:");
		int iPos = sobj.nextInt();
		
		toggleBit bobj = new toggleBit();
		int iRet = bobj.Toggle(iValue,iPos);
		
		System.out.println("Updated number is:"+iRet);
	}
}

class toggleBit
{
	public int Toggle(int iNo,int iPos)
	{
		int iMask = 0X00000001;
		if((iPos<=0)||(iPos>32))
		{
			return 0;
		}
		iMask = iMask<<(iPos-1);
		int iResult =0;
		iResult = iNo ^ iMask;
		
		return iResult;
	}
}