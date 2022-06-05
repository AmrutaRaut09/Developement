//Program to check number of 4 in it
// input: 46544
//output: 3
#include<stdio.h>

int CountFour(int iNo)
{
	int iCnt=0;
	int iDigit=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==4)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}

int main()
{ 	
	int iValue=0;
	int iRet=0;
	printf("Enter a number to check freq of 4 in it: ");
	scanf("%d",&iValue);
	
	iRet = CountFour(iValue);
	printf("%d",iRet);
	return 0;
}
//Time Complexity = O(N)
