//32	31	30	29	28	27	26	25	24	23	22	21	20	19	18	17	16	15	14	13	12	11	10	9	8	7	6	5	4	3	2	1
//0		0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0   1	0	0	1	0	0	0
//0					0				0				0				0				0					4			8
//0X00000048
import java.lang.*;
import java.util.*;

//0000	0000	0000	0000	0010	0000	0000	0000
//0		0		0		0		2		0		0		0
class Bitwise2
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter Number:");
		int iValue = sobj.nextInt();
	
		Bitwise bobj = new Bitwise();
		int iRet = bobj.onBit(iValue);
		
		System.out.println("Updated number is:"+iRet);
	}
}

class Bitwise
{
	public int onBit(int iNo)
	{
		//int iResult=0;
		int iMask= 0X00000008;
		int iResult =0;
		iResult = iNo | iMask;
		return iResult;
	}
}