//32	31	30	29	28	27	26	25	24	23	22	21	20	19	18	17	16	15	14	13	12	11	10	9	8	7	6	5	4	3	2	1
//0		0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0   1	0	0	1	0	0	0
//0					0				0				0				0				0					4			8
//0X00000048

import java.lang.*;
import java.util.*;

//0000	0000	0000	0000	0010	0000	0000	0000
//0		0		0		0		2		0		0		0
class Bitwise1
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter Number:");
		int iValue = sobj.nextInt();
	
		Bitwise bobj = new Bitwise();
		boolean bRet = bobj.CheckBit(iValue);
		
		if(bRet== true)
		{
			System.out.println("Bit is ON");
		}
		else
		{
			System.out.println("Bit is OFF");
		}
	}
}

class Bitwise
{
	public boolean CheckBit(int iNo)
	{
		int iMask= 0X00002000;		//8192
		int iResult = 0;
		iResult = iNo & iMask;
		if(iResult == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}