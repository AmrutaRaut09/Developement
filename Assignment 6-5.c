//Count Frequency of number which are less than 6
#include<stdio.h>

int Count(int iNo)
{
	int iCnt=0;
	int iDigit=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit<6)
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
	
	iRet = Count(iValue);
	printf("%d",iRet);
	return 0;
}

//Time Complexity = O(N)