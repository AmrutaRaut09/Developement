//Count Even digits in a number
//Input: 22499
//Output 3
#include<stdio.h>

int CountEven(int iNo)
{	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	int iCnt=0;
	int iDigit=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
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
	printf("Enter a number: ");
	scanf("%d",&iValue);
	
	iRet = CountEven(iValue);
	printf("Number of Even Digits are  %d",iRet);
	return 0;
}

//Time Complexity = O(N)