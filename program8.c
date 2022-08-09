// Check weather number is perfect or not...

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL SumFactors(int iNo)
{
	int iCnt=0;
	int iSum=0;
	
	for(iCnt=(iNo/2); iCnt>=1&&(iSum<=iNo) ;iCnt--)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;			
		}
	}
	
	if(iSum==iNo)
	{
		return TRUE;
	}
	return iSum;
}

int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter num:\n");
	scanf("%d",&iValue);
	BOOL SumFactors();
	bRet= SumFactors(iValue);
	printf("Addition of Factors of is:%d", bRet);
	
	if(bRet==1)
	{
		printf("\n%d Number is Perfect number",iValue);
	}
	else 
	{
		printf("\n%d Number is Not Perfect number",iValue);
	}
	return 0;
	
}