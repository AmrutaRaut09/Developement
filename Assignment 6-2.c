// Program to Check zero in it or not
//input: 210098
// output: Number contains zero in it
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckZero(int iNo)
{
	BOOL bRet=FALSE;
	int iDigit=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			bRet=TRUE;
		}
		iNo=iNo/10;
	}
	return bRet;
}

int main()
{ 	
	BOOL bRet=FALSE;
	int iValue=0;
	printf("Enter a number to check zero in it\t:");
	scanf("%d",&iValue);
	
	bRet = CheckZero(iValue);
	if(bRet==TRUE)
	{
		printf("\nNumber Contains Zero in it");
	}
	
	else
	{
			printf("\nNo zero in given number..");
	}	
	return 0;
}
//Time Complexity = O(N)