//Program Multiplication of digits of a number
//Input: 2395
//output: 270
#include<stdio.h>
int MultDigit(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	int iMult=1;
	int iDigit=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			iDigit=1;
		}
		iMult=iDigit*iMult;
		iNo=iNo/10;
	}
	return iMult;
}

int main()
{ 	
	int iValue=0;
	int iRet=0;
	printf("Enter a Number");
	scanf("%d",&iValue);
	
	iRet = MultDigit(iValue);
	printf("%d",iRet);
	return 0;
}
//Time Complexity = O(N)
