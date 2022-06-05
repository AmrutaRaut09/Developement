//Program to Check number even or odd.

//Output
// Enter the number: 21
// Given Number is ODD

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
	if(iNo%2==0)
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
}
int main()
{
	int iValue=0;
	BOOL bRet = FALSE;
	printf("\nEnter Number:");
	scanf("%d",&iValue);
	
	bRet= ChkEven(iValue);
	
	//Display Result
	if(bRet==TRUE)
	{
		printf("\nGiven Number is Even...");
	}
	else
	{
		printf("\n Given Number is Odd...");
	}
	return 0;
}