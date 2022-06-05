//Difference between Even digit sum and Odd Digit of a Number
#include<stdio.h>

int CountDiff(int iNo)
{
	int iDigit=0;
	int iDiff=0;
	int iSumEven=0;
	int iSumOdd=0;

	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iSumEven=iSumEven+iDigit;
		}
		else
		{
			iSumOdd=iSumOdd+iDigit;
		}
		iNo=iNo/10;
		iDiff=iSumEven-iSumOdd;
	}
	return iDiff;
}

int main()
{ 	
	int iValue=0;
	int iRet=0;
	printf("Enter a number: ");
	scanf("%d",&iValue);
	
	iRet = CountDiff(iValue);
	printf("%d",iRet);
	return 0;
}

//Time Complexity = O(N)