//Accept the number and Check whether is divisible by 5 or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int iNo)
{
	if((iNo%5)==0)
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
		printf("\n Enter the number:");
		scanf("%d",&iValue);
		
		bRet= Check(iValue);	// Function Call
		if(bRet==TRUE)
		{
			printf("%d is Divisible by 5...",iValue);	
		}
		else
		{
			printf("\n %d is Not Divisible by 5...",iValue);
		}
		return 0;		
	}