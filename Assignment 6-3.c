//Program to check number of 2 in it
// input: 426522
//output: 3
#include<stdio.h>
int CountTwo(int iNo)
{
	int iCnt=0;
	int iDigit=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==2)
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
	printf("Enter a number to check freq of 2 in it: ");
	scanf("%d",&iValue);
	
	iRet = CountTwo(iValue);
	printf("%d",iRet);
	return 0;
}

//Time Complexity = O(N)